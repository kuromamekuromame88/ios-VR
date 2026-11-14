#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2, T3, T4*, T5*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4* p4, T5* p5)
	{
		R ret;
		void* params[5] = { p1, &p2, &p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF;
struct Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6;
struct Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A;
struct Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899;
struct Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87;
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
struct HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_tFDC4298DA35AAFF47D462866ACBB6D8328890ECC;
struct IEnumerable_1_t46F3B5E3A267684D65A117AEA1C7A010A75366F6;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tFABD3B897F1296469E9A2DB9BCF6C89439049208;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct KeyCollection_t68B0C00CEFA0E3B52D5957009B7760125E0505CC;
struct KeyCollection_tB7BC87667C78593ECB7349D950AA35F0C07A5951;
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A;
struct List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68;
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075;
struct SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0;
struct SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32;
struct SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946;
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B;
struct SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310;
struct SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98;
struct ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7;
struct ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312;
struct ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9;
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A;
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA;
struct EntryU5BU5D_t0671D416A224BBB0025A7B5FF38F8C55BFA5FFDF;
struct EntryU5BU5D_t4825D8B6926355B02E574ECB2C34A0855C2F0756;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01;
struct SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1;
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137;
struct Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A;
struct Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6;
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C;
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A;
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B;
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC;
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1;
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3;
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6;
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8;
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6;
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B;
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8;
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D;
struct InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73;
struct InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B31AB38360ECF9683ADAB607974B916C9663192;
IL2CPP_EXTERN_C String_t* _stringLiteral0DB46164953228904843938099AF66650313FEE5;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963;
IL2CPP_EXTERN_C String_t* _stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral575B4BE92F0D75E69C018C6AA4FBC530DDD4B595;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D;
IL2CPP_EXTERN_C String_t* _stringLiteral920B6B05D1EF9E61AEC546EDC66550B870075C4B;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral96DF4500E5408A7ED26D010DF5824289A767048E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8;
IL2CPP_EXTERN_C String_t* _stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA;
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5;
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57;
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0;
struct NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2;
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06;
struct SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1;
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137;
struct Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A;
struct Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6;
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C;
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A;
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B;
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC;
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1;
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3;
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6;
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8;
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6;
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB  : public RuntimeObject
{
};
struct U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3  : public RuntimeObject
{
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t0671D416A224BBB0025A7B5FF38F8C55BFA5FFDF* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t68B0C00CEFA0E3B52D5957009B7760125E0505CC* ____keys;
	ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7* ____values;
	RuntimeObject* ____syncRoot;
};
struct Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4825D8B6926355B02E574ECB2C34A0855C2F0756* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB7BC87667C78593ECB7349D950AA35F0C07A5951* ____keys;
	ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* ____values;
	RuntimeObject* ____syncRoot;
};
struct EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67  : public RuntimeObject
{
};
struct EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8  : public RuntimeObject
{
};
struct EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762  : public RuntimeObject
{
};
struct EmptyArray_1_tC51B5E29F025A6278666985527566B350371217C  : public RuntimeObject
{
};
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867  : public RuntimeObject
{
};
struct EmptyArray_1_t38104844ACB1F00F66AB952D68C54320EF98254F  : public RuntimeObject
{
};
struct EmptyArray_1_t8918E90EE298C7A5BF7A13F4E945F3E26C567CE3  : public RuntimeObject
{
};
struct EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727  : public RuntimeObject
{
};
struct EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1  : public RuntimeObject
{
};
struct EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275  : public RuntimeObject
{
};
struct EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E  : public RuntimeObject
{
};
struct EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57  : public RuntimeObject
{
};
struct EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D  : public RuntimeObject
{
};
struct EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076  : public RuntimeObject
{
};
struct EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF  : public RuntimeObject
{
};
struct EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6  : public RuntimeObject
{
};
struct EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068  : public RuntimeObject
{
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t8B8EE191EEC1575F1F0CAC91A208DBFDF2821D01* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68  : public RuntimeObject
{
	SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C  : public RuntimeObject
{
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* ___keyList;
	ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0  : public RuntimeObject
{
	Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* ___m_Subsystems;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_InitDelegates;
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_CleanupDelegates;
};
struct SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32  : public RuntimeObject
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ___m_Subsystems;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_InitDelegates;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_CleanupDelegates;
};
struct SpanDebugView_1_t6B249F4737457563D0548242B2E940C385BF66E5  : public RuntimeObject
{
};
struct SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CInitDelegateU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CCleanupDelegateU3Ek__BackingField;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CDependenciesU3Ek__BackingField;
};
struct SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98 : public RuntimeObject {};
struct ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7  : public RuntimeObject
{
	Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* ____dictionary;
};
struct ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312  : public RuntimeObject
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ____dictionary;
};
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E 
{
	Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* ____currentValue;
};
struct Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 
{
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ____currentValue;
};
struct Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E 
{
	Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* ____dictionary;
	int32_t ____index;
	int32_t ____version;
	Il2CppSharedGenericObject* ____currentValue;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078;
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;
struct HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 
{
	int32_t ___hash;
	int32_t ___lastFrameUsed;
	Il2CppSharedGenericObject* ___compiledGraph;
};
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;
struct Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 
{
	int16_t ___a;
	int16_t ___b;
	int16_t ___c;
};
struct Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 
{
	int32_t ___a;
	int32_t ___b;
	int32_t ___c;
};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E 
{
	Il2CppSharedGenericObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 
{
	intptr_t ____value;
};
struct ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A 
{
	intptr_t ____value;
};
struct ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 
{
	intptr_t ____value;
};
struct ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 
{
	intptr_t ____value;
};
struct ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F 
{
	intptr_t ____value;
};
struct ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 
{
	intptr_t ____value;
};
struct ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B 
{
	intptr_t ____value;
};
struct ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F 
{
	intptr_t ____value;
};
struct ByReference_1_tC71D682DBC538763066DF671429413D25394012A 
{
	intptr_t ____value;
};
struct ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D 
{
	intptr_t ____value;
};
struct ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD 
{
	intptr_t ____value;
};
struct ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 
{
	intptr_t ____value;
};
struct ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E 
{
	intptr_t ____value;
};
struct ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA 
{
	intptr_t ____value;
};
struct ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 
{
	intptr_t ____value;
};
struct ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 
{
	intptr_t ____value;
};
struct ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 
{
	intptr_t ____value;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD 
{
	AABB_tE57BAC64D9F8465BBFCC4A9C66AF4E884166982A* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D 
{
	uint8_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 
{
	EmbeddedLODBuffer_t6D75CECAC228D0710132158E77ACB46D0C43027B* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 
{
	int16_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 
{
	int32_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF 
{
	InternalLODGroupSettings_t9F08C56422FEBE035004C6D96DE664DB1961F38D* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 
{
	InternalMeshLodRendererSettings_t2B499712F80597BFB45A4813CC139D1BEEDEBB73* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 
{
	InternalMeshRendererSettings_tFA0423524032AD2C34E24C53548BE032F67FC6AF* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A 
{
	RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
#pragma pack(push, tp, 1)
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
	};
};
#pragma pack(pop, tp)
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SelectorAccelerationTableType_t29E86C4FCF992B838F757327FF6002927A251B9A 
{
	int32_t ___value__;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct FixedList32Bytes_1_t02D797FE0EF11E83016BA95DD7B282490C8A472E 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 
{
	int32_t ___type;
	int32_t ___uniqueStringId;
};
struct Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 ____pointer;
	int32_t ____length;
};
struct Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A ____pointer;
	int32_t ____length;
};
struct Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 ____pointer;
	int32_t ____length;
};
struct Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 ____pointer;
	int32_t ____length;
};
struct Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F ____pointer;
	int32_t ____length;
};
struct Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 ____pointer;
	int32_t ____length;
};
struct Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B ____pointer;
	int32_t ____length;
};
struct Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F ____pointer;
	int32_t ____length;
};
struct Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A ____pointer;
	int32_t ____length;
};
struct Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D ____pointer;
	int32_t ____length;
};
struct Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD ____pointer;
	int32_t ____length;
};
struct Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 ____pointer;
	int32_t ____length;
};
struct Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E ____pointer;
	int32_t ____length;
};
struct Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA ____pointer;
	int32_t ____length;
};
struct Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 ____pointer;
	int32_t ____length;
};
struct Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 ____pointer;
	int32_t ____length;
};
struct Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 ____pointer;
	int32_t ____length;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
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
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 
{
	FixedList32Bytes_1_t02D797FE0EF11E83016BA95DD7B282490C8A472E ___m_FixedArray;
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B ___m_List;
	int32_t ___m_Length;
	bool ___m_Created;
	bool ___m_IsEmbedded;
};
struct Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6  : public MulticastDelegate_t
{
};
struct Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A  : public MulticastDelegate_t
{
};
struct Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899  : public MulticastDelegate_t
{
};
struct Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1  : public MulticastDelegate_t
{
};
struct SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946  : public MulticastDelegate_t
{
};
struct SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields
{
	U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB* ___U3CU3E9;
	Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* ___U3CU3E9__10_0;
	Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* ___U3CU3E9__10_1;
	Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* ___U3CU3E9__10_2;
	Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* ___U3CU3E9__10_3;
};
struct U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields
{
	U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* ___U3CU3E9;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* ___U3CU3E9__10_0;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* ___U3CU3E9__10_1;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* ___U3CU3E9__10_2;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* ___U3CU3E9__10_3;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67_StaticFields
{
	EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___Value;
};
struct EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8_StaticFields
{
	HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___Value;
};
struct EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762_StaticFields
{
	NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___Value;
};
struct EmptyArray_1_tC51B5E29F025A6278666985527566B350371217C_StaticFields
{
	NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___Value;
};
struct EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields
{
	SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___Value;
};
struct EmptyArray_1_t38104844ACB1F00F66AB952D68C54320EF98254F_StaticFields
{
	Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___Value;
};
struct EmptyArray_1_t8918E90EE298C7A5BF7A13F4E945F3E26C567CE3_StaticFields
{
	Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___Value;
};
struct EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727_StaticFields
{
	UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___Value;
};
struct EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1_StaticFields
{
	UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___Value;
};
struct EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275_StaticFields
{
	UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___Value;
};
struct EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E_StaticFields
{
	UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___Value;
};
struct EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57_StaticFields
{
	UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___Value;
};
struct EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D_StaticFields
{
	UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___Value;
};
struct EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076_StaticFields
{
	UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___Value;
};
struct EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF_StaticFields
{
	UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___Value;
};
struct EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6_StaticFields
{
	UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___Value;
};
struct EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068_StaticFields
{
	UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___Value;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68_StaticFields
{
	SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* ___s_emptyArray;
};
struct List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C_StaticFields
{
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
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
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
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
struct KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57  : public RuntimeArray
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
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1  : public RuntimeArray
{
	ALIGN_FIELD (8) SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* m_Items[1];

	inline SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137  : public RuntimeArray
{
	ALIGN_FIELD (8) SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* m_Items[1];

	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA  : public RuntimeArray
{
	ALIGN_FIELD (8) EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 m_Items[1];

	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 value)
	{
		m_Items[index] = value;
	}
};
struct HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5  : public RuntimeArray
{
	ALIGN_FIELD (8) HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 m_Items[1];

	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___compiledGraph), (void*)NULL);
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___compiledGraph), (void*)NULL);
	}
};
struct NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 m_Items[1];

	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C m_Items[1];

	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C value)
	{
		m_Items[index] = value;
	}
};
struct SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06  : public RuntimeArray
{
	ALIGN_FIELD (8) SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 m_Items[1];

	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 value)
	{
		m_Items[index] = value;
	}
};
struct Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 m_Items[1];

	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 value)
	{
		m_Items[index] = value;
	}
};
struct Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6  : public RuntimeArray
{
	ALIGN_FIELD (8) Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 m_Items[1];

	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD m_Items[1];

	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D m_Items[1];

	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 m_Items[1];

	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B m_Items[1];

	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 m_Items[1];

	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 m_Items[1];

	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF m_Items[1];

	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 m_Items[1];

	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 m_Items[1];

	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 value)
	{
		m_Items[index] = value;
	}
};
struct UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A m_Items[1];

	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_fshared (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m2719AC789D5D25B4A08674C479D2F2FA27319C77_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemEntry__ctor_m47A14ECA32ECA5A135A3ADE56F31B3A8161C5294_gshared (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, String_t* ___0_name, Il2CppSharedGenericObject* ___1_initDelegate, Il2CppSharedGenericObject* ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_SortAndFreeze_mD7B99062B7EA5C3664AEF4432AE9D378B1134396_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* SortedSubsystemGroup_2_TopologicalSort_mBC0F7988635D7814DEE505B295165592FEF39F59_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m1826B059AE05490949E13D5D65BAEF9B786B8882_gshared (Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisIl2CppSharedGenericObject_m60EAC1A330E00B2D7E6FD4AECBF783294EC34DF6_gshared (RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m9A091D2D3A9BB86C16A9FD560B3EC145822CDF1F_gshared (Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m6CD2C2EDE3A38CC4BF7342026F66B9A0E3D5A54A_gshared (RuntimeObject* ___0_source, Func_2_tBE6BE5A4E4F7FED7B1EE3446A907877305B72A87* ___1_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_AsEnumerable_TisIl2CppFullySharedGenericAny_mCB78EE458634DA25C985C42E25FE6ED446B3FD52_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Reverse_TisIl2CppSharedGenericObject_mD3087AD5FEACECF5FDFD23C09A30D62701FFCEEB_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* Dictionary_2_get_Values_m8E3BE68654ED4904A823A5EC8071AAABB4FAFEF9_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E ValueCollection_GetEnumerator_m516DD89FFFE3A9ED28CF68A395A1B801E38F35D1_gshared (ValueCollection_tCB5F9A2AD458F6739B3FAB98D32DEE8132392AB9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m42FA63124FB74C78F0F39BF96BFE8075651047C9_gshared_inline (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_Visit_m8E7C8B0FEAACE90E494E386FF24C3CFCE8186186_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m98FA9131B497E701601CDA065CC01721E11C40E8_gshared (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* List_1_ToArray_m90E6D9E57256EC0FB6B36FDC40F65B0F59D7B671_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_gshared_inline (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SubsystemEntry_get_Dependencies_mA2E8CDBD0C798B672CF3DC1B6CED4D75312C0CBF_gshared_inline (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, Il2CppSharedGenericObject* ___0_key, Il2CppSharedGenericObject** ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared (HashSet_1_tBCF0302A9E9E74ECC464F4B0C6A09F22E5114AFD* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9 (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___0_destination, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* Array_Empty_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_m3EDEED36320352D697788722957A3FCC32B74117_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m50844A32AD4AEDCC0396DEE94E2502155012D74D_inline (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80 (Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___0_destination, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* Array_Empty_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m24487CD12F55B7FCBB5515F505441ECA91E850FC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2C7A5F5E1E584A05CB6BE01B61F014B3D86795CC_inline (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D (Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___0_destination, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* Array_Empty_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m748F1A71A7DD69BB388C8731921DA551609F490F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mEC6ABC58D9B0430009F2CA47F6400C1339B85A32_inline (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, RuntimeObject* ___2_p2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline void KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E_fshared)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, ___0_key, ___1_value, method);
}
inline void Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, int32_t ___1_getEnumeratorRetType, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F_fshared)(__this, ___0_sortedList, ___1_getEnumeratorRetType, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool SortedSubsystemGroup_2_get_Frozen_m87AC0FD4217CFF844405AF69346FFA099946FDEF (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0*, const RuntimeMethod*))SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsKey_m2702D69F87CB6AB176CE2649D246A3AFCE96A010 (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m2719AC789D5D25B4A08674C479D2F2FA27319C77_gshared)(__this, ___0_key, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline void SubsystemEntry__ctor_m47A14ECA32ECA5A135A3ADE56F31B3A8161C5294 (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, String_t* ___0_name, Il2CppSharedGenericObject* ___1_initDelegate, Il2CppSharedGenericObject* ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method)
{
	((  void (*) (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310*, String_t*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))SubsystemEntry__ctor_m47A14ECA32ECA5A135A3ADE56F31B3A8161C5294_gshared)(__this, ___0_name, ___1_initDelegate, ___2_cleanupDelegate, ___3_dependencies, method);
}
inline void Dictionary_2_Add_m5E4709486DCCFA728839053B99E62EF25F9C3D3A (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* __this, String_t* ___0_key, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF*, String_t*, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310*, const RuntimeMethod*))Dictionary_2_Add_mDDF7CC745D9961EF9023ED94EE3EE84CFDCCFEC1_gshared)(__this, ___0_key, ___1_value, method);
}
inline void SortedSubsystemGroup_2_SortAndFreeze_mD7B99062B7EA5C3664AEF4432AE9D378B1134396 (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method)
{
	((  void (*) (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0*, const RuntimeMethod*))SortedSubsystemGroup_2_SortAndFreeze_mD7B99062B7EA5C3664AEF4432AE9D378B1134396_gshared)(__this, method);
}
inline SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* SortedSubsystemGroup_2_TopologicalSort_mBC0F7988635D7814DEE505B295165592FEF39F59 (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method)
{
	return ((  SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* (*) (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0*, const RuntimeMethod*))SortedSubsystemGroup_2_TopologicalSort_mBC0F7988635D7814DEE505B295165592FEF39F59_gshared)(__this, method);
}
inline void Func_2__ctor_mC86EE5EA9700614B4BA41567A6A4D0D911CAF02C (Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m1826B059AE05490949E13D5D65BAEF9B786B8882_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Where_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_mE3AD032A9970E79B18F40BAC7BEB563E09F8C7CD (RuntimeObject* ___0_source, Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6*, const RuntimeMethod*))Enumerable_Where_TisIl2CppSharedGenericObject_m60EAC1A330E00B2D7E6FD4AECBF783294EC34DF6_gshared)(___0_source, ___1_predicate, method);
}
inline void Func_2__ctor_m35456F36DF9D20BE23709E63688A1EEFED60FAB8 (Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m9A091D2D3A9BB86C16A9FD560B3EC145822CDF1F_gshared)(__this, ___0_object, ___1_method, method);
}
inline RuntimeObject* Enumerable_Select_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_TisIl2CppSharedGenericObject_mE66F9910BB6B5FF93485CDAB17F4630E32F19CDA (RuntimeObject* ___0_source, Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A*, const RuntimeMethod*))Enumerable_Select_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m6CD2C2EDE3A38CC4BF7342026F66B9A0E3D5A54A_gshared)(___0_source, ___1_selector, method);
}
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5_gshared)(___0_source, method);
}
inline RuntimeObject* Enumerable_AsEnumerable_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_m5A86BEBFA0308C97CC0A7C34020D5C0BDBDAD4EF (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_AsEnumerable_TisIl2CppFullySharedGenericAny_mCB78EE458634DA25C985C42E25FE6ED446B3FD52_fshared)(___0_source, method);
}
inline RuntimeObject* Enumerable_Reverse_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_mD4DB3C9980A4C5FBB16C4C5B523B0F7B0FEBDB4E (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Reverse_TisIl2CppSharedGenericObject_mD3087AD5FEACECF5FDFD23C09A30D62701FFCEEB_gshared)(___0_source, method);
}
inline void HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))HashSet_1__ctor_m0823862A6DDE661D7383395095FB6E793F8C2162_gshared)(__this, method);
}
inline void List_1__ctor_mFDEED055C6B099D339ED1FA919C238649517ACF0 (List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68*, const RuntimeMethod*))List_1__ctor_m7378BA5FBCA1E88080985FB810820B3F47DAD54C_gshared)(__this, method);
}
inline ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7* Dictionary_2_get_Values_mA9D529998C232E6EE5347BE06DD768C44D6CF61B (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7* (*) (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF*, const RuntimeMethod*))Dictionary_2_get_Values_m8E3BE68654ED4904A823A5EC8071AAABB4FAFEF9_gshared)(__this, method);
}
inline Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E ValueCollection_GetEnumerator_mF48B0FD41F458B26875BAF8B0B32B1095C564395 (ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E (*) (ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7*, const RuntimeMethod*))ValueCollection_GetEnumerator_m516DD89FFFE3A9ED28CF68A395A1B801E38F35D1_gshared)(__this, method);
}
inline void Enumerator_Dispose_mF9DEEC1E7EB4C6EAA5155A4AFA79D3065593AA51 (Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared)(__this, method);
}
inline SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* Enumerator_get_Current_mEB621AC11BD72AD9CD68296BA099D020EE079626_inline (Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E* __this, const RuntimeMethod* method)
{
	return ((  SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* (*) (Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E*, const RuntimeMethod*))Enumerator_get_Current_m42FA63124FB74C78F0F39BF96BFE8075651047C9_gshared_inline)(__this, method);
}
inline void SortedSubsystemGroup_2_Visit_m8E7C8B0FEAACE90E494E386FF24C3CFCE8186186 (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method)
{
	((  void (*) (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0*, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))SortedSubsystemGroup_2_Visit_m8E7C8B0FEAACE90E494E386FF24C3CFCE8186186_gshared)(__this, ___0_subsystem, ___1_visited, ___2_sorted, ___3_pendingDependencies, method);
}
inline bool Enumerator_MoveNext_mADA9B07AC72001B6674865C63E2CF37F6ECFD452 (Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E*, const RuntimeMethod*))Enumerator_MoveNext_m98FA9131B497E701601CDA065CC01721E11C40E8_gshared)(__this, method);
}
inline SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* List_1_ToArray_mE948E3D858FA7AD01E003AE3A1920DBEFFE9080D (List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* __this, const RuntimeMethod* method)
{
	return ((  SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* (*) (List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68*, const RuntimeMethod*))List_1_ToArray_m90E6D9E57256EC0FB6B36FDC40F65B0F59D7B671_gshared)(__this, method);
}
inline String_t* SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_inline (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310*, const RuntimeMethod*))SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_gshared_inline)(__this, method);
}
inline bool HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853 (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Contains_mA509F2883C427797FD1483DAE0E25F2C7C95CB93_gshared)(__this, ___0_item, method);
}
inline bool HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Add_m7BC8346BAB1CD540AAB8BF8A6471F9803B8E26B1_gshared)(__this, ___0_item, method);
}
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SubsystemEntry_get_Dependencies_mA2E8CDBD0C798B672CF3DC1B6CED4D75312C0CBF_inline (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310*, const RuntimeMethod*))SubsystemEntry_get_Dependencies_mA2E8CDBD0C798B672CF3DC1B6CED4D75312C0CBF_gshared_inline)(__this, method);
}
inline bool Dictionary_2_TryGetValue_m89D879BFF86606BC01A0EFEA85F2D09608DF7C6F (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* __this, String_t* ___0_key, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF*, String_t*, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310**, const RuntimeMethod*))Dictionary_2_TryGetValue_mEB1F53213D9DBB5055E1D48D152CB9B8A5A10437_gshared)(__this, ___0_key, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
inline bool HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, String_t*, const RuntimeMethod*))HashSet_1_Remove_mDC3A8AE64AF65E6FBCBCE40C0B99182BAC550386_gshared)(__this, ___0_item, method);
}
inline void List_1_Add_mA4A56B3194CB006DB23FE2EA0AF5A97B145E5A35_inline (List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* __this, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68*, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310*, const RuntimeMethod*))List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline)(__this, ___0_item, method);
}
inline void Dictionary_2__ctor_m4C56084656C624BF269AC253DBE512841AEE8254 (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF*, const RuntimeMethod*))Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared)(__this, method);
}
inline void Enumerator_Dispose_m928A92DBC85A23CCAEDE32082D8964C44D495578 (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D (uint8_t* ___0_b, uint64_t ___1_byteLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A (uint8_t* ___0_startAddress, uint8_t ___1_value, uint32_t ___2_byteCount, const RuntimeMethod* method) ;
inline EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* (*) (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_mFAB3C81B4C721D97D620490285A98D10429F2C64_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880 (EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_destination, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void Span_1__ctor_m404C8D000CBA5F757D0982610F73FE084C81D208_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435*, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430 (intptr_t* ___0_ip, uint64_t ___1_pointerSizeLength, const RuntimeMethod* method) ;
inline HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* (*) (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m70ECF63AA57B2B62F767D7B9290E6F6FD35B8E9E_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05 (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_destination, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method)
{
	((  void (*) (HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, uint64_t, const RuntimeMethod*))Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05_gshared)(___0_destination, ___1_source, ___2_elementCount, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___0_value, int32_t ___1_startIndex, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6155FEFF9D1ED3BEFB59AD09C85726773DDF93B8_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575*, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_inline (const RuntimeMethod* method)
{
	return ((  HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* (*) (const RuntimeMethod*))Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline)(method);
}
inline void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575*, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*, const RuntimeMethod*))Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared_inline)(__this, ___0_array, method);
}
inline NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* (*) (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_mCBA967D766B41C6F7A5A958282339CC12C808833_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197 (NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_destination, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6F9AD212C5B66737445B1DF6C4F0CA7389714683_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428*, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) ;
inline NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* (*) (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m57AB4E076AE2513019A3F2511A8BF676364E9A8E_inline (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9 (NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___0_destination, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m53A825C151E2E2BCE20593D77B94EF278410E335_inline (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745*, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* Array_Empty_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_m3EDEED36320352D697788722957A3FCC32B74117_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m50844A32AD4AEDCC0396DEE94E2502155012D74D_inline (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___0_array, const RuntimeMethod* method) ;
inline SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* (*) (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A (SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_destination, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m764553AEFD6BC88DF9ACBDB153A1B2F390F345EA_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8*, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) ;
inline Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline (Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* (*) (Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m21DC00319E707013DDD090C3B128550E3903949A_inline (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80 (Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___0_destination, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m8E8E1B1804885AB2ECC6208062A7281CF490B69A_inline (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5*, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* Array_Empty_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m24487CD12F55B7FCBB5515F505441ECA91E850FC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2C7A5F5E1E584A05CB6BE01B61F014B3D86795CC_inline (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___0_array, const RuntimeMethod* method) ;
inline Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline (Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* (*) (Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m4CB2A026D0C116105827DAA5FAC274E57299FC6A_inline (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D (Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___0_destination, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_mF06D8D5459BD363650860ADEC5251F2037756FCD_inline (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD*, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* Array_Empty_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m748F1A71A7DD69BB388C8731921DA551609F490F_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mEC6ABC58D9B0430009F2CA47F6400C1339B85A32_inline (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* (*) (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_mAE734F1E7D866942E70763D9232D006153CC93C8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32 (UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_destination, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m75C44EF3448A75BC5A7F2F55234E5942B61EC136_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A*, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* (*) (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m757FB90F888A97214E70C7D7DB66DCBB57ED9317_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2 (UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_destination, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC7F51584BCC29D5FFC34B030A66E3BD7BB3CC1CF_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176*, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* (*) (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m9A18653FCB90AB3ACEBA696165B559FB2BC04AD7_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D (UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_destination, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_mDE271D9C61A54E84DF1147AC9CB9CD0C7DD5EC49_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB*, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* (*) (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m64759923EC787AC67D237C126B1F9912A0757B25_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD (UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_destination, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m8999409384FA9CB77163485B0CA6E8E661F8A5A0_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3*, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* (*) (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m25AA5DB60DDFA74CDC6FC67BCE440F807F40C824_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0 (UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_destination, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m0AFDAF2851C62510441729AD03DDAD3F885CE919_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506*, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* (*) (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_mFD0E4725CBEC468524ED6C42354367A9A7359B95_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C (UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_destination, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m6C79FDD9CF4874F31512B09FA549A87AE1BDCB7B_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298*, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* (*) (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m796AE228F2062910CC25672EFEBF8E6F196B79BB_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C (UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_destination, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5226151E7563D0A66ED571261D440B586FFCDD2F_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034*, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* (*) (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_mEF91E66E45055A28639FAA49F9338605E2E05F7C_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645 (UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_destination, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m7AA4D2DF6CB6D0B400BBDD79DE188410C9010D38_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7*, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* (*) (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_mB346D5ACE2098245EF5F8BDB45CD7299937039AA_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724 (UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_destination, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m5651C53E50085A171A2D1AD856B133BE630338A0_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6*, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) ;
inline UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* (*) (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*, uint64_t, const RuntimeMethod*))Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline)(___0_source, ___1_byteOffset, method);
}
inline int32_t Span_1_get_Length_m28C5FEE9DBE03CF72CF72C3E0CC494D3A9E9C233_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E (UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_destination, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___1_source, uint64_t ___2_elementCount, const RuntimeMethod* method) ;
inline void Span_1__ctor_m35E566097D06C4ACC15E14F8D61686EAACCDE086_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381*, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, Il2CppSharedGenericObject*, const RuntimeMethod*))List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_m9CDE8A15F6710C47591CDE1AE5C0241C6380306D_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___keys = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___values = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_1);
		__this->____size = 0;
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_2;
		L_2 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->___comparer = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2__ctor_mC39BDB99A3FFA868E24D5FDE5DE0B157AA1A7A09_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)L_5);
		__this->___keys = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_6);
		int32_t L_7 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (uint32_t)L_7);
		__this->___values = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_8);
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_9;
		L_9 = ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__this->___comparer = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comparer), (void*)(RuntimeObject*)L_9);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Add_mC351B19884930B46C8A037A9ED9F7533A7D1E910_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_9 = L_0;
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_9);
		String_t* L_11;
		L_11 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46A01A440913AE3A82489D220ACF899D570C29A7)), L_10, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_12, L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, method);
	}

IL_004c:
	{
		int32_t L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker3< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), __this, ((~L_13)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_15: *(void**)L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m5E28CD6EF4775439631781B0B8C1C21FB0BCB624_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_1);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m5B95DE8F62031E2CFF5C1B79AACB9D4A29322B48_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)1;
	}

IL_0033:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3AA632F529E8104E858B38BEBD3E51FADCEA69DE_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 ___0_keyValuePair, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)___0_keyValuePair, (Il2CppFullySharedGenericAny*)L_8);
		NullCheck(L_3);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return (bool)1;
	}

IL_003a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Capacity_m636003910399A813EC567F8646268B4798A58D27_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	{
		int32_t L_0 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_3 = ___0_value;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_5 = ___0_value;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_8 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D1773CA7AF4AE36C001FBC3E1E5DA5574C041FA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_002d:
	{
		int32_t L_9 = ___0_value;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		int32_t L_10 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)L_10);
		V_0 = L_11;
		int32_t L_12 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (uint32_t)L_12);
		V_1 = L_13;
		int32_t L_14 = __this->____size;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->___keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		int32_t L_17 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, 0, L_17, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_1;
		int32_t L_20 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_18, 0, (RuntimeArray*)L_19, 0, L_20, NULL);
	}

IL_0070:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_0;
		__this->___keys = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_21);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_1;
		__this->___values = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_22);
		return;
	}

IL_007f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23;
		L_23 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->___keys = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keys), (void*)L_23);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24;
		L_24 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->___values = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values), (void*)L_24);
	}

IL_0095:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Add_m4866D80E4CC9798CB02F14658273996701069A48_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_23 = L_3;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_0, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_3);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_002c:
	{
		RuntimeObject* L_6 = ___0_key;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5))))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject* L_7 = ___0_key;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 16)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		String_t* L_10;
		L_10 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_7, L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0054:
	{
		RuntimeObject* L_12 = ___1_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_12, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7))))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_13 = ___1_value;
		if (!L_13)
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_14 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 17)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		String_t* L_17;
		L_17 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_14, L_16, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_18, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, method);
	}

