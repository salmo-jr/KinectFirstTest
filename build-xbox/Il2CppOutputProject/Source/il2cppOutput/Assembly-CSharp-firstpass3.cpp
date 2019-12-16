#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>>>
struct CollectionMap_2_t364F21B832B2A872667AE224366EF89912E7CAB8;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>
struct CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F;
// Helper.CollectionMap`2<System.IntPtr,System.Object>
struct CollectionMap_2_t52657472AFDE12BFFCA6275BEC18484F2AE325B3;
// Helper.EventPump
struct EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213;
// Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA;
// Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>
struct ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4;
// Helper.ThreadSafeDictionary`2<System.IntPtr,System.Object>
struct ThreadSafeDictionary_2_t1BAE67D6EA2EE979A9437F0BE64FAAB2D9F8ED60;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct Dictionary_2_t6122C868854AAB29C9CD10F1688F39DA0C809DCF;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>
struct Dictionary_2_t4C07E3C5FA3A982E120056C6006177ED2A37E66F;
// System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>
struct List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92;
// System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>
struct List_1_tC026AE19364CD494F8F787C71248528372071F87;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t3900094C92EA06922F371A34500D5D7E6ACF2795;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>[]
struct EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868;
// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>
struct EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA;
// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>[]
struct EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB;
// System.Func`2<System.IntPtr,System.Object>
struct Func_2_t8C47EE6543B948AA190255E06F0EC43AE2782C32;
// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor>
struct Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6;
// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame>
struct Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B;
// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReference>
struct Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.ObjectDisposedException
struct ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Windows.Data.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1;
// Windows.Kinect.KinectSensor
struct KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9;
// Windows.Kinect.MultiSourceFrame
struct MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096;
// Windows.Kinect.MultiSourceFrameArrivedEventArgs
struct MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B;
// Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c
struct U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC;
// Windows.Kinect.MultiSourceFrameReader
struct MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8;
// Windows.Kinect.MultiSourceFrameReader/<>c
struct U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1
struct U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0;
// Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512;
// Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610;
// Windows.Kinect.MultiSourceFrameReference
struct MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90;
// Windows.Kinect.MultiSourceFrameReference/<>c
struct U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral155EF5FAC7D9A0E0AA0571ABC5D59840286485E6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D206981DE3DE9A549DB141C298906B799B6E9F3;
IL2CPP_EXTERN_C String_t* _stringLiteralE8E7D411FC5F522D27EEC08F97BC5DB80F80D30E;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionMap_2__ctor_m64EBCD59059EF2C20B4126D5253C4F02C809DB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionMap_2__ctor_m738BCEFFD82C06F5635877430E33D7EC0A83E671_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A47252386F1BFE2896C1078063B5DC7FD6CDF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1F6EA3501DF3A1009FA78F724956178008B93893_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8F1813069929FAE20D8B7F23025C3B289FAB4216_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m98300163A2457CC54D8CAEA08F68F3288DDEE8FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m06FEE1ED3BBC6ECF01621FB315D61AA12ADF14ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1FA91E449D3820A3AC6456264622316E1FF14477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mBE50F4C9C45EF02F3F11DBF0381A539DF07E6F15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mC57BEF475A14E308B81ECAD4F987DF1BF9C0E289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m213BACFED1C544F3A75903FE6031235CA6BCB8BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF1F83822EB87CB92978FA5E313C1C801B396BAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF5B322B39165EE89480E0FA62B79C15E11D92C92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEAA52D3E73BD725759E127DEC8705C4112379737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF05016A10BD80B08A20B9917F5308BEF8841924B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m73ACED094C6D426A6BC9B77D08595F44B598D2D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7F3E7D2ADC19A3D6892B6CDC93A72533F6FA955F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1155BBCD596E9A1C8348FA2C6707A30D27F18ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mABF9D65C0BC615B875EED962D3D812327FC7AC1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m7D474E43663B2270F2D24EDEE1FB56D2F0B913DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mE1213A6FF2FD5856DFA54913348CAE88408BAF32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameArrivedEventArgs_get_FrameReference_m50720A51AF8F0343B4DF12910E55E82196C65D4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReader_AcquireLatestFrame_m66E38BE11CCB82E67EB7ABADA127217153335989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReader_get_FrameSourceTypes_m0E5C093CAC166CFDD0E7845F6881A518DD80934D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReader_get_IsPaused_m1A3508893EAAF0198581AAFF04E95443A06C9722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReader_get_KinectSensor_m96AFC66AC2FB2702438787DAF0D7FCA8F140DA0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReader_set_IsPaused_mF229F9A7DBF947B04297176A5C117C0AE10180CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiSourceFrameReference_AcquireFrame_mDA04D7D24F0751AB58215D0B8D868BF1FF0D9A33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeObjectCache_CreateOrGetObject_TisKinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_m2835D838B978D79BA50A5A63A1A2AF827A6CDF0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeObjectCache_CreateOrGetObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_mBAB0BE179AAAD28D294A9240E0471F41F9D12916_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeObjectCache_CreateOrGetObject_TisMultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_m0FEA06CD28D44660D284DDBDBE165DB9CA2AB3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeObjectCache_GetObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m42AAAAF9F1E0EB5F49C6FA66B8236E3BA484231C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeObjectCache_RemoveObject_TisMultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B_mF288AC628F25858527C47EEB2191D95E549C68F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeObjectCache_RemoveObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m9EC6BEA78680B0C8E7FB2B5D90C3E0B7FC5A504E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeObjectCache_RemoveObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_m22B4EADC558C684486B67D8DF52EC92CAAB0ED1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionary_2_TryGetValue_m01CA52B8F087AA6E899A1C00D279DE6618092C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionary_2_TryGetValue_mCE8CE01A95B66F9B1D3C8289E0FF34FB7E98F91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAcquireFrameU3Eb__9_0_m67758329CA46B7BF56338DD2CAAA09ED826C739C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAcquireLatestFrameU3Eb__36_0_m3D4621D52398F131798A23BA57F59A1B9D5B8B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_FrameReferenceU3Eb__10_0_m40813E113FB6174FF88D4927C879C06E5B5F6FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_KinectSensorU3Eb__18_0_mE88C0BB851D53FFEE9E1FBCE428BB57D616B95F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_1_U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Eb__0_mFCF1F3F4FF85E5F694B4F939B82FB9549E44AC10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass30_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mA56C79F5F13ACA0411E1F5DA94FB00501D42AF9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameArrivedEventArgs_Dispose_mD8A5D0489DD3BA96A604167B7FC8032AC6CA5366_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameArrivedEventArgs__ctor_m8B5D34E368111F374B16DD33D8920A230373A9F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameArrivedEventArgs_get_FrameReference_m50720A51AF8F0343B4DF12910E55E82196C65D4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_AcquireLatestFrame_m66E38BE11CCB82E67EB7ABADA127217153335989_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_Dispose_m1B59937CAA5F7949E79BEEF0B55E88FB6E6F96AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_Dispose_m6B8F852C880BF04A348AF0752313B865D171AF57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader___EventCleanup_m2EC50AD24A1D404B6BD48CE4528F14B68D2F9FF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader__cctor_m31439AA65FDF0E25CDC79EEBA4A08BA952085D4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader__ctor_mAA44435A1C8A51FDEB412A1E4A5CBAB9191128B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_add_MultiSourceFrameArrived_m495E62BB991EACAAB78AFBA0B6F337154EE1E236_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_add_PropertyChanged_m06B78CD4753542D475E339B3CFEFD937893F041F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_get_FrameSourceTypes_m0E5C093CAC166CFDD0E7845F6881A518DD80934D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_get_IsPaused_m1A3508893EAAF0198581AAFF04E95443A06C9722_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_get_KinectSensor_m96AFC66AC2FB2702438787DAF0D7FCA8F140DA0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_remove_MultiSourceFrameArrived_mF28A73607E048C8A3EFFE149930A2D5F4DCB27C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_remove_PropertyChanged_m6F305CF544A904E68F5374BFEBC7C3A1FAD40910_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReader_set_IsPaused_mF229F9A7DBF947B04297176A5C117C0AE10180CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReference_AcquireFrame_mDA04D7D24F0751AB58215D0B8D868BF1FF0D9A33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiSourceFrameReference_Dispose_mE5E95499CFF26A6BA739C98F54BEEDBC208C24C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointF_op_Equality_m35B2C6399EC4621A0C901FB64ABA73918D6BEA31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PointF_op_Inequality_mB726534FFF54051A047F6C63CC304D26418A3575_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CAcquireFrameU3Eb__9_0_m67758329CA46B7BF56338DD2CAAA09ED826C739C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CAcquireLatestFrameU3Eb__36_0_m3D4621D52398F131798A23BA57F59A1B9D5B8B06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3Cget_FrameReferenceU3Eb__10_0_m40813E113FB6174FF88D4927C879C06E5B5F6FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3Cget_KinectSensorU3Eb__18_0_mE88C0BB851D53FFEE9E1FBCE428BB57D616B95F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass22_1_U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Eb__0_mFCF1F3F4FF85E5F694B4F939B82FB9549E44AC10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass30_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mA56C79F5F13ACA0411E1F5DA94FB00501D42AF9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m0ED057D94FECCFBF544FEF804F6BCA4979F6F876_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m1B5E89E4D69467E1307A88595ED7A0C059332BD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m6A156E378F58FBBAD1B1CEEA783A0246A2199BB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector4_Equals_mAE8C94D1E2DEB35D84C6CC7A29189B73E5160488_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _Windows_Data_PropertyChangedEventArgs_Delegate_BeginInvoke_mAED4A964FDECD3B5B228182EE8382B1E1319B57C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_BeginInvoke_mC260BDE393141AC6DF22B0F8765464664A368F80_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct  ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Helper.ThreadSafeDictionary`2::_impl
	Dictionary_2_t6122C868854AAB29C9CD10F1688F39DA0C809DCF * ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA, ____impl_0)); }
	inline Dictionary_2_t6122C868854AAB29C9CD10F1688F39DA0C809DCF * get__impl_0() const { return ____impl_0; }
	inline Dictionary_2_t6122C868854AAB29C9CD10F1688F39DA0C809DCF ** get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(Dictionary_2_t6122C868854AAB29C9CD10F1688F39DA0C809DCF * value)
	{
		____impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____impl_0), (void*)value);
	}
};


// Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>
struct  ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Helper.ThreadSafeDictionary`2::_impl
	Dictionary_2_t4C07E3C5FA3A982E120056C6006177ED2A37E66F * ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4, ____impl_0)); }
	inline Dictionary_2_t4C07E3C5FA3A982E120056C6006177ED2A37E66F * get__impl_0() const { return ____impl_0; }
	inline Dictionary_2_t4C07E3C5FA3A982E120056C6006177ED2A37E66F ** get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(Dictionary_2_t4C07E3C5FA3A982E120056C6006177ED2A37E66F * value)
	{
		____impl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____impl_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>
struct  List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92, ____items_1)); }
	inline EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868* get__items_1() const { return ____items_1; }
	inline EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92_StaticFields, ____emptyArray_5)); }
	inline EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EventHandler_1U5BU5D_t9F311C9730FDF63623F6378EAE09F6322AB90868* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>
struct  List_1_tC026AE19364CD494F8F787C71248528372071F87  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC026AE19364CD494F8F787C71248528372071F87, ____items_1)); }
	inline EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB* get__items_1() const { return ____items_1; }
	inline EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC026AE19364CD494F8F787C71248528372071F87, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC026AE19364CD494F8F787C71248528372071F87, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC026AE19364CD494F8F787C71248528372071F87, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC026AE19364CD494F8F787C71248528372071F87_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC026AE19364CD494F8F787C71248528372071F87_StaticFields, ____emptyArray_5)); }
	inline EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(EventHandler_1U5BU5D_t1A419E3031D74A7E7822BEB932DC01B2157E55DB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.String
struct  String_t  : public RuntimeObject
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
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Windows.Kinect.MultiSourceFrameArrivedEventArgs_<>c
struct  U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_StaticFields
{
public:
	// Windows.Kinect.MultiSourceFrameArrivedEventArgs_<>c Windows.Kinect.MultiSourceFrameArrivedEventArgs_<>c::<>9
	U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReference> Windows.Kinect.MultiSourceFrameArrivedEventArgs_<>c::<>9__10_0
	Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader_<>c
struct  U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields
{
public:
	// Windows.Kinect.MultiSourceFrameReader_<>c Windows.Kinect.MultiSourceFrameReader_<>c::<>9
	U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor> Windows.Kinect.MultiSourceFrameReader_<>c::<>9__18_0
	Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * ___U3CU3E9__18_0_1;
	// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame> Windows.Kinect.MultiSourceFrameReader_<>c::<>9__36_0
	Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * ___U3CU3E9__36_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields, ___U3CU3E9__36_0_2)); }
	inline Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * get_U3CU3E9__36_0_2() const { return ___U3CU3E9__36_0_2; }
	inline Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B ** get_address_of_U3CU3E9__36_0_2() { return &___U3CU3E9__36_0_2; }
	inline void set_U3CU3E9__36_0_2(Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * value)
	{
		___U3CU3E9__36_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_2), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_0
struct  U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB  : public RuntimeObject
{
public:
	// Windows.Kinect.MultiSourceFrameReader Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_0::objThis
	MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * ___objThis_0;
	// Windows.Kinect.MultiSourceFrameArrivedEventArgs Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_0::args
	MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB, ___objThis_0)); }
	inline MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * get_objThis_0() const { return ___objThis_0; }
	inline MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB, ___args_1)); }
	inline MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * get_args_1() const { return ___args_1; }
	inline MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_1
struct  U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs> Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_1::func
	EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * ___func_0;
	// Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_0 Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908, ___func_0)); }
	inline EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * get_func_0() const { return ___func_0; }
	inline EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C  : public RuntimeObject
{
public:
	// Windows.Kinect.MultiSourceFrameReader Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_0::objThis
	MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * ___objThis_0;
	// Windows.Data.PropertyChangedEventArgs Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_0::args
	PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C, ___objThis_0)); }
	inline MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * get_objThis_0() const { return ___objThis_0; }
	inline MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C, ___args_1)); }
	inline PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 * get_args_1() const { return ___args_1; }
	inline PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_1
struct  U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs> Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_1::func
	EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * ___func_0;
	// Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_0 Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0, ___func_0)); }
	inline EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * get_func_0() const { return ___func_0; }
	inline EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReference_<>c
struct  U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_StaticFields
{
public:
	// Windows.Kinect.MultiSourceFrameReference_<>c Windows.Kinect.MultiSourceFrameReference_<>c::<>9
	U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame> Windows.Kinect.MultiSourceFrameReference_<>c::<>9__9_0
	Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}
};


// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct  CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90  : public ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA
{
public:

public:
};


// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>
struct  CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F  : public ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>
struct  Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03, ___list_0)); }
	inline List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * get_list_0() const { return ___list_0; }
	inline List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03, ___current_3)); }
	inline EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * get_current_3() const { return ___current_3; }
	inline EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>
struct  Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1, ___list_0)); }
	inline List_1_tC026AE19364CD494F8F787C71248528372071F87 * get_list_0() const { return ___list_0; }
	inline List_1_tC026AE19364CD494F8F787C71248528372071F87 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC026AE19364CD494F8F787C71248528372071F87 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1, ___current_3)); }
	inline EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * get_current_3() const { return ___current_3; }
	inline EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Windows.Kinect.ColorSpacePoint
struct  ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9 
{
public:
	// System.Single Windows.Kinect.ColorSpacePoint::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_0;
	// System.Single Windows.Kinect.ColorSpacePoint::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9, ___U3CXU3Ek__BackingField_0)); }
	inline float get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(float value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9, ___U3CYU3Ek__BackingField_1)); }
	inline float get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(float value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}
};


// Windows.Kinect.PointF
struct  PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B 
{
public:
	// System.Single Windows.Kinect.PointF::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_0;
	// System.Single Windows.Kinect.PointF::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B, ___U3CXU3Ek__BackingField_0)); }
	inline float get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(float value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B, ___U3CYU3Ek__BackingField_1)); }
	inline float get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(float value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}
};


