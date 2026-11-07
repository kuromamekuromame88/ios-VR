#include "pch-cpp.hpp"






struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct MethodInfo_t;
struct SceneBecameFrontmostCallback_t0746EA7E850C8DA37D69AB057888D0ACDC68ED9D;
struct Sk1UnityPurchasingCallback_tEC9C8BA3D2964FE0F1357290A497D94F0C2ABF98;
struct StorefrontChangeCallback_tFF0E50758B09B379FFAD47874880E4CEC6AFB570;
struct String_t;
struct UnityPurchasingCallback_t3C1333A45134D9A999AB29AEEBF05883A9A707F3;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0;

IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StoreKitSelector_t023F51AD15CD5DF94B40BF3D702A94C600A65012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t61AF874F149C9609D7FF09D5A7130BC8BBDA6650 
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
struct iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0  : public RuntimeObject
{
	bool ___useStoreKit1;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112  : public MulticastDelegate_t
{
};
struct SceneBecameFrontmostCallback_t0746EA7E850C8DA37D69AB057888D0ACDC68ED9D  : public MulticastDelegate_t
{
};
struct Sk1UnityPurchasingCallback_tEC9C8BA3D2964FE0F1357290A497D94F0C2ABF98  : public MulticastDelegate_t
{
};
struct StorefrontChangeCallback_tFF0E50758B09B379FFAD47874880E4CEC6AFB570  : public MulticastDelegate_t
{
};
struct UnityPurchasingCallback_t3C1333A45134D9A999AB29AEEBF05883A9A707F3  : public MulticastDelegate_t
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_setUnityPurchasingCallback_mD8A84057171C60A686615EC195696CC7A107EE00 (Sk1UnityPurchasingCallback_tEC9C8BA3D2964FE0F1357290A497D94F0C2ABF98* ___0_AsyncCallback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_SetNativeCallback_m48C165929A4DFD0ABC5015941D3F46A68F46474D (UnityPurchasingCallback_t3C1333A45134D9A999AB29AEEBF05883A9A707F3* ___0_callbackDelegate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_getUnityPurchasingAppReceipt_m80E86D75077BBE8B08625A5DF7E11EA9C3F4A9A6 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchAppReceipt_mD2F9C5650B0A670C22FB4CD71A52D5AAE46C2ACF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_MarshalAndDeallocate_m212AF39E2C2802569CACC0B7ADB7F57EC604215B (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_DeallocateMemory_m038C009D4E37DF441F6E99D723C125A08DD3B168 (intptr_t ___0_pointer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_DeallocateMemory_mEBD5AACED8199802A7628078CD3396F89CC480E9 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, intptr_t ___0_pointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_getUnityPurchasingCanMakePayments_mDB14FA65BAD5B8882A9756A1747CF20684E1591C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_unityPurchasing_CanMakePayments_mE673EACFA6FB9457CDDFF1536E883CCF164777BC (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingAddTransactionObserver_m22F6BE6D987DF0AE7C810874A42DB3CFA19E631F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_AddTransactionObserver_mF6FD8433EC4FAB82F25CBD213B03E32462B668D8 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingSetApplicationUsername_m835746E8BA98581B7AC00A138BFF91BA8AEE6AEA (String_t* ___0_username, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRetrieveProducts_m569FA8ED1CFF3DAE74ADA34F4E888AA2A7E8B9C9 (String_t* ___0_json, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchProducts_m394B980FD20D9985D4747CE1C0847793A28CF4B7 (String_t* ___0_json, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchPurchases_mAFFB0F84632511BB45B80DF162D37B8ABFD00253 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingPurchase_m061AAA8359F45793EEFE6CDA0F37B1D1F1FFACBE (String_t* ___0_json, String_t* ___1_developerPayload, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_Purchase_mA9D5557593A6E529CD175C3ED1D9D5F365E64E29 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productJson, String_t* ___1_optionsJson, String_t* ___2_impressionId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFinishTransaction_mF42DE47794FABA772F61E9F08F52CEE0F6826579 (String_t* ___0_productJSON, String_t* ___1_transactionId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FinishTransaction_mAC15FECCFE5690F2A2564C384DA071509930D7E1 (String_t* ___0_transactionId, bool ___1_logFinishTransaction, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_checkEntitlement_mACCA1B8E37CDCD041FD49B766370B154CDA079CF (String_t* ___0_productId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRestoreTransactions_mB4244B80E93554DCA2F652D286E22BB6ADF57AE7 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_RestoreTransactions_m60FC0081733E7854F3439028D79C8AC3CF5B1BAF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFetchStorePromotionOrder_mB13E3280E1A97F7B78F08CAFC7934FA1676FA310 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchStorePromotionOrder_m9744B2F56521360CB2953A834C985F9EA3B8C4C9 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingUpdateStorePromotionOrder_m9F9A96BEB878129C3182AF58C130105577BB0D91 (String_t* ___0_json, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_UpdateStorePromotionOrder_m0A8E46E7369153C2949C3BC0D3E01E143F7617D0 (String_t* ___0_json, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFetchStorePromotionVisibility_m6E60C91B635720FBE7662740E99941F261252962 (String_t* ___0_productId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchStorePromotionVisibility_mA2321D47DE402E732410060A5CBE0F14466623CC (String_t* ___0_productId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingUpdateStorePromotionVisibility_m8A090EB0265EACB18C1F24FA3B1DF933A5E79AD4 (String_t* ___0_productId, String_t* ___1_visibility, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_UpdateStorePromotionVisibility_m26953D212D7E97BCE04686869D2FF3A1F55B559F (String_t* ___0_productId, String_t* ___1_visibility, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_mFF9FC8FED58174DE0808EDD071451F2D38A4CF33 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_InterceptPromotionalPurchases_mEFD2433F7E5D3F29B6C5BDF94FC1CE33F105CDF1 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingContinuePromotionalPurchases_m5F6C6F56C404B3BE212558E6AC8DFE65DE3EC95C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_ContinuePromotionalPurchases_m2C8490DFD8E8FDE4295095CF3DDA27FBC16A6600 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingPresentCodeRedemptionSheet_m6548B57BCBF69AAA76C7D491B77CD77A52FF0F89 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_PresentCodeRedemptionSheet_m739E24429031D74599D6FE709878355EA7B7772A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_PurchaseProduct_m8E42AD9B736138448AC2C9AB53179E6C007CA214 (String_t* ___0_productJson, String_t* ___1_optionsJson, StorefrontChangeCallback_tFF0E50758B09B379FFAD47874880E4CEC6AFB570* ___2_storefrontCallbackDelegate, String_t* ___3_impressionId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRefreshAppReceipt_m408A0596D923F8232A6BFC6CDD2C0C6D01FD184B (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_RefreshAppReceipt_m06EF637EEE6B826AF51011D6F89E675AD09F7009 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchStorefront_mAE6E51610388F6CE9B6D5CE39C8B1CE5B5E79819 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_unityPurchasing_IsSceneFrontmost_m0D3E572CABA8D80AED2A5EDD90555E205476847A (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_SetSceneBecameFrontmostCallback_m22E27C65F13A546AB0E923A8A32A878296C50C55 (SceneBecameFrontmostCallback_t0746EA7E850C8DA37D69AB057888D0ACDC68ED9D* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchNativeDeviceInfo_m9D6DEE8CDFA1B0FD1A6E657A3ED1E6066D3E9C3F (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_TransactionObserved_m7320C9D07EA17F4B3FF6C10BD8A4AE71D38C67E6 (String_t* ___0_transactionId, String_t* ___1_productId, String_t* ___2_productJsonRepresentation, double ___3_transactionUnixTime, String_t* ___4_transactionJsonRepresentation, String_t* ___5_signatureJws, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchAdvertisingIdentifier_m1087AA23B97D994AC087F4E9932276AC5BF4C157 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchVendorIdentifier_m58DD9BFF3C42F86930755B14776D62BC6712DBD5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_CheckEligibility_mD3C5DED105B343DEEA3D2518C6985884621571A5 (ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_FetchToken_m34B670FBD31687AD3AC173D5C3C85AE47245DCF7 (String_t* ___0_tokenType, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_ShowNotice_m853386ACA76574B0AE38BCF0C5F6F4732DE36137 (String_t* ___0_noticeType, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___1_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_FetchStorefront_m1701E53C19DCDB4620250B2F14F1EEF491EA7640 (ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___0_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StoreKitSelector_UseStoreKit1_mA84434742170AB872EFD3BAF1EB03703AE001CDF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C void STDCALL unityPurchasing_SetNativeCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_AddTransactionObserver();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_FetchProducts(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_PurchaseProduct(char*, char*, Il2CppMethodPointer, char*);
IL2CPP_EXTERN_C intptr_t STDCALL unityPurchasing_FetchAppReceipt();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_DeallocateMemory(intptr_t);
IL2CPP_EXTERN_C void STDCALL externalPurchase_CheckEligibility(Il2CppMethodPointer);
IL2CPP_EXTERN_C void STDCALL externalPurchase_FetchToken(char*, Il2CppMethodPointer);
IL2CPP_EXTERN_C void STDCALL externalPurchase_ShowNotice(char*, Il2CppMethodPointer);
IL2CPP_EXTERN_C void STDCALL externalPurchase_FetchStorefront(Il2CppMethodPointer);
IL2CPP_EXTERN_C int8_t STDCALL unityPurchasing_IsSceneFrontmost();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_SetSceneBecameFrontmostCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_FetchPurchases();
IL2CPP_EXTERN_C char* STDCALL unityPurchasing_FetchTransactionForProductId(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_FinishTransaction(char*, int32_t);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_checkEntitlement(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_RestoreTransactions();
IL2CPP_EXTERN_C int8_t STDCALL unityPurchasing_CanMakePayments();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_FetchStorePromotionOrder();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_UpdateStorePromotionOrder(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_FetchStorePromotionVisibility(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_UpdateStorePromotionVisibility(char*, char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasing_InterceptPromotionalPurchases();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_ContinuePromotionalPurchases();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_PresentCodeRedemptionSheet();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_FetchStorefront();
IL2CPP_EXTERN_C intptr_t STDCALL unityPurchasing_FetchAdvertisingIdentifier();
IL2CPP_EXTERN_C intptr_t STDCALL unityPurchasing_FetchVendorIdentifier();
IL2CPP_EXTERN_C intptr_t STDCALL unityPurchasing_FetchNativeDeviceInfo();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_RefreshAppReceipt();
IL2CPP_EXTERN_C void STDCALL unityPurchasing_TransactionObserved(char*, char*, char*, double, char*, char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasingRetrieveProducts(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasingPurchase(char*, char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasingFinishTransaction(char*, char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasingRestoreTransactions();
IL2CPP_EXTERN_C void STDCALL unityPurchasingRefreshAppReceipt();
IL2CPP_EXTERN_C void STDCALL unityPurchasingAddTransactionObserver();
IL2CPP_EXTERN_C void STDCALL unityPurchasingSetApplicationUsername(char*);
IL2CPP_EXTERN_C void STDCALL setUnityPurchasingCallback(Il2CppMethodPointer);
IL2CPP_EXTERN_C char* STDCALL getUnityPurchasingAppReceipt();
IL2CPP_EXTERN_C char* STDCALL getUnityPurchasingTransactionReceiptForProductId(char*);
IL2CPP_EXTERN_C int8_t STDCALL getUnityPurchasingCanMakePayments();
IL2CPP_EXTERN_C void STDCALL setSimulateAskToBuy(int32_t);
IL2CPP_EXTERN_C int8_t STDCALL getSimulateAskToBuy();
IL2CPP_EXTERN_C void STDCALL unityPurchasingFetchStorePromotionOrder();
IL2CPP_EXTERN_C void STDCALL unityPurchasingUpdateStorePromotionOrder(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasingFetchStorePromotionVisibility(char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasingUpdateStorePromotionVisibility(char*, char*);
IL2CPP_EXTERN_C void STDCALL unityPurchasingInterceptPromotionalPurchases();
IL2CPP_EXTERN_C void STDCALL unityPurchasingContinuePromotionalPurchases();
IL2CPP_EXTERN_C void STDCALL unityPurchasingPresentCodeRedemptionSheet();
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_SetNativeCallback_m48C165929A4DFD0ABC5015941D3F46A68F46474D (UnityPurchasingCallback_t3C1333A45134D9A999AB29AEEBF05883A9A707F3* ___0_callbackDelegate, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (Il2CppMethodPointer);

	Il2CppMethodPointer ____0_callbackDelegate_marshaled = NULL;
	____0_callbackDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callbackDelegate));

	reinterpret_cast<PInvokeFunc>(unityPurchasing_SetNativeCallback)(____0_callbackDelegate_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_AddTransactionObserver_mF6FD8433EC4FAB82F25CBD213B03E32462B668D8 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_AddTransactionObserver)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchProducts_m394B980FD20D9985D4747CE1C0847793A28CF4B7 (String_t* ___0_json, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_json_marshaled = NULL;
	____0_json_marshaled = il2cpp_codegen_marshal_string(___0_json);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchProducts)(____0_json_marshaled);

	il2cpp_codegen_marshal_free(____0_json_marshaled);
	____0_json_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_PurchaseProduct_m8E42AD9B736138448AC2C9AB53179E6C007CA214 (String_t* ___0_productJson, String_t* ___1_optionsJson, StorefrontChangeCallback_tFF0E50758B09B379FFAD47874880E4CEC6AFB570* ___2_storefrontCallbackDelegate, String_t* ___3_impressionId, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, char*, Il2CppMethodPointer, char*);

	char* ____0_productJson_marshaled = NULL;
	____0_productJson_marshaled = il2cpp_codegen_marshal_string(___0_productJson);

	char* ____1_optionsJson_marshaled = NULL;
	____1_optionsJson_marshaled = il2cpp_codegen_marshal_string(___1_optionsJson);

	Il2CppMethodPointer ____2_storefrontCallbackDelegate_marshaled = NULL;
	____2_storefrontCallbackDelegate_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_storefrontCallbackDelegate));

	char* ____3_impressionId_marshaled = NULL;
	____3_impressionId_marshaled = il2cpp_codegen_marshal_string(___3_impressionId);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_PurchaseProduct)(____0_productJson_marshaled, ____1_optionsJson_marshaled, ____2_storefrontCallbackDelegate_marshaled, ____3_impressionId_marshaled);

	il2cpp_codegen_marshal_free(____0_productJson_marshaled);
	____0_productJson_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_optionsJson_marshaled);
	____1_optionsJson_marshaled = NULL;

	il2cpp_codegen_marshal_free(____3_impressionId_marshaled);
	____3_impressionId_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchAppReceipt_mD2F9C5650B0A670C22FB4CD71A52D5AAE46C2ACF (const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) ();

	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchAppReceipt)();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_DeallocateMemory_m038C009D4E37DF441F6E99D723C125A08DD3B168 (intptr_t ___0_pointer, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (intptr_t);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_DeallocateMemory)(___0_pointer);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_CheckEligibility_mD3C5DED105B343DEEA3D2518C6985884621571A5 (ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (Il2CppMethodPointer);

	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	reinterpret_cast<PInvokeFunc>(externalPurchase_CheckEligibility)(____0_callback_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_FetchToken_m34B670FBD31687AD3AC173D5C3C85AE47245DCF7 (String_t* ___0_tokenType, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, Il2CppMethodPointer);

	char* ____0_tokenType_marshaled = NULL;
	____0_tokenType_marshaled = il2cpp_codegen_marshal_string(___0_tokenType);

	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	reinterpret_cast<PInvokeFunc>(externalPurchase_FetchToken)(____0_tokenType_marshaled, ____1_callback_marshaled);

	il2cpp_codegen_marshal_free(____0_tokenType_marshaled);
	____0_tokenType_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_ShowNotice_m853386ACA76574B0AE38BCF0C5F6F4732DE36137 (String_t* ___0_noticeType, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___1_callback, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, Il2CppMethodPointer);

	char* ____0_noticeType_marshaled = NULL;
	____0_noticeType_marshaled = il2cpp_codegen_marshal_string(___0_noticeType);

	Il2CppMethodPointer ____1_callback_marshaled = NULL;
	____1_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_callback));

	reinterpret_cast<PInvokeFunc>(externalPurchase_ShowNotice)(____0_noticeType_marshaled, ____1_callback_marshaled);

	il2cpp_codegen_marshal_free(____0_noticeType_marshaled);
	____0_noticeType_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_externalPurchase_FetchStorefront_m1701E53C19DCDB4620250B2F14F1EEF491EA7640 (ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (Il2CppMethodPointer);

	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	reinterpret_cast<PInvokeFunc>(externalPurchase_FetchStorefront)(____0_callback_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_unityPurchasing_IsSceneFrontmost_m0D3E572CABA8D80AED2A5EDD90555E205476847A (const RuntimeMethod* method) 
{
	typedef int8_t (STDCALL *PInvokeFunc) ();

	int8_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasing_IsSceneFrontmost)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_SetSceneBecameFrontmostCallback_m22E27C65F13A546AB0E923A8A32A878296C50C55 (SceneBecameFrontmostCallback_t0746EA7E850C8DA37D69AB057888D0ACDC68ED9D* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (Il2CppMethodPointer);

	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	reinterpret_cast<PInvokeFunc>(unityPurchasing_SetSceneBecameFrontmostCallback)(____0_callback_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchPurchases_mAFFB0F84632511BB45B80DF162D37B8ABFD00253 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchPurchases)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_unityPurchasing_FetchTransactionForProductId_mEC70476780D546F60C02C2280CBF7870844163CF (String_t* ___0_productId, const RuntimeMethod* method) 
{
	typedef char* (STDCALL *PInvokeFunc) (char*);

	char* ____0_productId_marshaled = NULL;
	____0_productId_marshaled = il2cpp_codegen_marshal_string(___0_productId);

	char* returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchTransactionForProductId)(____0_productId_marshaled);

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	il2cpp_codegen_marshal_free(____0_productId_marshaled);
	____0_productId_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FinishTransaction_mAC15FECCFE5690F2A2564C384DA071509930D7E1 (String_t* ___0_transactionId, bool ___1_logFinishTransaction, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, int32_t);

	char* ____0_transactionId_marshaled = NULL;
	____0_transactionId_marshaled = il2cpp_codegen_marshal_string(___0_transactionId);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_FinishTransaction)(____0_transactionId_marshaled, static_cast<int32_t>(___1_logFinishTransaction));

	il2cpp_codegen_marshal_free(____0_transactionId_marshaled);
	____0_transactionId_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_checkEntitlement_mACCA1B8E37CDCD041FD49B766370B154CDA079CF (String_t* ___0_productId, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_productId_marshaled = NULL;
	____0_productId_marshaled = il2cpp_codegen_marshal_string(___0_productId);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_checkEntitlement)(____0_productId_marshaled);

	il2cpp_codegen_marshal_free(____0_productId_marshaled);
	____0_productId_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_RestoreTransactions_m60FC0081733E7854F3439028D79C8AC3CF5B1BAF (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_RestoreTransactions)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_unityPurchasing_CanMakePayments_mE673EACFA6FB9457CDDFF1536E883CCF164777BC (const RuntimeMethod* method) 
{
	typedef int8_t (STDCALL *PInvokeFunc) ();

	int8_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasing_CanMakePayments)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchStorePromotionOrder_m9744B2F56521360CB2953A834C985F9EA3B8C4C9 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchStorePromotionOrder)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_UpdateStorePromotionOrder_m0A8E46E7369153C2949C3BC0D3E01E143F7617D0 (String_t* ___0_json, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_json_marshaled = NULL;
	____0_json_marshaled = il2cpp_codegen_marshal_string(___0_json);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_UpdateStorePromotionOrder)(____0_json_marshaled);

	il2cpp_codegen_marshal_free(____0_json_marshaled);
	____0_json_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchStorePromotionVisibility_mA2321D47DE402E732410060A5CBE0F14466623CC (String_t* ___0_productId, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_productId_marshaled = NULL;
	____0_productId_marshaled = il2cpp_codegen_marshal_string(___0_productId);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchStorePromotionVisibility)(____0_productId_marshaled);

	il2cpp_codegen_marshal_free(____0_productId_marshaled);
	____0_productId_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_UpdateStorePromotionVisibility_m26953D212D7E97BCE04686869D2FF3A1F55B559F (String_t* ___0_productId, String_t* ___1_visibility, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, char*);

	char* ____0_productId_marshaled = NULL;
	____0_productId_marshaled = il2cpp_codegen_marshal_string(___0_productId);

	char* ____1_visibility_marshaled = NULL;
	____1_visibility_marshaled = il2cpp_codegen_marshal_string(___1_visibility);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_UpdateStorePromotionVisibility)(____0_productId_marshaled, ____1_visibility_marshaled);

	il2cpp_codegen_marshal_free(____0_productId_marshaled);
	____0_productId_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_visibility_marshaled);
	____1_visibility_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_InterceptPromotionalPurchases_mEFD2433F7E5D3F29B6C5BDF94FC1CE33F105CDF1 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_InterceptPromotionalPurchases)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_ContinuePromotionalPurchases_m2C8490DFD8E8FDE4295095CF3DDA27FBC16A6600 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_ContinuePromotionalPurchases)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_PresentCodeRedemptionSheet_m739E24429031D74599D6FE709878355EA7B7772A (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_PresentCodeRedemptionSheet)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_FetchStorefront_mAE6E51610388F6CE9B6D5CE39C8B1CE5B5E79819 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchStorefront)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchAdvertisingIdentifier_m1087AA23B97D994AC087F4E9932276AC5BF4C157 (const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) ();

	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchAdvertisingIdentifier)();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchVendorIdentifier_m58DD9BFF3C42F86930755B14776D62BC6712DBD5 (const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) ();

	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchVendorIdentifier)();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t iOSStoreBindings_unityPurchasing_FetchNativeDeviceInfo_m9D6DEE8CDFA1B0FD1A6E657A3ED1E6066D3E9C3F (const RuntimeMethod* method) 
{
	typedef intptr_t (STDCALL *PInvokeFunc) ();

	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(unityPurchasing_FetchNativeDeviceInfo)();

	return returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_RefreshAppReceipt_m06EF637EEE6B826AF51011D6F89E675AD09F7009 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasing_RefreshAppReceipt)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasing_TransactionObserved_m7320C9D07EA17F4B3FF6C10BD8A4AE71D38C67E6 (String_t* ___0_transactionId, String_t* ___1_productId, String_t* ___2_productJsonRepresentation, double ___3_transactionUnixTime, String_t* ___4_transactionJsonRepresentation, String_t* ___5_signatureJws, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, char*, char*, double, char*, char*);

	char* ____0_transactionId_marshaled = NULL;
	____0_transactionId_marshaled = il2cpp_codegen_marshal_string(___0_transactionId);

	char* ____1_productId_marshaled = NULL;
	____1_productId_marshaled = il2cpp_codegen_marshal_string(___1_productId);

	char* ____2_productJsonRepresentation_marshaled = NULL;
	____2_productJsonRepresentation_marshaled = il2cpp_codegen_marshal_string(___2_productJsonRepresentation);

	char* ____4_transactionJsonRepresentation_marshaled = NULL;
	____4_transactionJsonRepresentation_marshaled = il2cpp_codegen_marshal_string(___4_transactionJsonRepresentation);

	char* ____5_signatureJws_marshaled = NULL;
	____5_signatureJws_marshaled = il2cpp_codegen_marshal_string(___5_signatureJws);

	reinterpret_cast<PInvokeFunc>(unityPurchasing_TransactionObserved)(____0_transactionId_marshaled, ____1_productId_marshaled, ____2_productJsonRepresentation_marshaled, ___3_transactionUnixTime, ____4_transactionJsonRepresentation_marshaled, ____5_signatureJws_marshaled);

	il2cpp_codegen_marshal_free(____0_transactionId_marshaled);
	____0_transactionId_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_productId_marshaled);
	____1_productId_marshaled = NULL;

	il2cpp_codegen_marshal_free(____2_productJsonRepresentation_marshaled);
	____2_productJsonRepresentation_marshaled = NULL;

	il2cpp_codegen_marshal_free(____4_transactionJsonRepresentation_marshaled);
	____4_transactionJsonRepresentation_marshaled = NULL;

	il2cpp_codegen_marshal_free(____5_signatureJws_marshaled);
	____5_signatureJws_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRetrieveProducts_m569FA8ED1CFF3DAE74ADA34F4E888AA2A7E8B9C9 (String_t* ___0_json, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_json_marshaled = NULL;
	____0_json_marshaled = il2cpp_codegen_marshal_string(___0_json);

	reinterpret_cast<PInvokeFunc>(unityPurchasingRetrieveProducts)(____0_json_marshaled);

	il2cpp_codegen_marshal_free(____0_json_marshaled);
	____0_json_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingPurchase_m061AAA8359F45793EEFE6CDA0F37B1D1F1FFACBE (String_t* ___0_json, String_t* ___1_developerPayload, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, char*);

	char* ____0_json_marshaled = NULL;
	____0_json_marshaled = il2cpp_codegen_marshal_string(___0_json);

	char* ____1_developerPayload_marshaled = NULL;
	____1_developerPayload_marshaled = il2cpp_codegen_marshal_string(___1_developerPayload);

	reinterpret_cast<PInvokeFunc>(unityPurchasingPurchase)(____0_json_marshaled, ____1_developerPayload_marshaled);

	il2cpp_codegen_marshal_free(____0_json_marshaled);
	____0_json_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_developerPayload_marshaled);
	____1_developerPayload_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFinishTransaction_mF42DE47794FABA772F61E9F08F52CEE0F6826579 (String_t* ___0_productJSON, String_t* ___1_transactionId, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, char*);

	char* ____0_productJSON_marshaled = NULL;
	____0_productJSON_marshaled = il2cpp_codegen_marshal_string(___0_productJSON);

	char* ____1_transactionId_marshaled = NULL;
	____1_transactionId_marshaled = il2cpp_codegen_marshal_string(___1_transactionId);

	reinterpret_cast<PInvokeFunc>(unityPurchasingFinishTransaction)(____0_productJSON_marshaled, ____1_transactionId_marshaled);

	il2cpp_codegen_marshal_free(____0_productJSON_marshaled);
	____0_productJSON_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_transactionId_marshaled);
	____1_transactionId_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRestoreTransactions_mB4244B80E93554DCA2F652D286E22BB6ADF57AE7 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasingRestoreTransactions)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingRefreshAppReceipt_m408A0596D923F8232A6BFC6CDD2C0C6D01FD184B (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasingRefreshAppReceipt)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingAddTransactionObserver_m22F6BE6D987DF0AE7C810874A42DB3CFA19E631F (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasingAddTransactionObserver)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingSetApplicationUsername_m835746E8BA98581B7AC00A138BFF91BA8AEE6AEA (String_t* ___0_username, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_username_marshaled = NULL;
	____0_username_marshaled = il2cpp_codegen_marshal_string(___0_username);

	reinterpret_cast<PInvokeFunc>(unityPurchasingSetApplicationUsername)(____0_username_marshaled);

	il2cpp_codegen_marshal_free(____0_username_marshaled);
	____0_username_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_setUnityPurchasingCallback_mD8A84057171C60A686615EC195696CC7A107EE00 (Sk1UnityPurchasingCallback_tEC9C8BA3D2964FE0F1357290A497D94F0C2ABF98* ___0_AsyncCallback, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (Il2CppMethodPointer);

	Il2CppMethodPointer ____0_AsyncCallback_marshaled = NULL;
	____0_AsyncCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_AsyncCallback));

	reinterpret_cast<PInvokeFunc>(setUnityPurchasingCallback)(____0_AsyncCallback_marshaled);

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_getUnityPurchasingAppReceipt_m80E86D75077BBE8B08625A5DF7E11EA9C3F4A9A6 (const RuntimeMethod* method) 
{
	typedef char* (STDCALL *PInvokeFunc) ();

	char* returnValue = reinterpret_cast<PInvokeFunc>(getUnityPurchasingAppReceipt)();

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_getUnityPurchasingTransactionReceiptForProductId_mE9E2459F664FBA143AE66D09204B5185F12AB224 (String_t* ___0_productId, const RuntimeMethod* method) 
{
	typedef char* (STDCALL *PInvokeFunc) (char*);

	char* ____0_productId_marshaled = NULL;
	____0_productId_marshaled = il2cpp_codegen_marshal_string(___0_productId);

	char* returnValue = reinterpret_cast<PInvokeFunc>(getUnityPurchasingTransactionReceiptForProductId)(____0_productId_marshaled);

	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	il2cpp_codegen_marshal_free(____0_productId_marshaled);
	____0_productId_marshaled = NULL;

	return _returnValue_unmarshaled;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_getUnityPurchasingCanMakePayments_mDB14FA65BAD5B8882A9756A1747CF20684E1591C (const RuntimeMethod* method) 
{
	typedef int8_t (STDCALL *PInvokeFunc) ();

	int8_t returnValue = reinterpret_cast<PInvokeFunc>(getUnityPurchasingCanMakePayments)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_setSimulateAskToBuy_m4DB1EBD4D9A810ECFFDD09A1149529A32CE1E993 (bool ___0_enabled, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (int32_t);

	reinterpret_cast<PInvokeFunc>(setSimulateAskToBuy)(static_cast<int32_t>(___0_enabled));

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_getSimulateAskToBuy_m735428B17A5987233D12E024C3572695FA808940 (const RuntimeMethod* method) 
{
	typedef int8_t (STDCALL *PInvokeFunc) ();

	int8_t returnValue = reinterpret_cast<PInvokeFunc>(getSimulateAskToBuy)();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFetchStorePromotionOrder_mB13E3280E1A97F7B78F08CAFC7934FA1676FA310 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasingFetchStorePromotionOrder)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingUpdateStorePromotionOrder_m9F9A96BEB878129C3182AF58C130105577BB0D91 (String_t* ___0_json, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_json_marshaled = NULL;
	____0_json_marshaled = il2cpp_codegen_marshal_string(___0_json);

	reinterpret_cast<PInvokeFunc>(unityPurchasingUpdateStorePromotionOrder)(____0_json_marshaled);

	il2cpp_codegen_marshal_free(____0_json_marshaled);
	____0_json_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingFetchStorePromotionVisibility_m6E60C91B635720FBE7662740E99941F261252962 (String_t* ___0_productId, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*);

	char* ____0_productId_marshaled = NULL;
	____0_productId_marshaled = il2cpp_codegen_marshal_string(___0_productId);

	reinterpret_cast<PInvokeFunc>(unityPurchasingFetchStorePromotionVisibility)(____0_productId_marshaled);

	il2cpp_codegen_marshal_free(____0_productId_marshaled);
	____0_productId_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingUpdateStorePromotionVisibility_m8A090EB0265EACB18C1F24FA3B1DF933A5E79AD4 (String_t* ___0_productId, String_t* ___1_visibility, const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) (char*, char*);

	char* ____0_productId_marshaled = NULL;
	____0_productId_marshaled = il2cpp_codegen_marshal_string(___0_productId);

	char* ____1_visibility_marshaled = NULL;
	____1_visibility_marshaled = il2cpp_codegen_marshal_string(___1_visibility);

	reinterpret_cast<PInvokeFunc>(unityPurchasingUpdateStorePromotionVisibility)(____0_productId_marshaled, ____1_visibility_marshaled);

	il2cpp_codegen_marshal_free(____0_productId_marshaled);
	____0_productId_marshaled = NULL;

	il2cpp_codegen_marshal_free(____1_visibility_marshaled);
	____1_visibility_marshaled = NULL;

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_mFF9FC8FED58174DE0808EDD071451F2D38A4CF33 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasingInterceptPromotionalPurchases)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingContinuePromotionalPurchases_m5F6C6F56C404B3BE212558E6AC8DFE65DE3EC95C (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasingContinuePromotionalPurchases)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_unityPurchasingPresentCodeRedemptionSheet_m6548B57BCBF69AAA76C7D491B77CD77A52FF0F89 (const RuntimeMethod* method) 
{
	typedef void (STDCALL *PInvokeFunc) ();

	reinterpret_cast<PInvokeFunc>(unityPurchasingPresentCodeRedemptionSheet)();

}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_Sk1SetUnityPurchasingCallback_mBA8E5FFD326F7F02CB6E5195A787CFCA5B9A59FF (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, Sk1UnityPurchasingCallback_tEC9C8BA3D2964FE0F1357290A497D94F0C2ABF98* ___0_AsyncCallback, const RuntimeMethod* method) 
{
	{
		Sk1UnityPurchasingCallback_tEC9C8BA3D2964FE0F1357290A497D94F0C2ABF98* L_0 = ___0_AsyncCallback;
		iOSStoreBindings_setUnityPurchasingCallback_mD8A84057171C60A686615EC195696CC7A107EE00(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_SetUnityPurchasingCallback_m219BD679AD861A63ED28739140610DB5DA5463D6 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, UnityPurchasingCallback_t3C1333A45134D9A999AB29AEEBF05883A9A707F3* ___0_AsyncCallback, const RuntimeMethod* method) 
{
	{
		UnityPurchasingCallback_t3C1333A45134D9A999AB29AEEBF05883A9A707F3* L_0 = ___0_AsyncCallback;
		iOSStoreBindings_unityPurchasing_SetNativeCallback_m48C165929A4DFD0ABC5015941D3F46A68F46474D(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_AppReceipt_mF5EA98F8BD47B15E76CF73B147730899D7ED8167 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1;
		L_1 = iOSStoreBindings_getUnityPurchasingAppReceipt_m80E86D75077BBE8B08625A5DF7E11EA9C3F4A9A6(NULL);
		return L_1;
	}

IL_000e:
	{
		intptr_t L_2;
		L_2 = iOSStoreBindings_unityPurchasing_FetchAppReceipt_mD2F9C5650B0A670C22FB4CD71A52D5AAE46C2ACF(NULL);
		String_t* L_3;
		L_3 = iOSStoreBindings_MarshalAndDeallocate_m212AF39E2C2802569CACC0B7ADB7F57EC604215B(__this, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_DeallocateMemory_mEBD5AACED8199802A7628078CD3396F89CC480E9 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, intptr_t ___0_pointer, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		intptr_t L_1 = ___0_pointer;
		iOSStoreBindings_unityPurchasing_DeallocateMemory_m038C009D4E37DF441F6E99D723C125A08DD3B168(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_MarshalAndDeallocate_m212AF39E2C2802569CACC0B7ADB7F57EC604215B (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, intptr_t ___0_ptr, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	{
		intptr_t L_0 = ___0_ptr;
		bool L_1;
		L_1 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline(L_0, 0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000f:
	{
		intptr_t L_2 = ___0_ptr;
		CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_3;
		L_3 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_2, NULL);
		intptr_t L_4 = ___0_ptr;
		iOSStoreBindings_DeallocateMemory_mEBD5AACED8199802A7628078CD3396F89CC480E9(__this, L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_get_canMakePayments_m28A7429A5777856D788F64097F63BAD019E00C92 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		bool L_1;
		L_1 = iOSStoreBindings_getUnityPurchasingCanMakePayments_mDB14FA65BAD5B8882A9756A1747CF20684E1591C(NULL);
		return L_1;
	}

IL_000e:
	{
		bool L_2;
		L_2 = iOSStoreBindings_unityPurchasing_CanMakePayments_mE673EACFA6FB9457CDDFF1536E883CCF164777BC(NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_Connect_m33ACEC93479F2203C0D20A74BFE37568A9050868 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_AddTransactionObserver_mDE4C2E69B7C8FB368B0120240D957E89869FFE6A (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		iOSStoreBindings_unityPurchasingAddTransactionObserver_m22F6BE6D987DF0AE7C810874A42DB3CFA19E631F(NULL);
		return;
	}

IL_000e:
	{
		iOSStoreBindings_unityPurchasing_AddTransactionObserver_mF6FD8433EC4FAB82F25CBD213B03E32462B668D8(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_SetApplicationUsername_mB2ADF1020AEE253DB07CCCC8569BF61DECAC17FD (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_applicationUsername, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___0_applicationUsername;
		iOSStoreBindings_unityPurchasingSetApplicationUsername_m835746E8BA98581B7AC00A138BFF91BA8AEE6AEA(L_1, NULL);
	}

IL_000e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_FetchProducts_m5ECD8737AF6F6849004DD88099D6FBD3132605AF (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___0_json;
		iOSStoreBindings_unityPurchasingRetrieveProducts_m569FA8ED1CFF3DAE74ADA34F4E888AA2A7E8B9C9(L_1, NULL);
		return;
	}

IL_000f:
	{
		String_t* L_2 = ___0_json;
		iOSStoreBindings_unityPurchasing_FetchProducts_m394B980FD20D9985D4747CE1C0847793A28CF4B7(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_FetchExistingPurchases_m8163D347D521F7B2E5F0BF0912233A69D5E275EE (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		iOSStoreBindings_unityPurchasing_FetchPurchases_mAFFB0F84632511BB45B80DF162D37B8ABFD00253(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_Purchase_mDD137547381A32459D42B5E8274F1F1F27986826 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productJSON, String_t* ___1_developerPayload, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___0_productJSON;
		String_t* L_2 = ___1_developerPayload;
		iOSStoreBindings_unityPurchasingPurchase_m061AAA8359F45793EEFE6CDA0F37B1D1F1FFACBE(L_1, L_2, NULL);
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___0_productJSON;
		String_t* L_4 = ___1_developerPayload;
		iOSStoreBindings_Purchase_mA9D5557593A6E529CD175C3ED1D9D5F365E64E29(__this, L_3, L_4, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_FinishTransaction_mDD77BBC44F32A0E5E508DEA91519F15B8F91C3F6 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productDescription, String_t* ___1_transactionId, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___0_productDescription;
		String_t* L_2 = ___1_transactionId;
		iOSStoreBindings_unityPurchasingFinishTransaction_mF42DE47794FABA772F61E9F08F52CEE0F6826579(L_1, L_2, NULL);
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___1_transactionId;
		String_t* L_4 = ___0_productDescription;
		bool L_5;
		L_5 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_4, NULL);
		iOSStoreBindings_unityPurchasing_FinishTransaction_mAC15FECCFE5690F2A2564C384DA071509930D7E1(L_3, (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_CheckEntitlement_m20D68F01725E5A4857126EBDD29F93CE0543A64D (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productId, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		String_t* L_1 = ___0_productId;
		iOSStoreBindings_unityPurchasing_checkEntitlement_mACCA1B8E37CDCD041FD49B766370B154CDA079CF(L_1, NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_RestoreTransactions_mE4FBAAB6141F2DD5411506DF435828A22947A0AF (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		iOSStoreBindings_unityPurchasingRestoreTransactions_mB4244B80E93554DCA2F652D286E22BB6ADF57AE7(NULL);
		return;
	}

IL_000e:
	{
		iOSStoreBindings_unityPurchasing_RestoreTransactions_m60FC0081733E7854F3439028D79C8AC3CF5B1BAF(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_FetchStorePromotionOrder_m4BEBB7E966E4119AFB47A363DE4FD7B4D040AFD2 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		iOSStoreBindings_unityPurchasingFetchStorePromotionOrder_mB13E3280E1A97F7B78F08CAFC7934FA1676FA310(NULL);
		return;
	}

IL_000e:
	{
		iOSStoreBindings_unityPurchasing_FetchStorePromotionOrder_m9744B2F56521360CB2953A834C985F9EA3B8C4C9(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_SetStorePromotionOrder_mD3F860F21F8035BE068CFAB3AD48DE72102998D4 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_json, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___0_json;
		iOSStoreBindings_unityPurchasingUpdateStorePromotionOrder_m9F9A96BEB878129C3182AF58C130105577BB0D91(L_1, NULL);
		return;
	}

IL_000f:
	{
		String_t* L_2 = ___0_json;
		iOSStoreBindings_unityPurchasing_UpdateStorePromotionOrder_m0A8E46E7369153C2949C3BC0D3E01E143F7617D0(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_FetchStorePromotionVisibility_mCB0C2EC9DDE3D77AC01FA69DB3E2C300F9C48698 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productId, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = ___0_productId;
		iOSStoreBindings_unityPurchasingFetchStorePromotionVisibility_m6E60C91B635720FBE7662740E99941F261252962(L_1, NULL);
		return;
	}

IL_000f:
	{
		String_t* L_2 = ___0_productId;
		iOSStoreBindings_unityPurchasing_FetchStorePromotionVisibility_mA2321D47DE402E732410060A5CBE0F14466623CC(L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_SetStorePromotionVisibility_m62BF7C1907BC81157CAD75A5E26B1C043DA752D1 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productId, String_t* ___1_visibility, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___0_productId;
		String_t* L_2 = ___1_visibility;
		iOSStoreBindings_unityPurchasingUpdateStorePromotionVisibility_m8A090EB0265EACB18C1F24FA3B1DF933A5E79AD4(L_1, L_2, NULL);
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___0_productId;
		String_t* L_4 = ___1_visibility;
		iOSStoreBindings_unityPurchasing_UpdateStorePromotionVisibility_m26953D212D7E97BCE04686869D2FF3A1F55B559F(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_InterceptPromotionalPurchases_mEBF2EA86F9E9A85F1AD4D78ADABC830A3A32110E (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		iOSStoreBindings_unityPurchasingInterceptPromotionalPurchases_mFF9FC8FED58174DE0808EDD071451F2D38A4CF33(NULL);
		return;
	}

IL_000e:
	{
		iOSStoreBindings_unityPurchasing_InterceptPromotionalPurchases_mEFD2433F7E5D3F29B6C5BDF94FC1CE33F105CDF1(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_ContinuePromotionalPurchases_m520F9C789F5A5780007614F110690229CF763E14 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		iOSStoreBindings_unityPurchasingContinuePromotionalPurchases_m5F6C6F56C404B3BE212558E6AC8DFE65DE3EC95C(NULL);
		return;
	}

IL_000e:
	{
		iOSStoreBindings_unityPurchasing_ContinuePromotionalPurchases_m2C8490DFD8E8FDE4295095CF3DDA27FBC16A6600(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_PresentCodeRedemptionSheet_mA36018A743EBDBFF3E91A2806E7A9B5A907C46D2 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		iOSStoreBindings_unityPurchasingPresentCodeRedemptionSheet_m6548B57BCBF69AAA76C7D491B77CD77A52FF0F89(NULL);
		return;
	}

IL_000e:
	{
		iOSStoreBindings_unityPurchasing_PresentCodeRedemptionSheet_m739E24429031D74599D6FE709878355EA7B7772A(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_Purchase_mC7E21E6F80754BB0A9169BAA577B8307A6800CD1 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productJson, String_t* ___1_optionsJson, StorefrontChangeCallback_tFF0E50758B09B379FFAD47874880E4CEC6AFB570* ___2_callback, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___0_productJson;
		String_t* L_2 = ___1_optionsJson;
		iOSStoreBindings_unityPurchasingPurchase_m061AAA8359F45793EEFE6CDA0F37B1D1F1FFACBE(L_1, L_2, NULL);
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___0_productJson;
		String_t* L_4 = ___1_optionsJson;
		StorefrontChangeCallback_tFF0E50758B09B379FFAD47874880E4CEC6AFB570* L_5 = ___2_callback;
		iOSStoreBindings_unityPurchasing_PurchaseProduct_m8E42AD9B736138448AC2C9AB53179E6C007CA214(L_3, L_4, L_5, (String_t*)NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_Purchase_mA9D5557593A6E529CD175C3ED1D9D5F365E64E29 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_productJson, String_t* ___1_optionsJson, String_t* ___2_impressionId, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___0_productJson;
		String_t* L_2 = ___1_optionsJson;
		iOSStoreBindings_unityPurchasingPurchase_m061AAA8359F45793EEFE6CDA0F37B1D1F1FFACBE(L_1, L_2, NULL);
		return;
	}

IL_0010:
	{
		String_t* L_3 = ___0_productJson;
		String_t* L_4 = ___1_optionsJson;
		String_t* L_5 = ___2_impressionId;
		iOSStoreBindings_unityPurchasing_PurchaseProduct_m8E42AD9B736138448AC2C9AB53179E6C007CA214(L_3, L_4, (StorefrontChangeCallback_tFF0E50758B09B379FFAD47874880E4CEC6AFB570*)NULL, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_RefreshAppReceipt_mB71B723604356E85F2A7FE5A27D4ECA3723BD453 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		iOSStoreBindings_unityPurchasingRefreshAppReceipt_m408A0596D923F8232A6BFC6CDD2C0C6D01FD184B(NULL);
		return;
	}

IL_000e:
	{
		iOSStoreBindings_unityPurchasing_RefreshAppReceipt_m06EF637EEE6B826AF51011D6F89E675AD09F7009(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_FetchStorefront_m2B16720EDC824E2130786C9BD8DB6F8DCD134F3C (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		iOSStoreBindings_unityPurchasing_FetchStorefront_mAE6E51610388F6CE9B6D5CE39C8B1CE5B5E79819(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool iOSStoreBindings_IsSceneFrontmost_m44E084476FFF746EB0D1EB1C25A473740BD7A7D3 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = iOSStoreBindings_unityPurchasing_IsSceneFrontmost_m0D3E572CABA8D80AED2A5EDD90555E205476847A(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_SetSceneBecameFrontmostCallback_m2B6200C1FBEC75C08DC595F4995EE2C5B1DEA53D (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, SceneBecameFrontmostCallback_t0746EA7E850C8DA37D69AB057888D0ACDC68ED9D* ___0_callback, const RuntimeMethod* method) 
{
	{
		SceneBecameFrontmostCallback_t0746EA7E850C8DA37D69AB057888D0ACDC68ED9D* L_0 = ___0_callback;
		iOSStoreBindings_unityPurchasing_SetSceneBecameFrontmostCallback_m22E27C65F13A546AB0E923A8A32A878296C50C55(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_FetchNativeDeviceInfo_m837A050FCF5DF503DC592F3E8B4687B301C46637 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		intptr_t L_0;
		L_0 = iOSStoreBindings_unityPurchasing_FetchNativeDeviceInfo_m9D6DEE8CDFA1B0FD1A6E657A3ED1E6066D3E9C3F(NULL);
		V_0 = L_0;
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		intptr_t L_1 = V_0;
		bool L_2;
		L_2 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_1, 0, NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{
				intptr_t L_3 = V_0;
				iOSStoreBindings_unityPurchasing_DeallocateMemory_m038C009D4E37DF441F6E99D723C125A08DD3B168(L_3, NULL);
				return;
			}
		});
		try
		{
			{
				intptr_t L_4 = V_0;
				CHECKED_LOCAL_INIT(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_StaticInit,(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				String_t* L_5;
				L_5 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_4, NULL);
				String_t* L_6 = L_5;
				if (L_6)
				{
					G_B3_0 = L_6;
					goto IL_0028_1;
				}
				G_B2_0 = L_6;
			}
			{
				G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			}

IL_0028_1:
			{
				V_1 = G_B3_0;
				goto IL_0032;
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

IL_0032:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_TransactionObserved_m1D206B8B42C8AD9CB0DDBF2E739EDE15DE4BB5BE (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_transactionId, String_t* ___1_productId, String_t* ___2_productJsonRepresentation, double ___3_transactionUnixTime, String_t* ___4_transactionJsonRepresentation, String_t* ___5_signatureJws, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_transactionId;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		___0_transactionId = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___1_productId;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		___1_productId = L_3;
	}

IL_0014:
	{
		String_t* L_4 = ___2_productJsonRepresentation;
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		___2_productJsonRepresentation = _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60;
	}

IL_001e:
	{
		String_t* L_5 = ___4_transactionJsonRepresentation;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		___4_transactionJsonRepresentation = _stringLiteral9ED931619E39F59A8520C1E3B03FEA2E9A56FB60;
	}

IL_0029:
	{
		String_t* L_6 = ___5_signatureJws;
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		___5_signatureJws = L_7;
	}

IL_0034:
	{
		String_t* L_8 = ___0_transactionId;
		String_t* L_9 = ___1_productId;
		String_t* L_10 = ___2_productJsonRepresentation;
		double L_11 = ___3_transactionUnixTime;
		String_t* L_12 = ___4_transactionJsonRepresentation;
		String_t* L_13 = ___5_signatureJws;
		iOSStoreBindings_unityPurchasing_TransactionObserved_m7320C9D07EA17F4B3FF6C10BD8A4AE71D38C67E6(L_8, L_9, L_10, L_11, L_12, L_13, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_FetchAdvertisingIdentifier_m8A74C030315BA2E8EF86EBBE50B51EC5FC38F2E3 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		intptr_t L_1;
		L_1 = iOSStoreBindings_unityPurchasing_FetchAdvertisingIdentifier_m1087AA23B97D994AC087F4E9932276AC5BF4C157(NULL);
		String_t* L_2;
		L_2 = iOSStoreBindings_MarshalAndDeallocate_m212AF39E2C2802569CACC0B7ADB7F57EC604215B(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* iOSStoreBindings_FetchVendorIdentifier_m496259271CE1D16965699E9ECBAE95F285603CE8 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useStoreKit1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		intptr_t L_1;
		L_1 = iOSStoreBindings_unityPurchasing_FetchVendorIdentifier_m58DD9BFF3C42F86930755B14776D62BC6712DBD5(NULL);
		String_t* L_2;
		L_2 = iOSStoreBindings_MarshalAndDeallocate_m212AF39E2C2802569CACC0B7ADB7F57EC604215B(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_ExternalPurchaseCheckEligibility_m0A8B30E547A33BDAFC886226AB5E38E2AC1074D7 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___0_callback, const RuntimeMethod* method) 
{
	{
		ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* L_0 = ___0_callback;
		iOSStoreBindings_externalPurchase_CheckEligibility_mD3C5DED105B343DEEA3D2518C6985884621571A5(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_ExternalPurchaseFetchToken_m2F9A08C52BAB623814DD463EE4EE8E39F2A35333 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_tokenType, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___1_callback, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_tokenType;
		ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* L_1 = ___1_callback;
		iOSStoreBindings_externalPurchase_FetchToken_m34B670FBD31687AD3AC173D5C3C85AE47245DCF7(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_ExternalPurchaseShowNotice_m24BD508DAAF22718B431334445943D6A644AD21F (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, String_t* ___0_noticeType, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___1_callback, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_noticeType;
		ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* L_1 = ___1_callback;
		iOSStoreBindings_externalPurchase_ShowNotice_m853386ACA76574B0AE38BCF0C5F6F4732DE36137(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings_ExternalPurchaseFetchStorefront_m6233B1E0096278E124710CCDF1DF8A158D947ED4 (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* ___0_callback, const RuntimeMethod* method) 
{
	{
		ExternalPurchaseCallback_tFD91291B1046ACF14B01058D1143857F58FFA112* L_0 = ___0_callback;
		iOSStoreBindings_externalPurchase_FetchStorefront_m1701E53C19DCDB4620250B2F14F1EEF491EA7640(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void iOSStoreBindings__ctor_mE32A73607E2E7F2341870734F6EA96375BB760DB (iOSStoreBindings_t6D0B0FA1099D0078AA43F5214A8DFAE1663323B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StoreKitSelector_t023F51AD15CD5DF94B40BF3D702A94C600A65012_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(StoreKitSelector_t023F51AD15CD5DF94B40BF3D702A94C600A65012_StaticInit);
	{
		CHECKED_LOCAL_INIT(StoreKitSelector_t023F51AD15CD5DF94B40BF3D702A94C600A65012_StaticInit,(StoreKitSelector_t023F51AD15CD5DF94B40BF3D702A94C600A65012_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = StoreKitSelector_UseStoreKit1_mA84434742170AB872EFD3BAF1EB03703AE001CDF(NULL);
		__this->___useStoreKit1 = L_0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