IL_007f:
	{
		RuntimeObject* L_19 = ___0_key;
		void* L_21 = UnBox_Any(L_19, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_20);
		RuntimeObject* L_22 = ___1_value;
		void* L_24 = UnBox_Any(L_22, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_23);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Keys_m673C0CB55A2E51947BCB364D336A683C1DBDA5A5_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_mA3436A3CB54F895668B37B743E580AC66847E86C_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Keys_m4242C0DE7B18F0CAD6F21CDC2CDB1D162487C0CA_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Keys_m6404F05280DB64D95FCBFA6D912FDD82DB0FFC1F_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0;
		L_0 = ((  KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_get_Values_m3629A631F9E91380D33AF97AB0022D43F799F8BA_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m4D4F34CD5D4C8ACA4F369647D286BA598EA4A091_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Values_m439BF2A831D64DFCA3E25F90533820DD34C025FC_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IReadOnlyDictionaryU3CTKeyU2CTValueU3E_get_Values_m15B1319DA31A9A9A5C49D2E540BA1B67F2A34743_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0;
		L_0 = ((  ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* SortedList_2_GetKeyListHelper_mF41FAFCCB1114FC4306F309C9A0BAB96D4092E94_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_0 = __this->___keyList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_1 = (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 20));
		((  void (*) (KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(L_1, __this, NULL);
		__this->___keyList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___keyList), (void*)L_1);
	}

IL_0014:
	{
		KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* L_2 = __this->___keyList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* SortedList_2_GetValueListHelper_m6111A7177441A9C87D1E43BAB8D63E7AA3ECD35D_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_0 = __this->___valueList;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_1 = (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		((  void (*) (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(L_1, __this, NULL);
		__this->___valueList = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___valueList), (void*)L_1);
	}

IL_0014:
	{
		ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* L_2 = __this->___valueList;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m918055FE29F64F5A3829E6B58933240CBD7CF80A_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsReadOnly_mC0715D1726D2216C2BBA4C4665DC448D06A40D43_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_get_IsFixedSize_m2E8BE4D04E3E169C345AD04BB8E30F373FB93797_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_ICollection_get_IsSynchronized_m0C699123D6114FF7A6285B60728B72CB9ED2BD64_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_ICollection_get_SyncRoot_m20ED86A54769C61DE751A3952BBDD778D3B1F701_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = il2cpp_intrinsic_interlocked_compare_exchange(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Clear_mD7568EA1182318C8D54FF2F3BD633C7D4B161CE2_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->___keys;
		int32_t L_3 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_2, 0, L_3, NULL);
	}

IL_0027:
	{
		bool L_4;
		L_4 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->___values;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_0040:
	{
		__this->____size = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_System_Collections_IDictionary_Contains_m31D1A606D3202F88790C274AE45023C52D3ABD8A_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 27), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsKey_m9965B1BF656E4D9C636B65E006D2DADE26BCA5EA_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_0: *(void**)L_0));
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m3BF3B25F198D66132212DE2A3BEEE316C1BDF1AF_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_26 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	int32_t V_0 = 0;
	KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 V_1 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	memset(V_1, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_4 = ___0_array;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) <= ((int32_t)L_5)))
		{
			goto IL_002e;
		}
	}

IL_0018:
	{
		int32_t L_6 = ___1_arrayIndex;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002e:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		int32_t L_12 = ___1_arrayIndex;
		int32_t L_13;
		L_13 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_11, L_12))) >= ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, method);
	}

IL_0046:
	{
		V_0 = 0;
		goto IL_0077;
	}

IL_004a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->___keys;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = __this->___values;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		il2cpp_codegen_memcpy(L_22, (L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)V_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_22: *(void**)L_22));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = ___0_array;
		int32_t L_24 = ___1_arrayIndex;
		int32_t L_25 = V_0;
		il2cpp_codegen_memcpy(L_26, V_1, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), L_26, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), (void*)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0077:
	{
		int32_t L_28 = V_0;
		int32_t L_29;
		L_29 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(__this, NULL);
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_ICollection_CopyTo_m0DE93E0255FA7B7EC7A5D41A276741CB2A19C133_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9));
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_49 = L_29;
	const Il2CppFullySharedGenericAny L_34 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_54 = L_34;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_53 = L_33;
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_55 = L_35;
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_36 = alloca(SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_56 = L_36;
	KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_9 = ___1_index;
		RuntimeArray* L_10 = ___0_array;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = il2cpp_codegen_array_get_length(L_10);
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_0063;
		}
	}

IL_004d:
	{
		int32_t L_12 = ___1_index;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_15 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		RuntimeArray* L_16 = ___0_array;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = il2cpp_codegen_array_get_length(L_16);
		int32_t L_18 = ___1_index;
		int32_t L_19;
		L_19 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
		RuntimeArray* L_21 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57*)IsInstSealed((RuntimeObject*)L_21, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 31)));
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_22 = V_0;
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		V_1 = 0;
		goto IL_00b6;
	}

IL_008c:
	{
		KeyValuePair_2U5BU5D_t885F2E060B0261B18E97D336746D53BA61338F57* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->___keys;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		il2cpp_codegen_memcpy(L_29, (L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30 = __this->___values;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		il2cpp_codegen_memcpy(L_33, (L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		memset(L_36, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_36, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_34, L_29, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? il2cpp_codegen_memcpy(L_35, L_33, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_33), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), L_36, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, L_25)))), (void*)L_36);
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00b6:
	{
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(__this, NULL);
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_008c;
		}
	}
	{
		return;
	}