// Windows.Kinect.Vector4
struct  Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E 
{
public:
	// System.Single Windows.Kinect.Vector4::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_0;
	// System.Single Windows.Kinect.Vector4::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_1;
	// System.Single Windows.Kinect.Vector4::<Z>k__BackingField
	float ___U3CZU3Ek__BackingField_2;
	// System.Single Windows.Kinect.Vector4::<W>k__BackingField
	float ___U3CWU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E, ___U3CXU3Ek__BackingField_0)); }
	inline float get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(float value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E, ___U3CYU3Ek__BackingField_1)); }
	inline float get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(float value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CZU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E, ___U3CZU3Ek__BackingField_2)); }
	inline float get_U3CZU3Ek__BackingField_2() const { return ___U3CZU3Ek__BackingField_2; }
	inline float* get_address_of_U3CZU3Ek__BackingField_2() { return &___U3CZU3Ek__BackingField_2; }
	inline void set_U3CZU3Ek__BackingField_2(float value)
	{
		___U3CZU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CWU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E, ___U3CWU3Ek__BackingField_3)); }
	inline float get_U3CWU3Ek__BackingField_3() const { return ___U3CWU3Ek__BackingField_3; }
	inline float* get_address_of_U3CWU3Ek__BackingField_3() { return &___U3CWU3Ek__BackingField_3; }
	inline void set_U3CWU3Ek__BackingField_3(float value)
	{
		___U3CWU3Ek__BackingField_3 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Windows.Data.PropertyChangedEventArgs
struct  PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.IntPtr Windows.Data.PropertyChangedEventArgs::_pNative
	intptr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1, ____pNative_1)); }
	inline intptr_t get__pNative_1() const { return ____pNative_1; }
	inline intptr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(intptr_t value)
	{
		____pNative_1 = value;
	}
};


// Windows.Kinect.FrameSourceTypes
struct  FrameSourceTypes_t77919328036159BBB2D26AA3488E09958F7FCA6F 
{
public:
	// System.UInt32 Windows.Kinect.FrameSourceTypes::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameSourceTypes_t77919328036159BBB2D26AA3488E09958F7FCA6F, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Kinect.KinectSensor
struct  KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.KinectSensor::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};

struct KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.KinectSensor::_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>>> Windows.Kinect.KinectSensor::Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t364F21B832B2A872667AE224366EF89912E7CAB8 * ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.KinectSensor::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.KinectSensor::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;

public:
	inline static int32_t get_offset_of__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_StaticFields, ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_StaticFields, ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t364F21B832B2A872667AE224366EF89912E7CAB8 * get_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t364F21B832B2A872667AE224366EF89912E7CAB8 ** get_address_of_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2(CollectionMap_2_t364F21B832B2A872667AE224366EF89912E7CAB8 * value)
	{
		___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrame
struct  MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrame::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.MultiSourceFrameArrivedEventArgs
struct  MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrameArrivedEventArgs::_pNative
	intptr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B, ____pNative_1)); }
	inline intptr_t get__pNative_1() const { return ____pNative_1; }
	inline intptr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(intptr_t value)
	{
		____pNative_1 = value;
	}
};


// Windows.Kinect.MultiSourceFrameReader
struct  MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrameReader::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};

struct MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.MultiSourceFrameReader::_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>> Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks
	CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * ___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.MultiSourceFrameReader::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.MultiSourceFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;

public:
	inline static int32_t get_offset_of__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields, ____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields, ___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F ** get_address_of_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2(CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * value)
	{
		___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReference
struct  MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.TrackingConfidence
struct  TrackingConfidence_t45ACB10D8F46E34CF3E8304437923D97D8616745 
{
public:
	// System.Int32 Windows.Kinect.TrackingConfidence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingConfidence_t45ACB10D8F46E34CF3E8304437923D97D8616745, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Kinect.TrackingState
struct  TrackingState_t62D1284CF8A02FA87B1CFAA19C9D98C7FA4B16A9 
{
public:
	// System.Int32 Windows.Kinect.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t62D1284CF8A02FA87B1CFAA19C9D98C7FA4B16A9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// System.ObjectDisposedException
struct  ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A  : public InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct  EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>
struct  EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor>
struct  Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame>
struct  Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReference>
struct  Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Windows.Kinect.MultiSourceFrameReader__Windows_Data_PropertyChangedEventArgs_Delegate
struct  _Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.MultiSourceFrameReader__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate
struct  _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Helper.EventPump
struct  EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.Generic.Queue`1<System.Action> Helper.EventPump::m_Queue
	Queue_1_t3900094C92EA06922F371A34500D5D7E6ACF2795 * ___m_Queue_5;

public:
	inline static int32_t get_offset_of_m_Queue_5() { return static_cast<int32_t>(offsetof(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213, ___m_Queue_5)); }
	inline Queue_1_t3900094C92EA06922F371A34500D5D7E6ACF2795 * get_m_Queue_5() const { return ___m_Queue_5; }
	inline Queue_1_t3900094C92EA06922F371A34500D5D7E6ACF2795 ** get_address_of_m_Queue_5() { return &___m_Queue_5; }
	inline void set_m_Queue_5(Queue_1_t3900094C92EA06922F371A34500D5D7E6ACF2795 * value)
	{
		___m_Queue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Queue_5), (void*)value);
	}
};

struct EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_StaticFields
{
public:
	// System.Object Helper.EventPump::s_Lock
	RuntimeObject * ___s_Lock_4;
	// Helper.EventPump Helper.EventPump::<Instance>k__BackingField
	EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 * ___U3CInstanceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_s_Lock_4() { return static_cast<int32_t>(offsetof(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_StaticFields, ___s_Lock_4)); }
	inline RuntimeObject * get_s_Lock_4() const { return ___s_Lock_4; }
	inline RuntimeObject ** get_address_of_s_Lock_4() { return &___s_Lock_4; }
	inline void set_s_Lock_4(RuntimeObject * value)
	{
		___s_Lock_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Lock_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_StaticFields, ___U3CInstanceU3Ek__BackingField_6)); }
	inline EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 * get_U3CInstanceU3Ek__BackingField_6() const { return ___U3CInstanceU3Ek__BackingField_6; }
	inline EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 ** get_address_of_U3CInstanceU3Ek__BackingField_6() { return &___U3CInstanceU3Ek__BackingField_6; }
	inline void set_U3CInstanceU3Ek__BackingField_6(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 * value)
	{
		___U3CInstanceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Helper.NativeObjectCache::RemoveObject<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeObjectCache_RemoveObject_TisRuntimeObject_mC7B8B48223F57502B000A5B2717B0100DABA625F_gshared (intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void System.Func`2<System.IntPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mB01B0159B0678F359F39E713F6E63EEA87902616_gshared (Func_2_t8C47EE6543B948AA190255E06F0EC43AE2782C32 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// T Helper.NativeObjectCache::CreateOrGetObject<System.Object>(System.IntPtr,System.Func`2<System.IntPtr,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NativeObjectCache_CreateOrGetObject_TisRuntimeObject_mC7C7A1961C0F40A4B4F96DAB1B6C19311A764A81_gshared (intptr_t ___nativePtr0, Func_2_t8C47EE6543B948AA190255E06F0EC43AE2782C32 * ___create1, const RuntimeMethod* method);
// System.Boolean Helper.ThreadSafeDictionary`2<System.IntPtr,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadSafeDictionary_2_TryGetValue_mD430E517FB8643C1C56FD562C4EF6460D1569F98_gshared (ThreadSafeDictionary_2_t1BAE67D6EA2EE979A9437F0BE64FAAB2D9F8ED60 * __this, intptr_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// T Helper.NativeObjectCache::GetObject<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * NativeObjectCache_GetObject_TisRuntimeObject_m0EC71D43114CEC87D38A7CA838D0D4D4603E11AF_gshared (intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean Helper.CollectionMap`2<System.IntPtr,System.Object>::TryAddDefault(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionMap_2_TryAddDefault_mBBC30AFD8E82D37D64171EBC389331B88C7D02F4_gshared (CollectionMap_2_t52657472AFDE12BFFCA6275BEC18484F2AE325B3 * __this, intptr_t p0, const RuntimeMethod* method);
// TValue Helper.ThreadSafeDictionary`2<System.IntPtr,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ThreadSafeDictionary_2_get_Item_m57B61195E188061972F36E057C314BC47AF013E7_gshared (ThreadSafeDictionary_2_t1BAE67D6EA2EE979A9437F0BE64FAAB2D9F8ED60 * __this, intptr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void Helper.CollectionMap`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionMap_2__ctor_m4DD441C45813E872F2108B083DDACA3A00CBE021_gshared (CollectionMap_2_t52657472AFDE12BFFCA6275BEC18484F2AE325B3 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject_m9936CC7CCCA6C9F68A2C235DCEABDA54A2EC58DB (intptr_t* ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs_Dispose_mD8A5D0489DD3BA96A604167B7FC8032AC6CA5366 (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::__EventCleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs___EventCleanup_m4885DB9D8A6A03B5172E508227D04D8FE8B5CD72 (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, const RuntimeMethod* method);
// System.Void Helper.NativeObjectCache::RemoveObject<Windows.Kinect.MultiSourceFrameArrivedEventArgs>(System.IntPtr)
inline void NativeObjectCache_RemoveObject_TisMultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B_mF288AC628F25858527C47EEB2191D95E549C68F9 (intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	((  void (*) (intptr_t, const RuntimeMethod*))NativeObjectCache_RemoveObject_TisRuntimeObject_mC7B8B48223F57502B000A5B2717B0100DABA625F_gshared)(___nativePtr0, method);
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject_m15EF10AE7A88EA03B431E1EAC469A1202E11A968 (intptr_t* ___pNative0, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9 (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * __this, String_t* p0, const RuntimeMethod* method);
// System.IntPtr Windows.Kinect.MultiSourceFrameArrivedEventArgs::Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference_m42ECCD47D18D7FE7662F01E826B42DB345B28512 (intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Helper.ExceptionHelper::CheckLastError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionHelper_CheckLastError_m7BC544A6D3A400522FE417C820D91A9E71586F7A (const RuntimeMethod* method);
// System.Void System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReference>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m213BACFED1C544F3A75903FE6031235CA6BCB8BB (Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB01B0159B0678F359F39E713F6E63EEA87902616_gshared)(__this, p0, p1, method);
}
// T Helper.NativeObjectCache::CreateOrGetObject<Windows.Kinect.MultiSourceFrameReference>(System.IntPtr,System.Func`2<System.IntPtr,T>)
inline MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * NativeObjectCache_CreateOrGetObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_mBAB0BE179AAAD28D294A9240E0471F41F9D12916 (intptr_t ___nativePtr0, Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * ___create1, const RuntimeMethod* method)
{
	return ((  MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * (*) (intptr_t, Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 *, const RuntimeMethod*))NativeObjectCache_CreateOrGetObject_TisRuntimeObject_mC7C7A1961C0F40A4B4F96DAB1B6C19311A764A81_gshared)(___nativePtr0, ___create1, method);
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F4A274A933C1EE5ACD6BB7C6455935352FE4C5B (U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference__ctor_mC2CF2C96F9CA01685951D59AA8374A5F122EFA7F (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E (intptr_t ___result0, intptr_t ___pNative1, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18 (intptr_t ___result0, intptr_t ___pNative1, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_AddRefObject(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AddRefObject_mC4E735697394F58ADB68EC0A2F7EA907D1DAB6D7 (intptr_t* ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Dispose_m1B59937CAA5F7949E79BEEF0B55E88FB6E6F96AA (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::__EventCleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader___EventCleanup_m2EC50AD24A1D404B6BD48CE4528F14B68D2F9FF8 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method);
// System.Void Helper.NativeObjectCache::RemoveObject<Windows.Kinect.MultiSourceFrameReader>(System.IntPtr)
inline void NativeObjectCache_RemoveObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m9EC6BEA78680B0C8E7FB2B5D90C3E0B7FC5A504E (intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	((  void (*) (intptr_t, const RuntimeMethod*))NativeObjectCache_RemoveObject_TisRuntimeObject_mC7B8B48223F57502B000A5B2717B0100DABA625F_gshared)(___nativePtr0, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_Dispose_m62782EF655F9F31BF3C66C95520105E51D8FAD38 (intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_ReleaseObject(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_ReleaseObject_m2179C58195AAEB54288F3FA7B4DEE0952CD0AD45 (intptr_t* ___pNative0, const RuntimeMethod* method);
// Windows.Kinect.FrameSourceTypes Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes_mBFE7DF10F7256434428F42143F1249435D46267A (intptr_t ___pNative0, const RuntimeMethod* method);
// System.Boolean Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_IsPaused(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_IsPaused_m10A1E6E42961DF983C64A41E442E88FB68B4501F (intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_put_IsPaused_mF8F4DCA33CE5CE0F6C145E3DA370ED89D19D2F87 (intptr_t ___pNative0, bool ___isPaused1, const RuntimeMethod* method);
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_KinectSensor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_KinectSensor_m62B29A138B0D9C3AC83767531EC18D4385E1F0AB (intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF5B322B39165EE89480E0FA62B79C15E11D92C92 (Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB01B0159B0678F359F39E713F6E63EEA87902616_gshared)(__this, p0, p1, method);
}
// T Helper.NativeObjectCache::CreateOrGetObject<Windows.Kinect.KinectSensor>(System.IntPtr,System.Func`2<System.IntPtr,T>)
inline KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 * NativeObjectCache_CreateOrGetObject_TisKinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_m2835D838B978D79BA50A5A63A1A2AF827A6CDF0A (intptr_t ___nativePtr0, Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * ___create1, const RuntimeMethod* method)
{
	return ((  KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 * (*) (intptr_t, Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 *, const RuntimeMethod*))NativeObjectCache_CreateOrGetObject_TisRuntimeObject_mC7C7A1961C0F40A4B4F96DAB1B6C19311A764A81_gshared)(___nativePtr0, ___create1, method);
}
// System.Boolean Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>::TryGetValue(TKey,TValue&)
inline bool ThreadSafeDictionary_2_TryGetValue_m01CA52B8F087AA6E899A1C00D279DE6618092C25 (ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4 * __this, intptr_t p0, List_1_tC026AE19364CD494F8F787C71248528372071F87 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4 *, intptr_t, List_1_tC026AE19364CD494F8F787C71248528372071F87 **, const RuntimeMethod*))ThreadSafeDictionary_2_TryGetValue_mD430E517FB8643C1C56FD562C4EF6460D1569F98_gshared)(__this, p0, p1, method);
}
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * p0, bool* p1, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m93E12CCBEF11BB4FB296B0875E0D9CBA20CBDCB1 (U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * __this, const RuntimeMethod* method);
// T Helper.NativeObjectCache::GetObject<Windows.Kinect.MultiSourceFrameReader>(System.IntPtr)
inline MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * NativeObjectCache_GetObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m42AAAAF9F1E0EB5F49C6FA66B8236E3BA484231C (intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	return ((  MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * (*) (intptr_t, const RuntimeMethod*))NativeObjectCache_GetObject_TisRuntimeObject_m0EC71D43114CEC87D38A7CA838D0D4D4603E11AF_gshared)(___nativePtr0, method);
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs__ctor_m8B5D34E368111F374B16DD33D8920A230373A9F2 (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::GetEnumerator()
inline Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1  List_1_GetEnumerator_mABF9D65C0BC615B875EED962D3D812327FC7AC1E (List_1_tC026AE19364CD494F8F787C71248528372071F87 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1  (*) (List_1_tC026AE19364CD494F8F787C71248528372071F87 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_mCC075D14DA920827064FF503607160325FA98C9D (U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::get_Current()
inline EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * Enumerator_get_Current_m06FEE1ED3BBC6ECF01621FB315D61AA12ADF14ED (Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 * __this, const RuntimeMethod* method)
{
	return ((  EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * (*) (Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// Helper.EventPump Helper.EventPump::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 * EventPump_get_Instance_mD55ACE9AD0B70F77A90612ED2C0872C6011CF9F0 (const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void Helper.EventPump::Enqueue(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPump_Enqueue_mAE2F0C940BD4D302EFDA0D08B9998051DA3A6A33 (EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::MoveNext()
inline bool Enumerator_MoveNext_m8F1813069929FAE20D8B7F23025C3B289FAB4216 (Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::Dispose()
inline void Enumerator_Dispose_m1A47252386F1BFE2896C1078063B5DC7FD6CDF73 (Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Helper.EventPump::EnsureInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventPump_EnsureInitialized_m4B2D75D3FA1C0A3BB277DD3089708FED3F79E601 (const RuntimeMethod* method);
// System.Boolean Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>::TryAddDefault(TKey)
inline bool CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8 (CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F *, intptr_t, const RuntimeMethod*))CollectionMap_2_TryAddDefault_mBBC30AFD8E82D37D64171EBC389331B88C7D02F4_gshared)(__this, p0, method);
}
// TValue Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>::get_Item(TKey)
inline List_1_tC026AE19364CD494F8F787C71248528372071F87 * ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A (ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  List_1_tC026AE19364CD494F8F787C71248528372071F87 * (*) (ThreadSafeDictionary_2_t441C16A0E0C1BD4B0C352D337A2C9D94E9EC73E4 *, intptr_t, const RuntimeMethod*))ThreadSafeDictionary_2_get_Item_m57B61195E188061972F36E057C314BC47AF013E7_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::Add(!0)
inline void List_1_Add_mEAA52D3E73BD725759E127DEC8705C4112379737 (List_1_tC026AE19364CD494F8F787C71248528372071F87 * __this, EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC026AE19364CD494F8F787C71248528372071F87 *, EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::get_Count()
inline int32_t List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027 (List_1_tC026AE19364CD494F8F787C71248528372071F87 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC026AE19364CD494F8F787C71248528372071F87 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate__ctor_m86E450E6C73C649D3FD6062822EC415068F9EEFC (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived(System.IntPtr,Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived_mF7DC7BBBC7D8F4D64EBE8DBCE3D8E1B53C4594C6 (intptr_t ___pNative0, _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * ___eventCallback1, bool ___unsubscribe2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::Remove(!0)
inline bool List_1_Remove_mE1213A6FF2FD5856DFA54913348CAE88408BAF32 (List_1_tC026AE19364CD494F8F787C71248528372071F87 * __this, EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tC026AE19364CD494F8F787C71248528372071F87 *, EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Boolean Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>::TryGetValue(TKey,TValue&)
inline bool ThreadSafeDictionary_2_TryGetValue_mCE8CE01A95B66F9B1D3C8289E0FF34FB7E98F91E (ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA * __this, intptr_t p0, List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA *, intptr_t, List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 **, const RuntimeMethod*))ThreadSafeDictionary_2_TryGetValue_mD430E517FB8643C1C56FD562C4EF6460D1569F98_gshared)(__this, p0, p1, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m44918EA4DE83100753948FE65694CDAEE9171805 (U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * __this, const RuntimeMethod* method);
// System.Void Windows.Data.PropertyChangedEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyChangedEventArgs__ctor_m40921DD5D2A53C0C1664E639C5CE7B0FC2B2A01B (PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::GetEnumerator()
inline Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03  List_1_GetEnumerator_m1155BBCD596E9A1C8348FA2C6707A30D27F18ED7 (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03  (*) (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_1__ctor_mB00B49B6A74AB2858DE05D6EFA33E7F899E6F779 (U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::get_Current()
inline EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * Enumerator_get_Current_m1FA91E449D3820A3AC6456264622316E1FF14477 (Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 * __this, const RuntimeMethod* method)
{
	return ((  EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * (*) (Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::MoveNext()
inline bool Enumerator_MoveNext_m98300163A2457CC54D8CAEA08F68F3288DDEE8FA (Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::Dispose()
inline void Enumerator_Dispose_m1F6EA3501DF3A1009FA78F724956178008B93893 (Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Boolean Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>::TryAddDefault(TKey)
inline bool CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26 (CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 *, intptr_t, const RuntimeMethod*))CollectionMap_2_TryAddDefault_mBBC30AFD8E82D37D64171EBC389331B88C7D02F4_gshared)(__this, p0, method);
}
// TValue Helper.ThreadSafeDictionary`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>::get_Item(TKey)
inline List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681 (ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA * __this, intptr_t p0, const RuntimeMethod* method)
{
	return ((  List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * (*) (ThreadSafeDictionary_2_t9B1FF1BD3CF90C431F29C89DFAD0D9AB62BAD9DA *, intptr_t, const RuntimeMethod*))ThreadSafeDictionary_2_get_Item_m57B61195E188061972F36E057C314BC47AF013E7_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::Add(!0)
inline void List_1_Add_mF05016A10BD80B08A20B9917F5308BEF8841924B (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * __this, EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 *, EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::get_Count()
inline int32_t List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m164B8A30AC1D5B1B75C8F11C902EC76AF20050AD (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged_m27C2567040A5598A710DA05234B94A78E38F6642 (intptr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * ___eventCallback1, bool ___unsubscribe2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::Remove(!0)
inline bool List_1_Remove_m7D474E43663B2270F2D24EDEE1FB56D2F0B913DF (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * __this, EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 *, EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame_m7CE64F75FB28AFA8EE2B5F1EE664C81E115E3996 (intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF1F83822EB87CB92978FA5E313C1C801B396BAF8 (Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mB01B0159B0678F359F39E713F6E63EEA87902616_gshared)(__this, p0, p1, method);
}
// T Helper.NativeObjectCache::CreateOrGetObject<Windows.Kinect.MultiSourceFrame>(System.IntPtr,System.Func`2<System.IntPtr,T>)
inline MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * NativeObjectCache_CreateOrGetObject_TisMultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_m0FEA06CD28D44660D284DDBDBE165DB9CA2AB3D4 (intptr_t ___nativePtr0, Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * ___create1, const RuntimeMethod* method)
{
	return ((  MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * (*) (intptr_t, Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B *, const RuntimeMethod*))NativeObjectCache_CreateOrGetObject_TisRuntimeObject_mC7C7A1961C0F40A4B4F96DAB1B6C19311A764A81_gshared)(___nativePtr0, ___create1, method);
}
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>::Clear()
inline void List_1_Clear_m73ACED094C6D426A6BC9B77D08595F44B598D2D3 (List_1_tC026AE19364CD494F8F787C71248528372071F87 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC026AE19364CD494F8F787C71248528372071F87 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>::Clear()
inline void List_1_Clear_m7F3E7D2ADC19A3D6892B6CDC93A72533F6FA955F (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>::.ctor()
inline void CollectionMap_2__ctor_m738BCEFFD82C06F5635877430E33D7EC0A83E671 (CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * __this, const RuntimeMethod* method)
{
	((  void (*) (CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F *, const RuntimeMethod*))CollectionMap_2__ctor_m4DD441C45813E872F2108B083DDACA3A00CBE021_gshared)(__this, method);
}
// System.Void Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>::.ctor()
inline void CollectionMap_2__ctor_m64EBCD59059EF2C20B4126D5253C4F02C809DB2A (CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * __this, const RuntimeMethod* method)
{
	((  void (*) (CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 *, const RuntimeMethod*))CollectionMap_2__ctor_m4DD441C45813E872F2108B083DDACA3A00CBE021_gshared)(__this, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9254F0981E2A40611A1AE0E3C4650F5681D9238E (U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.KinectSensor::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KinectSensor__ctor_mDB9B778CF2D3422C1F7EB2795C8338602266E042 (KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrame::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrame__ctor_mC040BE952DEAFC56222F69D9F7A7C68DD8B8D6D0 (MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mBE50F4C9C45EF02F3F11DBF0381A539DF07E6F15 (EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * __this, RuntimeObject * p0, MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA *, RuntimeObject *, MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, p0, p1, method);
}
// System.Void System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mC57BEF475A14E308B81ECAD4F987DF1BF9C0E289 (EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * __this, RuntimeObject * p0, PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 * p1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E *, RuntimeObject *, PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, p0, p1, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReference::Windows_Kinect_MultiSourceFrameReference_AddRefObject(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_AddRefObject_m97A4AE59FC3C0B27DF28766D71A57C5D1C2B148D (intptr_t* ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReference::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference_Dispose_mE5E95499CFF26A6BA739C98F54BEEDBC208C24C8 (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReference::__EventCleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference___EventCleanup_mB2E07E1953E30F795B9849794571BCEE1BEE571B (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, const RuntimeMethod* method);
// System.Void Helper.NativeObjectCache::RemoveObject<Windows.Kinect.MultiSourceFrameReference>(System.IntPtr)
inline void NativeObjectCache_RemoveObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_m22B4EADC558C684486B67D8DF52EC92CAAB0ED1D (intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	((  void (*) (intptr_t, const RuntimeMethod*))NativeObjectCache_RemoveObject_TisRuntimeObject_mC7B8B48223F57502B000A5B2717B0100DABA625F_gshared)(___nativePtr0, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReference::Windows_Kinect_MultiSourceFrameReference_ReleaseObject(System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_ReleaseObject_m64729CE9B52E6441533A50334AF5AD10D66BB33D (intptr_t* ___pNative0, const RuntimeMethod* method);
// System.IntPtr Windows.Kinect.MultiSourceFrameReference::Windows_Kinect_MultiSourceFrameReference_AcquireFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_AcquireFrame_mFA21EFB1C6A8F47A8B12452BAFF8DB4EF4741E7B (intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA5F1C2F69E90099945B49187D9206F2875994B74 (U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * __this, const RuntimeMethod* method);
// System.Single Windows.Kinect.PointF::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointF_get_X_m63BFDADC4E803411230E6B7856A67B69A14F9A45 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.PointF::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointF_set_X_m5658C81A446C5AE7019E5D2050BF44D0813D2436 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, float ___value0, const RuntimeMethod* method);
// System.Single Windows.Kinect.PointF::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointF_get_Y_mAB4E34D7290BD0263737FB405EC888A01B05FC67 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.PointF::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointF_set_Y_m230AB7338A927ED4B00F0EE90C97ECCF124FC07E (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0 (float* __this, const RuntimeMethod* method);
// System.Int32 Windows.Kinect.PointF::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointF_GetHashCode_m4873F48CF72693915767A412982AF266FBECB98F (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, const RuntimeMethod* method);
// System.Boolean Windows.Kinect.PointF::Equals(Windows.Kinect.ColorSpacePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointF_Equals_m6D3EC810FC1F2B501DECD3BA0912EE0AF4E3E0C4 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9  ___obj0, const RuntimeMethod* method);
// System.Boolean Windows.Kinect.PointF::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Single Windows.Kinect.ColorSpacePoint::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorSpacePoint_get_X_m38C5F697917B7B2003D21CA8E850B026ADB236B2 (ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9 * __this, const RuntimeMethod* method);
// System.Single Windows.Kinect.ColorSpacePoint::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ColorSpacePoint_get_Y_m87F5616A5807DDD05814196101AC1CB84FB8553F (ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9 * __this, const RuntimeMethod* method);
// System.Single Windows.Kinect.Vector4::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_X_mC8E80AA5B16BA015EDA2D918EE812A7348F8F782 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.Vector4::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_X_m8793E0D0D7A2F53EFC460BD7050A75F99C669004 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method);
// System.Single Windows.Kinect.Vector4::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Y_mACA3D8FE29ECC5A3CD68C4382EDE3B359A5DB06B (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.Vector4::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Y_m21BDB91DD2FCB4D34629DD9762D05ED64DDEFC94 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method);
// System.Single Windows.Kinect.Vector4::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Z_mE62CC5FBD850D83CEA66CA5CF4C6B3366DE2575D (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.Vector4::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Z_mD9852B66B202971C0B36F686571545AAC321B5F6 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method);
// System.Single Windows.Kinect.Vector4::get_W()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_W_m02A258D2793F97CE3EE8A7335FFF0E61916CCFD0 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.Vector4::set_W(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_W_m30A7697E9B38E6ECCE2B171DED36B6905CD5AD71 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 Windows.Kinect.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mD88BFC5F4B56B460991A2BAAFDE52CA543EA4DA1 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method);
// System.Boolean Windows.Kinect.Vector4::Equals(Windows.Kinect.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m4A1338460D9850050EDBCD0A3CBA8627FFFC4B07 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  ___obj0, const RuntimeMethod* method);
// System.Boolean Windows.Kinect.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_mAE8C94D1E2DEB35D84C6CC7A29189B73E5160488 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7 (float* __this, float p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Windows.Kinect.MultiSourceFrameArrivedEventArgs::Helper.INativeWrapper.get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameArrivedEventArgs_Helper_INativeWrapper_get_nativePtr_mD9DED42E4E1E83CC254D46D2681BF76C097FF6E1 (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, const RuntimeMethod* method)
{
	{
		// RootSystem.IntPtr Helper.INativeWrapper.nativePtr { get { return _pNative; } }
		intptr_t L_0 = __this->get__pNative_1();
		return (intptr_t)L_0;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs__ctor_m8B5D34E368111F374B16DD33D8920A230373A9F2 (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, intptr_t ___pNative0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameArrivedEventArgs__ctor_m8B5D34E368111F374B16DD33D8920A230373A9F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal MultiSourceFrameArrivedEventArgs(RootSystem.IntPtr pNative)
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		// _pNative = pNative;
		intptr_t L_0 = ___pNative0;
		__this->set__pNative_1((intptr_t)L_0);
		// Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject(ref _pNative);
		intptr_t* L_1 = __this->get_address_of__pNative_1();
		MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject_m9936CC7CCCA6C9F68A2C235DCEABDA54A2EC58DB((intptr_t*)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs_Finalize_m719428EAF0715739E878F53C8E2732894BD37EAA (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		MultiSourceFrameArrivedEventArgs_Dispose_mD8A5D0489DD3BA96A604167B7FC8032AC6CA5366(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x10);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject(intptr_t*);
#endif
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject(System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject_m15EF10AE7A88EA03B431E1EAC469A1202E11A968 (intptr_t* ___pNative0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject)(___pNative0);
	#else
	il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject(intptr_t*);
#endif
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject(System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject_m9936CC7CCCA6C9F68A2C235DCEABDA54A2EC58DB (intptr_t* ___pNative0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameArrivedEventArgs_AddRefObject)(___pNative0);
	#else
	il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs_Dispose_mD8A5D0489DD3BA96A604167B7FC8032AC6CA5366 (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameArrivedEventArgs_Dispose_mD8A5D0489DD3BA96A604167B7FC8032AC6CA5366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_1();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// __EventCleanup();
		MultiSourceFrameArrivedEventArgs___EventCleanup_m4885DB9D8A6A03B5172E508227D04D8FE8B5CD72(__this, /*hidden argument*/NULL);
		// Helper.NativeObjectCache.RemoveObject<MultiSourceFrameArrivedEventArgs>(_pNative);
		intptr_t L_2 = __this->get__pNative_1();
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
		NativeObjectCache_RemoveObject_TisMultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B_mF288AC628F25858527C47EEB2191D95E549C68F9((intptr_t)L_2, /*hidden argument*/NativeObjectCache_RemoveObject_TisMultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B_mF288AC628F25858527C47EEB2191D95E549C68F9_RuntimeMethod_var);
		// Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject(ref _pNative);
		intptr_t* L_3 = __this->get_address_of__pNative_1();
		MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_ReleaseObject_m15EF10AE7A88EA03B431E1EAC469A1202E11A968((intptr_t*)L_3, /*hidden argument*/NULL);
		// _pNative = RootSystem.IntPtr.Zero;
		__this->set__pNative_1((intptr_t)(0));
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference(intptr_t);
#endif
// System.IntPtr Windows.Kinect.MultiSourceFrameArrivedEventArgs::Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference_m42ECCD47D18D7FE7662F01E826B42DB345B28512 (intptr_t ___pNative0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference)(___pNative0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// Windows.Kinect.MultiSourceFrameReference Windows.Kinect.MultiSourceFrameArrivedEventArgs::get_FrameReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * MultiSourceFrameArrivedEventArgs_get_FrameReference_m50720A51AF8F0343B4DF12910E55E82196C65D4E (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameArrivedEventArgs_get_FrameReference_m50720A51AF8F0343B4DF12910E55E82196C65D4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * G_B6_0 = NULL;
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * G_B5_0 = NULL;
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_1();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new RootSystem.ObjectDisposedException("MultiSourceFrameArrivedEventArgs");
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteral4D206981DE3DE9A549DB141C298906B799B6E9F3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, MultiSourceFrameArrivedEventArgs_get_FrameReference_m50720A51AF8F0343B4DF12910E55E82196C65D4E_RuntimeMethod_var);
	}

IL_001d:
	{
		// RootSystem.IntPtr objectPointer = Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference(_pNative);
		intptr_t L_3 = __this->get__pNative_1();
		intptr_t L_4 = MultiSourceFrameArrivedEventArgs_Windows_Kinect_MultiSourceFrameArrivedEventArgs_get_FrameReference_m42ECCD47D18D7FE7662F01E826B42DB345B28512((intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		// Helper.ExceptionHelper.CheckLastError();
		ExceptionHelper_CheckLastError_m7BC544A6D3A400522FE417C820D91A9E71586F7A(/*hidden argument*/NULL);
		// if (objectPointer == RootSystem.IntPtr.Zero)
		intptr_t L_5 = V_0;
		bool L_6 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return null;
		return (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 *)NULL;
	}

IL_003d:
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrameReference>(objectPointer, n => new Windows.Kinect.MultiSourceFrameReference(n));
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var);
		Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * L_8 = ((U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
		Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = L_7;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var);
		U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * L_10 = ((U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * L_11 = (Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 *)il2cpp_codegen_object_new(Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14_il2cpp_TypeInfo_var);
		Func_2__ctor_m213BACFED1C544F3A75903FE6031235CA6BCB8BB(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_FrameReferenceU3Eb__10_0_m40813E113FB6174FF88D4927C879C06E5B5F6FD4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m213BACFED1C544F3A75903FE6031235CA6BCB8BB_RuntimeMethod_var);
		Func_2_t150AC1B700951ADA8049CBD0B6D43573FC26DE14 * L_12 = L_11;
		((U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_12);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
		MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * L_13 = NativeObjectCache_CreateOrGetObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_mBAB0BE179AAAD28D294A9240E0471F41F9D12916((intptr_t)G_B6_1, G_B6_0, /*hidden argument*/NativeObjectCache_CreateOrGetObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_mBAB0BE179AAAD28D294A9240E0471F41F9D12916_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs::__EventCleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameArrivedEventArgs___EventCleanup_m4885DB9D8A6A03B5172E508227D04D8FE8B5CD72 (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * __this, const RuntimeMethod* method)
{
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
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0ED057D94FECCFBF544FEF804F6BCA4979F6F876 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m0ED057D94FECCFBF544FEF804F6BCA4979F6F876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * L_0 = (U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC *)il2cpp_codegen_object_new(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1F4A274A933C1EE5ACD6BB7C6455935352FE4C5B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1F4A274A933C1EE5ACD6BB7C6455935352FE4C5B (U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.MultiSourceFrameReference Windows.Kinect.MultiSourceFrameArrivedEventArgs_<>c::<get_FrameReference>b__10_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * U3CU3Ec_U3Cget_FrameReferenceU3Eb__10_0_m40813E113FB6174FF88D4927C879C06E5B5F6FD4 (U3CU3Ec_t9B56FD4454E05F6E4513543BB60F49286BE00ADC * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3Cget_FrameReferenceU3Eb__10_0_m40813E113FB6174FF88D4927C879C06E5B5F6FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrameReference>(objectPointer, n => new Windows.Kinect.MultiSourceFrameReference(n));
		intptr_t L_0 = ___n0;
		MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * L_1 = (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 *)il2cpp_codegen_object_new(MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_il2cpp_TypeInfo_var);
		MultiSourceFrameReference__ctor_mC2CF2C96F9CA01685951D59AA8374A5F122EFA7F(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E(intptr_t ___result0, intptr_t ___pNative1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E(___result0, ___pNative1, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18(intptr_t ___result0, intptr_t ___pNative1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18(___result0, ___pNative1, NULL);

}
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Helper.INativeWrapper.get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReader_Helper_INativeWrapper_get_nativePtr_m496535F6116C14263E152698809AB5B4BBF733FE (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	{
		// RootSystem.IntPtr Helper.INativeWrapper.nativePtr { get { return _pNative; } }
		intptr_t L_0 = __this->get__pNative_0();
		return (intptr_t)L_0;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader__ctor_mAA44435A1C8A51FDEB412A1E4A5CBAB9191128B0 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, intptr_t ___pNative0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader__ctor_mAA44435A1C8A51FDEB412A1E4A5CBAB9191128B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal MultiSourceFrameReader(RootSystem.IntPtr pNative)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _pNative = pNative;
		intptr_t L_0 = ___pNative0;
		__this->set__pNative_0((intptr_t)L_0);
		// Windows_Kinect_MultiSourceFrameReader_AddRefObject(ref _pNative);
		intptr_t* L_1 = __this->get_address_of__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AddRefObject_mC4E735697394F58ADB68EC0A2F7EA907D1DAB6D7((intptr_t*)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Finalize_mFF5E728F569401B01C22D6A3C1843C8E74A217E3 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		MultiSourceFrameReader_Dispose_m1B59937CAA5F7949E79BEEF0B55E88FB6E6F96AA(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x10);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReader_ReleaseObject(intptr_t*);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_ReleaseObject(System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_ReleaseObject_m2179C58195AAEB54288F3FA7B4DEE0952CD0AD45 (intptr_t* ___pNative0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_ReleaseObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_ReleaseObject'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_ReleaseObject)(___pNative0);
	#else
	il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReader_AddRefObject(intptr_t*);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_AddRefObject(System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AddRefObject_mC4E735697394F58ADB68EC0A2F7EA907D1DAB6D7 (intptr_t* ___pNative0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_AddRefObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_AddRefObject'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_AddRefObject)(___pNative0);
	#else
	il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
// System.Void Windows.Kinect.MultiSourceFrameReader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Dispose_m1B59937CAA5F7949E79BEEF0B55E88FB6E6F96AA (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_Dispose_m1B59937CAA5F7949E79BEEF0B55E88FB6E6F96AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// __EventCleanup();
		MultiSourceFrameReader___EventCleanup_m2EC50AD24A1D404B6BD48CE4528F14B68D2F9FF8(__this, /*hidden argument*/NULL);
		// Helper.NativeObjectCache.RemoveObject<MultiSourceFrameReader>(_pNative);
		intptr_t L_2 = __this->get__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
		NativeObjectCache_RemoveObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m9EC6BEA78680B0C8E7FB2B5D90C3E0B7FC5A504E((intptr_t)L_2, /*hidden argument*/NativeObjectCache_RemoveObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m9EC6BEA78680B0C8E7FB2B5D90C3E0B7FC5A504E_RuntimeMethod_var);
		// if (disposing)
		bool L_3 = ___disposing0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// Windows_Kinect_MultiSourceFrameReader_Dispose(_pNative);
		intptr_t L_4 = __this->get__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_Dispose_m62782EF655F9F31BF3C66C95520105E51D8FAD38((intptr_t)L_4, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// Windows_Kinect_MultiSourceFrameReader_ReleaseObject(ref _pNative);
		intptr_t* L_5 = __this->get_address_of__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_ReleaseObject_m2179C58195AAEB54288F3FA7B4DEE0952CD0AD45((intptr_t*)L_5, /*hidden argument*/NULL);
		// _pNative = RootSystem.IntPtr.Zero;
		__this->set__pNative_0((intptr_t)(0));
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C uint32_t CDECL Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes(intptr_t);
#endif
// Windows.Kinect.FrameSourceTypes Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes_mBFE7DF10F7256434428F42143F1249435D46267A (intptr_t ___pNative0, const RuntimeMethod* method)
{
	typedef uint32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes)(___pNative0);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// Windows.Kinect.FrameSourceTypes Windows.Kinect.MultiSourceFrameReader::get_FrameSourceTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t MultiSourceFrameReader_get_FrameSourceTypes_m0E5C093CAC166CFDD0E7845F6881A518DD80934D (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_get_FrameSourceTypes_m0E5C093CAC166CFDD0E7845F6881A518DD80934D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new RootSystem.ObjectDisposedException("MultiSourceFrameReader");
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteralE8E7D411FC5F522D27EEC08F97BC5DB80F80D30E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, MultiSourceFrameReader_get_FrameSourceTypes_m0E5C093CAC166CFDD0E7845F6881A518DD80934D_RuntimeMethod_var);
	}

IL_001d:
	{
		// return Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes(_pNative);
		intptr_t L_3 = __this->get__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		uint32_t L_4 = MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_FrameSourceTypes_mBFE7DF10F7256434428F42143F1249435D46267A((intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t CDECL Windows_Kinect_MultiSourceFrameReader_get_IsPaused(intptr_t);
#endif
// System.Boolean Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_IsPaused(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_IsPaused_m10A1E6E42961DF983C64A41E442E88FB68B4501F (intptr_t ___pNative0, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_get_IsPaused", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_get_IsPaused'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_get_IsPaused)(___pNative0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReader_put_IsPaused(intptr_t, int32_t);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_put_IsPaused(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_put_IsPaused_mF8F4DCA33CE5CE0F6C145E3DA370ED89D19D2F87 (intptr_t ___pNative0, bool ___isPaused1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_put_IsPaused", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_put_IsPaused'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_put_IsPaused)(___pNative0, static_cast<int32_t>(___isPaused1));
	#else
	il2cppPInvokeFunc(___pNative0, static_cast<int32_t>(___isPaused1));
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
// System.Boolean Windows.Kinect.MultiSourceFrameReader::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MultiSourceFrameReader_get_IsPaused_m1A3508893EAAF0198581AAFF04E95443A06C9722 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_get_IsPaused_m1A3508893EAAF0198581AAFF04E95443A06C9722_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new RootSystem.ObjectDisposedException("MultiSourceFrameReader");
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteralE8E7D411FC5F522D27EEC08F97BC5DB80F80D30E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, MultiSourceFrameReader_get_IsPaused_m1A3508893EAAF0198581AAFF04E95443A06C9722_RuntimeMethod_var);
	}

IL_001d:
	{
		// return Windows_Kinect_MultiSourceFrameReader_get_IsPaused(_pNative);
		intptr_t L_3 = __this->get__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		bool L_4 = MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_IsPaused_m10A1E6E42961DF983C64A41E442E88FB68B4501F((intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::set_IsPaused(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_set_IsPaused_mF229F9A7DBF947B04297176A5C117C0AE10180CF (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_set_IsPaused_mF229F9A7DBF947B04297176A5C117C0AE10180CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new RootSystem.ObjectDisposedException("MultiSourceFrameReader");
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteralE8E7D411FC5F522D27EEC08F97BC5DB80F80D30E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, MultiSourceFrameReader_set_IsPaused_mF229F9A7DBF947B04297176A5C117C0AE10180CF_RuntimeMethod_var);
	}

IL_001d:
	{
		// Windows_Kinect_MultiSourceFrameReader_put_IsPaused(_pNative, value);
		intptr_t L_3 = __this->get__pNative_0();
		bool L_4 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_put_IsPaused_mF8F4DCA33CE5CE0F6C145E3DA370ED89D19D2F87((intptr_t)L_3, L_4, /*hidden argument*/NULL);
		// Helper.ExceptionHelper.CheckLastError();
		ExceptionHelper_CheckLastError_m7BC544A6D3A400522FE417C820D91A9E71586F7A(/*hidden argument*/NULL);
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL Windows_Kinect_MultiSourceFrameReader_get_KinectSensor(intptr_t);
#endif
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_get_KinectSensor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_KinectSensor_m62B29A138B0D9C3AC83767531EC18D4385E1F0AB (intptr_t ___pNative0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_get_KinectSensor", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_get_KinectSensor'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_get_KinectSensor)(___pNative0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// Windows.Kinect.KinectSensor Windows.Kinect.MultiSourceFrameReader::get_KinectSensor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 * MultiSourceFrameReader_get_KinectSensor_m96AFC66AC2FB2702438787DAF0D7FCA8F140DA0C (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_get_KinectSensor_m96AFC66AC2FB2702438787DAF0D7FCA8F140DA0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * G_B6_0 = NULL;
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * G_B5_0 = NULL;
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new RootSystem.ObjectDisposedException("MultiSourceFrameReader");
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteralE8E7D411FC5F522D27EEC08F97BC5DB80F80D30E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, MultiSourceFrameReader_get_KinectSensor_m96AFC66AC2FB2702438787DAF0D7FCA8F140DA0C_RuntimeMethod_var);
	}

IL_001d:
	{
		// RootSystem.IntPtr objectPointer = Windows_Kinect_MultiSourceFrameReader_get_KinectSensor(_pNative);
		intptr_t L_3 = __this->get__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		intptr_t L_4 = MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_get_KinectSensor_m62B29A138B0D9C3AC83767531EC18D4385E1F0AB((intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		// Helper.ExceptionHelper.CheckLastError();
		ExceptionHelper_CheckLastError_m7BC544A6D3A400522FE417C820D91A9E71586F7A(/*hidden argument*/NULL);
		// if (objectPointer == RootSystem.IntPtr.Zero)
		intptr_t L_5 = V_0;
		bool L_6 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return null;
		return (KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 *)NULL;
	}

IL_003d:
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.KinectSensor>(objectPointer, n => new Windows.Kinect.KinectSensor(n));
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var);
		Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * L_8 = ((U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var))->get_U3CU3E9__18_0_1();
		Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = L_7;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var);
		U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * L_10 = ((U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * L_11 = (Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 *)il2cpp_codegen_object_new(Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6_il2cpp_TypeInfo_var);
		Func_2__ctor_mF5B322B39165EE89480E0FA62B79C15E11D92C92(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3Cget_KinectSensorU3Eb__18_0_mE88C0BB851D53FFEE9E1FBCE428BB57D616B95F4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF5B322B39165EE89480E0FA62B79C15E11D92C92_RuntimeMethod_var);
		Func_2_tF35941C75E217B952D01CA59C771C3147586CFD6 * L_12 = L_11;
		((U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var))->set_U3CU3E9__18_0_1(L_12);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
		KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 * L_13 = NativeObjectCache_CreateOrGetObject_TisKinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_m2835D838B978D79BA50A5A63A1A2AF827A6CDF0A((intptr_t)G_B6_1, G_B6_0, /*hidden argument*/NativeObjectCache_CreateOrGetObject_TisKinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_m2835D838B978D79BA50A5A63A1A2AF827A6CDF0A_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E (intptr_t ___result0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_0 = NULL;
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_1 = NULL;
	bool V_2 = false;
	U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * V_3 = NULL;
	Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1  V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// List<RootSystem.EventHandler<Windows.Kinect.MultiSourceFrameArrivedEventArgs>> callbackList = null;
		V_0 = (List_1_tC026AE19364CD494F8F787C71248528372071F87 *)NULL;
		// Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks.TryGetValue(pNative, out callbackList);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_0 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2();
		intptr_t L_1 = ___pNative1;
		NullCheck(L_0);
		ThreadSafeDictionary_2_TryGetValue_m01CA52B8F087AA6E899A1C00D279DE6618092C25(L_0, (intptr_t)L_1, (List_1_tC026AE19364CD494F8F787C71248528372071F87 **)(&V_0), /*hidden argument*/ThreadSafeDictionary_2_TryGetValue_m01CA52B8F087AA6E899A1C00D279DE6618092C25_RuntimeMethod_var);
		// lock(callbackList)
		List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_2 = V_0;
		V_1 = L_2;
		V_2 = (bool)0;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_3 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_3, (bool*)(&V_2), /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * L_4 = (U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass22_0__ctor_m93E12CCBEF11BB4FB296B0875E0D9CBA20CBDCB1(L_4, /*hidden argument*/NULL);
			V_3 = L_4;
			// var objThis = Helper.NativeObjectCache.GetObject<MultiSourceFrameReader>(pNative);
			U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * L_5 = V_3;
			intptr_t L_6 = ___pNative1;
			IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
			MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * L_7 = NativeObjectCache_GetObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m42AAAAF9F1E0EB5F49C6FA66B8236E3BA484231C((intptr_t)L_6, /*hidden argument*/NativeObjectCache_GetObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m42AAAAF9F1E0EB5F49C6FA66B8236E3BA484231C_RuntimeMethod_var);
			NullCheck(L_5);
			L_5->set_objThis_0(L_7);
			// var args = new Windows.Kinect.MultiSourceFrameArrivedEventArgs(result);
			U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * L_8 = V_3;
			intptr_t L_9 = ___result0;
			MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * L_10 = (MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B *)il2cpp_codegen_object_new(MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B_il2cpp_TypeInfo_var);
			MultiSourceFrameArrivedEventArgs__ctor_m8B5D34E368111F374B16DD33D8920A230373A9F2(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_args_1(L_10);
			// foreach(var func in callbackList)
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_11 = V_0;
			NullCheck(L_11);
			Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1  L_12 = List_1_GetEnumerator_mABF9D65C0BC615B875EED962D3D812327FC7AC1E(L_11, /*hidden argument*/List_1_GetEnumerator_mABF9D65C0BC615B875EED962D3D812327FC7AC1E_RuntimeMethod_var);
			V_4 = L_12;
		}

IL_0042:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0078;
			}

IL_0044:
			{
				U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * L_13 = (U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908_il2cpp_TypeInfo_var);
				U3CU3Ec__DisplayClass22_1__ctor_mCC075D14DA920827064FF503607160325FA98C9D(L_13, /*hidden argument*/NULL);
				V_5 = L_13;
				U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * L_14 = V_5;
				U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * L_15 = V_3;
				NullCheck(L_14);
				L_14->set_CSU24U3CU3E8__locals1_1(L_15);
				// foreach(var func in callbackList)
				U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * L_16 = V_5;
				EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * L_17 = Enumerator_get_Current_m06FEE1ED3BBC6ECF01621FB315D61AA12ADF14ED((Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m06FEE1ED3BBC6ECF01621FB315D61AA12ADF14ED_RuntimeMethod_var);
				NullCheck(L_16);
				L_16->set_func_0(L_17);
				// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
				IL2CPP_RUNTIME_CLASS_INIT(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_il2cpp_TypeInfo_var);
				EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 * L_18 = EventPump_get_Instance_mD55ACE9AD0B70F77A90612ED2C0872C6011CF9F0(/*hidden argument*/NULL);
				U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * L_19 = V_5;
				Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_20 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
				Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass22_1_U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Eb__0_mFCF1F3F4FF85E5F694B4F939B82FB9549E44AC10_RuntimeMethod_var), /*hidden argument*/NULL);
				NullCheck(L_18);
				EventPump_Enqueue_mAE2F0C940BD4D302EFDA0D08B9998051DA3A6A33(L_18, L_20, /*hidden argument*/NULL);
			}

IL_0078:
			{
				// foreach(var func in callbackList)
				bool L_21 = Enumerator_MoveNext_m8F1813069929FAE20D8B7F23025C3B289FAB4216((Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m8F1813069929FAE20D8B7F23025C3B289FAB4216_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0044;
				}
			}

IL_0081:
			{
				IL2CPP_LEAVE(0x9B, FINALLY_0083);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0083;
		}

FINALLY_0083:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1A47252386F1BFE2896C1078063B5DC7FD6CDF73((Enumerator_tFF5B13843C3503F4E80DA06DEF574F38A2CB59A1 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m1A47252386F1BFE2896C1078063B5DC7FD6CDF73_RuntimeMethod_var);
			IL2CPP_RESET_LEAVE(0x9B);
			IL2CPP_END_FINALLY(131)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(131)
		{
			IL2CPP_END_CLEANUP(0x9B, FINALLY_0091);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			bool L_22 = V_2;
			if (!L_22)
			{
				goto IL_009a;
			}
		}

IL_0094:
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_23 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_23, /*hidden argument*/NULL);
		}

IL_009a:
		{
			IL2CPP_RESET_LEAVE(0x9B);
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009b:
	{
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived(intptr_t, Il2CppMethodPointer, int32_t);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived(System.IntPtr,Windows.Kinect.MultiSourceFrameReader__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived_mF7DC7BBBC7D8F4D64EBE8DBCE3D8E1B53C4594C6 (intptr_t ___pNative0, _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * ___eventCallback1, bool ___unsubscribe2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived'"), NULL, NULL);
		}
	}
	#endif

	// Marshaling of parameter U27___eventCallback1U27 to native representation
	Il2CppMethodPointer ____eventCallback1_marshaled = NULL;
	____eventCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___eventCallback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived)(___pNative0, ____eventCallback1_marshaled, static_cast<int32_t>(___unsubscribe2));
	#else
	il2cppPInvokeFunc(___pNative0, ____eventCallback1_marshaled, static_cast<int32_t>(___unsubscribe2));
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
// System.Void Windows.Kinect.MultiSourceFrameReader::add_MultiSourceFrameArrived(System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_add_MultiSourceFrameArrived_m495E62BB991EACAAB78AFBA0B6F337154EE1E236 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_add_MultiSourceFrameArrived_m495E62BB991EACAAB78AFBA0B6F337154EE1E236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_0 = NULL;
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_1 = NULL;
	bool V_2 = false;
	_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Helper.EventPump.EnsureInitialized();
		IL2CPP_RUNTIME_CLASS_INIT(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_il2cpp_TypeInfo_var);
		EventPump_EnsureInitialized_m4B2D75D3FA1C0A3BB277DD3089708FED3F79E601(/*hidden argument*/NULL);
		// Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks.TryAddDefault(_pNative);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_0 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2();
		intptr_t L_1 = __this->get__pNative_0();
		NullCheck(L_0);
		CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8(L_0, (intptr_t)L_1, /*hidden argument*/CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8_RuntimeMethod_var);
		// var callbackList = Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks[_pNative];
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_2 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2();
		intptr_t L_3 = __this->get__pNative_0();
		NullCheck(L_2);
		List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_4 = ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A(L_2, (intptr_t)L_3, /*hidden argument*/ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A_RuntimeMethod_var);
		V_0 = L_4;
		// lock (callbackList)
		List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_5 = V_0;
		V_1 = L_5;
		V_2 = (bool)0;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_6 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_6, (bool*)(&V_2), /*hidden argument*/NULL);
			// callbackList.Add(value);
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_7 = V_0;
			EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * L_8 = ___value0;
			NullCheck(L_7);
			List_1_Add_mEAA52D3E73BD725759E127DEC8705C4112379737(L_7, L_8, /*hidden argument*/List_1_Add_mEAA52D3E73BD725759E127DEC8705C4112379737_RuntimeMethod_var);
			// if(callbackList.Count == 1)
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_9 = V_0;
			NullCheck(L_9);
			int32_t L_10 = List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027(L_9, /*hidden argument*/List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027_RuntimeMethod_var);
			if ((!(((uint32_t)L_10) == ((uint32_t)1))))
			{
				goto IL_0068;
			}
		}

IL_0043:
		{
			// var del = new _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate(Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler);
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * L_11 = (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 *)il2cpp_codegen_object_new(_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610_il2cpp_TypeInfo_var);
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate__ctor_m86E450E6C73C649D3FD6062822EC415068F9EEFC(L_11, NULL, (intptr_t)((intptr_t)MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E_RuntimeMethod_var), /*hidden argument*/NULL);
			V_3 = L_11;
			// _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle = RootSystem.Runtime.InteropServices.GCHandle.Alloc(del);
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * L_12 = V_3;
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_13 = GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->set__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1(L_13);
			// Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived(_pNative, del, false);
			intptr_t L_14 = __this->get__pNative_0();
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * L_15 = V_3;
			MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived_mF7DC7BBBC7D8F4D64EBE8DBCE3D8E1B53C4594C6((intptr_t)L_14, L_15, (bool)0, /*hidden argument*/NULL);
		}

IL_0068:
		{
			// }
			IL2CPP_LEAVE(0x74, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		{
			bool L_16 = V_2;
			if (!L_16)
			{
				goto IL_0073;
			}
		}

IL_006d:
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_17 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_17, /*hidden argument*/NULL);
		}

IL_0073:
		{
			IL2CPP_RESET_LEAVE(0x74);
			IL2CPP_END_FINALLY(106)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::remove_MultiSourceFrameArrived(System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_remove_MultiSourceFrameArrived_mF28A73607E048C8A3EFFE149930A2D5F4DCB27C3 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_remove_MultiSourceFrameArrived_mF28A73607E048C8A3EFFE149930A2D5F4DCB27C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_0 = NULL;
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks.TryAddDefault(_pNative);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_2 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2();
		intptr_t L_3 = __this->get__pNative_0();
		NullCheck(L_2);
		CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8(L_2, (intptr_t)L_3, /*hidden argument*/CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8_RuntimeMethod_var);
		// var callbackList = Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks[_pNative];
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_4 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2();
		intptr_t L_5 = __this->get__pNative_0();
		NullCheck(L_4);
		List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_6 = ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A(L_4, (intptr_t)L_5, /*hidden argument*/ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A_RuntimeMethod_var);
		V_0 = L_6;
		// lock (callbackList)
		List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_7 = V_0;
		V_1 = L_7;
		V_2 = (bool)0;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_8 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_8, (bool*)(&V_2), /*hidden argument*/NULL);
			// callbackList.Remove(value);
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_9 = V_0;
			EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * L_10 = ___value0;
			NullCheck(L_9);
			List_1_Remove_mE1213A6FF2FD5856DFA54913348CAE88408BAF32(L_9, L_10, /*hidden argument*/List_1_Remove_mE1213A6FF2FD5856DFA54913348CAE88408BAF32_RuntimeMethod_var);
			// if(callbackList.Count == 0)
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_11 = V_0;
			NullCheck(L_11);
			int32_t L_12 = List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027(L_11, /*hidden argument*/List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0073;
			}
		}

IL_0051:
		{
			// Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived(_pNative, Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler, true);
			intptr_t L_13 = __this->get__pNative_0();
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * L_14 = (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 *)il2cpp_codegen_object_new(_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610_il2cpp_TypeInfo_var);
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate__ctor_m86E450E6C73C649D3FD6062822EC415068F9EEFC(L_14, NULL, (intptr_t)((intptr_t)MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived_mF7DC7BBBC7D8F4D64EBE8DBCE3D8E1B53C4594C6((intptr_t)L_13, L_14, (bool)1, /*hidden argument*/NULL);
			// _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle.Free();
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_address_of__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1()), /*hidden argument*/NULL);
		}

IL_0073:
		{
			// }
			IL2CPP_LEAVE(0x7F, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_2;
			if (!L_15)
			{
				goto IL_007e;
			}
		}

IL_0078:
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_16 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_16, /*hidden argument*/NULL);
		}

IL_007e:
		{
			IL2CPP_RESET_LEAVE(0x7F);
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_Handler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18 (intptr_t ___result0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_0 = NULL;
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_1 = NULL;
	bool V_2 = false;
	U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * V_3 = NULL;
	Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03  V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// List<RootSystem.EventHandler<Windows.Data.PropertyChangedEventArgs>> callbackList = null;
		V_0 = (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 *)NULL;
		// Windows_Data_PropertyChangedEventArgs_Delegate_callbacks.TryGetValue(pNative, out callbackList);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_0 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4();
		intptr_t L_1 = ___pNative1;
		NullCheck(L_0);
		ThreadSafeDictionary_2_TryGetValue_mCE8CE01A95B66F9B1D3C8289E0FF34FB7E98F91E(L_0, (intptr_t)L_1, (List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 **)(&V_0), /*hidden argument*/ThreadSafeDictionary_2_TryGetValue_mCE8CE01A95B66F9B1D3C8289E0FF34FB7E98F91E_RuntimeMethod_var);
		// lock(callbackList)
		List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_2 = V_0;
		V_1 = L_2;
		V_2 = (bool)0;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_3 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_3, (bool*)(&V_2), /*hidden argument*/NULL);
			U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * L_4 = (U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C_il2cpp_TypeInfo_var);
			U3CU3Ec__DisplayClass30_0__ctor_m44918EA4DE83100753948FE65694CDAEE9171805(L_4, /*hidden argument*/NULL);
			V_3 = L_4;
			// var objThis = Helper.NativeObjectCache.GetObject<MultiSourceFrameReader>(pNative);
			U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * L_5 = V_3;
			intptr_t L_6 = ___pNative1;
			IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
			MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * L_7 = NativeObjectCache_GetObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m42AAAAF9F1E0EB5F49C6FA66B8236E3BA484231C((intptr_t)L_6, /*hidden argument*/NativeObjectCache_GetObject_TisMultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_m42AAAAF9F1E0EB5F49C6FA66B8236E3BA484231C_RuntimeMethod_var);
			NullCheck(L_5);
			L_5->set_objThis_0(L_7);
			// var args = new Windows.Data.PropertyChangedEventArgs(result);
			U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * L_8 = V_3;
			intptr_t L_9 = ___result0;
			PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 * L_10 = (PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 *)il2cpp_codegen_object_new(PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1_il2cpp_TypeInfo_var);
			PropertyChangedEventArgs__ctor_m40921DD5D2A53C0C1664E639C5CE7B0FC2B2A01B(L_10, (intptr_t)L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			L_8->set_args_1(L_10);
			// foreach(var func in callbackList)
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_11 = V_0;
			NullCheck(L_11);
			Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03  L_12 = List_1_GetEnumerator_m1155BBCD596E9A1C8348FA2C6707A30D27F18ED7(L_11, /*hidden argument*/List_1_GetEnumerator_m1155BBCD596E9A1C8348FA2C6707A30D27F18ED7_RuntimeMethod_var);
			V_4 = L_12;
		}

IL_0042:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0078;
			}

IL_0044:
			{
				U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * L_13 = (U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0_il2cpp_TypeInfo_var);
				U3CU3Ec__DisplayClass30_1__ctor_mB00B49B6A74AB2858DE05D6EFA33E7F899E6F779(L_13, /*hidden argument*/NULL);
				V_5 = L_13;
				U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * L_14 = V_5;
				U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * L_15 = V_3;
				NullCheck(L_14);
				L_14->set_CSU24U3CU3E8__locals1_1(L_15);
				// foreach(var func in callbackList)
				U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * L_16 = V_5;
				EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * L_17 = Enumerator_get_Current_m1FA91E449D3820A3AC6456264622316E1FF14477((Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m1FA91E449D3820A3AC6456264622316E1FF14477_RuntimeMethod_var);
				NullCheck(L_16);
				L_16->set_func_0(L_17);
				// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
				IL2CPP_RUNTIME_CLASS_INIT(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_il2cpp_TypeInfo_var);
				EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213 * L_18 = EventPump_get_Instance_mD55ACE9AD0B70F77A90612ED2C0872C6011CF9F0(/*hidden argument*/NULL);
				U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * L_19 = V_5;
				Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_20 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
				Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass30_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mA56C79F5F13ACA0411E1F5DA94FB00501D42AF9A_RuntimeMethod_var), /*hidden argument*/NULL);
				NullCheck(L_18);
				EventPump_Enqueue_mAE2F0C940BD4D302EFDA0D08B9998051DA3A6A33(L_18, L_20, /*hidden argument*/NULL);
			}

IL_0078:
			{
				// foreach(var func in callbackList)
				bool L_21 = Enumerator_MoveNext_m98300163A2457CC54D8CAEA08F68F3288DDEE8FA((Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m98300163A2457CC54D8CAEA08F68F3288DDEE8FA_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_0044;
				}
			}

IL_0081:
			{
				IL2CPP_LEAVE(0x9B, FINALLY_0083);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0083;
		}

FINALLY_0083:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m1F6EA3501DF3A1009FA78F724956178008B93893((Enumerator_t555A3BBF6571703F9899659F2C9555FD549E9C03 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m1F6EA3501DF3A1009FA78F724956178008B93893_RuntimeMethod_var);
			IL2CPP_RESET_LEAVE(0x9B);
			IL2CPP_END_FINALLY(131)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(131)
		{
			IL2CPP_END_CLEANUP(0x9B, FINALLY_0091);
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			bool L_22 = V_2;
			if (!L_22)
			{
				goto IL_009a;
			}
		}

IL_0094:
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_23 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_23, /*hidden argument*/NULL);
		}

IL_009a:
		{
			IL2CPP_RESET_LEAVE(0x9B);
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0x9B, IL_009b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009b:
	{
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged(intptr_t, Il2CppMethodPointer, int32_t);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged(System.IntPtr,Windows.Kinect.MultiSourceFrameReader__Windows_Data_PropertyChangedEventArgs_Delegate,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged_m27C2567040A5598A710DA05234B94A78E38F6642 (intptr_t ___pNative0, _Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * ___eventCallback1, bool ___unsubscribe2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged'"), NULL, NULL);
		}
	}
	#endif

	// Marshaling of parameter U27___eventCallback1U27 to native representation
	Il2CppMethodPointer ____eventCallback1_marshaled = NULL;
	____eventCallback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___eventCallback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged)(___pNative0, ____eventCallback1_marshaled, static_cast<int32_t>(___unsubscribe2));
	#else
	il2cppPInvokeFunc(___pNative0, ____eventCallback1_marshaled, static_cast<int32_t>(___unsubscribe2));
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
// System.Void Windows.Kinect.MultiSourceFrameReader::add_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_add_PropertyChanged_m06B78CD4753542D475E339B3CFEFD937893F041F (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_add_PropertyChanged_m06B78CD4753542D475E339B3CFEFD937893F041F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_0 = NULL;
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_1 = NULL;
	bool V_2 = false;
	_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Helper.EventPump.EnsureInitialized();
		IL2CPP_RUNTIME_CLASS_INIT(EventPump_t5FFBEB080B0BFAEC083C9F089DD25FF80433E213_il2cpp_TypeInfo_var);
		EventPump_EnsureInitialized_m4B2D75D3FA1C0A3BB277DD3089708FED3F79E601(/*hidden argument*/NULL);
		// Windows_Data_PropertyChangedEventArgs_Delegate_callbacks.TryAddDefault(_pNative);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_0 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4();
		intptr_t L_1 = __this->get__pNative_0();
		NullCheck(L_0);
		CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26(L_0, (intptr_t)L_1, /*hidden argument*/CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26_RuntimeMethod_var);
		// var callbackList = Windows_Data_PropertyChangedEventArgs_Delegate_callbacks[_pNative];
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_2 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4();
		intptr_t L_3 = __this->get__pNative_0();
		NullCheck(L_2);
		List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_4 = ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681(L_2, (intptr_t)L_3, /*hidden argument*/ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681_RuntimeMethod_var);
		V_0 = L_4;
		// lock (callbackList)
		List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_5 = V_0;
		V_1 = L_5;
		V_2 = (bool)0;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_6 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_6, (bool*)(&V_2), /*hidden argument*/NULL);
			// callbackList.Add(value);
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_7 = V_0;
			EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * L_8 = ___value0;
			NullCheck(L_7);
			List_1_Add_mF05016A10BD80B08A20B9917F5308BEF8841924B(L_7, L_8, /*hidden argument*/List_1_Add_mF05016A10BD80B08A20B9917F5308BEF8841924B_RuntimeMethod_var);
			// if(callbackList.Count == 1)
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_9 = V_0;
			NullCheck(L_9);
			int32_t L_10 = List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C(L_9, /*hidden argument*/List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C_RuntimeMethod_var);
			if ((!(((uint32_t)L_10) == ((uint32_t)1))))
			{
				goto IL_0068;
			}
		}

IL_0043:
		{
			// var del = new _Windows_Data_PropertyChangedEventArgs_Delegate(Windows_Data_PropertyChangedEventArgs_Delegate_Handler);
			_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * L_11 = (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 *)il2cpp_codegen_object_new(_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512_il2cpp_TypeInfo_var);
			_Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m164B8A30AC1D5B1B75C8F11C902EC76AF20050AD(L_11, NULL, (intptr_t)((intptr_t)MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18_RuntimeMethod_var), /*hidden argument*/NULL);
			V_3 = L_11;
			// _Windows_Data_PropertyChangedEventArgs_Delegate_Handle = RootSystem.Runtime.InteropServices.GCHandle.Alloc(del);
			_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * L_12 = V_3;
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_13 = GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F(L_12, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(L_13);
			// Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged(_pNative, del, false);
			intptr_t L_14 = __this->get__pNative_0();
			_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * L_15 = V_3;
			MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged_m27C2567040A5598A710DA05234B94A78E38F6642((intptr_t)L_14, L_15, (bool)0, /*hidden argument*/NULL);
		}

IL_0068:
		{
			// }
			IL2CPP_LEAVE(0x74, FINALLY_006a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006a;
	}

FINALLY_006a:
	{ // begin finally (depth: 1)
		{
			bool L_16 = V_2;
			if (!L_16)
			{
				goto IL_0073;
			}
		}

IL_006d:
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_17 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_17, /*hidden argument*/NULL);
		}

IL_0073:
		{
			IL2CPP_RESET_LEAVE(0x74);
			IL2CPP_END_FINALLY(106)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(106)
	{
		IL2CPP_JUMP_TBL(0x74, IL_0074)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::remove_PropertyChanged(System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_remove_PropertyChanged_m6F305CF544A904E68F5374BFEBC7C3A1FAD40910 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_remove_PropertyChanged_m6F305CF544A904E68F5374BFEBC7C3A1FAD40910_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_0 = NULL;
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_1 = NULL;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// Windows_Data_PropertyChangedEventArgs_Delegate_callbacks.TryAddDefault(_pNative);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_2 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4();
		intptr_t L_3 = __this->get__pNative_0();
		NullCheck(L_2);
		CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26(L_2, (intptr_t)L_3, /*hidden argument*/CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26_RuntimeMethod_var);
		// var callbackList = Windows_Data_PropertyChangedEventArgs_Delegate_callbacks[_pNative];
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_4 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4();
		intptr_t L_5 = __this->get__pNative_0();
		NullCheck(L_4);
		List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_6 = ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681(L_4, (intptr_t)L_5, /*hidden argument*/ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681_RuntimeMethod_var);
		V_0 = L_6;
		// lock (callbackList)
		List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_7 = V_0;
		V_1 = L_7;
		V_2 = (bool)0;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_8 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_8, (bool*)(&V_2), /*hidden argument*/NULL);
			// callbackList.Remove(value);
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_9 = V_0;
			EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * L_10 = ___value0;
			NullCheck(L_9);
			List_1_Remove_m7D474E43663B2270F2D24EDEE1FB56D2F0B913DF(L_9, L_10, /*hidden argument*/List_1_Remove_m7D474E43663B2270F2D24EDEE1FB56D2F0B913DF_RuntimeMethod_var);
			// if(callbackList.Count == 0)
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_11 = V_0;
			NullCheck(L_11);
			int32_t L_12 = List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C(L_11, /*hidden argument*/List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0073;
			}
		}

IL_0051:
		{
			// Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged(_pNative, Windows_Data_PropertyChangedEventArgs_Delegate_Handler, true);
			intptr_t L_13 = __this->get__pNative_0();
			_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * L_14 = (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 *)il2cpp_codegen_object_new(_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512_il2cpp_TypeInfo_var);
			_Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m164B8A30AC1D5B1B75C8F11C902EC76AF20050AD(L_14, NULL, (intptr_t)((intptr_t)MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged_m27C2567040A5598A710DA05234B94A78E38F6642((intptr_t)L_13, L_14, (bool)1, /*hidden argument*/NULL);
			// _Windows_Data_PropertyChangedEventArgs_Delegate_Handle.Free();
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3()), /*hidden argument*/NULL);
		}

IL_0073:
		{
			// }
			IL2CPP_LEAVE(0x7F, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			bool L_15 = V_2;
			if (!L_15)
			{
				goto IL_007e;
			}
		}

IL_0078:
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_16 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_16, /*hidden argument*/NULL);
		}

IL_007e:
		{
			IL2CPP_RESET_LEAVE(0x7F);
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x7F, IL_007f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007f:
	{
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame(intptr_t);
#endif
// System.IntPtr Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame_m7CE64F75FB28AFA8EE2B5F1EE664C81E115E3996 (intptr_t ___pNative0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame)(___pNative0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReader::AcquireLatestFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * MultiSourceFrameReader_AcquireLatestFrame_m66E38BE11CCB82E67EB7ABADA127217153335989 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_AcquireLatestFrame_m66E38BE11CCB82E67EB7ABADA127217153335989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * G_B6_0 = NULL;
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * G_B5_0 = NULL;
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new RootSystem.ObjectDisposedException("MultiSourceFrameReader");
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteralE8E7D411FC5F522D27EEC08F97BC5DB80F80D30E, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, MultiSourceFrameReader_AcquireLatestFrame_m66E38BE11CCB82E67EB7ABADA127217153335989_RuntimeMethod_var);
	}

IL_001d:
	{
		// RootSystem.IntPtr objectPointer = Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame(_pNative);
		intptr_t L_3 = __this->get__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		intptr_t L_4 = MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_AcquireLatestFrame_m7CE64F75FB28AFA8EE2B5F1EE664C81E115E3996((intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		// Helper.ExceptionHelper.CheckLastError();
		ExceptionHelper_CheckLastError_m7BC544A6D3A400522FE417C820D91A9E71586F7A(/*hidden argument*/NULL);
		// if (objectPointer == RootSystem.IntPtr.Zero)
		intptr_t L_5 = V_0;
		bool L_6 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return null;
		return (MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 *)NULL;
	}

IL_003d:
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrame>(objectPointer, n => new Windows.Kinect.MultiSourceFrame(n));
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var);
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_8 = ((U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var))->get_U3CU3E9__36_0_2();
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = L_7;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var);
		U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * L_10 = ((U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_11 = (Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B *)il2cpp_codegen_object_new(Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B_il2cpp_TypeInfo_var);
		Func_2__ctor_mF1F83822EB87CB92978FA5E313C1C801B396BAF8(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CAcquireLatestFrameU3Eb__36_0_m3D4621D52398F131798A23BA57F59A1B9D5B8B06_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF1F83822EB87CB92978FA5E313C1C801B396BAF8_RuntimeMethod_var);
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_12 = L_11;
		((U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var))->set_U3CU3E9__36_0_2(L_12);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
		MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * L_13 = NativeObjectCache_CreateOrGetObject_TisMultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_m0FEA06CD28D44660D284DDBDBE165DB9CA2AB3D4((intptr_t)G_B6_1, G_B6_0, /*hidden argument*/NativeObjectCache_CreateOrGetObject_TisMultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_m0FEA06CD28D44660D284DDBDBE165DB9CA2AB3D4_RuntimeMethod_var);
		return L_13;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReader_Dispose(intptr_t);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameReader_Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_Dispose_m62782EF655F9F31BF3C66C95520105E51D8FAD38 (intptr_t ___pNative0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReader_Dispose", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReader_Dispose'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReader_Dispose)(___pNative0);
	#else
	il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
// System.Void Windows.Kinect.MultiSourceFrameReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader_Dispose_m6B8F852C880BF04A348AF0752313B865D171AF57 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader_Dispose_m6B8F852C880BF04A348AF0752313B865D171AF57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// Dispose(true);
		MultiSourceFrameReader_Dispose_m1B59937CAA5F7949E79BEEF0B55E88FB6E6F96AA(__this, (bool)1, /*hidden argument*/NULL);
		// RootSystem.GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::__EventCleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader___EventCleanup_m2EC50AD24A1D404B6BD48CE4528F14B68D2F9FF8 (MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader___EventCleanup_m2EC50AD24A1D404B6BD48CE4528F14B68D2F9FF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_0 = NULL;
	List_1_tC026AE19364CD494F8F787C71248528372071F87 * V_1 = NULL;
	bool V_2 = false;
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_3 = NULL;
	List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks.TryAddDefault(_pNative);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_0 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2();
		intptr_t L_1 = __this->get__pNative_0();
		NullCheck(L_0);
		CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8(L_0, (intptr_t)L_1, /*hidden argument*/CollectionMap_2_TryAddDefault_m113DFC6BC116C9919E00BC12EC827BF53CAC3DA8_RuntimeMethod_var);
		// var callbackList = Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks[_pNative];
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_2 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2();
		intptr_t L_3 = __this->get__pNative_0();
		NullCheck(L_2);
		List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_4 = ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A(L_2, (intptr_t)L_3, /*hidden argument*/ThreadSafeDictionary_2_get_Item_m359377EE564DEC883D2D0CF89EE8EDF6F2A6869A_RuntimeMethod_var);
		V_0 = L_4;
		// lock (callbackList)
		List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_5 = V_0;
		V_1 = L_5;
		V_2 = (bool)0;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_6 = V_1;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_6, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (callbackList.Count > 0)
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_7 = V_0;
			NullCheck(L_7);
			int32_t L_8 = List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027(L_7, /*hidden argument*/List_1_get_Count_m242BE82605D6BE958D9C9EB118626D92C96A9027_RuntimeMethod_var);
			if ((((int32_t)L_8) <= ((int32_t)0)))
			{
				goto IL_0071;
			}
		}

IL_0037:
		{
			// callbackList.Clear();
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_9 = V_0;
			NullCheck(L_9);
			List_1_Clear_m73ACED094C6D426A6BC9B77D08595F44B598D2D3(L_9, /*hidden argument*/List_1_Clear_m73ACED094C6D426A6BC9B77D08595F44B598D2D3_RuntimeMethod_var);
			// if (_pNative != RootSystem.IntPtr.Zero)
			intptr_t L_10 = __this->get__pNative_0();
			bool L_11 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0067;
			}
		}

IL_004f:
		{
			// Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived(_pNative, Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler, true);
			intptr_t L_12 = __this->get__pNative_0();
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * L_13 = (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 *)il2cpp_codegen_object_new(_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610_il2cpp_TypeInfo_var);
			_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate__ctor_m86E450E6C73C649D3FD6062822EC415068F9EEFC(L_13, NULL, (intptr_t)((intptr_t)MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m32F9C16E15700E43ABA7A05CB0366304D605DA1E_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_MultiSourceFrameArrived_mF7DC7BBBC7D8F4D64EBE8DBCE3D8E1B53C4594C6((intptr_t)L_12, L_13, (bool)1, /*hidden argument*/NULL);
		}

IL_0067:
		{
			// _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle.Free();
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_address_of__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1()), /*hidden argument*/NULL);
		}

IL_0071:
		{
			// }
			IL2CPP_LEAVE(0x7D, FINALLY_0073);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0073;
	}

FINALLY_0073:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_2;
			if (!L_14)
			{
				goto IL_007c;
			}
		}

IL_0076:
		{
			List_1_tC026AE19364CD494F8F787C71248528372071F87 * L_15 = V_1;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		}

IL_007c:
		{
			IL2CPP_RESET_LEAVE(0x7D);
			IL2CPP_END_FINALLY(115)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(115)
	{
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007d:
	{
		// Windows_Data_PropertyChangedEventArgs_Delegate_callbacks.TryAddDefault(_pNative);
		IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_16 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4();
		intptr_t L_17 = __this->get__pNative_0();
		NullCheck(L_16);
		CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26(L_16, (intptr_t)L_17, /*hidden argument*/CollectionMap_2_TryAddDefault_m59A0D62C73E3972E1891D6B18D63AF81F5521E26_RuntimeMethod_var);
		// var callbackList = Windows_Data_PropertyChangedEventArgs_Delegate_callbacks[_pNative];
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_18 = ((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4();
		intptr_t L_19 = __this->get__pNative_0();
		NullCheck(L_18);
		List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_20 = ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681(L_18, (intptr_t)L_19, /*hidden argument*/ThreadSafeDictionary_2_get_Item_mC65C980C9281B0CD0B838193890584F7EFB10681_RuntimeMethod_var);
		V_3 = L_20;
		// lock (callbackList)
		List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_21 = V_3;
		V_4 = L_21;
		V_2 = (bool)0;
	}

IL_00a4:
	try
	{ // begin try (depth: 1)
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_22 = V_4;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_22, (bool*)(&V_2), /*hidden argument*/NULL);
			// if (callbackList.Count > 0)
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_23 = V_3;
			NullCheck(L_23);
			int32_t L_24 = List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C(L_23, /*hidden argument*/List_1_get_Count_mB4039DF404B457AFD652B37F733EA66BB267DA7C_RuntimeMethod_var);
			if ((((int32_t)L_24) <= ((int32_t)0)))
			{
				goto IL_00f0;
			}
		}

IL_00b6:
		{
			// callbackList.Clear();
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_25 = V_3;
			NullCheck(L_25);
			List_1_Clear_m7F3E7D2ADC19A3D6892B6CDC93A72533F6FA955F(L_25, /*hidden argument*/List_1_Clear_m7F3E7D2ADC19A3D6892B6CDC93A72533F6FA955F_RuntimeMethod_var);
			// if (_pNative != RootSystem.IntPtr.Zero)
			intptr_t L_26 = __this->get__pNative_0();
			bool L_27 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_26, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_00e6;
			}
		}

IL_00ce:
		{
			// Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged(_pNative, Windows_Data_PropertyChangedEventArgs_Delegate_Handler, true);
			intptr_t L_28 = __this->get__pNative_0();
			_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * L_29 = (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 *)il2cpp_codegen_object_new(_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512_il2cpp_TypeInfo_var);
			_Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m164B8A30AC1D5B1B75C8F11C902EC76AF20050AD(L_29, NULL, (intptr_t)((intptr_t)MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m04CF64AAD7ACDD791472F190103BB49CC5569C18_RuntimeMethod_var), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameReader_add_PropertyChanged_m27C2567040A5598A710DA05234B94A78E38F6642((intptr_t)L_28, L_29, (bool)1, /*hidden argument*/NULL);
		}

IL_00e6:
		{
			// _Windows_Data_PropertyChangedEventArgs_Delegate_Handle.Free();
			IL2CPP_RUNTIME_CLASS_INIT(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var);
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3()), /*hidden argument*/NULL);
		}

IL_00f0:
		{
			// }
			IL2CPP_LEAVE(0xFD, FINALLY_00f2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f2;
	}

FINALLY_00f2:
	{ // begin finally (depth: 1)
		{
			bool L_30 = V_2;
			if (!L_30)
			{
				goto IL_00fc;
			}
		}

IL_00f5:
		{
			List_1_t6428FA0E929B5673EB746A33E9AB21F299AB6E92 * L_31 = V_4;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_31, /*hidden argument*/NULL);
		}

IL_00fc:
		{
			IL2CPP_RESET_LEAVE(0xFD);
			IL2CPP_END_FINALLY(242)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(242)
	{
		IL2CPP_JUMP_TBL(0xFD, IL_00fd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReader__cctor_m31439AA65FDF0E25CDC79EEBA4A08BA952085D4E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReader__cctor_m31439AA65FDF0E25CDC79EEBA4A08BA952085D4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Helper.CollectionMap<RootSystem.IntPtr, List<RootSystem.EventHandler<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>> Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks = new Helper.CollectionMap<RootSystem.IntPtr, List<RootSystem.EventHandler<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>();
		CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F * L_0 = (CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F *)il2cpp_codegen_object_new(CollectionMap_2_t77991CA07F3429FE49EA7FEE62E967074C91F25F_il2cpp_TypeInfo_var);
		CollectionMap_2__ctor_m738BCEFFD82C06F5635877430E33D7EC0A83E671(L_0, /*hidden argument*/CollectionMap_2__ctor_m738BCEFFD82C06F5635877430E33D7EC0A83E671_RuntimeMethod_var);
		((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->set_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2(L_0);
		// private static Helper.CollectionMap<RootSystem.IntPtr, List<RootSystem.EventHandler<Windows.Data.PropertyChangedEventArgs>>> Windows_Data_PropertyChangedEventArgs_Delegate_callbacks = new Helper.CollectionMap<RootSystem.IntPtr, List<RootSystem.EventHandler<Windows.Data.PropertyChangedEventArgs>>>();
		CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 * L_1 = (CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90 *)il2cpp_codegen_object_new(CollectionMap_2_tFEED11F526BCA2F88A3E39BD03091A39FC739F90_il2cpp_TypeInfo_var);
		CollectionMap_2__ctor_m64EBCD59059EF2C20B4126D5253C4F02C809DB2A(L_1, /*hidden argument*/CollectionMap_2__ctor_m64EBCD59059EF2C20B4126D5253C4F02C809DB2A_RuntimeMethod_var);
		((MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_StaticFields*)il2cpp_codegen_static_fields_for(MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8_il2cpp_TypeInfo_var))->set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(L_1);
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
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1B5E89E4D69467E1307A88595ED7A0C059332BD0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1B5E89E4D69467E1307A88595ED7A0C059332BD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * L_0 = (U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 *)il2cpp_codegen_object_new(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9254F0981E2A40611A1AE0E3C4650F5681D9238E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9254F0981E2A40611A1AE0E3C4650F5681D9238E (U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.KinectSensor Windows.Kinect.MultiSourceFrameReader_<>c::<get_KinectSensor>b__18_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 * U3CU3Ec_U3Cget_KinectSensorU3Eb__18_0_mE88C0BB851D53FFEE9E1FBCE428BB57D616B95F4 (U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3Cget_KinectSensorU3Eb__18_0_mE88C0BB851D53FFEE9E1FBCE428BB57D616B95F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.KinectSensor>(objectPointer, n => new Windows.Kinect.KinectSensor(n));
		intptr_t L_0 = ___n0;
		KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 * L_1 = (KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9 *)il2cpp_codegen_object_new(KinectSensor_tF81DD7F4D3F158A580B4D7A6E645BCDAA0D7F8A9_il2cpp_TypeInfo_var);
		KinectSensor__ctor_mDB9B778CF2D3422C1F7EB2795C8338602266E042(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReader_<>c::<AcquireLatestFrame>b__36_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * U3CU3Ec_U3CAcquireLatestFrameU3Eb__36_0_m3D4621D52398F131798A23BA57F59A1B9D5B8B06 (U3CU3Ec_t43C648380EB0555891C62C51635DB68F968FD3C9 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CAcquireLatestFrameU3Eb__36_0_m3D4621D52398F131798A23BA57F59A1B9D5B8B06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrame>(objectPointer, n => new Windows.Kinect.MultiSourceFrame(n));
		intptr_t L_0 = ___n0;
		MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * L_1 = (MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 *)il2cpp_codegen_object_new(MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_il2cpp_TypeInfo_var);
		MultiSourceFrame__ctor_mC040BE952DEAFC56222F69D9F7A7C68DD8B8D6D0(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m93E12CCBEF11BB4FB296B0875E0D9CBA20CBDCB1 (U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_mCC075D14DA920827064FF503607160325FA98C9D (U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass22_1::<Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1_U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Eb__0_mFCF1F3F4FF85E5F694B4F939B82FB9549E44AC10 (U3CU3Ec__DisplayClass22_1_t5E8922C58E01254B5A3B814E9CD22E29621E6908 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass22_1_U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Eb__0_mFCF1F3F4FF85E5F694B4F939B82FB9549E44AC10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_tD87F9BAC805A597F77220D73B2F1B10CB0B82ABA * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass22_0_tAB3A9C66B239A3D6742DDB3AB427C33BF85CDBCB * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		MultiSourceFrameArrivedEventArgs_tA28EC221B76F004B453046861C623DB91F65B41B * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_mBE50F4C9C45EF02F3F11DBF0381A539DF07E6F15(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_mBE50F4C9C45EF02F3F11DBF0381A539DF07E6F15_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
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
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_m44918EA4DE83100753948FE65694CDAEE9171805 (U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_1__ctor_mB00B49B6A74AB2858DE05D6EFA33E7F899E6F779 (U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader_<>c__DisplayClass30_1::<Windows_Data_PropertyChangedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mA56C79F5F13ACA0411E1F5DA94FB00501D42AF9A (U3CU3Ec__DisplayClass30_1_t63C2C65CE6F005BEA768FF7B34ED714645EC0BC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass30_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mA56C79F5F13ACA0411E1F5DA94FB00501D42AF9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_t4EBBA00292B1F80C914ADC591DAD26A6A977077E * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		MultiSourceFrameReader_t92A4AC79455C6200AEAF6A0D280AC08D2508ADB8 * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass30_0_tBA7943CF3C08F15520BEDCA131C232201EDB290C * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		PropertyChangedEventArgs_t9E095133C51447F3834040814CB46270E9271DE1 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_mC57BEF475A14E308B81ECAD4F987DF1BF9C0E289(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_mC57BEF475A14E308B81ECAD4F987DF1BF9C0E289_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0023;
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.MultiSourceFrameReader__Windows_Data_PropertyChangedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m164B8A30AC1D5B1B75C8F11C902EC76AF20050AD (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.MultiSourceFrameReader__Windows_Data_PropertyChangedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_Invoke_m02148987A88E9583AF891815E898D05354C41184 (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.MultiSourceFrameReader__Windows_Data_PropertyChangedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Data_PropertyChangedEventArgs_Delegate_BeginInvoke_mAED4A964FDECD3B5B228182EE8382B1E1319B57C (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_Windows_Data_PropertyChangedEventArgs_Delegate_BeginInvoke_mAED4A964FDECD3B5B228182EE8382B1E1319B57C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Windows.Kinect.MultiSourceFrameReader__Windows_Data_PropertyChangedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_EndInvoke_m3EAD8A49519B96CBDBC3774C3E22EB20EA8D8782 (_Windows_Data_PropertyChangedEventArgs_Delegate_tFA95E0767DDEC85211ACACF2DC93115C4D137512 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.MultiSourceFrameReader__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate__ctor_m86E450E6C73C649D3FD6062822EC415068F9EEFC (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.MultiSourceFrameReader__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Invoke_mFF71A6CB14B883B90228462711ED8822E11FB3F1 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.MultiSourceFrameReader__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_BeginInvoke_mC260BDE393141AC6DF22B0F8765464664A368F80 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_BeginInvoke_mC260BDE393141AC6DF22B0F8765464664A368F80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Windows.Kinect.MultiSourceFrameReader__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_EndInvoke_mA009A62436354BE2A3D991CFEBB74C45CE1691A0 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_tFAFBC891093580C5F05EAA66E0D99B9D9C328610 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.IntPtr Windows.Kinect.MultiSourceFrameReference::Helper.INativeWrapper.get_nativePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReference_Helper_INativeWrapper_get_nativePtr_mB75966068DCB20E025DC61C2C84F96DFC74C7726 (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, const RuntimeMethod* method)
{
	{
		// RootSystem.IntPtr Helper.INativeWrapper.nativePtr { get { return _pNative; } }
		intptr_t L_0 = __this->get__pNative_0();
		return (intptr_t)L_0;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference__ctor_mC2CF2C96F9CA01685951D59AA8374A5F122EFA7F (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, intptr_t ___pNative0, const RuntimeMethod* method)
{
	{
		// internal MultiSourceFrameReference(RootSystem.IntPtr pNative)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// _pNative = pNative;
		intptr_t L_0 = ___pNative0;
		__this->set__pNative_0((intptr_t)L_0);
		// Windows_Kinect_MultiSourceFrameReference_AddRefObject(ref _pNative);
		intptr_t* L_1 = __this->get_address_of__pNative_0();
		MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_AddRefObject_m97A4AE59FC3C0B27DF28766D71A57C5D1C2B148D((intptr_t*)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference_Finalize_m8BAAFF627AEBC8A2B7C303E33325908A971316ED (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		// Dispose(false);
		MultiSourceFrameReference_Dispose_mE5E95499CFF26A6BA739C98F54BEEDBC208C24C8(__this, (bool)0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_RESET_LEAVE(0x10);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0010:
	{
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReference_ReleaseObject(intptr_t*);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReference::Windows_Kinect_MultiSourceFrameReference_ReleaseObject(System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_ReleaseObject_m64729CE9B52E6441533A50334AF5AD10D66BB33D (intptr_t* ___pNative0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReference_ReleaseObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReference_ReleaseObject'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReference_ReleaseObject)(___pNative0);
	#else
	il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void CDECL Windows_Kinect_MultiSourceFrameReference_AddRefObject(intptr_t*);
#endif
// System.Void Windows.Kinect.MultiSourceFrameReference::Windows_Kinect_MultiSourceFrameReference_AddRefObject(System.IntPtrU26)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_AddRefObject_m97A4AE59FC3C0B27DF28766D71A57C5D1C2B148D (intptr_t* ___pNative0, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReference_AddRefObject", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReference_AddRefObject'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReference_AddRefObject)(___pNative0);
	#else
	il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

}
// System.Void Windows.Kinect.MultiSourceFrameReference::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference_Dispose_mE5E95499CFF26A6BA739C98F54BEEDBC208C24C8 (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReference_Dispose_mE5E95499CFF26A6BA739C98F54BEEDBC208C24C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		return;
	}

IL_0013:
	{
		// __EventCleanup();
		MultiSourceFrameReference___EventCleanup_mB2E07E1953E30F795B9849794571BCEE1BEE571B(__this, /*hidden argument*/NULL);
		// Helper.NativeObjectCache.RemoveObject<MultiSourceFrameReference>(_pNative);
		intptr_t L_2 = __this->get__pNative_0();
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
		NativeObjectCache_RemoveObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_m22B4EADC558C684486B67D8DF52EC92CAAB0ED1D((intptr_t)L_2, /*hidden argument*/NativeObjectCache_RemoveObject_TisMultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90_m22B4EADC558C684486B67D8DF52EC92CAAB0ED1D_RuntimeMethod_var);
		// Windows_Kinect_MultiSourceFrameReference_ReleaseObject(ref _pNative);
		intptr_t* L_3 = __this->get_address_of__pNative_0();
		MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_ReleaseObject_m64729CE9B52E6441533A50334AF5AD10D66BB33D((intptr_t*)L_3, /*hidden argument*/NULL);
		// _pNative = RootSystem.IntPtr.Zero;
		__this->set__pNative_0((intptr_t)(0));
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t CDECL Windows_Kinect_MultiSourceFrameReference_AcquireFrame(intptr_t);
#endif
// System.IntPtr Windows.Kinect.MultiSourceFrameReference::Windows_Kinect_MultiSourceFrameReference_AcquireFrame(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_AcquireFrame_mFA21EFB1C6A8F47A8B12452BAFF8DB4EF4741E7B (intptr_t ___pNative0, const RuntimeMethod* method)
{
	typedef intptr_t (CDECL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("KinectUnityAddin"), "Windows_Kinect_MultiSourceFrameReference_AcquireFrame", IL2CPP_CALL_C, CHARSET_NOT_SPECIFIED, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'Windows_Kinect_MultiSourceFrameReference_AcquireFrame'"), NULL, NULL);
		}
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Windows_Kinect_MultiSourceFrameReference_AcquireFrame)(___pNative0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___pNative0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReference::AcquireFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * MultiSourceFrameReference_AcquireFrame_mDA04D7D24F0751AB58215D0B8D868BF1FF0D9A33 (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiSourceFrameReference_AcquireFrame_mDA04D7D24F0751AB58215D0B8D868BF1FF0D9A33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * G_B6_0 = NULL;
	intptr_t G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * G_B5_0 = NULL;
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	{
		// if (_pNative == RootSystem.IntPtr.Zero)
		intptr_t L_0 = __this->get__pNative_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// throw new RootSystem.ObjectDisposedException("MultiSourceFrameReference");
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_2 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_2, _stringLiteral155EF5FAC7D9A0E0AA0571ABC5D59840286485E6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, MultiSourceFrameReference_AcquireFrame_mDA04D7D24F0751AB58215D0B8D868BF1FF0D9A33_RuntimeMethod_var);
	}

IL_001d:
	{
		// RootSystem.IntPtr objectPointer = Windows_Kinect_MultiSourceFrameReference_AcquireFrame(_pNative);
		intptr_t L_3 = __this->get__pNative_0();
		intptr_t L_4 = MultiSourceFrameReference_Windows_Kinect_MultiSourceFrameReference_AcquireFrame_mFA21EFB1C6A8F47A8B12452BAFF8DB4EF4741E7B((intptr_t)L_3, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_4;
		// Helper.ExceptionHelper.CheckLastError();
		ExceptionHelper_CheckLastError_m7BC544A6D3A400522FE417C820D91A9E71586F7A(/*hidden argument*/NULL);
		// if (objectPointer == RootSystem.IntPtr.Zero)
		intptr_t L_5 = V_0;
		bool L_6 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003d;
		}
	}
	{
		// return null;
		return (MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 *)NULL;
	}

IL_003d:
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrame>(objectPointer, n => new Windows.Kinect.MultiSourceFrame(n));
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var);
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_8 = ((U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var))->get_U3CU3E9__9_0_1();
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_9 = L_8;
		G_B5_0 = L_9;
		G_B5_1 = L_7;
		if (L_9)
		{
			G_B6_0 = L_9;
			G_B6_1 = L_7;
			goto IL_005d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var);
		U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * L_10 = ((U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_11 = (Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B *)il2cpp_codegen_object_new(Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B_il2cpp_TypeInfo_var);
		Func_2__ctor_mF1F83822EB87CB92978FA5E313C1C801B396BAF8(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CAcquireFrameU3Eb__9_0_m67758329CA46B7BF56338DD2CAAA09ED826C739C_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF1F83822EB87CB92978FA5E313C1C801B396BAF8_RuntimeMethod_var);
		Func_2_t3DD974CFFBF5205B4AFA35C2EDD3C03AC12F271B * L_12 = L_11;
		((U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var))->set_U3CU3E9__9_0_1(L_12);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
	}

IL_005d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeObjectCache_t379F3463C39DE88BC81E760E1E643148D7016E00_il2cpp_TypeInfo_var);
		MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * L_13 = NativeObjectCache_CreateOrGetObject_TisMultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_m0FEA06CD28D44660D284DDBDBE165DB9CA2AB3D4((intptr_t)G_B6_1, G_B6_0, /*hidden argument*/NativeObjectCache_CreateOrGetObject_TisMultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_m0FEA06CD28D44660D284DDBDBE165DB9CA2AB3D4_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReference::__EventCleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference___EventCleanup_mB2E07E1953E30F795B9849794571BCEE1BEE571B (MultiSourceFrameReference_t85CE09FABF431C7242973372A6A3FE26E7BC2E90 * __this, const RuntimeMethod* method)
{
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
// System.Void Windows.Kinect.MultiSourceFrameReference_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6A156E378F58FBBAD1B1CEEA783A0246A2199BB1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m6A156E378F58FBBAD1B1CEEA783A0246A2199BB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * L_0 = (U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 *)il2cpp_codegen_object_new(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA5F1C2F69E90099945B49187D9206F2875994B74(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReference_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA5F1C2F69E90099945B49187D9206F2875994B74 (U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReference_<>c::<AcquireFrame>b__9_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * U3CU3Ec_U3CAcquireFrameU3Eb__9_0_m67758329CA46B7BF56338DD2CAAA09ED826C739C (U3CU3Ec_tF8DD0C949611722772115D0091C04706359CB0D6 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CAcquireFrameU3Eb__9_0_m67758329CA46B7BF56338DD2CAAA09ED826C739C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrame>(objectPointer, n => new Windows.Kinect.MultiSourceFrame(n));
		intptr_t L_0 = ___n0;
		MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 * L_1 = (MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096 *)il2cpp_codegen_object_new(MultiSourceFrame_t459A3C10F6EC5823C307856FB5A52AE75A00D096_il2cpp_TypeInfo_var);
		MultiSourceFrame__ctor_mC040BE952DEAFC56222F69D9F7A7C68DD8B8D6D0(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
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
// System.Single Windows.Kinect.PointF::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointF_get_X_m63BFDADC4E803411230E6B7856A67B69A14F9A45 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, const RuntimeMethod* method)
{
	{
		// public float X { get; set; }
		float L_0 = __this->get_U3CXU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float PointF_get_X_m63BFDADC4E803411230E6B7856A67B69A14F9A45_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * _thisAdjusted = reinterpret_cast<PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *>(__this + 1);
	return PointF_get_X_m63BFDADC4E803411230E6B7856A67B69A14F9A45(_thisAdjusted, method);
}
// System.Void Windows.Kinect.PointF::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointF_set_X_m5658C81A446C5AE7019E5D2050BF44D0813D2436 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float X { get; set; }
		float L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PointF_set_X_m5658C81A446C5AE7019E5D2050BF44D0813D2436_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * _thisAdjusted = reinterpret_cast<PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *>(__this + 1);
	PointF_set_X_m5658C81A446C5AE7019E5D2050BF44D0813D2436(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.PointF::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PointF_get_Y_mAB4E34D7290BD0263737FB405EC888A01B05FC67 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, const RuntimeMethod* method)
{
	{
		// public float Y { get; set; }
		float L_0 = __this->get_U3CYU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float PointF_get_Y_mAB4E34D7290BD0263737FB405EC888A01B05FC67_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * _thisAdjusted = reinterpret_cast<PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *>(__this + 1);
	return PointF_get_Y_mAB4E34D7290BD0263737FB405EC888A01B05FC67(_thisAdjusted, method);
}
// System.Void Windows.Kinect.PointF::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointF_set_Y_m230AB7338A927ED4B00F0EE90C97ECCF124FC07E (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Y { get; set; }
		float L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void PointF_set_Y_m230AB7338A927ED4B00F0EE90C97ECCF124FC07E_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * _thisAdjusted = reinterpret_cast<PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *>(__this + 1);
	PointF_set_Y_m230AB7338A927ED4B00F0EE90C97ECCF124FC07E(_thisAdjusted, ___value0, method);
}
// System.Int32 Windows.Kinect.PointF::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PointF_GetHashCode_m4873F48CF72693915767A412982AF266FBECB98F (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return X.GetHashCode() ^ Y.GetHashCode();
		float L_0 = PointF_get_X_m63BFDADC4E803411230E6B7856A67B69A14F9A45((PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_0), /*hidden argument*/NULL);
		float L_2 = PointF_get_Y_mAB4E34D7290BD0263737FB405EC888A01B05FC67((PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t PointF_GetHashCode_m4873F48CF72693915767A412982AF266FBECB98F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * _thisAdjusted = reinterpret_cast<PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *>(__this + 1);
	return PointF_GetHashCode_m4873F48CF72693915767A412982AF266FBECB98F(_thisAdjusted, method);
}
// System.Boolean Windows.Kinect.PointF::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is PointF))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B_il2cpp_TypeInfo_var)))
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
		// return this.Equals((ColorSpacePoint)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = PointF_Equals_m6D3EC810FC1F2B501DECD3BA0912EE0AF4E3E0C4((PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *)__this, ((*(ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9 *)((ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9 *)UnBox(L_1, ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * _thisAdjusted = reinterpret_cast<PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *>(__this + 1);
	return PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305(_thisAdjusted, ___obj0, method);
}
// System.Boolean Windows.Kinect.PointF::Equals(Windows.Kinect.ColorSpacePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointF_Equals_m6D3EC810FC1F2B501DECD3BA0912EE0AF4E3E0C4 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * __this, ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9  ___obj0, const RuntimeMethod* method)
{
	{
		// return (X == obj.X) && (Y == obj.Y);
		float L_0 = PointF_get_X_m63BFDADC4E803411230E6B7856A67B69A14F9A45((PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *)__this, /*hidden argument*/NULL);
		float L_1 = ColorSpacePoint_get_X_m38C5F697917B7B2003D21CA8E850B026ADB236B2((ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9 *)(&___obj0), /*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_001f;
		}
	}
	{
		float L_2 = PointF_get_Y_mAB4E34D7290BD0263737FB405EC888A01B05FC67((PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *)__this, /*hidden argument*/NULL);
		float L_3 = ColorSpacePoint_get_Y_m87F5616A5807DDD05814196101AC1CB84FB8553F((ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9 *)(&___obj0), /*hidden argument*/NULL);
		return (bool)((((float)L_2) == ((float)L_3))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool PointF_Equals_m6D3EC810FC1F2B501DECD3BA0912EE0AF4E3E0C4_AdjustorThunk (RuntimeObject * __this, ColorSpacePoint_tAB704068F30E21AA12E88F2CD292D2C7A56A9BF9  ___obj0, const RuntimeMethod* method)
{
	PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B * _thisAdjusted = reinterpret_cast<PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *>(__this + 1);
	return PointF_Equals_m6D3EC810FC1F2B501DECD3BA0912EE0AF4E3E0C4(_thisAdjusted, ___obj0, method);
}
// System.Boolean Windows.Kinect.PointF::op_Equality(Windows.Kinect.PointF,Windows.Kinect.PointF)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointF_op_Equality_m35B2C6399EC4621A0C901FB64ABA73918D6BEA31 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  ___a0, PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointF_op_Equality_m35B2C6399EC4621A0C901FB64ABA73918D6BEA31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return a.Equals(b);
		PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  L_0 = ___b1;
		PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  L_1 = L_0;
		RuntimeObject * L_2 = Box(PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305((PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *)(&___a0), L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Windows.Kinect.PointF::op_Inequality(Windows.Kinect.PointF,Windows.Kinect.PointF)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointF_op_Inequality_mB726534FFF54051A047F6C63CC304D26418A3575 (PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  ___a0, PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PointF_op_Inequality_mB726534FFF54051A047F6C63CC304D26418A3575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return !(a.Equals(b));
		PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  L_0 = ___b1;
		PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B  L_1 = L_0;
		RuntimeObject * L_2 = Box(PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B_il2cpp_TypeInfo_var, &L_1);
		bool L_3 = PointF_Equals_m1B1481C92F0EA45FBFDCAD7B59F9431659050305((PointF_t5E74A216F3BD5D80AB3E687CA04A8C99C5BCF08B *)(&___a0), L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
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
// System.Single Windows.Kinect.Vector4::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_X_mC8E80AA5B16BA015EDA2D918EE812A7348F8F782 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method)
{
	{
		// public float X { get; set; }
		float L_0 = __this->get_U3CXU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector4_get_X_mC8E80AA5B16BA015EDA2D918EE812A7348F8F782_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	return Vector4_get_X_mC8E80AA5B16BA015EDA2D918EE812A7348F8F782(_thisAdjusted, method);
}
// System.Void Windows.Kinect.Vector4::set_X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_X_m8793E0D0D7A2F53EFC460BD7050A75F99C669004 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float X { get; set; }
		float L_0 = ___value0;
		__this->set_U3CXU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4_set_X_m8793E0D0D7A2F53EFC460BD7050A75F99C669004_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	Vector4_set_X_m8793E0D0D7A2F53EFC460BD7050A75F99C669004(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.Vector4::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Y_mACA3D8FE29ECC5A3CD68C4382EDE3B359A5DB06B (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method)
{
	{
		// public float Y { get; set; }
		float L_0 = __this->get_U3CYU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector4_get_Y_mACA3D8FE29ECC5A3CD68C4382EDE3B359A5DB06B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	return Vector4_get_Y_mACA3D8FE29ECC5A3CD68C4382EDE3B359A5DB06B(_thisAdjusted, method);
}
// System.Void Windows.Kinect.Vector4::set_Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Y_m21BDB91DD2FCB4D34629DD9762D05ED64DDEFC94 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Y { get; set; }
		float L_0 = ___value0;
		__this->set_U3CYU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4_set_Y_m21BDB91DD2FCB4D34629DD9762D05ED64DDEFC94_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	Vector4_set_Y_m21BDB91DD2FCB4D34629DD9762D05ED64DDEFC94(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.Vector4::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_Z_mE62CC5FBD850D83CEA66CA5CF4C6B3366DE2575D (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method)
{
	{
		// public float Z { get; set; }
		float L_0 = __this->get_U3CZU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector4_get_Z_mE62CC5FBD850D83CEA66CA5CF4C6B3366DE2575D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	return Vector4_get_Z_mE62CC5FBD850D83CEA66CA5CF4C6B3366DE2575D(_thisAdjusted, method);
}
// System.Void Windows.Kinect.Vector4::set_Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_Z_mD9852B66B202971C0B36F686571545AAC321B5F6 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float Z { get; set; }
		float L_0 = ___value0;
		__this->set_U3CZU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4_set_Z_mD9852B66B202971C0B36F686571545AAC321B5F6_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	Vector4_set_Z_mD9852B66B202971C0B36F686571545AAC321B5F6(_thisAdjusted, ___value0, method);
}
// System.Single Windows.Kinect.Vector4::get_W()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector4_get_W_m02A258D2793F97CE3EE8A7335FFF0E61916CCFD0 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method)
{
	{
		// public float W { get; set; }
		float L_0 = __this->get_U3CWU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C  float Vector4_get_W_m02A258D2793F97CE3EE8A7335FFF0E61916CCFD0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	return Vector4_get_W_m02A258D2793F97CE3EE8A7335FFF0E61916CCFD0(_thisAdjusted, method);
}
// System.Void Windows.Kinect.Vector4::set_W(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4_set_W_m30A7697E9B38E6ECCE2B171DED36B6905CD5AD71 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float W { get; set; }
		float L_0 = ___value0;
		__this->set_U3CWU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void Vector4_set_W_m30A7697E9B38E6ECCE2B171DED36B6905CD5AD71_AdjustorThunk (RuntimeObject * __this, float ___value0, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	Vector4_set_W_m30A7697E9B38E6ECCE2B171DED36B6905CD5AD71(_thisAdjusted, ___value0, method);
}
// System.Int32 Windows.Kinect.Vector4::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_mD88BFC5F4B56B460991A2BAAFDE52CA543EA4DA1 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return X.GetHashCode() ^ Y.GetHashCode() ^ Z.GetHashCode() ^ W.GetHashCode();
		float L_0 = Vector4_get_X_mC8E80AA5B16BA015EDA2D918EE812A7348F8F782((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_0), /*hidden argument*/NULL);
		float L_2 = Vector4_get_Y_mACA3D8FE29ECC5A3CD68C4382EDE3B359A5DB06B((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_0), /*hidden argument*/NULL);
		float L_4 = Vector4_get_Z_mE62CC5FBD850D83CEA66CA5CF4C6B3366DE2575D((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_0), /*hidden argument*/NULL);
		float L_6 = Vector4_get_W_m02A258D2793F97CE3EE8A7335FFF0E61916CCFD0((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		int32_t L_7 = Single_GetHashCode_m1BC0733E0C3851ED9D1B6C9C0B243BB88BE77AD0((float*)(&V_0), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)L_3))^(int32_t)L_5))^(int32_t)L_7));
	}
}
IL2CPP_EXTERN_C  int32_t Vector4_GetHashCode_mD88BFC5F4B56B460991A2BAAFDE52CA543EA4DA1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	return Vector4_GetHashCode_mD88BFC5F4B56B460991A2BAAFDE52CA543EA4DA1(_thisAdjusted, method);
}
// System.Boolean Windows.Kinect.Vector4::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_mAE8C94D1E2DEB35D84C6CC7A29189B73E5160488 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector4_Equals_mAE8C94D1E2DEB35D84C6CC7A29189B73E5160488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!(obj is Vector4))
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E_il2cpp_TypeInfo_var)))
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
		// return this.Equals((Vector4)obj);
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = Vector4_Equals_m4A1338460D9850050EDBCD0A3CBA8627FFFC4B07((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, ((*(Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)UnBox(L_1, Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_mAE8C94D1E2DEB35D84C6CC7A29189B73E5160488_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	return Vector4_Equals_mAE8C94D1E2DEB35D84C6CC7A29189B73E5160488(_thisAdjusted, ___obj0, method);
}
// System.Boolean Windows.Kinect.Vector4::Equals(Windows.Kinect.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_Equals_m4A1338460D9850050EDBCD0A3CBA8627FFFC4B07 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * __this, Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  ___obj0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return X.Equals(obj.X) && Y.Equals(obj.Y) && Z.Equals(obj.Z) && W.Equals(obj.W);
		float L_0 = Vector4_get_X_mC8E80AA5B16BA015EDA2D918EE812A7348F8F782((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Vector4_get_X_mC8E80AA5B16BA015EDA2D918EE812A7348F8F782((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)(&___obj0), /*hidden argument*/NULL);
		bool L_2 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_0), L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		float L_3 = Vector4_get_Y_mACA3D8FE29ECC5A3CD68C4382EDE3B359A5DB06B((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = Vector4_get_Y_mACA3D8FE29ECC5A3CD68C4382EDE3B359A5DB06B((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)(&___obj0), /*hidden argument*/NULL);
		bool L_5 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_0), L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		float L_6 = Vector4_get_Z_mE62CC5FBD850D83CEA66CA5CF4C6B3366DE2575D((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = Vector4_get_Z_mE62CC5FBD850D83CEA66CA5CF4C6B3366DE2575D((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)(&___obj0), /*hidden argument*/NULL);
		bool L_8 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_0), L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		float L_9 = Vector4_get_W_m02A258D2793F97CE3EE8A7335FFF0E61916CCFD0((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)__this, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = Vector4_get_W_m02A258D2793F97CE3EE8A7335FFF0E61916CCFD0((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)(&___obj0), /*hidden argument*/NULL);
		bool L_11 = Single_Equals_mCDFA927E712FBA83D076864E16C77E39A6E66FE7((float*)(&V_0), L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_005b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Vector4_Equals_m4A1338460D9850050EDBCD0A3CBA8627FFFC4B07_AdjustorThunk (RuntimeObject * __this, Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  ___obj0, const RuntimeMethod* method)
{
	Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E * _thisAdjusted = reinterpret_cast<Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *>(__this + 1);
	return Vector4_Equals_m4A1338460D9850050EDBCD0A3CBA8627FFFC4B07(_thisAdjusted, ___obj0, method);
}
// System.Boolean Windows.Kinect.Vector4::op_Equality(Windows.Kinect.Vector4,Windows.Kinect.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m155637DA5AAF72117948430294FBBCC45E07CE95 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  ___a0, Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  ___b1, const RuntimeMethod* method)
{
	{
		// return a.Equals(b);
		Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  L_0 = ___b1;
		bool L_1 = Vector4_Equals_m4A1338460D9850050EDBCD0A3CBA8627FFFC4B07((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)(&___a0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Windows.Kinect.Vector4::op_Inequality(Windows.Kinect.Vector4,Windows.Kinect.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m6B9379D36C2ECA904B64954FC481A62CBB07A173 (Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  ___a0, Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  ___b1, const RuntimeMethod* method)
{
	{
		// return !(a.Equals(b));
		Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E  L_0 = ___b1;
		bool L_1 = Vector4_Equals_m4A1338460D9850050EDBCD0A3CBA8627FFFC4B07((Vector4_tBCEC4CA52FCB5B05448E9E1D5EF2CAF9D36CFE5E *)(&___a0), L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