IL_00c0:
	{
		RuntimeArray* L_40 = ___0_array;
		V_2 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_40, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = V_2;
		if (L_41)
		{
			goto IL_00da;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_42 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_00da:
	{
	}
	try
	{
		{
			V_3 = 0;
			goto IL_010a_1;
		}

IL_00df_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = V_2;
			int32_t L_44 = V_3;
			int32_t L_45 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = __this->___keys;
			int32_t L_47 = V_3;
			NullCheck(L_46);
			int32_t L_48 = L_47;
			il2cpp_codegen_memcpy(L_49, (L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_50 = __this->___values;
			int32_t L_51 = V_3;
			NullCheck(L_50);
			int32_t L_52 = L_51;
			il2cpp_codegen_memcpy(L_53, (L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
			memset(L_56, 0, SizeOf_KeyValuePair_2_t26603B18F49F78166CF21E4D82F3A76FFAF80D97);
			KeyValuePair_2__ctor_mD82E516936D2BDE6D46C8C45270250647986231E((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)L_56, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? il2cpp_codegen_memcpy(L_54, L_49, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7): *(void**)L_49), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? il2cpp_codegen_memcpy(L_55, L_53, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C): *(void**)L_53), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30));
			RuntimeObject* L_57 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9), L_56);
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_57);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_44, L_45))), (RuntimeObject*)L_57);
			int32_t L_58 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		}

IL_010a_1:
		{
			int32_t L_59 = V_3;
			int32_t L_60;
			L_60 = ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(__this, NULL);
			if ((((int32_t)L_59) < ((int32_t)L_60)))
			{
				goto IL_00df_1;
			}
		}
		{
			goto IL_0126;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0115;
		}
		throw e;
	}

CATCH_0115:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_61 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_62 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_62, method);
	}

IL_0126:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_EnsureCapacity_m07DCAB9E071969908332FEBA61476227C005AD0B_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___keys;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0015;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 4;
	}

IL_0016:
	{
		V_0 = G_B3_0;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) > ((uint32_t)((int32_t)2146435071)))))
		{
			goto IL_0025;
		}
	}
	{
		V_0 = ((int32_t)2146435071);
	}

IL_0025:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_min;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_6 = ___0_min;
		V_0 = L_6;
	}

IL_002b:
	{
		int32_t L_7 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___values;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_GetEnumerator_m0C62F4A674E308DEA3A29964E839D9A5C8B1BCA1_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11A03CF9E906BAF59C1F708CE0150B89E36F5F32_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_GetEnumerator_m8FDF835FE585FFADB347CDB3EC09F78A53502006_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IEnumerable_GetEnumerator_m7E1C72FB502649A3054AA6D3BCB06BF198E9DF6C_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33));
	const Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078 L_0 = alloca(SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
	{
		memset(L_0, 0, SizeOf_Enumerator_t26F0DFAF5C765B8DF9CB0D8D7A6FB770C29F0DA4);
		Enumerator__ctor_m74E4507FF37BDC183623DA6AEE98F82E112E9F2F((Enumerator_t27B35387FA1735A6DD27C306D919EF6272712078*)L_0, __this, 1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 34));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 33), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetKey_m977764A3D57285814E6D5D9B191021BF4DCF8621_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___keys;
		int32_t L_8 = ___0_index;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_get_Item_m4B9BA956EABFE4BE97DF5CA24A015A651D09D3A7_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___values;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return;
	}

IL_0019:
	{
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), &L_8, L_7);
		typedef String_t* ( *func_L_10)(void*,const RuntimeMethod*);
		String_t* L_11 = ((func_L_10)L_9)(L_8.thisPtr,L_8.method);
		String_t* L_12;
		L_12 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC524653D78C03BE4033DDC43C45B67FFB841D141)), L_11, NULL);
		KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E* L_13 = (KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_tCE416EC9BCA9F396A3DFFF86D1B5209BA876079E_il2cpp_TypeInfo_var)));
		KeyNotFoundException__ctor_mBD1D75B73DD5D7C6C72E4F7A021778837B6F2C6B(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_set_Item_m353A6F48A93044ECAC54D64ADEBF8366CD58C1C1_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_14 = L_0;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_15 = L_11;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->___values;
		int32_t L_10 = V_0;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_9);
		il2cpp_codegen_memcpy((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), L_11, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (void**)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)), (void*)L_11);
		int32_t L_12 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___1_value : &___1_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		InvokerActionInvoker3< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), __this, ((~L_13)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_14: *(void**)L_14), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_15: *(void**)L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SortedList_2_System_Collections_IDictionary_get_Item_m97EC5F8C45891CC6F911F817655589D9203057B4_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->___values;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		il2cpp_codegen_memcpy(L_10, (L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_10);
		return L_11;
	}

IL_002b:
	{
		return NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_set_Item_m8B859F5250231E8D677DF031E5E0FEDFE8C94BF9_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	const Il2CppFullySharedGenericAny L_12 = L_4;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___1_value;
		if (L_3)
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_4);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0031:
	{
		RuntimeObject* L_7 = ___0_key;
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_8);
		il2cpp_codegen_memcpy(V_0, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	}
	try
	{
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_11 = ___1_value;
		void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), L_12);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_10: *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))));
		goto IL_0068;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0047:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_14 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_15 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 17)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18;
		L_18 = SR_Format_m27BC634145CE1B8E25594A82CDBBF04AD501CA02(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0569A2D4DF78C8C40FBF38FD14928474637FF26)), L_15, L_17, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_19, L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0068:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfKey_m7FF3349A95CC8C46C4C29FB2BAC94F9F778145E7_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___keys;
		int32_t L_4 = __this->____size;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		RuntimeObject* L_6 = __this->___comparer;
		int32_t L_7;
		L_7 = InvokerFuncInvoker5< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Il2CppFullySharedGenericAny, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), NULL, L_3, 0, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_5: *(void**)L_5), L_6);
		V_0 = L_7;
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		return (-1);
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SortedList_2_IndexOfValue_m5D899EA7F684020A2CC3F6CE518C02CCD8F6804C_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___values;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___0_value : &___0_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_Insert_m54BB1474F7B22BE2FE663D9FE3B6D289C5FF8C44_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_key, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___keys;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)))(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
	}

IL_001e:
	{
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___keys;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->___keys;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___values;
		int32_t L_13 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->___values;
		int32_t L_15 = ___0_index;
		int32_t L_16 = __this->____size;
		int32_t L_17 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, L_13, (RuntimeArray*)L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0061:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___keys;
		int32_t L_19 = ___0_index;
		il2cpp_codegen_memcpy(L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___1_key : &___1_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_18);
		il2cpp_codegen_memcpy((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), L_20, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)), (void*)L_20);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = __this->___values;
		int32_t L_22 = ___0_index;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7)) ? ___2_value : &___2_value), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_21);
		il2cpp_codegen_memcpy((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), L_23, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (void**)(L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22)), (void*)L_23);
		int32_t L_24 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_25, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_TryGetValue_m6130DC03E87B7D7278E93114284F5B95602AE039_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___1_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___values;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_7, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_7);
		return (bool)1;
	}

IL_0020:
	{
		Il2CppFullySharedGenericAny* L_8 = ___1_value;
		il2cpp_codegen_initobj(L_8, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_RemoveAt_m37107384ADBAA63248D080C5854FB83D865C6848_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const uint32_t SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	memset(V_0, 0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	memset(V_1, 0, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}

IL_000d:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0023:
	{
		int32_t L_7 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = ___0_index;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0074;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->___keys;
		int32_t L_11 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->___keys;
		int32_t L_13 = ___0_index;
		int32_t L_14 = __this->____size;
		int32_t L_15 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), (RuntimeArray*)L_12, L_13, ((int32_t)il2cpp_codegen_subtract(L_14, L_15)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->___values;
		int32_t L_17 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->___values;
		int32_t L_19 = ___0_index;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, 1)), (RuntimeArray*)L_18, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), NULL);
	}

IL_0074:
	{
		bool L_22;
		L_22 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
		if (!L_22)
		{
			goto IL_0095;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->___keys;
		int32_t L_24 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		il2cpp_codegen_memcpy(L_25, V_0, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		NullCheck(L_23);
		il2cpp_codegen_memcpy((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), L_25, SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)), (void*)L_25);
	}

IL_0095:
	{
		bool L_26;
		L_26 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		if (!L_26)
		{
			goto IL_00b6;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->___values;
		int32_t L_28 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		il2cpp_codegen_memcpy(L_29, V_1, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		NullCheck(L_27);
		il2cpp_codegen_memcpy((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), L_29, SizeOf_TValue_t05B39B62795218B9FB2F0D6E1C002FB430DD6D0C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7), (void**)(L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)), (void*)L_29);
	}

IL_00b6:
	{
		int32_t L_30 = __this->___version;
		__this->___version = ((int32_t)il2cpp_codegen_add(L_30, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_Remove_m0EA556F04D0438CB72CF168DAC3D1815AA2769E5_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_key : &___0_key), SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
	}

IL_0013:
	{
		int32_t L_4 = V_0;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_System_Collections_IDictionary_Remove_m4A5603583AFC8DE869154A5D1B5973C81FADC18D_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TKey_t1FD6F73134BEFD3DA81B6A46436C50FA38749EC7);
	{
		RuntimeObject* L_0 = ___0_key;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_key;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_IsCompatibleKey_m94BC0B0753D7ECAADCD432B51E962A5064D3EFC9_fshared (RuntimeObject* ___0_key, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_key;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_key;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_RegisterSubsystem_m0A548E81E0A1233DB8E59F92A3746D52BAF7D7E6_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, String_t* ___0_name, Il2CppSharedGenericObject* ___1_initDelegate, Il2CppSharedGenericObject* ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_0 = NULL;
	Il2CppSharedGenericObject* G_B6_1 = NULL;
	Il2CppSharedGenericObject* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* G_B6_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	Il2CppSharedGenericObject* G_B5_1 = NULL;
	Il2CppSharedGenericObject* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* G_B5_5 = NULL;
	{
		bool L_0;
		L_0 = SortedSubsystemGroup_2_get_Frozen_m87AC0FD4217CFF844405AF69346FFA099946FDEF(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral920B6B05D1EF9E61AEC546EDC66550B870075C4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* L_2 = __this->___m_Subsystems;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m2702D69F87CB6AB176CE2649D246A3AFCE96A010(L_2, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_5 = ___0_name;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B31AB38360ECF9683ADAB607974B916C9663192)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* L_8 = __this->___m_Subsystems;
		String_t* L_9 = ___0_name;
		String_t* L_10 = ___0_name;
		Il2CppSharedGenericObject* L_11 = ___1_initDelegate;
		Il2CppSharedGenericObject* L_12 = ___2_cleanupDelegate;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___3_dependencies;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_12;
			G_B6_2 = L_11;
			G_B6_3 = L_10;
			G_B6_4 = L_9;
			G_B6_5 = L_8;
			goto IL_004c;
		}
		G_B5_0 = L_14;
		G_B5_1 = L_12;
		G_B5_2 = L_11;
		G_B5_3 = L_10;
		G_B5_4 = L_9;
		G_B5_5 = L_8;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
		G_B6_5 = G_B5_5;
	}

IL_004c:
	{
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_16 = (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		SubsystemEntry__ctor_m47A14ECA32ECA5A135A3ADE56F31B3A8161C5294(L_16, G_B6_3, G_B6_2, G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_5);
		Dictionary_2_Add_m5E4709486DCCFA728839053B99E62EF25F9C3D3A(G_B6_5, G_B6_4, L_16, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* SortedSubsystemGroup_2_get_SortedInitCallbacks_mC5508ADE483BF27954603851D0AC0A88507041B4_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___m_InitDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SortedSubsystemGroup_2_SortAndFreeze_mD7B99062B7EA5C3664AEF4432AE9D378B1134396(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->___m_InitDelegates;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* SortedSubsystemGroup_2_get_SortedCleanupCallbacks_m6BA281C5735EE14AE188EF281FC48F85B4F471A5_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method) 
{
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->___m_CleanupDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SortedSubsystemGroup_2_SortAndFreeze_mD7B99062B7EA5C3664AEF4432AE9D378B1134396(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
	}

IL_000e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->___m_CleanupDelegates;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_SortAndFreeze_mD7B99062B7EA5C3664AEF4432AE9D378B1134396_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit);
	SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* V_0 = NULL;
	Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* G_B2_0 = NULL;
	SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* G_B2_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B2_2 = NULL;
	Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* G_B1_0 = NULL;
	SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* G_B1_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B1_2 = NULL;
	Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B4_2 = NULL;
	Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B3_2 = NULL;
	Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B6_2 = NULL;
	Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B5_2 = NULL;
	Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B8_2 = NULL;
	Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* G_B7_2 = NULL;
	{
		SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* L_0;
		L_0 = SortedSubsystemGroup_2_TopologicalSort_mBC0F7988635D7814DEE505B295165592FEF39F59(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_0;
		SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* L_1 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_2 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0;
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0028;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB* L_4 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_5 = (Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		Func_2__ctor_mC86EE5EA9700614B4BA41567A6A4D0D911CAF02C(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_6 = L_5;
		((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0028:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Where_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_mE3AD032A9970E79B18F40BAC7BEB563E09F8C7CD((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_8 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1;
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_9 = L_8;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			G_B4_2 = G_B2_2;
			goto IL_004c;
		}
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		G_B3_2 = G_B2_2;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB* L_10 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_11 = (Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
		Func_2__ctor_m35456F36DF9D20BE23709E63688A1EEFED60FAB8(L_11, (RuntimeObject*)L_10, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), NULL);
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_12 = L_11;
		((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_004c:
	{
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_TisIl2CppSharedGenericObject_mE66F9910BB6B5FF93485CDAB17F4630E32F19CDA(G_B4_1, G_B4_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14;
		L_14 = Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5(L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		NullCheck(G_B4_2);
		G_B4_2->___m_InitDelegates = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___m_InitDelegates), (void*)L_14);
		SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* L_15 = V_0;
		RuntimeObject* L_16;
		L_16 = Enumerable_AsEnumerable_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_m5A86BEBFA0308C97CC0A7C34020D5C0BDBDAD4EF((RuntimeObject*)L_15, NULL);
		RuntimeObject* L_17;
		L_17 = Enumerable_Reverse_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_mD4DB3C9980A4C5FBB16C4C5B523B0F7B0FEBDB4E(L_16, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_18 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2;
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_19 = L_18;
		if (L_19)
		{
			G_B6_0 = L_19;
			G_B6_1 = L_17;
			G_B6_2 = __this;
			goto IL_0086;
		}
		G_B5_0 = L_19;
		G_B5_1 = L_17;
		G_B5_2 = __this;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB* L_20 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_21 = (Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		Func_2__ctor_mC86EE5EA9700614B4BA41567A6A4D0D911CAF02C(L_21, (RuntimeObject*)L_20, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), NULL);
		Func_2_t15DA2B78966E8968ADD1ACF1806DD8AC3D34CFD6* L_22 = L_21;
		((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2), (void*)L_22);
		G_B6_0 = L_22;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0086:
	{
		RuntimeObject* L_23;
		L_23 = Enumerable_Where_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_mE3AD032A9970E79B18F40BAC7BEB563E09F8C7CD(G_B6_1, G_B6_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_24 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3;
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_25 = L_24;
		if (L_25)
		{
			G_B8_0 = L_25;
			G_B8_1 = L_23;
			G_B8_2 = G_B6_2;
			goto IL_00aa;
		}
		G_B7_0 = L_25;
		G_B7_1 = L_23;
		G_B7_2 = G_B6_2;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB* L_26 = ((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_27 = (Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		Func_2__ctor_m35456F36DF9D20BE23709E63688A1EEFED60FAB8(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), NULL);
		Func_2_t0211B6F6BC9B7C06A9E0DC3AD7D9FB57D7422C3A* L_28 = L_27;
		((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tFD9740B78414E761132EA6FF029D8BA03DBF3DEB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3), (void*)L_28);
		G_B8_0 = L_28;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00aa:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Select_TisSubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310_TisIl2CppSharedGenericObject_mE66F9910BB6B5FF93485CDAB17F4630E32F19CDA(G_B8_1, G_B8_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_30;
		L_30 = Enumerable_ToArray_TisIl2CppSharedGenericObject_mCEC6A846A11C893E2B3BE3B6D36035AD28BE6CF5(L_29, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		NullCheck(G_B8_2);
		G_B8_2->___m_CleanupDelegates = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___m_CleanupDelegates), (void*)L_30);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* SortedSubsystemGroup_2_TopologicalSort_mBC0F7988635D7814DEE505B295165592FEF39F59_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_0 = NULL;
	List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* V_1 = NULL;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_2 = NULL;
	Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E V_3;
	memset((&V_3), 0, sizeof(V_3));
	SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* V_4 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* L_1 = (List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27));
		List_1__ctor_mFDEED055C6B099D339ED1FA919C238649517ACF0(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_1 = L_1;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_2, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_2 = L_2;
		Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* L_3 = __this->___m_Subsystems;
		NullCheck(L_3);
		ValueCollection_tD99CCFD627A16AD3FAD21315DC7F4F57AD0C11B7* L_4;
		L_4 = Dictionary_2_get_Values_mA9D529998C232E6EE5347BE06DD768C44D6CF61B(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		NullCheck(L_4);
		Enumerator_t566CC29F369B3ED0A1C29D5973F1250FE3F7209E L_5;
		L_5 = ValueCollection_GetEnumerator_mF48B0FD41F458B26875BAF8B0B32B1095C564395(L_4, NULL);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				Enumerator_Dispose_mF9DEEC1E7EB4C6EAA5155A4AFA79D3065593AA51((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0039_1;
			}

IL_0025_1:
			{
				SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_6;
				L_6 = Enumerator_get_Current_mEB621AC11BD72AD9CD68296BA099D020EE079626_inline((&V_3), NULL);
				V_4 = L_6;
				SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_7 = V_4;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = V_0;
				List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* L_9 = V_1;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = V_2;
				SortedSubsystemGroup_2_Visit_m8E7C8B0FEAACE90E494E386FF24C3CFCE8186186(__this, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
			}

IL_0039_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mADA9B07AC72001B6674865C63E2CF37F6ECFD452((&V_3), NULL);
				if (L_11)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0052;
			}
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

IL_0052:
	{
		List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* L_12 = V_1;
		NullCheck(L_12);
		SubsystemEntryU5BU5D_t1B51257941629A7CCFB40FDB43893C6FD5B359A1* L_13;
		L_13 = List_1_ToArray_mE948E3D858FA7AD01E003AE3A1920DBEFFE9080D(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_Visit_m8E7C8B0FEAACE90E494E386FF24C3CFCE8186186_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = ___1_visited;
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_1 = ___0_subsystem;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_inline(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_2, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = ___1_visited;
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_5 = ___0_subsystem;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_inline(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, L_6, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = ___3_pendingDependencies;
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_9 = ___0_subsystem;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_inline(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_8, L_10, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_12 = ___0_subsystem;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = SubsystemEntry_get_Dependencies_mA2E8CDBD0C798B672CF3DC1B6CED4D75312C0CBF_inline(L_12, NULL);
		V_0 = L_13;
		V_1 = 0;
		goto IL_009a;
	}

IL_0035:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* L_18 = __this->___m_Subsystems;
		String_t* L_19 = V_2;
		NullCheck(L_18);
		bool L_20;
		L_20 = Dictionary_2_TryGetValue_m89D879BFF86606BC01A0EFEA85F2D09608DF7C6F(L_18, L_19, (&V_3), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38));
		if (L_20)
		{
			goto IL_0065;
		}
	}
	{
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_21 = ___0_subsystem;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_inline(L_21, NULL);
		String_t* L_23 = V_2;
		String_t* L_24;
		L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96DF4500E5408A7ED26D010DF5824289A767048E)), L_23, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0065:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_26 = ___3_pendingDependencies;
		String_t* L_27 = V_2;
		NullCheck(L_26);
		bool L_28;
		L_28 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_26, L_27, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_008b;
		}
	}
	{
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_29 = ___0_subsystem;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_inline(L_29, NULL);
		String_t* L_31 = V_2;
		String_t* L_32;
		L_32 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral575B4BE92F0D75E69C018C6AA4FBC530DDD4B595)), L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719)), L_31, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_33 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_008b:
	{
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_34 = V_3;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_35 = ___1_visited;
		List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* L_36 = ___2_sorted;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_37 = ___3_pendingDependencies;
		SortedSubsystemGroup_2_Visit_m8E7C8B0FEAACE90E494E386FF24C3CFCE8186186(__this, L_34, L_35, L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009a:
	{
		int32_t L_39 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_42 = ___3_pendingDependencies;
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_43 = ___0_subsystem;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_inline(L_43, NULL);
		NullCheck(L_42);
		bool L_45;
		L_45 = HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA(L_42, L_44, HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		List_1_tE1431F2B4B6D17671779F07E5F7C08655E8F6A68* L_46 = ___2_sorted;
		SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* L_47 = ___0_subsystem;
		NullCheck(L_46);
		List_1_Add_mA4A56B3194CB006DB23FE2EA0AF5A97B145E5A35_inline(L_46, L_47, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2__ctor_m31134394ABA3C5A9BBFE5C06257815925E8F34B7_gshared (SortedSubsystemGroup_2_t949B1B40E83AD1F36CE4B57B480547256E0CA8D0* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF* L_0 = (Dictionary_2_t38B272764DD9542BFEC5881CBF40CD91A9CF29AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40));
		Dictionary_2__ctor_m4C56084656C624BF269AC253DBE512841AEE8254(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		__this->___m_Subsystems = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystems), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedSubsystemGroup_2_get_Frozen_mB70A61B14C8E51064385759618692E2A8DE747D1_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_InitDelegates;
		return (bool)((!(((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_RegisterSubsystem_m623E4ED8B163C9FDB1A8E97B5E278099BE27C2C6_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, String_t* ___0_name, Il2CppFullySharedGenericAny ___1_initDelegate, Il2CppFullySharedGenericAny ___2_cleanupDelegate, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___3_dependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const uint32_t SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_0 = NULL;
	Il2CppFullySharedGenericAny G_B6_1 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	memset(G_B6_1, 0, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	Il2CppFullySharedGenericAny G_B6_2 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	memset(G_B6_2, 0, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	String_t* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* G_B6_5 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	Il2CppFullySharedGenericAny G_B5_1 = alloca(SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	memset(G_B5_1, 0, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
	Il2CppFullySharedGenericAny G_B5_2 = alloca(SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	memset(G_B5_2, 0, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
	String_t* G_B5_3 = NULL;
	String_t* G_B5_4 = NULL;
	Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* G_B5_5 = NULL;
	{
		bool L_0;
		L_0 = ((  bool (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral920B6B05D1EF9E61AEC546EDC66550B870075C4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_2 = __this->___m_Subsystems;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		bool L_4;
		L_4 = InvokerFuncInvoker1< bool, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1), L_2, L_3);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_5 = ___0_name;
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B31AB38360ECF9683ADAB607974B916C9663192)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_8 = __this->___m_Subsystems;
		String_t* L_9 = ___0_name;
		String_t* L_10 = ___0_name;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_initDelegate : &___1_initDelegate), SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___2_cleanupDelegate : &___2_cleanupDelegate), SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = ___3_dependencies;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		if (L_14)
		{
			G_B6_0 = L_14;
			il2cpp_codegen_memcpy(G_B6_1, L_12, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
			il2cpp_codegen_memcpy(G_B6_2, L_11, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
			G_B6_3 = L_10;
			G_B6_4 = L_9;
			G_B6_5 = L_8;
			goto IL_004c;
		}
		G_B5_0 = L_14;
		il2cpp_codegen_memcpy(G_B5_1, L_12, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		il2cpp_codegen_memcpy(G_B5_2, L_11, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		G_B5_3 = L_10;
		G_B5_4 = L_9;
		G_B5_5 = L_8;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		G_B6_0 = L_15;
		il2cpp_codegen_memcpy(G_B6_1, G_B5_1, SizeOf_TCleanupDelegate_tA0F6E40BB2F6D6957687F23D7DEA6ACE2DF4B46B);
		il2cpp_codegen_memcpy(G_B6_2, G_B5_2, SizeOf_TInitDelegate_t04669FA743641C5F18BF7FB4FEB545ACBE5C246F);
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
		G_B6_5 = G_B5_5;
	}

IL_004c:
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_16 = (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		InvokerActionInvoker4< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5), L_16, G_B6_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? G_B6_2: *(void**)G_B6_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? G_B6_1: *(void**)G_B6_1), G_B6_0);
		NullCheck(G_B6_5);
		InvokerActionInvoker2< String_t*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), G_B6_5, G_B6_4, L_16);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SortedSubsystemGroup_2_get_SortedInitCallbacks_m79DB0BEF575C22B876AAFA3CE9D2FD04F698CB33_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_InitDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_InitDelegates;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* SortedSubsystemGroup_2_get_SortedCleanupCallbacks_mF8275ACDA283F7AD879E7D40CD8E7AE607AADCB3_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_CleanupDelegates;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_CleanupDelegates;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_SortAndFreeze_m1FCBB2ED33FA5A550ACD53F361221A8515D86886_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit);
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* V_0 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B2_0 = NULL;
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* G_B2_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B2_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B1_0 = NULL;
	SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* G_B1_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B1_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B4_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B3_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B6_2 = NULL;
	Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B5_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B8_2 = NULL;
	Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* G_B7_0 = NULL;
	RuntimeObject* G_B7_1 = NULL;
	SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* G_B7_2 = NULL;
	{
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_0;
		L_0 = ((  SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8));
		V_0 = L_0;
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_1 = V_0;
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_2 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_3 = L_2;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0028;
		}
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		G_B1_2 = __this;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_4 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_5 = (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		((  void (*) (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(L_5, (RuntimeObject*)L_4, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)), NULL);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_6 = L_5;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_0), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0028:
	{
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))((RuntimeObject*)G_B2_1, G_B2_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_8 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_9 = L_8;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			G_B4_2 = G_B2_2;
			goto IL_004c;
		}
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		G_B3_2 = G_B2_2;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_10 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_11 = (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 15));
		((  void (*) (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)))(L_11, (RuntimeObject*)L_10, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)), NULL);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_12 = L_11;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_1), (void*)L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_004c:
	{
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)))(G_B4_1, G_B4_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14;
		L_14 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)))(L_13, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
		NullCheck(G_B4_2);
		G_B4_2->___m_InitDelegates = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___m_InitDelegates), (void*)L_14);
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_15 = V_0;
		RuntimeObject* L_16;
		L_16 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)))((RuntimeObject*)L_15, NULL);
		RuntimeObject* L_17;
		L_17 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)))(L_16, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_18 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_19 = L_18;
		if (L_19)
		{
			G_B6_0 = L_19;
			G_B6_1 = L_17;
			G_B6_2 = __this;
			goto IL_0086;
		}
		G_B5_0 = L_19;
		G_B5_1 = L_17;
		G_B5_2 = __this;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_20 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_21 = (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11));
		((  void (*) (Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)))(L_21, (RuntimeObject*)L_20, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)), NULL);
		Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899* L_22 = L_21;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_2), (void*)L_22);
		G_B6_0 = L_22;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0086:
	{
		RuntimeObject* L_23;
		L_23 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t7A62D45A466AB8DBA33C2352BF30A04104846899*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13)))(G_B6_1, G_B6_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_24 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_25 = L_24;
		if (L_25)
		{
			G_B8_0 = L_25;
			G_B8_1 = L_23;
			G_B8_2 = G_B6_2;
			goto IL_00aa;
		}
		G_B7_0 = L_25;
		G_B7_1 = L_23;
		G_B7_2 = G_B6_2;
	}
	{
		CHECKED_LOCAL_INIT(U3CU3Ec_t8BFEF0168BF11A8568E8907935F13B63807C59CF_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)),il2cpp_codegen_runtime_class_init_inline);
		U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3* L_26 = ((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9;
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_27 = (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 23));
		((  void (*) (Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 22)), NULL);
		Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1* L_28 = L_27;
		((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDB05211E1437FFBC3BA6DA0FC5131693834A69A3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 9)))->___U3CU3E9__10_3), (void*)L_28);
		G_B8_0 = L_28;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00aa:
	{
		RuntimeObject* L_29;
		L_29 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tFF1753F8F243DF12035BA6F15C746298C8F9E3C1*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25)))(G_B8_1, G_B8_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 25));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30;
		L_30 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26)))(L_29, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 26));
		NullCheck(G_B8_2);
		G_B8_2->___m_CleanupDelegates = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&G_B8_2->___m_CleanupDelegates), (void*)L_30);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* SortedSubsystemGroup_2_TopologicalSort_m4EF1485E9F3D436AD318FFE4C3961A2F9ABF22D8_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_0 = NULL;
	List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* V_1 = NULL;
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* V_2 = NULL;
	Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 V_3;
	memset((&V_3), 0, sizeof(V_3));
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* V_4 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_0, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_1 = (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 27));
		((  void (*) (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 28));
		V_1 = L_1;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_2 = (HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*)il2cpp_codegen_object_new(HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03(L_2, HashSet_1__ctor_m780CFB8A2D23543157D1A0E1FADF781E1AF81E03_RuntimeMethod_var);
		V_2 = L_2;
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_3 = __this->___m_Subsystems;
		NullCheck(L_3);
		ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* L_4;
		L_4 = ((  ValueCollection_t8830C05E9E7F8E46BC95A17F50D03182CDF67312* (*) (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29)))(L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 29));
		NullCheck(L_4);
		Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 L_5;
		L_5 = InvokerFuncInvoker0< Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 30), L_4);
		V_3 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{
				Enumerator_Dispose_m928A92DBC85A23CCAEDE32082D8964C44D495578((&V_3), NULL);
				return;
			}
		});
		try
		{
			{
				goto IL_0039_1;
			}

IL_0025_1:
			{
				SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_6;
				L_6 = InvokerFuncInvoker0< SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 31), (&V_3));
				V_4 = L_6;
				SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_7 = V_4;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = V_0;
				List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_9 = V_1;
				HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_10 = V_2;
				((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
			}

IL_0039_1:
			{
				bool L_11;
				L_11 = ((  bool (*) (Enumerator_tA09DC0A5928ACB489ED42A9881B244BDE92C7A04*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33)))((&V_3), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 33));
				if (L_11)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0052;
			}
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

IL_0052:
	{
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_12 = V_1;
		NullCheck(L_12);
		SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* L_13;
		L_13 = ((  SubsystemEntryU5BU5D_t611B707C7FF052F2FF2F3BB80F3DD182796E2137* (*) (List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35)))(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 35));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2_Visit_m357521131CFFCC13DD1F795FEB39EC17133A5A9B_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* ___0_subsystem, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___1_visited, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* ___2_sorted, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___3_pendingDependencies, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* V_3 = NULL;
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_0 = ___1_visited;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_1 = ___0_subsystem;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_0);
		bool L_3;
		L_3 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_0, L_2, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		return;
	}

IL_000f:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_4 = ___1_visited;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_5 = ___0_subsystem;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_5, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_4, L_6, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_8 = ___3_pendingDependencies;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_9 = ___0_subsystem;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_8);
		bool L_11;
		L_11 = HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D(L_8, L_10, HashSet_1_Add_mF3D4CF6D0150392127D5561A87DCDEDA9A81BE5D_RuntimeMethod_var);
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_12 = ___0_subsystem;
		NullCheck(L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37)))(L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 37));
		V_0 = L_13;
		V_1 = 0;
		goto IL_009a;
	}

IL_0035:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		String_t* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_18 = __this->___m_Subsystems;
		String_t* L_19 = V_2;
		NullCheck(L_18);
		bool L_20;
		L_20 = InvokerFuncInvoker2< bool, String_t*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 38), L_18, L_19, (&V_3));
		if (L_20)
		{
			goto IL_0065;
		}
	}
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_21 = ___0_subsystem;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_21, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		String_t* L_23 = V_2;
		String_t* L_24;
		L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41893BA7A99DC52D8BE60380825325D2A8540963)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral96DF4500E5408A7ED26D010DF5824289A767048E)), L_23, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, method);
	}

IL_0065:
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_26 = ___3_pendingDependencies;
		String_t* L_27 = V_2;
		NullCheck(L_26);
		bool L_28;
		L_28 = HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853(L_26, L_27, HashSet_1_Contains_mAE49939A0DE08C4864E8560F3F7FCDAC2E193853_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_008b;
		}
	}
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_29 = ___0_subsystem;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_29, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		String_t* L_31 = V_2;
		String_t* L_32;
		L_32 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral575B4BE92F0D75E69C018C6AA4FBC530DDD4B595)), L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719)), L_31, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_33 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_008b:
	{
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_34 = V_3;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_35 = ___1_visited;
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_36 = ___2_sorted;
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_37 = ___3_pendingDependencies;
		((  void (*) (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32*, SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C*, HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32)))(__this, L_34, L_35, L_36, L_37, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 32));
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_009a:
	{
		int32_t L_39 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = V_0;
		NullCheck(L_40);
		int32_t L_41 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_40)->max_length),NULL));
		if ((((int32_t)L_39) < ((int32_t)L_41)))
		{
			goto IL_0035;
		}
	}
	{
		HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* L_42 = ___3_pendingDependencies;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_43 = ___0_subsystem;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = ((  String_t* (*) (SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36)))(L_43, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 36));
		NullCheck(L_42);
		bool L_45;
		L_45 = HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA(L_42, L_44, HashSet_1_Remove_m97303C08928AB7A9364E7908F34670D92348D9DA_RuntimeMethod_var);
		List_1_t0959B02E8A13802D52AEB6D95855853A62ABF67C* L_46 = ___2_sorted;
		SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* L_47 = ___0_subsystem;
		NullCheck(L_46);
		InvokerActionInvoker1< SubsystemEntry_t58F586D85FD189B1E822591274651EE233EC2C98* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 39), L_46, L_47);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedSubsystemGroup_2__ctor_m4971314A2748C765A98BF0C41A60B618A69F87B6_fshared (SortedSubsystemGroup_2_tF98113DE5B4C598E68F2FD704441CFE8CC36ED32* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06* L_0 = (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 40));
		((  void (*) (Dictionary_2_t23A73B008068728AC74BBCA1C96B9BE70160BE06*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 41));
		__this->___m_Subsystems = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Subsystems), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
void SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_Multicast(SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* currentDelegate = reinterpret_cast<SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_OpenStatic(SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m96DB983F9AFF7705E7BE7235169719F05CAFBCEF (SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_mF5F9D9BBBA38264893DED3C4B50FB51089AE9206 (SpanAction_2_t1C5C8112191AED3917994F761BC9E3D53AF59946* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_Multicast(SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* currentDelegate = reinterpret_cast<SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_OpenStatic(SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m005FD8E991161EFBD88B2290FB010B44764C1F8C_gshared (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m47CBAA653C2AF4E0B4D3CA9600C55A94FA090732_gshared (SpanAction_2_t7E9C729D70F4264C725B3A5B383D01398D40CB63* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_t94AB360726755BBED1ED3E10C22F399AE18E226E, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* currentDelegate = reinterpret_cast<SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic(SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m52B80F2401AFC1EDA0C92BDEC3320FB33A9FEB85 (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* currentDelegate = reinterpret_cast<SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic(SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_span, ___1_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_m779B33E518F02340D4E655DDF668877EE565FE88 (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_OpenStatic;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)__this->___method_ptr;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)__this->___method_ptr;
	}
	__this->___extra_arg = (intptr_t)SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47 (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2__ctor_mDA3D51C491A1F13D8CC15EB34D552737FFAE68E4_fshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_direct_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
		}
		else
		{
			__this->___method_code = (intptr_t)__this->___m_target;
			__this->___invoke_impl = (intptr_t)il2cpp_codegen_delegate_invoke_closed_static;
		}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		if (il2cpp_codegen_class_is_value_type(il2cpp_codegen_object_get_class(__this->___m_target)))
			__this->___method_code = (intptr_t)il2cpp_codegen_get_raw_data<void*>(__this->___m_target);
		else
			__this->___method_code = (intptr_t)__this->___m_target;
		__this->___invoke_impl = (intptr_t)((RuntimeMethod*)(__this->___method))->invoker_method;
	}
	__this->___extra_arg = (intptr_t)il2cpp_codegen_delegate_invoke_multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m4E51CE671BDBB67F3A2E93DA5AA706A80D9F166C_fshared (SpanAction_2_t5907E59A3FE410EE3FC9FC29F5E9418DF5894C8B* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, Il2CppFullySharedGenericAny ___1_arg, const RuntimeMethod* method) 
{
	void* args[3];
	args[1] = (&___0_span);
	args[2] = ___1_arg;
	((InvokerMethod)(__this->___invoke_impl))((Il2CppMethodPointer)__this->___method_ptr, (const MethodInfo*)__this->___method, (RuntimeObject*)__this->___method_code, args+1, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) 
{
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		goto IL_0037;
	}

IL_0037:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_3);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m765FCB0680C21585CA68C2AAF4134CAF0B0B8CDA (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_13;
		L_13 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_12);
		int32_t L_14 = ___1_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_15;
		L_15 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_13, L_14, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m91AC385C0D20CF2681930B42F725514728A692BC (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_2;
		L_2 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>((uint8_t*)L_1);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* Span_1_get_Item_m8E8969268E64F976EF39518F59AB065259D5C0DE (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_3, L_4, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m8AEAC2155626AE78035F937131FD538E199D4E91 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_0 = __this->____pointer;
		V_0 = L_0;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m119FEA630BE71DC5A9F28499E9396DD47AF6E132 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_4 = __this->____pointer;
		V_2 = L_4;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_13 = __this->____pointer;
		V_2 = L_13;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_21;
		L_21 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_22 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_21 = L_22;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_27;
		L_27 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_28 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_27 = L_28;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_33;
		L_33 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_34 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_33 = L_34;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_39;
		L_39 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_40 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_39 = L_40;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_45;
		L_45 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_46 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_45 = L_46;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_51;
		L_51 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_52 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_51 = L_52;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_57;
		L_57 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_58 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_57 = L_58;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_63;
		L_63 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_64 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_76;
		L_76 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_77 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_76 = L_77;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_82;
		L_82 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_83 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_82 = L_83;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_88;
		L_88 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_89 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_88 = L_89;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_94;
		L_94 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_95 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_101;
		L_101 = Unsafe_AddByteOffset_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_m318E9C3C56CB353F2852139BDCE9DEE4518C3FB0_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 L_102 = ___0_value;
		*(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m63CD6C06EA07F5469BCDE5B322F5729ADE6B6E38 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFAB3C81B4C721D97D620490285A98D10429F2C64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_2 = ___0_destination;
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3 = L_2.____pointer;
		V_0 = L_3;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE7C2573E0029C270D75B0F4784C8F76BC6C48BFF (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFAB3C81B4C721D97D620490285A98D10429F2C64_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_2 = ___0_destination;
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_3 = L_2.____pointer;
		V_1 = L_3;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_1));
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_1 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mD618DB2C245429ACF8A75C832187D8B9C709356F (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 Span_1_Slice_m0F99DBF5F2310808011038A0623EE5E04A3B68D1 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_2 = __this->____pointer;
		V_0 = L_2;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_5;
		L_5 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_3, L_4, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m404C8D000CBA5F757D0982610F73FE084C81D208_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 Span_1_Slice_m402DB446506FEEE48F616D7E02810941135AC380 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5 = __this->____pointer;
		V_0 = L_5;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_8;
		L_8 = il2cpp_unsafe_add<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96,int32_t>(L_6, L_7, sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		int32_t L_9 = ___1_length;
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m404C8D000CBA5F757D0982610F73FE084C81D208_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Span_1_ToArray_mAF807AFED1580F08F72F5B33920501D4B2379999 (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_1;
		L_1 = Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_3 = (EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)(EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_6;
		L_6 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_5);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_7 = __this->____pointer;
		V_0 = L_7;
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mE391F759232A81F0432F80E844CBA7DDB1004880(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m18DE1E7CA6BC2FFED2F42746BCCE00B28E06B24F (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m551D600E13A9CFE41959D21D8C48791838F7EEEF (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 Span_1_op_Implicit_m33DF9CAF0F5D0B6F32BF23A4746C8E070387F42F (EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) 
{
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) 
{
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9281853CEBD9A6003A40E179A340A790E331B575));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		goto IL_0037;
	}

IL_0037:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_3);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m08360408C8B3B9666E867E387E979F7F15B465AC_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9281853CEBD9A6003A40E179A340A790E331B575));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_13;
		L_13 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_12);
		int32_t L_14 = ___1_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_15;
		L_15 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_13, L_14, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6F3BA031C5C2D8471B4D3CB5E554E2B4B7FA2954_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>((uint8_t*)L_3);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		int32_t L_6 = ___1_length;
		__this->____length = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* Span_1_get_Item_m86E693DDFF462254F4C6DC492ED47261FA7D10D6_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_2 = __this->____pointer;
		V_0 = L_2;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_5;
		L_5 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_3, L_4, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDC78745117146595231057168D2FE11F2885F84C_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
	}
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_0 = __this->____pointer;
		V_0 = L_0;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		intptr_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<intptr_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>();
		int32_t L_6;
		L_6 = IntPtr_get_Size_m1FAAA59DA73D7E32BB1AB55DD92A90AFE3251DBE(NULL);
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)(L_5/L_6)),NULL));
		SpanHelpers_ClearWithReferences_m9641D8B6DC3AE81B4B0734BBA0E477EF131CD430(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_7)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mA73749CB21C7E640C8628625E19725A067BCDA3B_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_4 = __this->____pointer;
		V_2 = L_4;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_13 = __this->____pointer;
		V_2 = L_13;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_21;
		L_21 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_22 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_21 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_21)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_27;
		L_27 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_28 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_27 = L_28;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_27)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_33;
		L_33 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_34 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_33 = L_34;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_33)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_39;
		L_39 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_40 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_39 = L_40;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_39)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_45;
		L_45 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_46 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_45 = L_46;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_45)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_51;
		L_51 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_52 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_51 = L_52;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_51)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_57;
		L_57 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_58 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_57 = L_58;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_57)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_63;
		L_63 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_64 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_63 = L_64;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_63)->___compiledGraph), (void*)NULL);
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_76;
		L_76 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_77 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_76 = L_77;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_76)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_82;
		L_82 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_83 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_82 = L_83;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_82)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_88;
		L_88 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_89 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_88 = L_89;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_88)->___compiledGraph), (void*)NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_94;
		L_94 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_95 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_94 = L_95;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_94)->___compiledGraph), (void*)NULL);
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_101;
		L_101 = Unsafe_AddByteOffset_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m78EEAEF81A3C3319FFF850071CF2EF9ED5C60F8E_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 L_102 = ___0_value;
		*(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_101 = L_102;
		Il2CppCodeGenWriteBarrier((void**)&(((HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5*)L_101)->___compiledGraph), (void*)NULL);
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mF4EDEDD7BE5ACADC8FBF7BD8B17A2547C4990F14_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m70ECF63AA57B2B62F767D7B9290E6F6FD35B8E9E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_2 = ___0_destination;
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_3 = L_2.____pointer;
		V_0 = L_3;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_0 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mFAF3AFA2C625E8A2C58B57A3A45DDA5A48B8DBA7_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 ___0_destination, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m70ECF63AA57B2B62F767D7B9290E6F6FD35B8E9E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_2 = ___0_destination;
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_3 = L_2.____pointer;
		V_1 = L_3;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_1 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_4, L_6, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m8BFCFE2C513EA233A5823829446274762552CB57_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		bool L_0 = (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_1 = __this->____pointer;
		V_1 = L_1;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_2;
		L_2 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_1));
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_as_ref<Il2CppChar>(L_2);
		V_0 = L_3;
		Il2CppChar* L_4 = V_0;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppChar*,intptr_t,false,false>(L_4,NULL));
		int32_t L_6 = __this->____length;
		String_t* L_7;
		L_7 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, (Il2CppChar*)L_5, 0, L_6, NULL);
		return L_7;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_9);
		int32_t L_11 = __this->____length;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_10, L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 Span_1_Slice_mD970CA25323040A5DBCDF2A9EDEEE1CCA3A08A9B_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_2 = __this->____pointer;
		V_0 = L_2;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_5;
		L_5 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_3, L_4, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6155FEFF9D1ED3BEFB59AD09C85726773DDF93B8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 Span_1_Slice_m3F12F86E7D9B71FD13A3CC63C1BDE13C41313AA4_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5 = __this->____pointer;
		V_0 = L_5;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_8;
		L_8 = il2cpp_unsafe_add<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5,int32_t>(L_6, L_7, sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		int32_t L_9 = ___1_length;
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6155FEFF9D1ED3BEFB59AD09C85726773DDF93B8_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Span_1_ToArray_mCF414B56D9F8FEC8E3F500EFBB7272DCF3CFF6C0_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_1;
		L_1 = Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_3 = (HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)(HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_6;
		L_6 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_5);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_7 = __this->____pointer;
		V_0 = L_7;
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_mA8D04698C609F68E916C276ADC1E40C0EDB95A05(L_6, L_8, L_10, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m81DAC70E97EE5A77DFDB307A4115705555B181AC_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m547C83D126590FA3D5EBA6E0227BEAB3BC0686D4_gshared (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 Span_1_op_Implicit_m3C13024F2F0B9FEC8D2F3B3EB92C70E40E780F2F_gshared (HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) 
{
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		Span_1_t9281853CEBD9A6003A40E179A340A790E331B575 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		goto IL_0037;
	}

IL_0037:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_3);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m52A3645F38CA8049D5985DFF9831EBB9604BC617 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_13;
		L_13 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_12);
		int32_t L_14 = ___1_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_15;
		L_15 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_13, L_14, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mE34AF47CA1AEF88F324DB36E58EBCC83DF97B25D (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_2;
		L_2 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>((uint8_t*)L_1);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* Span_1_get_Item_mE96EC5B175A7C900958E79B54132B1CFE2BD4012 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_3, L_4, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m32A1E46B057FB6188C351016E6844798D3AAA35E (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_0 = __this->____pointer;
		V_0 = L_0;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m40ECA9BE7F8B994E3470DF58CCDAFA9E1C99A375 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_4 = __this->____pointer;
		V_2 = L_4;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_13 = __this->____pointer;
		V_2 = L_13;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_21;
		L_21 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_22 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_21 = L_22;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_27;
		L_27 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_28 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_27 = L_28;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_33;
		L_33 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_34 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_33 = L_34;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_39;
		L_39 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_40 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_39 = L_40;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_45;
		L_45 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_46 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_45 = L_46;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_51;
		L_51 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_52 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_51 = L_52;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_57;
		L_57 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_58 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_57 = L_58;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_63;
		L_63 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_64 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_76;
		L_76 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_77 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_76 = L_77;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_82;
		L_82 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_83 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_82 = L_83;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_88;
		L_88 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_89 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_88 = L_89;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_94;
		L_94 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_95 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_101;
		L_101 = Unsafe_AddByteOffset_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mFBC1C2E2A109009E468755957131CDC57584EFB5_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 L_102 = ___0_value;
		*(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m560497662D4E96B1B3A3FA76B1FE5560245240DB (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mCBA967D766B41C6F7A5A958282339CC12C808833_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_2 = ___0_destination;
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3 = L_2.____pointer;
		V_0 = L_3;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m4A70ADE735DF78F4862A31B9F120CF227AFE9D28 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mCBA967D766B41C6F7A5A958282339CC12C808833_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_2 = ___0_destination;
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_3 = L_2.____pointer;
		V_1 = L_3;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_1));
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_1 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mCB26AAAB3CD6F3F19C6964A94BF19D047D804749 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 Span_1_Slice_mC81FE88119F9DB7560AF0A0410944EFD9513BDA4 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_3, L_4, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6F9AD212C5B66737445B1DF6C4F0CA7389714683_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 Span_1_Slice_m1B4A62321477663C571B32972A406CA0BCB47B60 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_8;
		L_8 = il2cpp_unsafe_add<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62,int32_t>(L_6, L_7, sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		int32_t L_9 = ___1_length;
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6F9AD212C5B66737445B1DF6C4F0CA7389714683_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Span_1_ToArray_mBA64C5BA2AE3746C9D7DD4AEA0F955BDFDD21373 (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_1;
		L_1 = Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_3 = (NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)(NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_6;
		L_6 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_5);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_7 = __this->____pointer;
		V_0 = L_7;
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_m6931525DB5EBBF296FB06571C6E6FBD595137197(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m3DF14EB1C77DB92F4AEF91C3F30A7CDBD5A409EC (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mCB6A8495FD2FC93E1AF0D0BE96724B3B41F1DD6B (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 Span_1_op_Implicit_mE95BBBA20715AAE237BDB5386108375A02F2818B (NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) 
{
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m50844A32AD4AEDCC0396DEE94E2502155012D74D (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___0_array, const RuntimeMethod* method) 
{
	NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		goto IL_0037;
	}

IL_0037:
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_4;
		L_4 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>(L_3);
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB60C6356D215133E800A4D36E2AA0FACF16B2F7F (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_13;
		L_13 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>(L_12);
		int32_t L_14 = ___1_start;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_15;
		L_15 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_13, L_14, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m1479058931A05839F5406DF156A9714E8701BED7 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_2;
		L_2 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>((uint8_t*)L_1);
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* Span_1_get_Item_mE2B3E8A2DE2B5D945BD085CB8AF1C8C3B47C38EF (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_3, L_4, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m7B052C48EC2A7730A1DF63269CC3247B85C09338 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_0 = __this->____pointer;
		V_0 = L_0;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mA859703E094C7A4EF28F5AB1C4E028AD860345DF (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_4 = __this->____pointer;
		V_2 = L_4;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_13 = __this->____pointer;
		V_2 = L_13;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_21;
		L_21 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_22 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_21 = L_22;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_27;
		L_27 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_28 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_27 = L_28;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_33;
		L_33 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_34 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_33 = L_34;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_39;
		L_39 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_40 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_39 = L_40;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_45;
		L_45 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_46 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_45 = L_46;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_51;
		L_51 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_52 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_51 = L_52;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_57;
		L_57 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_58 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_57 = L_58;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_63;
		L_63 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_64 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_76;
		L_76 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_77 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_76 = L_77;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_82;
		L_82 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_83 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_82 = L_83;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_88;
		L_88 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_89 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_88 = L_89;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_94;
		L_94 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_95 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_101;
		L_101 = Unsafe_AddByteOffset_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mBA0B4802699A8F7C62D72D16E02D82607B183257_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C L_102 = ___0_value;
		*(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m8A15532FA3DCAB858D1AF85C6DF5F59077C9A975 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m57AB4E076AE2513019A3F2511A8BF676364E9A8E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 L_2 = ___0_destination;
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_3 = L_2.____pointer;
		V_0 = L_3;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m4407E92A69C86607B8FE55B9F18C05467BC01994 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m57AB4E076AE2513019A3F2511A8BF676364E9A8E_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 L_2 = ___0_destination;
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_3 = L_2.____pointer;
		V_1 = L_3;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_1));
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5 = __this->____pointer;
		V_1 = L_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mC2093C0C927C6882618C8D9A624081F6B16A5442 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 Span_1_Slice_m3ED7B8DE39308B5F81BA1CC356CF2338CBBA67A8 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_2 = __this->____pointer;
		V_0 = L_2;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_5;
		L_5 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_3, L_4, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m53A825C151E2E2BCE20593D77B94EF278410E335_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 Span_1_Slice_m5D0A0AE18152A8827A0FE0C3297B476EB3CB7078 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5 = __this->____pointer;
		V_0 = L_5;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_8;
		L_8 = il2cpp_unsafe_add<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C,int32_t>(L_6, L_7, sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		int32_t L_9 = ___1_length;
		Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m53A825C151E2E2BCE20593D77B94EF278410E335_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* Span_1_ToArray_m1F32EFC3EB3E83D4934668542F64B7BE06D9F89A (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_1;
		L_1 = Array_Empty_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_m3EDEED36320352D697788722957A3FCC32B74117_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_3 = (NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2*)(NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_6;
		L_6 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>(L_5);
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_7 = __this->____pointer;
		V_0 = L_7;
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_mAEF567F21308EFA541F6912B8AAB23C9C58593E9(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mA83EE03A3FFC886F9A37ADADC422A7AFD915F18C (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mB43F98AADF356D4450AC264530A5CE5C0E445EF5 (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 Span_1_op_Implicit_mB0E7994C02830E42A2EC07785DF44F1D2FAAEDC1 (NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___0_array, const RuntimeMethod* method) 
{
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_0 = ___0_array;
		Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m50844A32AD4AEDCC0396DEE94E2502155012D74D_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) 
{
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		goto IL_0037;
	}

IL_0037:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_3);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC8E70D60C33F5FC7E1EAAC9F3A37C5FE37FEDF14 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_13;
		L_13 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_12);
		int32_t L_14 = ___1_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_15;
		L_15 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_13, L_14, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m93EC666905AFE7358AEA8B00C5E74BD9B022A97C (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_2;
		L_2 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>((uint8_t*)L_1);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* Span_1_get_Item_m3FA98F14F73E0ED771694C1F52968D5F01FD3F39 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mDA0245EA87A6C895EC8FB84F5228EBEB74A1C7BC (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_0 = __this->____pointer;
		V_0 = L_0;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m30809101AA270F2507060BA01437AAFF0BCD9F54 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_4 = __this->____pointer;
		V_2 = L_4;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_13 = __this->____pointer;
		V_2 = L_13;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_21;
		L_21 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_22 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_21 = L_22;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_27;
		L_27 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_28 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_27 = L_28;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_33;
		L_33 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_34 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_33 = L_34;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_39;
		L_39 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_40 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_39 = L_40;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_45;
		L_45 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_46 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_45 = L_46;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_51;
		L_51 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_52 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_51 = L_52;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_57;
		L_57 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_58 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_57 = L_58;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_63;
		L_63 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_64 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_76;
		L_76 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_77 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_76 = L_77;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_82;
		L_82 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_83 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_82 = L_83;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_88;
		L_88 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_89 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_88 = L_89;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_94;
		L_94 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_95 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_101;
		L_101 = Unsafe_AddByteOffset_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_mE19592B57966221FB43225AE77F2EA6115D5ADB5_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 L_102 = ___0_value;
		*(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mC1169A2A7C0E4BD357661A55B140EF10EC25C5D4 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_0 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mCC90877220856C91553F4517E2286650781D13E4 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mBA6FA6140EADE76BD14920BDC6A3E87EDB72FB76_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_2 = ___0_destination;
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_3 = L_2.____pointer;
		V_1 = L_3;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_1 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mA05759AA6B2489741B18990E6B52AF862DF3ABD4 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 Span_1_Slice_mFE8F9E3631646358417C73821E05E760F7D466D5 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_2 = __this->____pointer;
		V_0 = L_2;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_5;
		L_5 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_3, L_4, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m764553AEFD6BC88DF9ACBDB153A1B2F390F345EA_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 Span_1_Slice_m326EDB8A15D0CB3BE202BE86CCFFF36934F9E4CF (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5 = __this->____pointer;
		V_0 = L_5;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = il2cpp_unsafe_add<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474,int32_t>(L_6, L_7, sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		int32_t L_9 = ___1_length;
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m764553AEFD6BC88DF9ACBDB153A1B2F390F345EA_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Span_1_ToArray_m94A34B711250B4D635D2D9FDBDB6774D7A298D82 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_1;
		L_1 = Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_3 = (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)(SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_6;
		L_6 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_5);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_7 = __this->____pointer;
		V_0 = L_7;
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m8B225EBD79F98163072E7428252E4FDAFE5A3E1A(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m3B40E6EB6E44517B9F6EFBE3E5C92DF157169055 (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mF790494540820D9E4F21DB0EED7A61366582C4FD (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 Span_1_op_Implicit_m3532EC1A5C91E4AE0FB4EFA26A2FFF213279AD34 (SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) 
{
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2C7A5F5E1E584A05CB6BE01B61F014B3D86795CC (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___0_array, const RuntimeMethod* method) 
{
	Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		goto IL_0037;
	}

IL_0037:
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_4;
		L_4 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>(L_3);
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m7F9508701E9FEB27AC4F5B7085DA04BAE43B8953 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_13;
		L_13 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>(L_12);
		int32_t L_14 = ___1_start;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_15;
		L_15 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_13, L_14, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m282F9B5620DFB028B452A9B13DAFCFC81EF46AD5 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_2;
		L_2 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>((uint8_t*)L_1);
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* Span_1_get_Item_mFB255154CFB05D1098E4D577ADB04CECECA691FC (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_3, L_4, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m9F4AEB7B9701BD9323BC070D55D7684051DC4E4B (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_0 = __this->____pointer;
		V_0 = L_0;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mAB34C52E57BB983F1ED3C0EAE11E51D131B18A62 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_4 = __this->____pointer;
		V_2 = L_4;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_13 = __this->____pointer;
		V_2 = L_13;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_21;
		L_21 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_22 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_21 = L_22;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_27;
		L_27 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_28 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_27 = L_28;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_33;
		L_33 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_34 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_33 = L_34;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_39;
		L_39 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_40 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_39 = L_40;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_45;
		L_45 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_46 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_45 = L_46;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_51;
		L_51 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_52 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_51 = L_52;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_57;
		L_57 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_58 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_57 = L_58;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_63;
		L_63 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_64 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_76;
		L_76 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_77 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_76 = L_77;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_82;
		L_82 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_83 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_82 = L_83;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_88;
		L_88 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_89 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_88 = L_89;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_94;
		L_94 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_95 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_101;
		L_101 = Unsafe_AddByteOffset_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_mCCEFFF60B113E1DAA3653FC4D982672CB2D9CDB5_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 L_102 = ___0_value;
		*(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m2EF72E981C35316F63D91D13C4E3E21888A800D9 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m21DC00319E707013DDD090C3B128550E3903949A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 L_2 = ___0_destination;
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_3 = L_2.____pointer;
		V_0 = L_3;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB5D3D18FC345345C917CA7DE8D552C60BF9B2D42 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m21DC00319E707013DDD090C3B128550E3903949A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 L_2 = ___0_destination;
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_3 = L_2.____pointer;
		V_1 = L_3;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_1));
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5 = __this->____pointer;
		V_1 = L_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mE9D1958175203331EC9D6B57922619A72A263223 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 Span_1_Slice_m4B3FA6DF844BB017D9F2146866C26FE866E53240 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_3, L_4, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m8E8E1B1804885AB2ECC6208062A7281CF490B69A_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 Span_1_Slice_mD5AE898FD858A3C4D7B35E78FC5643674F5C27D7 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_8;
		L_8 = il2cpp_unsafe_add<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58,int32_t>(L_6, L_7, sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		int32_t L_9 = ___1_length;
		Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m8E8E1B1804885AB2ECC6208062A7281CF490B69A_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* Span_1_ToArray_mFBEF436CBC66F5DE6EDD0168A589CA2F4AB92C1E (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_1;
		L_1 = Array_Empty_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m24487CD12F55B7FCBB5515F505441ECA91E850FC_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_3 = (Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A*)(Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_6;
		L_6 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>(L_5);
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_7 = __this->____pointer;
		V_0 = L_7;
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m8D063C3550F50DB141C43F4EFE3D9A04C7620B80(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mA9AC8531BA332B33693BE99C665C52BE1A8627D4 (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m2E4953DCAFF993E4AD4219526F58649B8596C0CA (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 Span_1_op_Implicit_mDC2BFFDF59AC4C84BC6A42DFA9F0E58FA10897EF (Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___0_array, const RuntimeMethod* method) 
{
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_0 = ___0_array;
		Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m2C7A5F5E1E584A05CB6BE01B61F014B3D86795CC_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mEC6ABC58D9B0430009F2CA47F6400C1339B85A32 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___0_array, const RuntimeMethod* method) 
{
	Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		goto IL_0037;
	}

IL_0037:
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_4;
		L_4 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>(L_3);
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4374F7734003B8F4CAE899C151479BC8B9743C1D (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_13;
		L_13 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>(L_12);
		int32_t L_14 = ___1_start;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_15;
		L_15 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_13, L_14, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m20078C368A99E2A21E2E54CF3E68EE59731A2FE6 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_2;
		L_2 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>((uint8_t*)L_1);
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* Span_1_get_Item_m97DD2ADC334BAB847F2BECDC7C9FE02627C1C957 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_3, L_4, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mAF47F5E6274A705FEC6D31FD4D1043CA59AB050F (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_0 = __this->____pointer;
		V_0 = L_0;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_mB64E36D00D219422F8242354BEADE208B3069C3E (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_4 = __this->____pointer;
		V_2 = L_4;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_13 = __this->____pointer;
		V_2 = L_13;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_21;
		L_21 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_22 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_21 = L_22;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_27;
		L_27 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_28 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_27 = L_28;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_33;
		L_33 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_34 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_33 = L_34;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_39;
		L_39 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_40 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_39 = L_40;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_45;
		L_45 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_46 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_45 = L_46;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_51;
		L_51 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_52 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_51 = L_52;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_57;
		L_57 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_58 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_57 = L_58;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_63;
		L_63 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_64 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_76;
		L_76 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_77 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_76 = L_77;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_82;
		L_82 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_83 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_82 = L_83;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_88;
		L_88 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_89 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_88 = L_89;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_94;
		L_94 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_95 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_101;
		L_101 = Unsafe_AddByteOffset_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m74CEB2B1B8F522FC216DC90DC64B8C95E374DC5A_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 L_102 = ___0_value;
		*(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mEA6CF42D44FAF601BA4AD49CBA3129B9BD2DA421 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4CB2A026D0C116105827DAA5FAC274E57299FC6A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD L_2 = ___0_destination;
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_3 = L_2.____pointer;
		V_0 = L_3;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mDB575E3EEF1D717AFB388111088590AD874D99D6 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m4CB2A026D0C116105827DAA5FAC274E57299FC6A_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD L_2 = ___0_destination;
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_3 = L_2.____pointer;
		V_1 = L_3;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_1));
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5 = __this->____pointer;
		V_1 = L_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m2E9FB7560A7D961FA7459BFC0E564982AAE260D1 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD Span_1_Slice_m29A19FFB575CCE82EF862925FF54D758A66592F0 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_2 = __this->____pointer;
		V_0 = L_2;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_5;
		L_5 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_3, L_4, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mF06D8D5459BD363650860ADEC5251F2037756FCD_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD Span_1_Slice_m059D92AB22F42724293AE23701D311B73D5964EE (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5 = __this->____pointer;
		V_0 = L_5;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_8;
		L_8 = il2cpp_unsafe_add<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6,int32_t>(L_6, L_7, sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		int32_t L_9 = ___1_length;
		Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mF06D8D5459BD363650860ADEC5251F2037756FCD_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* Span_1_ToArray_m4D22EEB410A13B82E80644B25CEC04EDD0A299B1 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_1;
		L_1 = Array_Empty_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m748F1A71A7DD69BB388C8731921DA551609F490F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_3 = (Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6*)(Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_6;
		L_6 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>(L_5);
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_7 = __this->____pointer;
		V_0 = L_7;
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m874FB990BD4C4CAB728D63F58851BF2EABBEB10D(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m97191C75C32E2649CB70BBA04BCC70304B5C7C04 (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m7307033A32E575C296F799BE3E2C9F4AD35414DC (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD Span_1_op_Implicit_m2304D2C25025AC6C20F9E1D3390B7BEB3A293904 (Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___0_array, const RuntimeMethod* method) 
{
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_0 = ___0_array;
		Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mEC6ABC58D9B0430009F2CA47F6400C1339B85A32_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_3);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mEB120F63D087165AB27CF9998D5AC1C20BF06E25 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_13, L_14, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCD760E76D1D60CE0C91D05CA08F85E9F47199601 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>((uint8_t*)L_1);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* Span_1_get_Item_mE59F157EA3C2A061068840E75C902BD2E4C06062 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_3, L_4, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m6816B3283828B8F350B4323C441C70C4E3459726 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m94E31F46A3BAA929830CD23BB17B3C6843F2D4C8 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_22 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_21 = L_22;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_28 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_27 = L_28;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_34 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_33 = L_34;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_40 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_39 = L_40;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_46 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_45 = L_46;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_52 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_51 = L_52;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_58 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_57 = L_58;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_64 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_77 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_76 = L_77;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_83 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_82 = L_83;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_89 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_88 = L_89;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_95 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mFACDF76474D33FF99CD8DF5BFEF4E292955D66E0_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD L_102 = ___0_value;
		*(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mF809E8C1C5A692BD8C019C762AE416FB10B9E7DC (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAE734F1E7D866942E70763D9232D006153CC93C8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_2 = ___0_destination;
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m869BAF8FA053DF64794436706B267873A623614D (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mAE734F1E7D866942E70763D9232D006153CC93C8_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_2 = ___0_destination;
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_1));
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m6359F701CD51543C6A601C03C99CA288FE2634FB (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A Span_1_Slice_m82A22A6BF9C659698A52794685C855C14F82B5F7 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_3, L_4, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m75C44EF3448A75BC5A7F2F55234E5942B61EC136_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A Span_1_Slice_m25979DE05A978F880323B905794DE15D8FE6328E (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD,int32_t>(L_6, L_7, sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		int32_t L_9 = ___1_length;
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m75C44EF3448A75BC5A7F2F55234E5942B61EC136_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Span_1_ToArray_m0433E434C948C7486B1E02064A9A8D861ED49EB8 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_3 = (UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)(UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_5);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_mC690AEF1F47ED7A260D15E587C4C342E207B8C32(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m29B87DCEF91003E93589A97104D36962288D6A32 (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mEFC37120EDF5194C6F4DC4D9A520CC593D9FD6ED (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A Span_1_op_Implicit_m4ED63D3B7F6E43BFFDC5A0CEB3D3E9C4759856BC (UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_3);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m3EAACC465F2728B3FCC097B9469A6C64BF3B9E8C (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC2DDBC7F1E4B1502E5E17A16F2F01C1C6F326A22 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>((uint8_t*)L_1);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* Span_1_get_Item_mBCD2C29CEC5F1D4514856B0AAD42D1E89B0B91D8 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m443DF86A389A626E83F7CA0A6165857F6258442C (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m62ADDF9943FC8F41D42BA9A423761025084A18AC (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_22 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_21 = L_22;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_28 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_27 = L_28;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_34 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_33 = L_34;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_40 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_39 = L_40;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_46 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_45 = L_46;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_52 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_51 = L_52;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_58 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_57 = L_58;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_64 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_77 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_76 = L_77;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_83 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_82 = L_83;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_89 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_88 = L_89;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_95 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m631DCB51856ABF37A9A05EF9BC3A37A0259D29BE_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D L_102 = ___0_value;
		*(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mA6523702938C88C2EFB54A879F83529B0A8A69FC (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m757FB90F888A97214E70C7D7DB66DCBB57ED9317_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_2 = ___0_destination;
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB44DCF9393E766A8A45F675625EA35E6C145D0AD (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m757FB90F888A97214E70C7D7DB66DCBB57ED9317_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_2 = ___0_destination;
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_1));
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mB4612DFCA3200E2A1534E408D3BB75FFDD61FC19 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 Span_1_Slice_m6685667D6B9F94BADBAA5985C96682F67D3BC11D (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC7F51584BCC29D5FFC34B030A66E3BD7BB3CC1CF_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 Span_1_Slice_mC6BE206F68B19C49044C5BAAF24C370C255BD70C (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		int32_t L_9 = ___1_length;
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC7F51584BCC29D5FFC34B030A66E3BD7BB3CC1CF_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Span_1_ToArray_mAAF470629CCF256E6649556B83C5220B03353D80 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tC71D682DBC538763066DF671429413D25394012A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_3 = (UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)(UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_5);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_m5753FD640BD432A226561D50E1F14CBEEFFFB9B2(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mEF401701143DE7BD63CEA1610B13C1F8E73D8871 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mFD62E46C0AAF57D3A594DFFF181972B37D860B76 (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 Span_1_op_Implicit_m2D43EDAB4138CD3C27A34FD4B834EFD0D9356430 (UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_3);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m07A88B43B828D4D18F35C99D21396D45D954C68E (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mA5A0BF5724450A9BDDFD382FFE25DBDE7F862180 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>((uint8_t*)L_1);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* Span_1_get_Item_mCF2043DA85E74A412B904F8DE43810CB8FD7E8B7 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mE6270F4E9B1AB89BD2EBF7322F963ED199EE7C14 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C0542D2FCB76AF312A75A0B84E7A09E7C7F3BA8 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_22 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_21 = L_22;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_28 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_27 = L_28;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_34 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_33 = L_34;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_40 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_39 = L_40;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_46 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_45 = L_46;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_52 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_51 = L_52;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_58 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_57 = L_58;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_64 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_77 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_76 = L_77;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_83 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_82 = L_83;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_89 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_88 = L_89;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_95 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m75F13670451B78FB3F202803CB3FF03F6F4464D1_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 L_102 = ___0_value;
		*(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m557F4422D0763106704F696E0CCF67C6A973899E (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9A18653FCB90AB3ACEBA696165B559FB2BC04AD7_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_2 = ___0_destination;
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mB11D809DBAB321B85BC00358EA9B1F52BBC34B4A (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m9A18653FCB90AB3ACEBA696165B559FB2BC04AD7_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_2 = ___0_destination;
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_1));
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m1C727A965377D641FD1B1259751153C5177367A8 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB Span_1_Slice_m6F04677E01DFE3DA5458224D4182F47CB29773F6 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mDE271D9C61A54E84DF1147AC9CB9CD0C7DD5EC49_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB Span_1_Slice_m8A21E2C07ED55EE608C0BDE934F066EEDCD158F8 (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		int32_t L_9 = ___1_length;
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mDE271D9C61A54E84DF1147AC9CB9CD0C7DD5EC49_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Span_1_ToArray_m1BD407B90493431BD682E3FDF4F788CFC181D4FC (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_3 = (UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)(UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_5);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_mC45CF9E0F2492C756D55FAAD0F34035EAC00922D(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mB07CCF4744D984F83A75FC2E232687736D7B2D0F (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m443329FC7B50D8FC3BD8AA8DCE57AAED68F34ACC (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB Span_1_op_Implicit_mD637169410FBFF42AB98D1F632560A627E7DDE53 (UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_3);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mCFB55D0B65B28CE75479FD2A134B27656ECC0942 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m6ADD331F0D92A3870D32BE1A7131D733CDCABE32 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>((uint8_t*)L_1);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* Span_1_get_Item_m23B3181B5A10E913A0BA14327C586AEC79239560 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m4A5A52C2A22AAD42249BDA3D20C4502C1E408DC9 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m7CC14C9FCED1FE7FB07ECE279A1124FC6F17FA72 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_22 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_21 = L_22;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_28 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_27 = L_28;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_34 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_33 = L_34;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_40 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_39 = L_40;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_46 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_45 = L_46;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_52 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_51 = L_52;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_58 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_57 = L_58;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_64 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_77 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_76 = L_77;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_83 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_82 = L_83;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_89 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_88 = L_89;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_95 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mBD74F2D11CDD23A5974DC3CB5941374A285FD2F6_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B L_102 = ___0_value;
		*(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m3E3DD5F2EAEFF842AF476104A8A3F5310233FC1A (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64759923EC787AC67D237C126B1F9912A0757B25_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_2 = ___0_destination;
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m84DA35D8F1C9B4EDDD3E8742E1565D6BA1DA46B6 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m64759923EC787AC67D237C126B1F9912A0757B25_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_2 = ___0_destination;
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_1));
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m17AFE93C4FEDB4DCCEA0A11F7DE7861BCEB9132F (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 Span_1_Slice_mAEB6D2A76FD80238D94BFE1E661D77993C6947CA (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m8999409384FA9CB77163485B0CA6E8E661F8A5A0_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 Span_1_Slice_m421C7CA252D123CF803628EB5BBF3D6671D67709 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		int32_t L_9 = ___1_length;
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m8999409384FA9CB77163485B0CA6E8E661F8A5A0_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Span_1_ToArray_m926189B3634117CEB94039BA14B9826E6F014978 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_3 = (UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)(UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_5);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mEE1B8052EF8A53F69256C0CA82FEBB3DBA8851BD(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m92F4AECB665FB16515F9CA95FC3844FB561EB82C (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mFB8867308831A65DE86BED04484B21BFAD0F9660 (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 Span_1_op_Implicit_mFAFC3CC51DDC4D0DF25F801AA859B608B5B32C24 (UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_3);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m4600F85579754891FAD58FAE38F6EE822B0BA6D5 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mF6EAF5FC28EB6219AA09DF3755DA560BAF70D53A (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>((uint8_t*)L_1);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* Span_1_get_Item_m93D03F68F6583A141C969988B89A0E87624FB6A1 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mB0D3BE6A9C200D990BAA2338DAFA515047A034A9 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m4B97A81D2977748DA57ED738F9E178E7D53B9C2B (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_22 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_21 = L_22;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_28 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_27 = L_28;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_34 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_33 = L_34;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_40 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_39 = L_40;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_46 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_45 = L_46;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_52 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_51 = L_52;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_58 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_57 = L_58;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_64 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_77 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_76 = L_77;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_83 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_82 = L_83;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_89 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_88 = L_89;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_95 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m8DADA522FE8CD088335B06DC78F57E3E23FE2C77_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 L_102 = ___0_value;
		*(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m937413E19EC9BDDF48E0A278EAED7692B88030FD (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m25AA5DB60DDFA74CDC6FC67BCE440F807F40C824_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_2 = ___0_destination;
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mAD1A3BDD8A6980C2EDCAD424CCF2A8686E091CC3 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m25AA5DB60DDFA74CDC6FC67BCE440F807F40C824_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_2 = ___0_destination;
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_1));
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mAF55D74CCE1EF33A3042CFB18ACDBC86163A81B8 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 Span_1_Slice_mC13F579FEDB75708CC9AA630F2F615A1D98090E8 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m0AFDAF2851C62510441729AD03DDAD3F885CE919_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 Span_1_Slice_m5C314F2AC609C753A644364CEA160BB6562B9B7C (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		int32_t L_9 = ___1_length;
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m0AFDAF2851C62510441729AD03DDAD3F885CE919_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Span_1_ToArray_mD8D4A4F707FEDAA3C7CFD0F5AEDBEC3BDDDD0D6E (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_3 = (UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)(UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_5);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_mF923EFF1994ED30D7E774A6A60C3E27D9A9CFEB0(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_mE1049830D8BAC0AA27BDF774D42C39639A4EC6C1 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m86C158807C265E57FCDEF847BA75B782D5FB73D4 (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 Span_1_op_Implicit_m52463DFE2B7FDCA3CF662D1DBFD055EEFA08CD7D (UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_3);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAF1045013005353C5E4B019A07C8A8351FABD6DF (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m80BA689FBFEC7232D71296B875817FFE91763632 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>((uint8_t*)L_1);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* Span_1_get_Item_m9EBF959C5B6E53B21D02B051C49BAB381AC97ED6 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m1A5EDBEDD5FDFB5CC99C271EA3DFE5A3FAAF0F13 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m02075282B4331BC6F7E134FAF46634F21AD65FDB (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_22 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_21 = L_22;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_28 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_27 = L_28;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_34 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_33 = L_34;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_40 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_39 = L_40;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_46 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_45 = L_46;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_52 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_51 = L_52;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_58 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_57 = L_58;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_64 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_77 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_76 = L_77;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_83 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_82 = L_83;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_89 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_88 = L_89;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_95 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m3AD33D3B98CBFA421AC69248E0930238D5B56DEA_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 L_102 = ___0_value;
		*(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m966ADCD41107EA1A4C1E05007925917C542679B8 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFD0E4725CBEC468524ED6C42354367A9A7359B95_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_2 = ___0_destination;
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m2AD106C32FD7F85941B40DC0D7293FB7B1FCCD2E (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mFD0E4725CBEC468524ED6C42354367A9A7359B95_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_2 = ___0_destination;
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_1));
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m3BA4FB945922D4B4A251510A7C587E40757653DA (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 Span_1_Slice_mCA83584AB999DF0CB7A4560B9DB5DD660FB76365 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m6C79FDD9CF4874F31512B09FA549A87AE1BDCB7B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 Span_1_Slice_mC9360F4AAB6E1C53AD165D7A2F284013F1D1A5D6 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		int32_t L_9 = ___1_length;
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m6C79FDD9CF4874F31512B09FA549A87AE1BDCB7B_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Span_1_ToArray_m7515C8C7E9738D790DE8384C47E6E3B3657F1A58 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_3 = (UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)(UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_5);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m31B03CF22D0E106887FFB49A9FD2BEC54BEB659C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m50F5E19560069A015BD94846D98FBD2C60286A8B (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m34DE049BFA5AEFC6B523E5F6385E134C84C08770 (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 Span_1_op_Implicit_mCD6AAEE2F9FF9FF00389CF2EF2A94F7452BA5B8A (UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_3);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m5743CB5CE8BF7821A3C12F4D33CCDC2F79AEDBC4 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB5848FC89FF4FA4C840490F7B631C114712FDCEF (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>((uint8_t*)L_1);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* Span_1_get_Item_mB1CB402F28E73BD24387747491B1313432B9E926 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m3C92EA369D5849A1D4F66304AF3A6C3EA71917FC (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m9FE8C82064852A9FD3B738CC5AC6DAE2EB7AFDC9 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_22 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_21 = L_22;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_28 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_27 = L_28;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_34 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_33 = L_34;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_40 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_39 = L_40;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_46 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_45 = L_46;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_52 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_51 = L_52;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_58 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_57 = L_58;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_64 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_77 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_76 = L_77;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_83 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_82 = L_83;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_89 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_88 = L_89;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_95 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m3CF7F7B6098DBEA396DD935C6CA7232C173A5B86_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF L_102 = ___0_value;
		*(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7DB365B4D4DC06FDC982C63D333EA2C686775234 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m796AE228F2062910CC25672EFEBF8E6F196B79BB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_2 = ___0_destination;
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m82DE8940FF58AD1B0BBA0A7840AEFC4B2EB6BC8A (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m796AE228F2062910CC25672EFEBF8E6F196B79BB_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_2 = ___0_destination;
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_1));
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mA208304745EC30E5DA111BB59BE441B468287495 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 Span_1_Slice_m09A5277285059A193F9FAAA0938413F396651742 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5226151E7563D0A66ED571261D440B586FFCDD2F_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 Span_1_Slice_mA252F655049D5F4010FDEB61B3CDABFA9920E8A3 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		int32_t L_9 = ___1_length;
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5226151E7563D0A66ED571261D440B586FFCDD2F_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Span_1_ToArray_m7D57138097F61B5BB72135219A89048D7B5D738A (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_3 = (UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)(UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_5);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_m531E222DA3CEAB4F838160BE8BF0D076B903940C(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m588E547E188D000EE81E81C20BE5236C9DCA2FE1 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m469AAB62A21E1B3ADADEF5753CBFFD1BDA88C547 (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 Span_1_op_Implicit_m47E0D9DD43461FFDE2F8512B70088F324FA41E38 (UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_3);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m2217586FA46E95239066E31BAEA80B7428DF97E4 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m86B90450AEECAC62E35ACB59CFC8E9725FC52FBD (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>((uint8_t*)L_1);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* Span_1_get_Item_m02648D5BFC1E18F28E93E9EC93092307E9667C4F (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_m838A7E98430246C26C6083C6594571D9ECD5DE9E (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m0A3F6E6EDBCBDEBFD8ABE77316C2C21C62C898F5 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_22 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_21 = L_22;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_28 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_27 = L_28;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_34 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_33 = L_34;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_40 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_39 = L_40;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_46 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_45 = L_46;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_52 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_51 = L_52;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_58 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_57 = L_58;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_64 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_77 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_76 = L_77;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_83 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_82 = L_83;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_89 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_88 = L_89;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_95 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_mFFD4C1307EBA3B79C96B84B10D6BDB4B870911C4_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 L_102 = ___0_value;
		*(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_mCB7CBF4F54097610DD7E65CB47D45D86C42250ED (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mEF91E66E45055A28639FAA49F9338605E2E05F7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_2 = ___0_destination;
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_mE2C99EFC1D088527613A152B85E6CEC2B89679AC (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mEF91E66E45055A28639FAA49F9338605E2E05F7C_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_2 = ___0_destination;
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_1));
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_mDB032014FDD0C4D4166F353A33DFBA9158BCBFD4 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 Span_1_Slice_m7B2ED9FA65B5EC296E3E7936F501CB25EC0C9A5B (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m7AA4D2DF6CB6D0B400BBDD79DE188410C9010D38_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 Span_1_Slice_m8B0215E2EBF985788BB6D0B2D15ACAC1DDDB0C59 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		int32_t L_9 = ___1_length;
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m7AA4D2DF6CB6D0B400BBDD79DE188410C9010D38_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Span_1_ToArray_m44AF167628E559E4683E5B0155808821B10A1ED0 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_3 = (UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)(UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_5);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m6B7919683C297F7E18711B5748ED3690747AF645(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m9227067ECC252360A23FB7ADF93574DAA2515BB3 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_mCE754C4C383E5230F9257E91E1893489B778DEC6 (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 Span_1_op_Implicit_mE19AC1282131147BD821FE0ABF1DD2509202C571 (UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_3);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mAB15C86FC76FA38665DCBC4288E89DAA705ED2CC (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mC36B7168C49463F690CAA15E9E12C69665E48CC0 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>((uint8_t*)L_1);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* Span_1_get_Item_m690481E34FA1E8F653635F7801C3E901E709056E (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mD01E00136BAE0BEEB17B55ACBAE674FE400EBF13 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m0676D6CFBC2AA3594DFF164D7202195FAB92687F (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_22 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_21 = L_22;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_28 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_27 = L_28;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_34 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_33 = L_34;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_40 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_39 = L_40;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_46 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_45 = L_46;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_52 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_51 = L_52;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_58 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_57 = L_58;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_64 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_77 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_76 = L_77;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_83 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_82 = L_83;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_89 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_88 = L_89;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_95 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m15608B9354E4EBB75A88EA9F1DE25CA2B3F1EE71_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 L_102 = ___0_value;
		*(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m9B3D55AB8FE56BC62F708B71F4BB99339F6D0BBE (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB346D5ACE2098245EF5F8BDB45CD7299937039AA_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_2 = ___0_destination;
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m363DBF1A3F3090E8C6B467E99BDC242526FF412E (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_mB346D5ACE2098245EF5F8BDB45CD7299937039AA_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_2 = ___0_destination;
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_1));
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m1859E5835C5F9A3FC0576A2C908686C2A573BC24 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 Span_1_Slice_m82C46F92BD7DD431423FC0E2AD0568C9BC8E1CFA (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m5651C53E50085A171A2D1AD856B133BE630338A0_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 Span_1_Slice_m440CF563595FAC0BD7DE0D0BEB7E38BBDE78A8E1 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		int32_t L_9 = ___1_length;
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m5651C53E50085A171A2D1AD856B133BE630338A0_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Span_1_ToArray_m45EDBDE0E0DE926FC18D9136722082841F0DA15C (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_3 = (UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)(UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_5);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_m43B235BFDAED5E73065C5516FB27FCE903846724(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m68E7072A3882D69552B8836E89C9176EB5722871 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m92AC1F31E11EED5561A25DBAEB927D99F5E96814 (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 Span_1_op_Implicit_mD8495AC74F4845EA707580BE42F60BCA1660FCC9 (UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline((&L_1), L_0, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_3);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m8438174C73ADB4EB54C6DAF0A9BF3B492578E71F (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_4 = ___1_start;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		if ((!(((uint32_t)L_4) <= ((uint32_t)L_6))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_7 = ___2_length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		int32_t L_10 = ___1_start;
		if ((!(((uint32_t)L_7) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_11 = ___0_array;
		NullCheck((RuntimeArray*)L_11);
		uint8_t* L_12;
		L_12 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_11, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_13;
		L_13 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_12);
		int32_t L_14 = ___1_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_15;
		L_15 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_13, L_14, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_16;
		memset((&L_16), 0, sizeof(L_16));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_16), L_15);
		__this->____pointer = L_16;
		int32_t L_17 = ___2_length;
		__this->____length = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1__ctor_m949C38ECF435BE7A0603891792356314B45422B7 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_1 = ___0_pointer;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_2;
		L_2 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>((uint8_t*)L_1);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3;
		memset((&L_3), 0, sizeof(L_3));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_3), L_2);
		__this->____pointer = L_3;
		int32_t L_4 = ___1_length;
		__this->____length = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* Span_1_get_Item_mCCA3328CA077F08201A90E0B71D2F6FF51E5E49F (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Clear_mA6CC039E91CD79EB99BDD9C86EA5D0B17A6FFF19 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		goto IL_0034;
	}

IL_0034:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_0 = __this->____pointer;
		V_0 = L_0;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_1;
		L_1 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		uint8_t* L_2;
		L_2 = il2cpp_unsafe_as_ref<uint8_t>(L_1);
		int32_t L_3 = __this->____length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5;
		L_5 = il2cpp_unsafe_sizeof<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>();
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		SpanHelpers_ClearWithoutReferences_m65DB2925AE7A5FF88BB3EA1BF90513C9ADF0653D(L_2, ((int64_t)il2cpp_codegen_multiply(L_4, L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m043780EF11E6AF8B3E983C9BF306D16DF9F3F5F9 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A ___0_value, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A V_1;
	memset((&V_1), 0, sizeof(V_1));
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint64_t V_3 = 0;
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* V_4 = NULL;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = il2cpp_unsafe_sizeof<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_1 = __this->____length;
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_3 = ___0_value;
		V_1 = L_3;
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_4 = __this->____pointer;
		V_2 = L_4;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_5;
		L_5 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_2));
		uint8_t* L_6;
		L_6 = il2cpp_unsafe_as_ref<uint8_t>(L_5);
		uint8_t* L_7;
		L_7 = il2cpp_unsafe_as_ref<uint8_t>((&V_1));
		int32_t L_8 = ((int32_t)*(L_7));
		uint32_t L_9 = V_0;
		Unsafe_InitBlockUnaligned_m6F2353EB9ABC9320E61629FAEE23948C80BFF03A(L_6, (uint8_t)L_8, L_9, NULL);
		return;
	}

IL_0037:
	{
		int32_t L_10 = __this->____length;
		uint64_t L_11 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_10,NULL));
		V_3 = L_11;
		uint64_t L_12 = V_3;
		if (L_12)
		{
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_13 = __this->____pointer;
		V_2 = L_13;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_14;
		L_14 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_2));
		V_4 = L_14;
		int32_t L_15;
		L_15 = il2cpp_unsafe_sizeof<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>();
		uint64_t L_16 = (il2cpp_codegen_conv<uint64_t,int32_t,int32_t,false,false>(L_15,NULL));
		V_5 = L_16;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(0,NULL));
		V_6 = L_17;
		goto IL_0110;
	}

IL_0064:
	{
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_18 = V_4;
		uint64_t L_19 = V_6;
		uint64_t L_20 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_21;
		L_21 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_18, ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_22 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_21 = L_22;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_23 = V_4;
		uint64_t L_24 = V_6;
		int64_t L_25 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_26 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_27;
		L_27 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_23, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_24, L_25)), (int64_t)L_26)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_28 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_27 = L_28;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_29 = V_4;
		uint64_t L_30 = V_6;
		int64_t L_31 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_32 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_33;
		L_33 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_29, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_30, L_31)), (int64_t)L_32)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_34 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_33 = L_34;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_35 = V_4;
		uint64_t L_36 = V_6;
		int64_t L_37 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_38 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_39;
		L_39 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_35, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_36, L_37)), (int64_t)L_38)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_40 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_39 = L_40;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_41 = V_4;
		uint64_t L_42 = V_6;
		int64_t L_43 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		uint64_t L_44 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_45;
		L_45 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_41, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_42, L_43)), (int64_t)L_44)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_46 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_45 = L_46;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_47 = V_4;
		uint64_t L_48 = V_6;
		int64_t L_49 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(5,NULL));
		uint64_t L_50 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_51;
		L_51 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_48, L_49)), (int64_t)L_50)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_52 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_51 = L_52;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_53 = V_4;
		uint64_t L_54 = V_6;
		int64_t L_55 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(6,NULL));
		uint64_t L_56 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_57;
		L_57 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_54, L_55)), (int64_t)L_56)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_58 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_57 = L_58;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_59 = V_4;
		uint64_t L_60 = V_6;
		int64_t L_61 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(7,NULL));
		uint64_t L_62 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_63;
		L_63 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_60, L_61)), (int64_t)L_62)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_64 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_63 = L_64;
		uint64_t L_65 = V_6;
		int64_t L_66 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(8,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_65, L_66));
	}

IL_0110:
	{
		uint64_t L_67 = V_6;
		uint64_t L_68 = V_3;
		int64_t L_69 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-8),NULL));
		if ((!(((uint64_t)L_67) >= ((uint64_t)((int64_t)((int64_t)L_68&L_69))))))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_70 = V_6;
		uint64_t L_71 = V_3;
		int64_t L_72 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)-4),NULL));
		if ((!(((uint64_t)L_70) < ((uint64_t)((int64_t)((int64_t)L_71&L_72))))))
		{
			goto IL_0198;
		}
	}
	{
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_73 = V_4;
		uint64_t L_74 = V_6;
		uint64_t L_75 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_76;
		L_76 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_73, ((int64_t)il2cpp_codegen_multiply((int64_t)L_74, (int64_t)L_75)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_77 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_76 = L_77;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_78 = V_4;
		uint64_t L_79 = V_6;
		int64_t L_80 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		uint64_t L_81 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_82;
		L_82 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_78, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_79, L_80)), (int64_t)L_81)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_83 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_82 = L_83;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_84 = V_4;
		uint64_t L_85 = V_6;
		int64_t L_86 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(2,NULL));
		uint64_t L_87 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_88;
		L_88 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_84, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_85, L_86)), (int64_t)L_87)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_89 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_88 = L_89;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_90 = V_4;
		uint64_t L_91 = V_6;
		int64_t L_92 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(3,NULL));
		uint64_t L_93 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_94;
		L_94 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_90, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)L_91, L_92)), (int64_t)L_93)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_95 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_94 = L_95;
		uint64_t L_96 = V_6;
		int64_t L_97 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_97));
		goto IL_0198;
	}

IL_017f:
	{
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_98 = V_4;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_101;
		L_101 = Unsafe_AddByteOffset_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m539DEF93BDAF424C1BC01D5BCF8E7D8EECB13EDC_inline(L_98, ((int64_t)il2cpp_codegen_multiply((int64_t)L_99, (int64_t)L_100)), NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A L_102 = ___0_value;
		*(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A*)L_101 = L_102;
		uint64_t L_103 = V_6;
		int64_t L_104 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, L_104));
	}

IL_0198:
	{
		uint64_t L_105 = V_6;
		uint64_t L_106 = V_3;
		if ((!(((uint64_t)L_105) >= ((uint64_t)L_106))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m60650BAE87F05458EDD2F64FAFB164FF828F3C64 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28C5FEE9DBE03CF72CF72C3E0CC494D3A9E9C233_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0038;
		}
	}
	{
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_2 = ___0_destination;
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3 = L_2.____pointer;
		V_0 = L_3;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_4, L_6, L_8, NULL);
		return;
	}

IL_0038:
	{
		ThrowHelper_ThrowArgumentException_DestinationTooShort_m6468934A3BBB67DBC5BAEF7A64D91BD5BBBB3D4D(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m86F13A2637A8C0738CD51237442005D2679A8F61 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 ___0_destination, const RuntimeMethod* method) 
{
	bool V_0 = false;
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		int32_t L_0 = __this->____length;
		int32_t L_1;
		L_1 = Span_1_get_Length_m28C5FEE9DBE03CF72CF72C3E0CC494D3A9E9C233_inline((&___0_destination), NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_003b;
		}
	}
	{
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_2 = ___0_destination;
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_3 = L_2.____pointer;
		V_1 = L_3;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_1));
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_1 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_1));
		int32_t L_7 = __this->____length;
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_4, L_6, L_8, NULL);
		V_0 = (bool)1;
	}

IL_003b:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Span_1_ToString_m59A1CCC412FF6CEF21304FD0380115D7B8931F29 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DB46164953228904843938099AF66650313FEE5);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	Il2CppChar* V_0 = NULL;
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		goto IL_003e;
	}

IL_003e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(8, L_1);
		int32_t L_3 = __this->____length;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0DB46164953228904843938099AF66650313FEE5, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 Span_1_Slice_m1A1E5066AA843103D66061DF74B49734FE593520 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_2 = __this->____pointer;
		V_0 = L_2;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_5;
		L_5 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_3, L_4, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		int32_t L_6 = __this->____length;
		int32_t L_7 = ___0_start;
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m35E566097D06C4ACC15E14F8D61686EAACCDE086_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 Span_1_Slice_m186E2207AA758E0E1C1A09F32A8379AEF62BA1A9 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5 = __this->____pointer;
		V_0 = L_5;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_8;
		L_8 = il2cpp_unsafe_add<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A,int32_t>(L_6, L_7, sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		int32_t L_9 = ___1_length;
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m35E566097D06C4ACC15E14F8D61686EAACCDE086_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Span_1_ToArray_m3C1E72B3D590C2BCFCF00CC7CD0D69D2EC736ACE (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____length;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_1;
		L_1 = Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____length;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_3 = (UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)(UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (uint32_t)L_2);
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_4 = L_3;
		NullCheck((RuntimeArray*)L_4);
		uint8_t* L_5;
		L_5 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_4, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_6;
		L_6 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_5);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_7 = __this->____pointer;
		V_0 = L_7;
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_8;
		L_8 = IL2CPP_BY_REFERENCE_GET_VALUE(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A, (Il2CppByReference*)(&V_0));
		int32_t L_9 = __this->____length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		Buffer_Memmove_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m3D68438A3C5FAE6C4F026A5954BEBC6157069B6E(L_6, L_8, L_10, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_Equals_m55A7A9F47699172834297CD001DCEEC83414DB8D (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69508A540AFD085A745316DD7D6345B1C8CC662D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Span_1_GetHashCode_m465E8FE22C3B730C8DB243F68F10AB9481CAC7D9 (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECE618215BAC99C6FD12D8A273CC2118945EDCC8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 Span_1_op_Implicit_mE7E1A520B2ACB8728DFB246713096987C8134EFF (UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) 
{
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline((&L_1), L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_m42FA63124FB74C78F0F39BF96BFE8075651047C9_gshared_inline (Enumerator_t9EBEFDB43D574292491614B5C0CDBC7868A7C27E* __this, const RuntimeMethod* method) 
{
	{
		Il2CppSharedGenericObject* L_0 = __this->____currentValue;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SubsystemEntry_get_Name_mC7F9CA146F12C7FD136A96E3D98EC40CFF8E91EF_gshared_inline (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SubsystemEntry_get_Dependencies_mA2E8CDBD0C798B672CF3DC1B6CED4D75312C0CBF_gshared_inline (SubsystemEntry_t216FC0FE0BA4D96C52BECFA47F2EC9F4E735D310* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CDependenciesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_gshared_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		int32_t L_8 = V_1;
		Il2CppSharedGenericObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Il2CppSharedGenericObject*)L_9);
		return;
	}

IL_0034:
	{
		Il2CppSharedGenericObject* L_10 = ___0_item;
		List_1_AddWithResize_mCC24A812DFC30C3DE2230E3C8EE705871C1DFF81(__this, L_10, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared_inline (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Il2CppFullySharedGenericAny,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* Array_Empty_TisEmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96_mD229BDA583D562BD2A433878A338C82536F745F3_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ((EmptyArray_1_tBCCAE4080E81992F81CEC3B682CED9E81A3B4D67_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mD4EF5DA1C9E1F4588B4C334EBF16FCCD5DB79C60_inline (Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435* __this, EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* ___0_array, const RuntimeMethod* method) 
{
	EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t2A675B8E3E38550E93916E5DCA96655003AAF435));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96));
		goto IL_0037;
	}

IL_0037:
	{
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96* L_4;
		L_4 = il2cpp_unsafe_as_ref<EmbeddedArray32_1_tB435A10C3DB5E0B01F53C5CF569FEF40BB061A96>(L_3);
		ByReference_1_t96DAE667B9BC20DC5FA90542D560148F31E98B83 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		EmbeddedArray32_1U5BU5D_t2E3146649D7134B048D388505F182F203AC3A6AA* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* Array_Empty_TisHashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5_m7546ECBE8AAEBE56E0F447E66B1A47851A568FCC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ((EmptyArray_1_tF44AD9BD1A58C47BDCB13A8D4D22873C785CC3F8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB108D65E6AB6F4DA24A76B1969057C1CA1FE2950_gshared_inline (Span_1_t9281853CEBD9A6003A40E179A340A790E331B575* __this, HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* ___0_array, const RuntimeMethod* method) 
{
	HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9281853CEBD9A6003A40E179A340A790E331B575));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5));
		goto IL_0037;
	}

IL_0037:
	{
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5* L_4;
		L_4 = il2cpp_unsafe_as_ref<HashEntry_1_t0CF7FFD9BDEAB90BD66EEB375F4933A8AAFA09A5>(L_3);
		ByReference_1_t5E82C4E8BBB02F58925FEA3903F0DCB90D59054A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		HashEntry_1U5BU5D_t824A58AA39DA3EA6BB6A4E34CA6440B5CA88A5D5* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* Array_Empty_TisNativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62_mBDB8DDE2D2948EDF2432FC77141B7D1360CDA732_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ((EmptyArray_1_t4505232400AEC5D181E96238357D9ACD1C992762_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mDF270A0AADEFCF83421FB59DD262CB8AC41C0209_inline (Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428* __this, NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* ___0_array, const RuntimeMethod* method) 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t84CC3492C4F25DC684EB1A4E00493E60CD98D428));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62));
		goto IL_0037;
	}

IL_0037:
	{
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62* L_4;
		L_4 = il2cpp_unsafe_as_ref<NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62>(L_3);
		ByReference_1_tCE52B202D24A2ECB85FE96F1DA3C0C6BB73E4001 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		NativeArray_1U5BU5D_tBE79B4E31CFB931AC204F3F4DE7B0FEC2BF1E8C0* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* Array_Empty_TisNativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C_m3EDEED36320352D697788722957A3FCC32B74117_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_0 = ((EmptyArray_1_tC51B5E29F025A6278666985527566B350371217C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m50844A32AD4AEDCC0396DEE94E2502155012D74D_inline (Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745* __this, NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* ___0_array, const RuntimeMethod* method) 
{
	NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tB28FEE357DDCA9A34F2B0E7A19221CC20D9E8745));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C));
		goto IL_0037;
	}

IL_0037:
	{
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C* L_4;
		L_4 = il2cpp_unsafe_as_ref<NativeArray_1_t6C2613A1D4A03EFEE59BBADBC529386D1205D01C>(L_3);
		ByReference_1_tFCBBC32298314AB70F2B90D1F16DAC14397DBA49 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		NativeArray_1U5BU5D_t66241BB403CAE61AA20A1654125F1F5DB049A5D2* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* Array_Empty_TisSelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474_m4433599FD227186796BAB47DC5BED2AF106ED67E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ((EmptyArray_1_t0542F0EB5C43D54C8F4ADCAB1E94F18AEA151867_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mF4D8BCF13E440CF6891608164F39FAD99EDC364B_inline (Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8* __this, SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* ___0_array, const RuntimeMethod* method) 
{
	SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t291EAC5144D1F469ED3426F74052EFC6F1E9BCB8));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474));
		goto IL_0037;
	}

IL_0037:
	{
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474* L_4;
		L_4 = il2cpp_unsafe_as_ref<SelectorWorkItem_tBF6E4B85CACDC4734FBEAF1530157885BA83A474>(L_3);
		ByReference_1_t30C53FE69558F45E4B0A33666EDEDF4CF1F8630F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		SelectorWorkItemU5BU5D_tD4000858C14565D18EFA0D397ECB4A37841FDE06* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* Array_Empty_TisTriangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58_m24487CD12F55B7FCBB5515F505441ECA91E850FC_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_0 = ((EmptyArray_1_t38104844ACB1F00F66AB952D68C54320EF98254F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m2C7A5F5E1E584A05CB6BE01B61F014B3D86795CC_inline (Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5* __this, Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* ___0_array, const RuntimeMethod* method) 
{
	Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t4620284F78418FF6037E7D0205C7D34F1AC010C5));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58));
		goto IL_0037;
	}

IL_0037:
	{
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58* L_4;
		L_4 = il2cpp_unsafe_as_ref<Triangle_1_tC0A74A69762E2B25BDEE64705570CBCF38444A58>(L_3);
		ByReference_1_t8C1806A3B3C5708687DC52C545845F4C6BFCA949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Triangle_1U5BU5D_t31B7A611C927D8BB264C75A793D7CB3A9E30FB8A* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* Array_Empty_TisTriangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6_m748F1A71A7DD69BB388C8731921DA551609F490F_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_0 = ((EmptyArray_1_t8918E90EE298C7A5BF7A13F4E945F3E26C567CE3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mEC6ABC58D9B0430009F2CA47F6400C1339B85A32_inline (Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD* __this, Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* ___0_array, const RuntimeMethod* method) 
{
	Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tE41ECBA5E2C374C4B7DEBA2ECEA2F4E30443A1BD));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6));
		goto IL_0037;
	}

IL_0037:
	{
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6* L_4;
		L_4 = il2cpp_unsafe_as_ref<Triangle_1_tBC403D17606B52595C4352DB8477CD87B74827D6>(L_3);
		ByReference_1_tAE9BE0C920B61D6E16A81589BAC3C8E13E12E49B L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		Triangle_1U5BU5D_t7D0733FD57668E27933EF3BF5AA3D9C610447CF6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* Array_Empty_TisUnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD_m14FA981EC22CA08E194019E3506AD1ABB6322E6D_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ((EmptyArray_1_tC9589F12F2382131419143780EC4B16F75839727_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m9F4A66516D8398466D3F0F737DA64B2EEA9819D8_inline (Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A* __this, UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9ED8A526081AA124D11AF2D755A0B15118AE965A));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_tBC87D2EA47419434CBF8C62B9720C3429D1B20FD>(L_3);
		ByReference_1_t61031BD4E188D1EF121FD50BDD708DCE448F2C4F L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t2592182F7B3D62F7A8F574454DC0C2E05B0E8C3C* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* Array_Empty_TisUnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D_mB80BD27875E5AD9B06C08FC9D673F81494E06C0D_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ((EmptyArray_1_t39CC4801B12BC59D744D8F2F14920ED998228BE1_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m0020E2FA5F2FC5C872192E98415B07D4F7C1760E_inline (Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176* __this, UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t9361F6740620C10133091ACD2A48E3B994B1D176));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D>(L_3);
		ByReference_1_tC71D682DBC538763066DF671429413D25394012A L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t621C634A191E0E89228A3B737E8E3E1F1270E30A* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* Array_Empty_TisUnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692_m8225D086EDE4F1EA4A744724F13D762BD6A7FFA2_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ((EmptyArray_1_t8F16BED9A16610B0610D3B8977C56192C7CE8275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mA835AA47502F485D596AFAE106ED7824B5B5F86B_inline (Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB* __this, UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t093DFA1FE4BCEB341D9AFE57AD01A8FEBF32B4AB));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t29F8EF14D6774A9F0BAD6E9C08A5123B993D1692>(L_3);
		ByReference_1_t354B4A95283A59F41EFFFE068C7BCCDD5B4DF69D L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t1F52019D6B13F2A8C95B8312C94AD235C54DDE7B* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* Array_Empty_TisUnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B_mD5A5585240A77F26BE14BF51B1F8B7C2259B0019_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ((EmptyArray_1_tE873052363E5FFF3E3324D48BF2E70EABF9FBA3E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m74831EDC5E29B320FB02F29263F105FF0B42B94C_inline (Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3* __this, UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tCF93B7CB319A45CD677BBDFD2A55AD47DF463EB3));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t239C74D869DA59B0CA5E63716E71208DEC68A70B>(L_3);
		ByReference_1_tE3DF7EC34FB0E036412F02E5F8E99484861BAEAD L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t0B2E344DD41577BF29822F7B3CA67FD60582CAFC* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* Array_Empty_TisUnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0_m81189A63B159A0BC9CF1D06BCB85661915D86FEB_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ((EmptyArray_1_tE694D0227F619BC5A10811AC94E5B6D8EE0CBD57_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m79E0E896071ADDB3C719BBA6B8F2B3AD8599B589_inline (Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506* __this, UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t140ED24BBE87C7CE97312D06D5316A9801E31506));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t778B2F7252E312B13D6246FDF11E43D9830882D0>(L_3);
		ByReference_1_t5D507A8BE26BC84756E30163201D25135DFB82A3 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tD89AFF832AC2753A9EF66ADFF1D26116065DC5A1* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* Array_Empty_TisUnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718_m6DEB24EE574A3109DB94AA1CFC7A5BA936F84D38_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ((EmptyArray_1_tA05DBCB91EE064FE54203B7543F218C61D4C292D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC89660CF8A34D426E02CA2AC8E826214EB8E4FF9_inline (Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298* __this, UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tF176F22E2BDE5E54D571766DE8FE21ACFF6CE298));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718>(L_3);
		ByReference_1_tD80D8F3A4406679DD5CCC1ABA479A308514D393E L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t833820DBD583C4C49FAC0123A63D3617D808E9B3* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* Array_Empty_TisUnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF_mEEAC43923BAB5402C351329E989F7E5FDBBC0E53_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ((EmptyArray_1_tFEE1A4E0C8058B54F07835CFB63F231873095076_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m83E660E7E728A5CA06258A74FCFE0A3F2270DE78_inline (Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034* __this, UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5AD383DD652E3E6DB3205BDF87EE6BD77466A034));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t6536D7A9C34D38B0421BA85AC9793E0F14F65CCF>(L_3);
		ByReference_1_t553CA63DD5902B8FA54B8D788F37D9BE79BFFBAA L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tA8674C465A6BD8BA88FA33D496BA0DDC761FDCA6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* Array_Empty_TisUnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6_m80635F8F2D3D0383C89E07968014ABC30ABEA62E_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ((EmptyArray_1_t8505E6935DD4C58400550971BB8321BD8CE9D6CF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC432B6BD1F47E268780897F76613E4A8661FE990_inline (Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7* __this, UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tBF13F9501CCD12FFB2F5A59090DEA7BD31F5BDC7));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t86E1B55915C0B6CE8368236B0D8EDB80B7D396D6>(L_3);
		ByReference_1_tF56DCC6D4C5E0F4BA8E055DF4D7E79B7DB2ED299 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_tC00A6FD5AB7214DF0DF79FB98F7F35104D2FB0B8* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* Array_Empty_TisUnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4_mF9B8EDAC651FA801E8CEE8280E4C2E9E9BC36096_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ((EmptyArray_1_tA0B73630739AC85F81DDEFE547CAFB1C84FB72C6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mB30478C7F318065D07B448DCBD166676AD5E3D74_inline (Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6* __this, UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t5546CD84F181EC350FB506984B90241364B8C8F6));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t414FED53EC4FCC224CD6E9501F375B71ACC6C6F4>(L_3);
		ByReference_1_t69704F3A64F63EA5C746FF1EFED4B24034129174 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t5D6BFB4281F1114557DAA316EE93852F1C7C44D6* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* Array_Empty_TisUnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A_m19F4090BD5440974029AFE51BC45A5C37D4D5C77_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ((EmptyArray_1_t1347A16AC3E72AFF909DAA98EED1FA11A4470068_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mFD2F577944A66C4B85D703FFAB6B539BD1C7DC2A_inline (Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381* __this, UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* ___0_array, const RuntimeMethod* method) 
{
	UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_t460BF9A574BE0955E6E375F5EDC0E0830FA47381));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A));
		goto IL_0037;
	}

IL_0037:
	{
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_2 = ___0_array;
		NullCheck((RuntimeArray*)L_2);
		uint8_t* L_3;
		L_3 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_2, NULL);
		UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A* L_4;
		L_4 = il2cpp_unsafe_as_ref<UnsafeList_1_t0019D98C6D95AF9C6414C149BAA15CBBCC837C8A>(L_3);
		ByReference_1_tFEC2183BE6E0D31202F7A12685DE0C72EDD622D8 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer = L_5;
		UnsafeList_1U5BU5D_t33CA11850507E252617672781F161E215A47A7AD* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		__this->____length = L_7;
		return;
	}
}
