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

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23;
// Microsoft.MixedReality.Toolkit.BaseService
struct BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1;
// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520;
// Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem
struct IMixedRealityCameraSystem_tD3073D7E7C2E845330176703A98D578DB549418B;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_tA8F67CB2C442808E11CAA63ABD09B8423BEE3920;
// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource
struct IMixedRealityInputSource_tFBE90703EA23201C710973EAEACE2646A973BA0D;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile
struct MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile
struct MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile
struct MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile
struct MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile
struct MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[]
struct MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile
struct MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC;
// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile
struct MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA;
// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF;
// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType
struct SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider
struct IWindowsMixedRealityUtilitiesProvider_t1562912BAC29CA290923537734E12F2BC84DB999;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8;
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>[]
struct EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA;
// System.Collections.Generic.Dictionary`2/KeyCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A;
// System.Collections.Generic.Dictionary`2/ValueCollection<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose/GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose>
struct Dictionary_2_t255A9FF0555633063B0E43D9EE11E85193B321D0;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint>
struct IEqualityComparer_1_t4CEBE23321125B6E8D8B4B82EA2D83BCE8ADE39E;
// System.Collections.Generic.List`1<System.Globalization.CultureInfo>
struct List_1_t74F59DD36FAE0CFB087612565C42CAD359647832;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.StreamWriter
struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.Encoder
struct Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<Windows.Perception.People.HandMeshObserver>
struct Task_1_tA7FC8B27EE8AFE5E59440EDCF10C6B6FF5219999;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_t6C79000B30E830F251BD3C445197FD2A2DCB0F62;
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperation_1_tC5CC917D6DD8CB05F1C66F2F61D9005DBC17EE3B;
// Windows.Graphics.Holographic.HolographicDisplay
struct HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C;
// Windows.Graphics.Holographic.HolographicFrame
struct HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543;
// Windows.Graphics.Holographic.HolographicViewConfiguration
struct HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90;
// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;
// Windows.Perception.People.HandMeshObserver
struct HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622;
// Windows.Perception.People.HandMeshVertexState
struct HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463;
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE;
// Windows.Perception.People.HandPose
struct HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C;
// Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658;
// Windows.UI.Input.Spatial.SpatialInteractionSource
struct SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384;

IL2CPP_EXTERN_C RuntimeClass* ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWindowsMixedRealityUtilitiesProvider_t1562912BAC29CA290923537734E12F2BC84DB999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0918B88AB9AC412ABA9CA72D6D76DFAF2E7E371D;
IL2CPP_EXTERN_C String_t* _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E;
IL2CPP_EXTERN_C String_t* _stringLiteral26DFC60E6D308FD5C82010F93B8A9731F73CEA64;
IL2CPP_EXTERN_C String_t* _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB;
IL2CPP_EXTERN_C String_t* _stringLiteral71356565B0BDA2511BAAC64A6780DC965ABD1A8A;
IL2CPP_EXTERN_C String_t* _stringLiteral75CFB32F644507536A264B176892612FF5F518CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A;
IL2CPP_EXTERN_C String_t* _stringLiteralBA683544036E9391092847670BF68C892E6D1F4A;
IL2CPP_EXTERN_C String_t* _stringLiteralC3F575CC4B274140D1ED6BA5DE03C34BEA6E0D9A;
IL2CPP_EXTERN_C String_t* _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_m5281D4BA7BE6E2820997865978210D3EA97841E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE79950B5EAE0DE73EB9FA810ED51CF5DA2BE3FBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF_m1AF71501C6B90F44F44F092F9D507B7BBBA36446_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mDEDB1C6A8E395170D3C299A1A1448050FEE1AB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m46D50F1429220FC239E3F82D0850F4FC987870DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m51B30360D42BD29CB3C342FB939F070931D2E72D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m80375EEADEA92FBD234AB344CBC0652692A564DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_m3CB00592C57B07D70E59409ED7C56788772F643C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_m81BD76DFB2BFAE81C0FB3902D67F55FDA38AA1DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mD6A751D708E67C1A8E36E42FEE6643C1F5F1A338_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m6CE564692D376FF43C58E18CF3A8C5C423A6C60F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings__cctor_mEA2B18EF153C34445567B8816ED1AD5BB64479EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603ADMicrosoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSetHandMeshObserverU3Ed__17_MoveNext_m0E55366FD965EB724E1FE65ED372198F64B44EE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE24D9BE1ED68B15A39779CD736509223545C75F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m188538084248204F54ECEFFFBFBEB1AA20E5F4BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_UpdateCurrentIndexPose_m83562493E2E919FF1A9A5E1A63D73507EEF6C4E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_UpdateHandJoints_mAAFB0417E62E4C36BE686908BAEF0B7F53C0CF4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_m4A6EC281D2E0E8EAF67747E5F06476A455101944_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition__ctor_m4EDE6A9B171AA340F1A2C28FCDC4D693AB364474_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_get_DefaultInteractions_mDF1F303CFDB8ED4D08DE4EAF3C960E13860BC5F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityArticulatedHandDefinition_get_IsInPointingPose_mEC373CA451AABB08F409BE9F14F67C3C98D9A470_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder_RecordHandStop_mFA0833F102662792C7DD7174B951AFBADC9338D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m08872E08BE4ACC2624BC30CDD46BBE93C00AE263_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder__cctor_mD8D4DBB767491DF270BD861B1964CDFB7BC845EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityHandRecorder__ctor_m89C117CB1151AA95EC3C175A42899DFD0E34FBA7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities__cctor_m6BC44A408A4A70E9D2CAFED220963C7B3B927B55_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_CurrentHolographicFrame_m97A20D39AA1AE8E5E79A8C39F440FDAF49A854F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m7CA59ABA995070CFE58B994568AA48CBFD7E41AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8Microsoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WindowsMixedRealityUtilities_set_UtilitiesProvider_m0CBFF81C453E2778EFA413A6BE48EF04C81293C7_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t137F951405AC76F66334643E3EDA082617B5E371_ComCallableWrapper;
struct IHandMeshObserver_t98875F3F41B9165B8A8EA18EF55F842885DC807D;
struct IHandMeshVertexState_tB1769E2EFFDA5EBB03E531F6994BE701EAE80610;
struct IHandPose_t8AD7D3BF33217E85B9CA689DA344E2EABFE4744C;
struct IHolographicDisplay_t56A13F8C237B0B8C8907CB3EF8BBD2A8ACFD8DD2;
struct IHolographicFrame_tF7214583CA1CE329B3B77C4D793492186A752987;
struct IHolographicViewConfiguration_t40695001CABAF84E99B0AE5953E82288AA6BEC09;
struct ISpatialCoordinateSystem_t04CC30DCD4E391F17E2FB548A4B55B9D8BBA5EA3;
struct ISpatialInteractionSourceState_t7819CBCDBD13F7DB715D2EFC13F79467B2D07C99;
struct ISpatialInteractionSource_t6D3E806945AEAFC89DAF792071E009B85AD8DC81;

struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379;
struct MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E;
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
struct HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t13D74631974359E5073DBDC2C49690495D739E3B 
{
public:

public:
};


// System.Object

// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct NOVTABLE IAsyncOperation_1_tC5CC917D6DD8CB05F1C66F2F61D9005DBC17EE3B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mF58FE8F5412ADCE805A05561161130448C4F5915(IAsyncOperationCompletedHandler_1_t137F951405AC76F66334643E3EDA082617B5E371_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m5681DC4309C3026CA9D294F0CF4F94AB1DBA2C6D(IAsyncOperationCompletedHandler_1_t137F951405AC76F66334643E3EDA082617B5E371_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m6E94C63537AB7C942B01764A9F01440078CCFAF5(IHandMeshObserver_t98875F3F41B9165B8A8EA18EF55F842885DC807D** comReturnValue) = 0;
};
// Windows.Graphics.Holographic.IHolographicDisplayStatics
struct NOVTABLE IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHolographicDisplayStatics_GetDefault_m65E86D2BEA747D5474BCCD982A626F8EED72F460(IHolographicDisplay_t56A13F8C237B0B8C8907CB3EF8BBD2A8ACFD8DD2** comReturnValue) = 0;
};

// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose
struct  ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[] Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::localJointPoses
	MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* ___localJointPoses_1;

public:
	inline static int32_t get_offset_of_localJointPoses_1() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049, ___localJointPoses_1)); }
	inline MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* get_localJointPoses_1() const { return ___localJointPoses_1; }
	inline MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA** get_address_of_localJointPoses_1() { return &___localJointPoses_1; }
	inline void set_localJointPoses_1(MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* value)
	{
		___localJointPoses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___localJointPoses_1), (void*)value);
	}
};

struct ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::jointCount
	int32_t ___jointCount_0;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose_GestureId,Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose> Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::handPoses
	Dictionary_2_t255A9FF0555633063B0E43D9EE11E85193B321D0 * ___handPoses_2;

public:
	inline static int32_t get_offset_of_jointCount_0() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049_StaticFields, ___jointCount_0)); }
	inline int32_t get_jointCount_0() const { return ___jointCount_0; }
	inline int32_t* get_address_of_jointCount_0() { return &___jointCount_0; }
	inline void set_jointCount_0(int32_t value)
	{
		___jointCount_0 = value;
	}

	inline static int32_t get_offset_of_handPoses_2() { return static_cast<int32_t>(offsetof(ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049_StaticFields, ___handPoses_2)); }
	inline Dictionary_2_t255A9FF0555633063B0E43D9EE11E85193B321D0 * get_handPoses_2() const { return ___handPoses_2; }
	inline Dictionary_2_t255A9FF0555633063B0E43D9EE11E85193B321D0 ** get_address_of_handPoses_2() { return &___handPoses_2; }
	inline void set_handPoses_2(Dictionary_2_t255A9FF0555633063B0E43D9EE11E85193B321D0 * value)
	{
		___handPoses_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPoses_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions
struct  WindowsExtensions_tCE94DE688C32080C542C1FE3B346C988B221D957  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>
struct  Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___entries_1)); }
	inline EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t137217C94D8CD3EB5BACDBB8DD2C7C3F7DDB8DEA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___keys_7)); }
	inline KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t102E3D1C13E776552F232C7BAB847639B3A7CC4A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ___values_8)); }
	inline ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7E74F88627F2A65F5D6F2CA700E0BC2DC3941776 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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

// System.__Il2CppComObject


// Microsoft.MixedReality.Toolkit.BaseDataProvider`1<Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem>
struct  BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172  : public BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;
	// T Microsoft.MixedReality.Toolkit.BaseDataProvider`1::<Service>k__BackingField
	RuntimeObject* ___U3CServiceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServiceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172, ___U3CServiceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CServiceU3Ek__BackingField_6() const { return ___U3CServiceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CServiceU3Ek__BackingField_6() { return &___U3CServiceU3Ek__BackingField_6; }
	inline void set_U3CServiceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CServiceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CServiceU3Ek__BackingField_6), (void*)value);
	}
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


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
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

// System.IO.TextWriter
struct  TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___CoreNewLine_9)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ___Null_1)); }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
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


// System.Numerics.Matrix4x4
struct  Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields, ____identity_16)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		____identity_16 = value;
	}
};


// System.Numerics.Quaternion
struct  Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// System.Numerics.Vector3
struct  Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateMachine_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultContextAction_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>
struct  TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA7FC8B27EE8AFE5E59440EDCF10C6B6FF5219999 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361, ___m_task_0)); }
	inline Task_1_tA7FC8B27EE8AFE5E59440EDCF10C6B6FF5219999 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA7FC8B27EE8AFE5E59440EDCF10C6B6FF5219999 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA7FC8B27EE8AFE5E59440EDCF10C6B6FF5219999 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Windows.Graphics.Holographic.HolographicDisplay
struct  HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C  : public Il2CppComObject
{
public:

public:
};

struct HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Graphics.Holographic.IHolographicDisplayStatics
	IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5* ____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Graphics.Holographic.HolographicDisplay"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5* get_____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5()
	{
		IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5* returnValue = ____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHolographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5>((&____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iholographicDisplayStatics_tCD2B58F9FFE4FA69BADE659CDE03E613D06400F5;
			}
		}
		return returnValue;
	}
};


// Windows.Graphics.Holographic.HolographicFrame
struct  HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543  : public Il2CppComObject
{
public:

public:
};


// Windows.Graphics.Holographic.HolographicViewConfiguration
struct  HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandMeshObserver
struct  HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandMeshVertexState
struct  HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.People.HandPose
struct  HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C  : public Il2CppComObject
{
public:

public:
};


// Windows.Perception.Spatial.SpatialCoordinateSystem
struct  SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSource
struct  SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384  : public Il2CppComObject
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider
struct  BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520  : public BaseDataProvider_1_t157EDC5512EC68C3F006DE15D5C3C1542088F172
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::<IsOpaque>k__BackingField
	bool ___U3CIsOpaqueU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsOpaqueU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520, ___U3CIsOpaqueU3Ek__BackingField_7)); }
	inline bool get_U3CIsOpaqueU3Ek__BackingField_7() const { return ___U3CIsOpaqueU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsOpaqueU3Ek__BackingField_7() { return &___U3CIsOpaqueU3Ek__BackingField_7; }
	inline void set_U3CIsOpaqueU3Ek__BackingField_7(bool value)
	{
		___U3CIsOpaqueU3Ek__BackingField_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct  DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_tB50C0D744590C02BD2A1FBFB97DD0DB4E5D9052E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.HandMeshInfo
struct  HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::vertices
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vertices_0;
	// System.Int32[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::triangles
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___triangles_1;
	// UnityEngine.Vector3[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::normals
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___normals_2;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::uvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___uvs_3;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_4;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_5;

public:
	inline static int32_t get_offset_of_vertices_0() { return static_cast<int32_t>(offsetof(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473, ___vertices_0)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_vertices_0() const { return ___vertices_0; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_vertices_0() { return &___vertices_0; }
	inline void set_vertices_0(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___vertices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_0), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_1() { return static_cast<int32_t>(offsetof(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473, ___triangles_1)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_triangles_1() const { return ___triangles_1; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_triangles_1() { return &___triangles_1; }
	inline void set_triangles_1(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___triangles_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_1), (void*)value);
	}

	inline static int32_t get_offset_of_normals_2() { return static_cast<int32_t>(offsetof(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473, ___normals_2)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_normals_2() const { return ___normals_2; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_normals_2() { return &___normals_2; }
	inline void set_normals_2(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___normals_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___normals_2), (void*)value);
	}

	inline static int32_t get_offset_of_uvs_3() { return static_cast<int32_t>(offsetof(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473, ___uvs_3)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_uvs_3() const { return ___uvs_3; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_uvs_3() { return &___uvs_3; }
	inline void set_uvs_3(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___uvs_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uvs_3), (void*)value);
	}

	inline static int32_t get_offset_of_position_4() { return static_cast<int32_t>(offsetof(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473, ___position_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_4() const { return ___position_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_4() { return &___position_4; }
	inline void set_position_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_4 = value;
	}

	inline static int32_t get_offset_of_rotation_5() { return static_cast<int32_t>(offsetof(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473, ___rotation_5)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_5() const { return ___rotation_5; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_5() { return &___rotation_5; }
	inline void set_rotation_5(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct  AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB81D0BD797A06C1EC90AB774C86C9B50F9787A3F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tC4CB6DBD14EF391FE377A3F6B6774FCBD26A5E00, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct  MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes
struct  SupportedApplicationModes_t30BAC700F607196BDFB28519778C0B696F490BDF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SupportedApplicationModes_t30BAC700F607196BDFB28519778C0B696F490BDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod
struct  HolographicDepthReprojectionMethod_t5DF8D5302A2778FB9BB981E7E1B9395CE6810D73 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicDepthReprojectionMethod_t5DF8D5302A2778FB9BB981E7E1B9395CE6810D73, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities
struct  WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD  : public RuntimeObject
{
public:

public:
};

struct WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::<UtilitiesProvider>k__BackingField
	RuntimeObject* ___U3CUtilitiesProviderU3Ek__BackingField_0;
	// System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::currentSpatialCoordinateSystemPtr
	intptr_t ___currentSpatialCoordinateSystemPtr_1;
	// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::spatialCoordinateSystem
	SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___spatialCoordinateSystem_2;

public:
	inline static int32_t get_offset_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields, ___U3CUtilitiesProviderU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CUtilitiesProviderU3Ek__BackingField_0() const { return ___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CUtilitiesProviderU3Ek__BackingField_0() { return &___U3CUtilitiesProviderU3Ek__BackingField_0; }
	inline void set_U3CUtilitiesProviderU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CUtilitiesProviderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUtilitiesProviderU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpatialCoordinateSystemPtr_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields, ___currentSpatialCoordinateSystemPtr_1)); }
	inline intptr_t get_currentSpatialCoordinateSystemPtr_1() const { return ___currentSpatialCoordinateSystemPtr_1; }
	inline intptr_t* get_address_of_currentSpatialCoordinateSystemPtr_1() { return &___currentSpatialCoordinateSystemPtr_1; }
	inline void set_currentSpatialCoordinateSystemPtr_1(intptr_t value)
	{
		___currentSpatialCoordinateSystemPtr_1 = value;
	}

	inline static int32_t get_offset_of_spatialCoordinateSystem_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields, ___spatialCoordinateSystem_2)); }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * get_spatialCoordinateSystem_2() const { return ___spatialCoordinateSystem_2; }
	inline SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 ** get_address_of_spatialCoordinateSystem_2() { return &___spatialCoordinateSystem_2; }
	inline void set_spatialCoordinateSystem_2(SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * value)
	{
		___spatialCoordinateSystem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spatialCoordinateSystem_2), (void*)value);
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.StreamWriter
struct  StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E  : public TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0
{
public:
	// System.IO.Stream System.IO.StreamWriter::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_12;
	// System.Text.Encoding System.IO.StreamWriter::encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___encoding_13;
	// System.Text.Encoder System.IO.StreamWriter::encoder
	Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * ___encoder_14;
	// System.Byte[] System.IO.StreamWriter::byteBuffer
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___byteBuffer_15;
	// System.Char[] System.IO.StreamWriter::charBuffer
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___charBuffer_16;
	// System.Int32 System.IO.StreamWriter::charPos
	int32_t ___charPos_17;
	// System.Int32 System.IO.StreamWriter::charLen
	int32_t ___charLen_18;
	// System.Boolean System.IO.StreamWriter::autoFlush
	bool ___autoFlush_19;
	// System.Boolean System.IO.StreamWriter::haveWrittenPreamble
	bool ___haveWrittenPreamble_20;
	// System.Boolean System.IO.StreamWriter::closable
	bool ___closable_21;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_asyncWriteTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ____asyncWriteTask_22;

public:
	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___stream_12)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_12() const { return ___stream_12; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_13() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoding_13)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_encoding_13() const { return ___encoding_13; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_encoding_13() { return &___encoding_13; }
	inline void set_encoding_13(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___encoding_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_13), (void*)value);
	}

	inline static int32_t get_offset_of_encoder_14() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___encoder_14)); }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * get_encoder_14() const { return ___encoder_14; }
	inline Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 ** get_address_of_encoder_14() { return &___encoder_14; }
	inline void set_encoder_14(Encoder_t29B2697B0B775EABC52EBFB914F327BE9B1A3464 * value)
	{
		___encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_15() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___byteBuffer_15)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_byteBuffer_15() const { return ___byteBuffer_15; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_byteBuffer_15() { return &___byteBuffer_15; }
	inline void set_byteBuffer_15(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___byteBuffer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_15), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_16() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charBuffer_16)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_charBuffer_16() const { return ___charBuffer_16; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_charBuffer_16() { return &___charBuffer_16; }
	inline void set_charBuffer_16(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___charBuffer_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_16), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_17() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charPos_17)); }
	inline int32_t get_charPos_17() const { return ___charPos_17; }
	inline int32_t* get_address_of_charPos_17() { return &___charPos_17; }
	inline void set_charPos_17(int32_t value)
	{
		___charPos_17 = value;
	}

	inline static int32_t get_offset_of_charLen_18() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___charLen_18)); }
	inline int32_t get_charLen_18() const { return ___charLen_18; }
	inline int32_t* get_address_of_charLen_18() { return &___charLen_18; }
	inline void set_charLen_18(int32_t value)
	{
		___charLen_18 = value;
	}

	inline static int32_t get_offset_of_autoFlush_19() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___autoFlush_19)); }
	inline bool get_autoFlush_19() const { return ___autoFlush_19; }
	inline bool* get_address_of_autoFlush_19() { return &___autoFlush_19; }
	inline void set_autoFlush_19(bool value)
	{
		___autoFlush_19 = value;
	}

	inline static int32_t get_offset_of_haveWrittenPreamble_20() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___haveWrittenPreamble_20)); }
	inline bool get_haveWrittenPreamble_20() const { return ___haveWrittenPreamble_20; }
	inline bool* get_address_of_haveWrittenPreamble_20() { return &___haveWrittenPreamble_20; }
	inline void set_haveWrittenPreamble_20(bool value)
	{
		___haveWrittenPreamble_20 = value;
	}

	inline static int32_t get_offset_of_closable_21() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ___closable_21)); }
	inline bool get_closable_21() const { return ___closable_21; }
	inline bool* get_address_of_closable_21() { return &___closable_21; }
	inline void set_closable_21(bool value)
	{
		___closable_21 = value;
	}

	inline static int32_t get_offset_of__asyncWriteTask_22() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E, ____asyncWriteTask_22)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get__asyncWriteTask_22() const { return ____asyncWriteTask_22; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of__asyncWriteTask_22() { return &____asyncWriteTask_22; }
	inline void set__asyncWriteTask_22(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		____asyncWriteTask_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncWriteTask_22), (void*)value);
	}
};

struct StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields
{
public:
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * ___Null_11;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamWriter::_UTF8NoBOM
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ____UTF8NoBOM_23;

public:
	inline static int32_t get_offset_of_Null_11() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ___Null_11)); }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * get_Null_11() const { return ___Null_11; }
	inline StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E ** get_address_of_Null_11() { return &___Null_11; }
	inline void set_Null_11(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * value)
	{
		___Null_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_11), (void*)value);
	}

	inline static int32_t get_offset_of__UTF8NoBOM_23() { return static_cast<int32_t>(offsetof(StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E_StaticFields, ____UTF8NoBOM_23)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get__UTF8NoBOM_23() const { return ____UTF8NoBOM_23; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of__UTF8NoBOM_23() { return &____UTF8NoBOM_23; }
	inline void set__UTF8NoBOM_23(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		____UTF8NoBOM_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____UTF8NoBOM_23), (void*)value);
	}
};


// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.Numerics.Matrix4x4>
struct  Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC, ___value_0)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get_value_0() const { return ___value_0; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_synchronizationContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF, ___m_task_2)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_pinvoke
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF_marshaled_com
{
	SynchronizationContext_t06AEFE2C7CFCFC242D0A5729A74464AF18CF84E7 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com ___m_coreState_1;
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_task_2;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct  HolographicViewConfigurationKind_t5271E336ECAD7EFB1957597EE39B66675364536E 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t5271E336ECAD7EFB1957597EE39B66675364536E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.HandMeshVertex
struct  HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 
{
public:
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Position
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Position_0;
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Normal
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Normal_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Position_0)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Position_0() const { return ___Position_0; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Normal_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Normal_1 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
struct  SpatialInteractionSourceHandedness_t62FE24DC5534C9D864CAB062044D8298009266B2 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceHandedness_t62FE24DC5534C9D864CAB062044D8298009266B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct  MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings
struct  BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD  : public BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::reprojectionUpdater
	WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * ___reprojectionUpdater_9;

public:
	inline static int32_t get_offset_of_reprojectionUpdater_9() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD, ___reprojectionUpdater_9)); }
	inline WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * get_reprojectionUpdater_9() const { return ___reprojectionUpdater_9; }
	inline WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF ** get_address_of_reprojectionUpdater_9() { return &___reprojectionUpdater_9; }
	inline void set_reprojectionUpdater_9(WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * value)
	{
		___reprojectionUpdater_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reprojectionUpdater_9), (void*)value);
	}
};

struct BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_StaticFields
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::isTryGetViewConfigurationSupported
	bool ___isTryGetViewConfigurationSupported_8;

public:
	inline static int32_t get_offset_of_isTryGetViewConfigurationSupported_8() { return static_cast<int32_t>(offsetof(BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_StaticFields, ___isTryGetViewConfigurationSupported_8)); }
	inline bool get_isTryGetViewConfigurationSupported_8() const { return ___isTryGetViewConfigurationSupported_8; }
	inline bool* get_address_of_isTryGetViewConfigurationSupported_8() { return &___isTryGetViewConfigurationSupported_8; }
	inline void set_isTryGetViewConfigurationSupported_8(bool value)
	{
		___isTryGetViewConfigurationSupported_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition
struct  WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::inputSource
	RuntimeObject* ___inputSource_0;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handedness
	uint8_t ___handedness_1;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::cursorBeamBackwardTolerance
	float ___cursorBeamBackwardTolerance_2;
	// System.Single Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::cursorBeamUpTolerance
	float ___cursorBeamUpTolerance_3;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::unityJointPoses
	Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * ___unityJointPoses_4;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::currentIndexPose
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___currentIndexPose_5;
	// UnityEngine.Vector2[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshUVs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___handMeshUVs_6;
	// Windows.Perception.People.HandMeshObserver Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshObserver
	HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * ___handMeshObserver_7;
	// System.Int32[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::handMeshTriangleIndices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___handMeshTriangleIndices_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::hasRequestedHandMeshObserver
	bool ___hasRequestedHandMeshObserver_9;

public:
	inline static int32_t get_offset_of_inputSource_0() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___inputSource_0)); }
	inline RuntimeObject* get_inputSource_0() const { return ___inputSource_0; }
	inline RuntimeObject** get_address_of_inputSource_0() { return &___inputSource_0; }
	inline void set_inputSource_0(RuntimeObject* value)
	{
		___inputSource_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputSource_0), (void*)value);
	}

	inline static int32_t get_offset_of_handedness_1() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___handedness_1)); }
	inline uint8_t get_handedness_1() const { return ___handedness_1; }
	inline uint8_t* get_address_of_handedness_1() { return &___handedness_1; }
	inline void set_handedness_1(uint8_t value)
	{
		___handedness_1 = value;
	}

	inline static int32_t get_offset_of_cursorBeamBackwardTolerance_2() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___cursorBeamBackwardTolerance_2)); }
	inline float get_cursorBeamBackwardTolerance_2() const { return ___cursorBeamBackwardTolerance_2; }
	inline float* get_address_of_cursorBeamBackwardTolerance_2() { return &___cursorBeamBackwardTolerance_2; }
	inline void set_cursorBeamBackwardTolerance_2(float value)
	{
		___cursorBeamBackwardTolerance_2 = value;
	}

	inline static int32_t get_offset_of_cursorBeamUpTolerance_3() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___cursorBeamUpTolerance_3)); }
	inline float get_cursorBeamUpTolerance_3() const { return ___cursorBeamUpTolerance_3; }
	inline float* get_address_of_cursorBeamUpTolerance_3() { return &___cursorBeamUpTolerance_3; }
	inline void set_cursorBeamUpTolerance_3(float value)
	{
		___cursorBeamUpTolerance_3 = value;
	}

	inline static int32_t get_offset_of_unityJointPoses_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___unityJointPoses_4)); }
	inline Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * get_unityJointPoses_4() const { return ___unityJointPoses_4; }
	inline Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 ** get_address_of_unityJointPoses_4() { return &___unityJointPoses_4; }
	inline void set_unityJointPoses_4(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * value)
	{
		___unityJointPoses_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unityJointPoses_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndexPose_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___currentIndexPose_5)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_currentIndexPose_5() const { return ___currentIndexPose_5; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_currentIndexPose_5() { return &___currentIndexPose_5; }
	inline void set_currentIndexPose_5(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___currentIndexPose_5 = value;
	}

	inline static int32_t get_offset_of_handMeshUVs_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___handMeshUVs_6)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_handMeshUVs_6() const { return ___handMeshUVs_6; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_handMeshUVs_6() { return &___handMeshUVs_6; }
	inline void set_handMeshUVs_6(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___handMeshUVs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshUVs_6), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshObserver_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___handMeshObserver_7)); }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * get_handMeshObserver_7() const { return ___handMeshObserver_7; }
	inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 ** get_address_of_handMeshObserver_7() { return &___handMeshObserver_7; }
	inline void set_handMeshObserver_7(HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * value)
	{
		___handMeshObserver_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshObserver_7), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshTriangleIndices_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___handMeshTriangleIndices_8)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_handMeshTriangleIndices_8() const { return ___handMeshTriangleIndices_8; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_handMeshTriangleIndices_8() { return &___handMeshTriangleIndices_8; }
	inline void set_handMeshTriangleIndices_8(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___handMeshTriangleIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshTriangleIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_hasRequestedHandMeshObserver_9() { return static_cast<int32_t>(offsetof(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5, ___hasRequestedHandMeshObserver_9)); }
	inline bool get_hasRequestedHandMeshObserver_9() const { return ___hasRequestedHandMeshObserver_9; }
	inline bool* get_address_of_hasRequestedHandMeshObserver_9() { return &___hasRequestedHandMeshObserver_9; }
	inline void set_hasRequestedHandMeshObserver_9(bool value)
	{
		___hasRequestedHandMeshObserver_9 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17
struct  U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>t__builder
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  ___U3CU3Et__builder_1;
	// Windows.UI.Input.Spatial.SpatialInteractionSourceState Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::sourceState
	SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState_2;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>4__this
	WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver> Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::<>u__1
	TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  value)
	{
		___U3CU3Et__builder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sourceState_2() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5, ___sourceState_2)); }
	inline SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * get_sourceState_2() const { return ___sourceState_2; }
	inline SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 ** get_address_of_sourceState_2() { return &___sourceState_2; }
	inline void set_sourceState_2(SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * value)
	{
		___sourceState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sourceState_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5, ___U3CU3E4__this_3)); }
	inline WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  value)
	{
		___U3CU3Eu__1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
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
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct  MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___inputAction_4)); }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F, ___poseData_17)); }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		___poseData_17 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile
struct  BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile
struct  MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::jointPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___jointPrefab_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::palmPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___palmPrefab_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::fingertipPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fingertipPrefab_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___handMeshPrefab_8;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handMeshVisualizationModes
	int32_t ___handMeshVisualizationModes_9;
	// Microsoft.MixedReality.Toolkit.Utilities.SupportedApplicationModes Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::handJointVisualizationModes
	int32_t ___handJointVisualizationModes_10;

public:
	inline static int32_t get_offset_of_jointPrefab_5() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60, ___jointPrefab_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_jointPrefab_5() const { return ___jointPrefab_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_jointPrefab_5() { return &___jointPrefab_5; }
	inline void set_jointPrefab_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___jointPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_palmPrefab_6() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60, ___palmPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_palmPrefab_6() const { return ___palmPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_palmPrefab_6() { return &___palmPrefab_6; }
	inline void set_palmPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___palmPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_fingertipPrefab_7() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60, ___fingertipPrefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fingertipPrefab_7() const { return ___fingertipPrefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fingertipPrefab_7() { return &___fingertipPrefab_7; }
	inline void set_fingertipPrefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fingertipPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingertipPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshPrefab_8() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60, ___handMeshPrefab_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_handMeshPrefab_8() const { return ___handMeshPrefab_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_handMeshPrefab_8() { return &___handMeshPrefab_8; }
	inline void set_handMeshPrefab_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___handMeshPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handMeshPrefab_8), (void*)value);
	}

	inline static int32_t get_offset_of_handMeshVisualizationModes_9() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60, ___handMeshVisualizationModes_9)); }
	inline int32_t get_handMeshVisualizationModes_9() const { return ___handMeshVisualizationModes_9; }
	inline int32_t* get_address_of_handMeshVisualizationModes_9() { return &___handMeshVisualizationModes_9; }
	inline void set_handMeshVisualizationModes_9(int32_t value)
	{
		___handMeshVisualizationModes_9 = value;
	}

	inline static int32_t get_offset_of_handJointVisualizationModes_10() { return static_cast<int32_t>(offsetof(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60, ___handJointVisualizationModes_10)); }
	inline int32_t get_handJointVisualizationModes_10() const { return ___handJointVisualizationModes_10; }
	inline int32_t* get_address_of_handJointVisualizationModes_10() { return &___handJointVisualizationModes_10; }
	inline void set_handJointVisualizationModes_10(int32_t value)
	{
		___handJointVisualizationModes_10 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile
struct  MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1  : public BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputDataProviderConfiguration[] Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::dataProviderConfigurations
	MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36* ___dataProviderConfigurations_5;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusProviderType
	SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * ___focusProviderType_6;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::raycastProviderType
	SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * ___raycastProviderType_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusQueryBufferSize
	int32_t ___focusQueryBufferSize_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::focusIndividualCompoundCollider
	bool ___focusIndividualCompoundCollider_9;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionsProfile
	MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 * ___inputActionsProfile_10;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputActionRulesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::inputActionRulesProfile
	MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 * ___inputActionRulesProfile_11;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityPointerProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::pointerProfile
	MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC * ___pointerProfile_12;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityGesturesProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::gesturesProfile
	MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * ___gesturesProfile_13;
	// System.Collections.Generic.List`1<System.Globalization.CultureInfo> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::supportedVoiceCultures
	List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * ___supportedVoiceCultures_14;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealitySpeechCommandsProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::speechCommandsProfile
	MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA * ___speechCommandsProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::enableControllerMapping
	bool ___enableControllerMapping_16;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerMappingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerMappingProfile
	MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE * ___controllerMappingProfile_17;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityControllerVisualizationProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::controllerVisualizationProfile
	MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B * ___controllerVisualizationProfile_18;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::handTrackingProfile
	MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * ___handTrackingProfile_19;

public:
	inline static int32_t get_offset_of_dataProviderConfigurations_5() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___dataProviderConfigurations_5)); }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36* get_dataProviderConfigurations_5() const { return ___dataProviderConfigurations_5; }
	inline MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36** get_address_of_dataProviderConfigurations_5() { return &___dataProviderConfigurations_5; }
	inline void set_dataProviderConfigurations_5(MixedRealityInputDataProviderConfigurationU5BU5D_t4DB9FE68E064D5A7DFABE564B3A47E6C3E6B6C36* value)
	{
		___dataProviderConfigurations_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataProviderConfigurations_5), (void*)value);
	}

	inline static int32_t get_offset_of_focusProviderType_6() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___focusProviderType_6)); }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * get_focusProviderType_6() const { return ___focusProviderType_6; }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 ** get_address_of_focusProviderType_6() { return &___focusProviderType_6; }
	inline void set_focusProviderType_6(SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * value)
	{
		___focusProviderType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___focusProviderType_6), (void*)value);
	}

	inline static int32_t get_offset_of_raycastProviderType_7() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___raycastProviderType_7)); }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * get_raycastProviderType_7() const { return ___raycastProviderType_7; }
	inline SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 ** get_address_of_raycastProviderType_7() { return &___raycastProviderType_7; }
	inline void set_raycastProviderType_7(SystemType_tCDFCC60CC4D5FF9DDC977D5743D0F9E38DAFF262 * value)
	{
		___raycastProviderType_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycastProviderType_7), (void*)value);
	}

	inline static int32_t get_offset_of_focusQueryBufferSize_8() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___focusQueryBufferSize_8)); }
	inline int32_t get_focusQueryBufferSize_8() const { return ___focusQueryBufferSize_8; }
	inline int32_t* get_address_of_focusQueryBufferSize_8() { return &___focusQueryBufferSize_8; }
	inline void set_focusQueryBufferSize_8(int32_t value)
	{
		___focusQueryBufferSize_8 = value;
	}

	inline static int32_t get_offset_of_focusIndividualCompoundCollider_9() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___focusIndividualCompoundCollider_9)); }
	inline bool get_focusIndividualCompoundCollider_9() const { return ___focusIndividualCompoundCollider_9; }
	inline bool* get_address_of_focusIndividualCompoundCollider_9() { return &___focusIndividualCompoundCollider_9; }
	inline void set_focusIndividualCompoundCollider_9(bool value)
	{
		___focusIndividualCompoundCollider_9 = value;
	}

	inline static int32_t get_offset_of_inputActionsProfile_10() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___inputActionsProfile_10)); }
	inline MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 * get_inputActionsProfile_10() const { return ___inputActionsProfile_10; }
	inline MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 ** get_address_of_inputActionsProfile_10() { return &___inputActionsProfile_10; }
	inline void set_inputActionsProfile_10(MixedRealityInputActionsProfile_tE8DE3FFF09D96426A5D46793E940300312A5FD39 * value)
	{
		___inputActionsProfile_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionsProfile_10), (void*)value);
	}

	inline static int32_t get_offset_of_inputActionRulesProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___inputActionRulesProfile_11)); }
	inline MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 * get_inputActionRulesProfile_11() const { return ___inputActionRulesProfile_11; }
	inline MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 ** get_address_of_inputActionRulesProfile_11() { return &___inputActionRulesProfile_11; }
	inline void set_inputActionRulesProfile_11(MixedRealityInputActionRulesProfile_t0F3AEFAECBFE12E6EDD34076D417A17DA883ACF6 * value)
	{
		___inputActionRulesProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inputActionRulesProfile_11), (void*)value);
	}

	inline static int32_t get_offset_of_pointerProfile_12() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___pointerProfile_12)); }
	inline MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC * get_pointerProfile_12() const { return ___pointerProfile_12; }
	inline MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC ** get_address_of_pointerProfile_12() { return &___pointerProfile_12; }
	inline void set_pointerProfile_12(MixedRealityPointerProfile_t624E085F471DA1AC12BF16507CBF152D1FBEEBFC * value)
	{
		___pointerProfile_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerProfile_12), (void*)value);
	}

	inline static int32_t get_offset_of_gesturesProfile_13() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___gesturesProfile_13)); }
	inline MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * get_gesturesProfile_13() const { return ___gesturesProfile_13; }
	inline MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 ** get_address_of_gesturesProfile_13() { return &___gesturesProfile_13; }
	inline void set_gesturesProfile_13(MixedRealityGesturesProfile_t147529064CC588D70B66A84E1D371EC07B88BC34 * value)
	{
		___gesturesProfile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gesturesProfile_13), (void*)value);
	}

	inline static int32_t get_offset_of_supportedVoiceCultures_14() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___supportedVoiceCultures_14)); }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * get_supportedVoiceCultures_14() const { return ___supportedVoiceCultures_14; }
	inline List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 ** get_address_of_supportedVoiceCultures_14() { return &___supportedVoiceCultures_14; }
	inline void set_supportedVoiceCultures_14(List_1_t74F59DD36FAE0CFB087612565C42CAD359647832 * value)
	{
		___supportedVoiceCultures_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___supportedVoiceCultures_14), (void*)value);
	}

	inline static int32_t get_offset_of_speechCommandsProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___speechCommandsProfile_15)); }
	inline MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA * get_speechCommandsProfile_15() const { return ___speechCommandsProfile_15; }
	inline MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA ** get_address_of_speechCommandsProfile_15() { return &___speechCommandsProfile_15; }
	inline void set_speechCommandsProfile_15(MixedRealitySpeechCommandsProfile_t313A5AE54CD60130CE65107078F9A0C803D39EBA * value)
	{
		___speechCommandsProfile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechCommandsProfile_15), (void*)value);
	}

	inline static int32_t get_offset_of_enableControllerMapping_16() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___enableControllerMapping_16)); }
	inline bool get_enableControllerMapping_16() const { return ___enableControllerMapping_16; }
	inline bool* get_address_of_enableControllerMapping_16() { return &___enableControllerMapping_16; }
	inline void set_enableControllerMapping_16(bool value)
	{
		___enableControllerMapping_16 = value;
	}

	inline static int32_t get_offset_of_controllerMappingProfile_17() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___controllerMappingProfile_17)); }
	inline MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE * get_controllerMappingProfile_17() const { return ___controllerMappingProfile_17; }
	inline MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE ** get_address_of_controllerMappingProfile_17() { return &___controllerMappingProfile_17; }
	inline void set_controllerMappingProfile_17(MixedRealityControllerMappingProfile_tC5F6AD6A484C6DAF77E5FFE8A0E04A86F7E498AE * value)
	{
		___controllerMappingProfile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerMappingProfile_17), (void*)value);
	}

	inline static int32_t get_offset_of_controllerVisualizationProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___controllerVisualizationProfile_18)); }
	inline MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B * get_controllerVisualizationProfile_18() const { return ___controllerVisualizationProfile_18; }
	inline MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B ** get_address_of_controllerVisualizationProfile_18() { return &___controllerVisualizationProfile_18; }
	inline void set_controllerVisualizationProfile_18(MixedRealityControllerVisualizationProfile_t9CC41F1E9889534D711E4E717D6CA6A8ACD0B35B * value)
	{
		___controllerVisualizationProfile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerVisualizationProfile_18), (void*)value);
	}

	inline static int32_t get_offset_of_handTrackingProfile_19() { return static_cast<int32_t>(offsetof(MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1, ___handTrackingProfile_19)); }
	inline MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * get_handTrackingProfile_19() const { return ___handTrackingProfile_19; }
	inline MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 ** get_address_of_handTrackingProfile_19() { return &___handTrackingProfile_19; }
	inline void set_handTrackingProfile_19(MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * value)
	{
		___handTrackingProfile_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTrackingProfile_19), (void*)value);
	}
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder
struct  WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<ReferenceJoint>k__BackingField
	int32_t ___U3CReferenceJointU3Ek__BackingField_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::<OutputFileName>k__BackingField
	String_t* ___U3COutputFileNameU3Ek__BackingField_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::offset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___offset_7;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::recordingHand
	uint8_t ___recordingHand_8;

public:
	inline static int32_t get_offset_of_U3CReferenceJointU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF, ___U3CReferenceJointU3Ek__BackingField_5)); }
	inline int32_t get_U3CReferenceJointU3Ek__BackingField_5() const { return ___U3CReferenceJointU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CReferenceJointU3Ek__BackingField_5() { return &___U3CReferenceJointU3Ek__BackingField_5; }
	inline void set_U3CReferenceJointU3Ek__BackingField_5(int32_t value)
	{
		___U3CReferenceJointU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COutputFileNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF, ___U3COutputFileNameU3Ek__BackingField_6)); }
	inline String_t* get_U3COutputFileNameU3Ek__BackingField_6() const { return ___U3COutputFileNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3COutputFileNameU3Ek__BackingField_6() { return &___U3COutputFileNameU3Ek__BackingField_6; }
	inline void set_U3COutputFileNameU3Ek__BackingField_6(String_t* value)
	{
		___U3COutputFileNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COutputFileNameU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF, ___offset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_offset_7() const { return ___offset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___offset_7 = value;
	}

	inline static int32_t get_offset_of_recordingHand_8() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF, ___recordingHand_8)); }
	inline uint8_t get_recordingHand_8() const { return ___recordingHand_8; }
	inline uint8_t* get_address_of_recordingHand_8() { return &___recordingHand_8; }
	inline void set_recordingHand_8(uint8_t value)
	{
		___recordingHand_8 = value;
	}
};

struct WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::jointCount
	int32_t ___jointCount_4;

public:
	inline static int32_t get_offset_of_jointCount_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_StaticFields, ___jointCount_4)); }
	inline int32_t get_jointCount_4() const { return ___jointCount_4; }
	inline int32_t* get_address_of_jointCount_4() { return &___jointCount_4; }
	inline void set_jointCount_4(int32_t value)
	{
		___jointCount_4 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile
struct  WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8  : public BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::renderFromPVCameraForMixedRealityCapture
	bool ___renderFromPVCameraForMixedRealityCapture_5;
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::reprojectionMethod
	int32_t ___reprojectionMethod_6;

public:
	inline static int32_t get_offset_of_renderFromPVCameraForMixedRealityCapture_5() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8, ___renderFromPVCameraForMixedRealityCapture_5)); }
	inline bool get_renderFromPVCameraForMixedRealityCapture_5() const { return ___renderFromPVCameraForMixedRealityCapture_5; }
	inline bool* get_address_of_renderFromPVCameraForMixedRealityCapture_5() { return &___renderFromPVCameraForMixedRealityCapture_5; }
	inline void set_renderFromPVCameraForMixedRealityCapture_5(bool value)
	{
		___renderFromPVCameraForMixedRealityCapture_5 = value;
	}

	inline static int32_t get_offset_of_reprojectionMethod_6() { return static_cast<int32_t>(offsetof(WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8, ___reprojectionMethod_6)); }
	inline int32_t get_reprojectionMethod_6() const { return ___reprojectionMethod_6; }
	inline int32_t* get_address_of_reprojectionMethod_6() { return &___reprojectionMethod_6; }
	inline void set_reprojectionMethod_6(int32_t value)
	{
		___reprojectionMethod_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater
struct  WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::<ReprojectionMethod>k__BackingField
	int32_t ___U3CReprojectionMethodU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CReprojectionMethodU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF, ___U3CReprojectionMethodU3Ek__BackingField_4)); }
	inline int32_t get_U3CReprojectionMethodU3Ek__BackingField_4() const { return ___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CReprojectionMethodU3Ek__BackingField_4() { return &___U3CReprojectionMethodU3Ek__BackingField_4; }
	inline void set_U3CReprojectionMethodU3Ek__BackingField_4(int32_t value)
	{
		___U3CReprojectionMethodU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[]
struct MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  m_Items[1];

public:
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  m_Items[1];

public:
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// Windows.Perception.People.HandMeshVertex[]
struct HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  m_Items[1];

public:
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
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


// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ComponentExtensions_EnsureComponent_TisRuntimeObject_m49F4EAF63D0CDBF5056D571FBBF9101F14EAFD76_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___component0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m061004931D44ABF48DC8BF39C28D508FDFEC6A4F_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mEDF52D19AE311810AF40B28317B05CF84B121E95_gshared (Dictionary_2_t13485ACAFA396442F64BDF056CAFB0CFD4535B47 * __this, int32_t ___key0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE79950B5EAE0DE73EB9FA810ED51CF5DA2BE3FBE_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_gshared_inline (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_gshared (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<System.Object>(Windows.Foundation.IAsyncOperation`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m1E2175CF410B96A4F467043697DA9DC4D231294C_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&,!!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE60D478C6A559B735367A491763806DF82950D96_gshared (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * ___awaiter0, U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * ___stateMachine1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);

// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_mD0367B06ABF5BEDC3D5446097A802295D6433C23 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, uint8_t ___handedness0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m3ED120908E91FCF069A2FA9BD2D9C0B3031CC498_inline (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.HandJointUtils::TryGetJointPose(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandJointUtils_TryGetJointPose_m45169A4247D98F6D0895344568656579DC48EAA7 (int32_t ___joint0, uint8_t ___handedness1, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * ___pose2, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Position()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose__ctor_mBAA3D06B13365BA365CD1930102F0408193697D6 (ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ParseFromJointPoses(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose[],Microsoft.MixedReality.Toolkit.Utilities.Handedness,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArticulatedHandPose_ParseFromJointPoses_m990DEC7DEEE7633C0FD30520305D37C634958A64 (ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049 * __this, MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* ___joints0, uint8_t ___handedness1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position3, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_mD9C60DEDFEBA39AE63B7F954DC9BFFE730C959D0_inline (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1 (const RuntimeMethod* method);
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Utilities.ArticulatedHandPose::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArticulatedHandPose_ToJson_m93C35FF803FA3253F8DCDFFC2005CFE7038ED78D (ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m08872E08BE4ACC2624BC30CDD46BBE93C00AE263 (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.IO.StreamWriter System.IO.File::CreateText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * File_CreateText_mEED28D1DDECB47B208D7ACA7CDC99B32EE86F162 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String[] System.Enum::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider__ctor_m098FB15E16B014EB8AA85788202BACC44E8C624C (BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520 * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1 * ___profile3, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Enable_m701A94DC92B9C50D591CE2B79D369E33EA5F8369 (BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mD6A751D708E67C1A8E36E42FEE6643C1F5F1A338 (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m6CE564692D376FF43C58E18CF3A8C5C423A6C60F (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseService_Disable_mD403705A40B5D53B49633E462E7F99C39FAEEA9C (BaseService_t36F2CDECE3A85454DBE01298EA436EFD3BB1F96D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProvider::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProvider_ApplyConfiguration_mA0777BD8CB869B1CC93412CC1FC1572BC5410CC0 (BaseCameraSettingsProvider_t133DE19A2560C130DC010256FE8E8A9A7B5E8520 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6 (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mEC287DD2FEFA42A0C8532A1BA5D0BA67D2935CBA_inline (WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * __this, const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicDisplay Windows.Graphics.Holographic.HolographicDisplay::GetDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * HolographicDisplay_GetDefault_m7102C2AFE1F07195DF9F8D964249E6AAB8BF84DF (const RuntimeMethod* method);
// Windows.Graphics.Holographic.HolographicViewConfiguration Windows.Graphics.Holographic.HolographicDisplay::TryGetViewConfiguration(Windows.Graphics.Holographic.HolographicViewConfigurationKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * HolographicDisplay_TryGetViewConfiguration_mAD05250269F4ED3FCA2F303DA511D4ADEAEFFDB7 (HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * __this, int32_t ___kind0, const RuntimeMethod* method);
// System.Void Windows.Graphics.Holographic.HolographicViewConfiguration::put_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicViewConfiguration_put_IsEnabled_m3476B0065A7EC22D37A44C6BA77B0920495C6C2B (HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Camera Microsoft.MixedReality.Toolkit.Utilities.CameraCache::get_Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD (const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.ComponentExtensions::EnsureComponent<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater>(UnityEngine.Component)
inline WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF_m1AF71501C6B90F44F44F092F9D507B7BBBA36446 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * ___component0, const RuntimeMethod* method)
{
	return ((  WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))ComponentExtensions_EnsureComponent_TisRuntimeObject_m49F4EAF63D0CDBF5056D571FBBF9101F14EAFD76_gshared)(___component0, method);
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m285A218CFE5C0B1732BC92203140DEB88DB03C6F_inline (WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m17E7474D8BB1E8260BCCAAA8C562EB3358D33825_inline (WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.UnityObjectExtensions::DestroyObject(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityObjectExtensions_DestroyObject_m63538AE6AC1F6D3D2A900068DF435D2F438C4F8A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Boolean Windows.Foundation.Metadata.ApiInformation::IsMethodPresent(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApiInformation_IsMethodPresent_m2888CC939FEFAF5B4C739A57F9EE638C79426234 (String_t* ___typeName0, String_t* ___methodName1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::.ctor()
inline void Dictionary_2__ctor_m46D50F1429220FC239E3F82D0850F4FC987870DD (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, const RuntimeMethod*))Dictionary_2__ctor_m061004931D44ABF48DC8BF39C28D508FDFEC6A4F_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_ZeroIdentity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD_inline (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::.ctor(System.UInt32,System.String,Microsoft.MixedReality.Toolkit.Utilities.AxisType,Microsoft.MixedReality.Toolkit.Input.DeviceInputType,System.String,System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping__ctor_m013B9755AD891680FCE4F10C06D510A63166E8B0 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, uint32_t ___id0, String_t* ___description1, int32_t ___axisType2, int32_t ___inputType3, String_t* ___axisCodeX4, String_t* ___axisCodeY5, bool ___invertXAxis6, bool ___invertYAxis7, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mDEDB1C6A8E395170D3C299A1A1448050FEE1AB23 (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * __this, int32_t ___key0, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *, int32_t, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *, const RuntimeMethod*))Dictionary_2_TryGetValue_mEDF52D19AE311810AF40B28317B05CF84B121E95_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::get_Rotation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float ___d0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___lhs0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rhs1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D (const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::set_PoseData(Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionMapping_set_PoseData_mF685F64DD474073262130DFCF89470AD49AF8E6E (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Changed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0 (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130 (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE79950B5EAE0DE73EB9FA810ED51CF5DA2BE3FBE (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * ___stateMachine0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE79950B5EAE0DE73EB9FA810ED51CF5DA2BE3FBE_gshared)(__this, ___stateMachine0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile::get_HandTrackingProfile()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * MixedRealityInputSystemProfile_get_HandTrackingProfile_mDE81888B7849D35DDD54C89A7EE6AE8C2E5D6FF2_inline (MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityHandTrackingProfile::get_EnableHandMeshVisualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_mBCA6E5ECB922E4F38E45F7468A35517D86459E09 (MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Input.HandMeshInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshInfo__ctor_mE14C2FFE75EFE5AF846B2EDFD867B39FEACB956E (HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.UI.Input.Spatial.SpatialInteractionSourceState::TryGetHandPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * SpatialInteractionSourceState_TryGetHandPose_m982D9241242B89C5B714CF4E42601EEF0870DA0B (SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m188538084248204F54ECEFFFBFBEB1AA20E5F4BB (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState0, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_TriangleIndexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_TriangleIndexCount_m72D9A87FD7433C47F4F9F1AB0EB8F37661451466 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshObserver::GetTriangleIndices(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshObserver_GetTriangleIndices_mA0A850F3FF458E34C3B7DED4BF76FFE0B3B7F772 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* ___indices0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.UInt32 Windows.Perception.People.HandMeshObserver::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandPose Windows.Perception.People.HandMeshObserver::get_NeutralPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * HandMeshObserver_get_NeutralPose_m089C4B81C9090BF049E6372A602A60491CEB7D86 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, const RuntimeMethod* method);
// Windows.Perception.People.HandMeshVertexState Windows.Perception.People.HandMeshObserver::GetVertexStateForPose(Windows.Perception.People.HandPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * HandMeshObserver_GetVertexStateForPose_m929A618E54D6ED72FC013D830E5DC420BA8FE391 (HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * __this, HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * ___handPose0, const RuntimeMethod* method);
// System.Void Windows.Perception.People.HandMeshVertexState::GetVertices(Windows.Perception.People.HandMeshVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandMeshVertexState_GetVertices_m0A39BCC22D116DE1DB2AC21F6CC93E8DAF97EA97 (HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * __this, HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* ___vertices0, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityVector3(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  SystemNumericsExtensions_ToUnityVector3_m3A8EF68BE13E5F1F59C14486C9300D0F08046761 (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___vector0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE24D9BE1ED68B15A39779CD736509223545C75F1 (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___neutralPoseVertices0, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Windows.Perception.People.HandMeshVertexState::get_CoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * HandMeshVertexState_get_CoordinateSystem_mD4B2BFFD6A3E44494044A9DCF231F1075556A42E (HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * __this, const RuntimeMethod* method);
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m7CA59ABA995070CFE58B994568AA48CBFD7E41AA (const RuntimeMethod* method);
// System.Nullable`1<System.Numerics.Matrix4x4> Windows.Perception.Spatial.SpatialCoordinateSystem::TryGetTransformTo(Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  SpatialCoordinateSystem_TryGetTransformTo_m9B3D98B85802722F2CC37F275351B746E6A79A25 (SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * __this, SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * ___target0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Numerics.Matrix4x4>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_inline (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *, const RuntimeMethod*))Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Numerics.Matrix4x4>::get_Value()
inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57 (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method)
{
	return ((  Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  (*) (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *, const RuntimeMethod*))Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_gshared)(__this, method);
}
// System.Boolean System.Numerics.Matrix4x4::Decompose(System.Numerics.Matrix4x4,System.Numerics.Vector3&,System.Numerics.Quaternion&,System.Numerics.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_Decompose_m2E014E7635A20424EDDD710F414B6DAD0F501E84 (Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___matrix0, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * ___scale1, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A * ___rotation2, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * ___translation3, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SystemNumericsExtensions::ToUnityQuaternion(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  SystemNumericsExtensions_ToUnityQuaternion_m46E85116F374D8ABBF6F543476B533AA4248C233 (Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___quaternion0, const RuntimeMethod* method);
// Windows.UI.Input.Spatial.SpatialInteractionSource Windows.UI.Input.Spatial.SpatialInteractionSourceState::get_Source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * SpatialInteractionSourceState_get_Source_m4869A5CAE87869961CC4C7322D71008B42C3E779 (SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * __this, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver> Windows.UI.Input.Spatial.SpatialInteractionSource::TryCreateHandMeshObserverAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpatialInteractionSource_TryCreateHandMeshObserverAsync_m579BCF683A9AF55D46D09730F4AD40670EFF1835 (SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!!0> System.WindowsRuntimeSystemExtensions::GetAwaiter<Windows.Perception.People.HandMeshObserver>(Windows.Foundation.IAsyncOperation`1<!!0>)
inline TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_m3CB00592C57B07D70E59409ED7C56788772F643C (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  (*) (RuntimeObject*, const RuntimeMethod*))WindowsRuntimeSystemExtensions_GetAwaiter_TisRuntimeObject_m1E2175CF410B96A4F467043697DA9DC4D231294C_gshared)(___source0, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m80375EEADEA92FBD234AB344CBC0652692A564DE (TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>,Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_m5281D4BA7BE6E2820997865978210D3EA97841E2 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 * ___awaiter0, U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * ___stateMachine1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *, TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 *, U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE60D478C6A559B735367A491763806DF82950D96_gshared)(__this, ___awaiter0, ___stateMachine1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Windows.Perception.People.HandMeshObserver>::GetResult()
inline HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * TaskAwaiter_1_GetResult_m51B30360D42BD29CB3C342FB939F070931D2E72D (TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 * __this, const RuntimeMethod* method)
{
	return ((  HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * (*) (TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_MoveNext_m0E55366FD965EB724E1FE65ED372198F64B44EE4 (U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3 (AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition/<SetHandMeshObserver>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m682E42F6F916A11918D099C86B1F0F1A46C44466 (U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseCameraSettingsProfile__ctor_mA3660897C968B789D009880007D2A97BB47C4FD1 (BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_inline (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.Marshal::GetObjectForIUnknown(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2 (intptr_t ___pUnk0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
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
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_ReferenceJoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m3ED120908E91FCF069A2FA9BD2D9C0B3031CC498 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::set_ReferenceJoint(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_set_ReferenceJoint_m4C02030E8763824FBA21AB6327772B98D2DCCFB3 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = ___value0;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::get_OutputFileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_mD9C60DEDFEBA39AE63B7F954DC9BFFE730C959D0 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordLeftHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordLeftHandStart_m6825A21EA681932F13DB88FB866BEB17563EC9D8 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Left);
		WindowsMixedRealityHandRecorder_RecordHandStart_mD0367B06ABF5BEDC3D5446097A802295D6433C23(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordRightHandStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordRightHandStart_m6468DB419FC4E5A5590F66B54569FA879DBA10D6 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	{
		// RecordHandStart(Handedness.Right);
		WindowsMixedRealityHandRecorder_RecordHandStart_mD0367B06ABF5BEDC3D5446097A802295D6433C23(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStart(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStart_mD0367B06ABF5BEDC3D5446097A802295D6433C23 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, uint8_t ___handedness0, const RuntimeMethod* method)
{
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandJointUtils.TryGetJointPose(ReferenceJoint, handedness, out MixedRealityPose joint);
		int32_t L_0 = WindowsMixedRealityHandRecorder_get_ReferenceJoint_m3ED120908E91FCF069A2FA9BD2D9C0B3031CC498_inline(__this, /*hidden argument*/NULL);
		uint8_t L_1 = ___handedness0;
		HandJointUtils_TryGetJointPose_m45169A4247D98F6D0895344568656579DC48EAA7(L_0, L_1, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		// offset = joint.Position;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		__this->set_offset_7(L_2);
		// recordingHand = handedness;
		uint8_t L_3 = ___handedness0;
		__this->set_recordingHand_8(L_3);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::RecordHandStop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_RecordHandStop_mFA0833F102662792C7DD7174B951AFBADC9338D8 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder_RecordHandStop_mFA0833F102662792C7DD7174B951AFBADC9338D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// MixedRealityPose[] jointPoses = new MixedRealityPose[jointCount];
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_il2cpp_TypeInfo_var);
		int32_t L_0 = ((WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_il2cpp_TypeInfo_var))->get_jointCount_4();
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_1 = (MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*)(MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA*)SZArrayNew(MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < jointCount; ++i)
		V_2 = 0;
		goto IL_0027;
	}

IL_000f:
	{
		// HandJointUtils.TryGetJointPose((TrackedHandJoint)i, recordingHand, out jointPoses[i]);
		int32_t L_2 = V_2;
		uint8_t L_3 = __this->get_recordingHand_8();
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		HandJointUtils_TryGetJointPose_m45169A4247D98F6D0895344568656579DC48EAA7(L_2, L_3, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < jointCount; ++i)
		int32_t L_7 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_il2cpp_TypeInfo_var);
		int32_t L_8 = ((WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_il2cpp_TypeInfo_var))->get_jointCount_4();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000f;
		}
	}
	{
		// ArticulatedHandPose pose = new ArticulatedHandPose();
		ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049 * L_9 = (ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049 *)il2cpp_codegen_object_new(ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049_il2cpp_TypeInfo_var);
		ArticulatedHandPose__ctor_mBAA3D06B13365BA365CD1930102F0408193697D6(L_9, /*hidden argument*/NULL);
		// pose.ParseFromJointPoses(jointPoses, recordingHand, Quaternion.identity, offset);
		ArticulatedHandPose_tB6C605C17154968F54B720E4EE04DB8611A55049 * L_10 = L_9;
		MixedRealityPoseU5BU5D_t4C9A2E6A6433F6674ABD356E68C7BADC492E9EBA* L_11 = V_0;
		uint8_t L_12 = __this->get_recordingHand_8();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = __this->get_offset_7();
		NullCheck(L_10);
		ArticulatedHandPose_ParseFromJointPoses_m990DEC7DEEE7633C0FD30520305D37C634958A64(L_10, L_11, L_12, L_13, L_14, /*hidden argument*/NULL);
		// recordingHand = Handedness.None;
		__this->set_recordingHand_8(0);
		// var filename = String.Format("{0}-{1}.json", OutputFileName, DateTime.UtcNow.ToString("yyyyMMdd-HHmmss"));
		String_t* L_15 = WindowsMixedRealityHandRecorder_get_OutputFileName_mD9C60DEDFEBA39AE63B7F954DC9BFFE730C959D0_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_16 = DateTime_get_UtcNow_m171F52F4B3A213E4BAD7B78DC8E794A269DE38A1(/*hidden argument*/NULL);
		V_3 = L_16;
		String_t* L_17 = DateTime_ToString_m203C5710CD7AB2F5F1B2D9DA1DFD45BB3774179A((DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 *)(&V_3), _stringLiteral26DFC60E6D308FD5C82010F93B8A9731F73CEA64, /*hidden argument*/NULL);
		String_t* L_18 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral75CFB32F644507536A264B176892612FF5F518CD, L_15, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		// StoreRecordedHandPose(pose.ToJson(), filename);
		NullCheck(L_10);
		String_t* L_19 = ArticulatedHandPose_ToJson_m93C35FF803FA3253F8DCDFFC2005CFE7038ED78D(L_10, /*hidden argument*/NULL);
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_il2cpp_TypeInfo_var);
		WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m08872E08BE4ACC2624BC30CDD46BBE93C00AE263(L_19, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::StoreRecordedHandPose(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m08872E08BE4ACC2624BC30CDD46BBE93C00AE263 (String_t* ___data0, String_t* ___filename1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder_StoreRecordedHandPose_m08872E08BE4ACC2624BC30CDD46BBE93C00AE263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// string path = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_1 = ___filename1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_0, L_1, /*hidden argument*/NULL);
		// using (TextWriter writer = File.CreateText(path))
		StreamWriter_t989B894EF3BFCDF6FF5F5F068402A4F835FC8E8E * L_3 = File_CreateText_mEED28D1DDECB47B208D7ACA7CDC99B32EE86F162(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		// writer.Write(data);
		TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_4 = V_0;
		String_t* L_5 = ___data0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_4, L_5);
		// }
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_6 = V_0;
			if (!L_6)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			TextWriter_t92451D929322093838C41489883D5B2D7ABAF3F0 * L_7 = V_0;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_7);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__ctor_m89C117CB1151AA95EC3C175A42899DFD0E34FBA7 (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder__ctor_m89C117CB1151AA95EC3C175A42899DFD0E34FBA7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		__this->set_U3CReferenceJointU3Ek__BackingField_5(((int32_t)11));
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		__this->set_U3COutputFileNameU3Ek__BackingField_6(_stringLiteralC3F575CC4B274140D1ED6BA5DE03C34BEA6E0D9A);
		// private Vector3 offset = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set_offset_7(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Input.WindowsMixedRealityHandRecorder::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityHandRecorder__cctor_mD8D4DBB767491DF270BD861B1964CDFB7BC845EA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityHandRecorder__cctor_mD8D4DBB767491DF270BD861B1964CDFB7BC845EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int jointCount = Enum.GetNames(typeof(TrackedHandJoint)).Length;
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (TrackedHandJoint_tF44A8730AA131ACE1D217F560801A72245D48648_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = Enum_GetNames_m9ECDF3E80A7A31075D7D2B2B362DDCC6150BC15C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		((WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF_il2cpp_TypeInfo_var))->set_jointCount_4((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))));
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.ctor(Microsoft.MixedReality.Toolkit.CameraSystem.IMixedRealityCameraSystem,System.String,System.UInt32,Microsoft.MixedReality.Toolkit.CameraSystem.BaseCameraSettingsProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__ctor_m809D1053CC0D32F6DB986E261892DD816C00F43E (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, RuntimeObject* ___cameraSystem0, String_t* ___name1, uint32_t ___priority2, BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1 * ___profile3, const RuntimeMethod* method)
{
	{
		// BaseCameraSettingsProfile profile = null) : base(cameraSystem, name, priority, profile)
		RuntimeObject* L_0 = ___cameraSystem0;
		String_t* L_1 = ___name1;
		uint32_t L_2 = ___priority2;
		BaseCameraSettingsProfile_t72452AEAFB7EF8297910B3C413F2ED74C12BD1B1 * L_3 = ___profile3;
		BaseCameraSettingsProvider__ctor_m098FB15E16B014EB8AA85788202BACC44E8C624C(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Enable_m788AE7E99B019186F782F04B233A2A402189ECBE (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method)
{
	{
		// base.Enable();
		BaseService_Enable_m701A94DC92B9C50D591CE2B79D369E33EA5F8369(__this, /*hidden argument*/NULL);
		// InitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mD6A751D708E67C1A8E36E42FEE6643C1F5F1A338(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_Disable_m438BF4CA8756234FA8338CDB09D958F2B6B25158 (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method)
{
	{
		// UninitializeReprojectionUpdater();
		BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m6CE564692D376FF43C58E18CF3A8C5C423A6C60F(__this, /*hidden argument*/NULL);
		// base.Disable();
		BaseService_Disable_mD403705A40B5D53B49633E462E7F99C39FAEEA9C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::get_Profile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6 (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private WindowsMixedRealityCameraSettingsProfile Profile => ConfigurationProfile as WindowsMixedRealityCameraSettingsProfile;
		BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * L_0 = VirtFuncInvoker0< BaseMixedRealityProfile_tBB2FA18F01AA50D197DBDFE16781B4AFFBC39B23 * >::Invoke(19 /* Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::get_ConfigurationProfile() */, __this);
		return ((WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 *)IsInstClass((RuntimeObject*)L_0, WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8_il2cpp_TypeInfo_var));
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::ApplyConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_m81BD76DFB2BFAE81C0FB3902D67F55FDA38AA1DF (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_ApplyConfiguration_m81BD76DFB2BFAE81C0FB3902D67F55FDA38AA1DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * V_0 = NULL;
	HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * G_B5_0 = NULL;
	HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * G_B4_0 = NULL;
	HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * G_B6_0 = NULL;
	{
		// base.ApplyConfiguration();
		BaseCameraSettingsProvider_ApplyConfiguration_mA0777BD8CB869B1CC93412CC1FC1572BC5410CC0(__this, /*hidden argument*/NULL);
		// if (Profile != null
		//     && Profile.RenderFromPVCameraForMixedRealityCapture
		//     && isTryGetViewConfigurationSupported)
		WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * L_0 = BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mEC287DD2FEFA42A0C8532A1BA5D0BA67D2935CBA_inline(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_il2cpp_TypeInfo_var);
		bool L_4 = ((BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_il2cpp_TypeInfo_var))->get_isTryGetViewConfigurationSupported_8();
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// global::Windows.Graphics.Holographic.HolographicViewConfiguration viewConfiguration = global::Windows.Graphics.Holographic.HolographicDisplay.GetDefault()?.TryGetViewConfiguration(global::Windows.Graphics.Holographic.HolographicViewConfigurationKind.PhotoVideoCamera);
		HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * L_5 = HolographicDisplay_GetDefault_m7102C2AFE1F07195DF9F8D964249E6AAB8BF84DF(/*hidden argument*/NULL);
		HolographicDisplay_t30C54F0F28925FABF9E9C0DC2E84AA075423D17C * L_6 = L_5;
		G_B4_0 = L_6;
		if (L_6)
		{
			G_B5_0 = L_6;
			goto IL_0034;
		}
	}
	{
		G_B6_0 = ((HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 *)(NULL));
		goto IL_003a;
	}

IL_0034:
	{
		NullCheck(G_B5_0);
		HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * L_7 = HolographicDisplay_TryGetViewConfiguration_mAD05250269F4ED3FCA2F303DA511D4ADEAEFFDB7(G_B5_0, 1, /*hidden argument*/NULL);
		G_B6_0 = L_7;
	}

IL_003a:
	{
		V_0 = G_B6_0;
		// if (viewConfiguration != null)
		HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0045;
		}
	}
	{
		// viewConfiguration.IsEnabled = true;
		HolographicViewConfiguration_t21C511C29262ED636D7832385563FFC5FD117B90 * L_9 = V_0;
		NullCheck(L_9);
		HolographicViewConfiguration_put_IsEnabled_m3476B0065A7EC22D37A44C6BA77B0920495C6C2B(L_9, (bool)1, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::InitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mD6A751D708E67C1A8E36E42FEE6643C1F5F1A338 (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_InitializeReprojectionUpdater_mD6A751D708E67C1A8E36E42FEE6643C1F5F1A338_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater == null && Profile != null)
		WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * L_0 = __this->get_reprojectionUpdater_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * L_2 = BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// reprojectionUpdater = CameraCache.Main.EnsureComponent<WindowsMixedRealityReprojectionUpdater>();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_4 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * L_5 = ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF_m1AF71501C6B90F44F44F092F9D507B7BBBA36446(L_4, /*hidden argument*/ComponentExtensions_EnsureComponent_TisWindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF_m1AF71501C6B90F44F44F092F9D507B7BBBA36446_RuntimeMethod_var);
		__this->set_reprojectionUpdater_9(L_5);
		// reprojectionUpdater.ReprojectionMethod = Profile.ReprojectionMethod;
		WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * L_6 = __this->get_reprojectionUpdater_9();
		WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * L_7 = BaseWindowsMixedRealityCameraSettings_get_Profile_mDA9F9C91BDDBACE215C6C9B4ECCBE69EC1F03CC6(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m285A218CFE5C0B1732BC92203140DEB88DB03C6F_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m17E7474D8BB1E8260BCCAAA8C562EB3358D33825_inline(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::UninitializeReprojectionUpdater()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m6CE564692D376FF43C58E18CF3A8C5C423A6C60F (BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings_UninitializeReprojectionUpdater_m6CE564692D376FF43C58E18CF3A8C5C423A6C60F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (reprojectionUpdater != null)
		WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * L_0 = __this->get_reprojectionUpdater_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// UnityObjectExtensions.DestroyObject(reprojectionUpdater);
		WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * L_2 = __this->get_reprojectionUpdater_9();
		UnityObjectExtensions_DestroyObject_m63538AE6AC1F6D3D2A900068DF435D2F438C4F8A(L_2, (0.0f), /*hidden argument*/NULL);
		// reprojectionUpdater = null;
		__this->set_reprojectionUpdater_9((WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF *)NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.BaseWindowsMixedRealityCameraSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseWindowsMixedRealityCameraSettings__cctor_mEA2B18EF153C34445567B8816ED1AD5BB64479EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BaseWindowsMixedRealityCameraSettings__cctor_mEA2B18EF153C34445567B8816ED1AD5BB64479EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly bool isTryGetViewConfigurationSupported = ApiInformation.IsMethodPresent("Windows.Graphics.Holographic.HolographicDisplay", "TryGetViewConfiguration");
		bool L_0 = ApiInformation_IsMethodPresent_m2888CC939FEFAF5B4C739A57F9EE638C79426234(_stringLiteral0918B88AB9AC412ABA9CA72D6D76DFAF2E7E371D, _stringLiteral71356565B0BDA2511BAAC64A6780DC965ABD1A8A, /*hidden argument*/NULL);
		((BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_StaticFields*)il2cpp_codegen_static_fields_for(BaseWindowsMixedRealityCameraSettings_t37634564E49ADA9990E924A9115E56EC44B4DDBD_il2cpp_TypeInfo_var))->set_isTryGetViewConfigurationSupported_8(L_0);
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
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsExtensions::ToMRTKHandedness(Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t WindowsExtensions_ToMRTKHandedness_m313D3F1C01C13CF8BECB411C0149B963AFE258E6 (int32_t ___handedness0, const RuntimeMethod* method)
{
	{
		// switch (handedness)
		int32_t L_0 = ___handedness0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0018;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_0016;
			}
		}
	}
	{
		goto IL_0018;
	}

IL_0014:
	{
		// return Handedness.Left;
		return (uint8_t)(1);
	}

IL_0016:
	{
		// return Handedness.Right;
		return (uint8_t)(2);
	}

IL_0018:
	{
		// return Handedness.None;
		return (uint8_t)(0);
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::.ctor(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition__ctor_m4EDE6A9B171AA340F1A2C28FCDC4D693AB364474 (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, RuntimeObject* ___source0, uint8_t ___handedness1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition__ctor_m4EDE6A9B171AA340F1A2C28FCDC4D693AB364474_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly float cursorBeamBackwardTolerance = 0.5f;
		__this->set_cursorBeamBackwardTolerance_2((0.5f));
		// private readonly float cursorBeamUpTolerance = 0.8f;
		__this->set_cursorBeamUpTolerance_3((0.8f));
		// private Dictionary<TrackedHandJoint, MixedRealityPose> unityJointPoses = new Dictionary<TrackedHandJoint, MixedRealityPose>();
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_0 = (Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 *)il2cpp_codegen_object_new(Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m46D50F1429220FC239E3F82D0850F4FC987870DD(L_0, /*hidden argument*/Dictionary_2__ctor_m46D50F1429220FC239E3F82D0850F4FC987870DD_RuntimeMethod_var);
		__this->set_unityJointPoses_4(L_0);
		// private MixedRealityPose currentIndexPose = MixedRealityPose.ZeroIdentity;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_1 = MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD_inline(/*hidden argument*/NULL);
		__this->set_currentIndexPose_5(L_1);
		// public WindowsMixedRealityArticulatedHandDefinition(IMixedRealityInputSource source, Handedness handedness)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// inputSource = source;
		RuntimeObject* L_2 = ___source0;
		__this->set_inputSource_0(L_2);
		// this.handedness = handedness;
		uint8_t L_3 = ___handedness1;
		__this->set_handedness_1(L_3);
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::get_DefaultInteractions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* WindowsMixedRealityArticulatedHandDefinition_get_DefaultInteractions_mDF1F303CFDB8ED4D08DE4EAF3C960E13860BC5F0 (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_get_DefaultInteractions_mDF1F303CFDB8ED4D08DE4EAF3C960E13860BC5F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public MixedRealityInteractionMapping[] DefaultInteractions => new[]
		// {
		//     new MixedRealityInteractionMapping(0, "Spatial Pointer", AxisType.SixDof, DeviceInputType.SpatialPointer),
		//     new MixedRealityInteractionMapping(1, "Spatial Grip", AxisType.SixDof, DeviceInputType.SpatialGrip),
		//     new MixedRealityInteractionMapping(2, "Select", AxisType.Digital, DeviceInputType.Select),
		//     new MixedRealityInteractionMapping(3, "Grab", AxisType.SingleAxis, DeviceInputType.TriggerPress),
		//     new MixedRealityInteractionMapping(4, "Index Finger Pose", AxisType.SixDof, DeviceInputType.IndexFinger)
		// };
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_0 = (MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379*)(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379*)SZArrayNew(MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379_il2cpp_TypeInfo_var, (uint32_t)5);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_1 = L_0;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_2 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m013B9755AD891680FCE4F10C06D510A63166E8B0(L_2, 0, _stringLiteral0F9D13B1C31A5F4C68D0EEA587D21588F757084E, 7, 3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_2);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_3 = L_1;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_4 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m013B9755AD891680FCE4F10C06D510A63166E8B0(L_4, 1, _stringLiteralE705DD1D38D6989FA3B3CCE68EC8B3C54B31ECFC, 7, ((int32_t)14), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_4);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_5 = L_3;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_6 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m013B9755AD891680FCE4F10C06D510A63166E8B0(L_6, 2, _stringLiteral8598222918D3C6E513D63060CF55E2971DED729A, 2, ((int32_t)25), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_6);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_7 = L_5;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_8 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m013B9755AD891680FCE4F10C06D510A63166E8B0(L_8, 3, _stringLiteralCF673A9C875D20DCDA8A5C0D7A2E5C60A940DB8E, 3, ((int32_t)13), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_8);
		MixedRealityInteractionMappingU5BU5D_t1DAF0A70EBB52A99CC8ED0EAD63D70E2F5304379* L_9 = L_7;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_10 = (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)il2cpp_codegen_object_new(MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F_il2cpp_TypeInfo_var);
		MixedRealityInteractionMapping__ctor_m013B9755AD891680FCE4F10C06D510A63166E8B0(L_10, 4, _stringLiteral561DDB78EA3339033D719AFAA6980160DC8D88CB, 7, ((int32_t)33), _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (bool)0, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F *)L_10);
		return L_9;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::get_IsInPointingPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityArticulatedHandDefinition_get_IsInPointingPose_mEC373CA451AABB08F409BE9F14F67C3C98D9A470 (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_get_IsInPointingPose_mEC373CA451AABB08F409BE9F14F67C3C98D9A470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (unityJointPoses.TryGetValue(TrackedHandJoint.Palm, out palmJoint))
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_0 = __this->get_unityJointPoses_4();
		NullCheck(L_0);
		bool L_1 = Dictionary_2_TryGetValue_mDEDB1C6A8E395170D3C299A1A1448050FEE1AB23(L_0, 2, (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mDEDB1C6A8E395170D3C299A1A1448050FEE1AB23_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		// Vector3 palmNormal = palmJoint.Rotation * (-1 * Vector3.up);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723_inline((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((-1.0f), L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// if (cursorBeamBackwardTolerance >= 0)
		float L_6 = __this->get_cursorBeamBackwardTolerance_2();
		if ((!(((float)L_6) >= ((float)(0.0f)))))
		{
			goto IL_0065;
		}
	}
	{
		// Vector3 cameraBackward = -CameraCache.Main.transform.forward;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_7 = CameraCache_get_Main_m2924FB8C07A5B4F07D0CA096446D33124C3722FD(/*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (Vector3.Dot(palmNormal.normalized, cameraBackward) > cursorBeamBackwardTolerance)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_1), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = V_2;
		float L_13 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_11, L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_cursorBeamBackwardTolerance_2();
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_0065;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0065:
	{
		// if (cursorBeamUpTolerance >= 0)
		float L_15 = __this->get_cursorBeamUpTolerance_3();
		if ((!(((float)L_15) >= ((float)(0.0f)))))
		{
			goto IL_0087;
		}
	}
	{
		// if (Vector3.Dot(palmNormal, Vector3.up) > cursorBeamUpTolerance)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_18 = Vector3_Dot_m0C530E1C51278DE28B77906D56356506232272C1(L_16, L_17, /*hidden argument*/NULL);
		float L_19 = __this->get_cursorBeamUpTolerance_3();
		if ((!(((float)L_18) > ((float)L_19))))
		{
			goto IL_0087;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0087:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandJoints(System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateHandJoints_mAAFB0417E62E4C36BE686908BAEF0B7F53C0CF4E (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * ___jointPoses0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_UpdateHandJoints_mAAFB0417E62E4C36BE686908BAEF0B7F53C0CF4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// unityJointPoses = jointPoses;
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_0 = ___jointPoses0;
		__this->set_unityJointPoses_4(L_0);
		// CoreServices.InputSystem?.RaiseHandJointsUpdated(inputSource, handedness, unityJointPoses);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->get_inputSource_0();
		uint8_t L_4 = __this->get_handedness_1();
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_5 = __this->get_unityJointPoses_4();
		NullCheck(G_B2_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, RuntimeObject* >::Invoke(62 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandJointsUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,System.Collections.Generic.IDictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose>) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B2_0, L_3, L_4, L_5);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateCurrentIndexPose(Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateCurrentIndexPose_m83562493E2E919FF1A9A5E1A63D73507EEF6C4E1 (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * ___interactionMapping0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_UpdateCurrentIndexPose_m83562493E2E919FF1A9A5E1A63D73507EEF6C4E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		// if (unityJointPoses.TryGetValue(TrackedHandJoint.IndexTip, out currentIndexPose))
		Dictionary_2_tA034E2E8F152D6364476C8F480B88A7E107A0AF3 * L_0 = __this->get_unityJointPoses_4();
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * L_1 = __this->get_address_of_currentIndexPose_5();
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mDEDB1C6A8E395170D3C299A1A1448050FEE1AB23(L_0, ((int32_t)11), (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 *)L_1, /*hidden argument*/Dictionary_2_TryGetValue_mDEDB1C6A8E395170D3C299A1A1448050FEE1AB23_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// interactionMapping.PoseData = currentIndexPose;
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_3 = ___interactionMapping0;
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_4 = __this->get_currentIndexPose_5();
		NullCheck(L_3);
		MixedRealityInteractionMapping_set_PoseData_mF685F64DD474073262130DFCF89470AD49AF8E6E(L_3, L_4, /*hidden argument*/NULL);
		// if (interactionMapping.Changed)
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_5 = ___interactionMapping0;
		NullCheck(L_5);
		bool L_6 = MixedRealityInteractionMapping_get_Changed_m18C84B4C53F5506910C94444BF52C665EE8A50A0(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		// CoreServices.InputSystem?.RaisePoseInputChanged(inputSource, handedness, interactionMapping.MixedRealityInputAction, currentIndexPose);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_8 = L_7;
		G_B3_0 = L_8;
		if (L_8)
		{
			G_B4_0 = L_8;
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		RuntimeObject* L_9 = __this->get_inputSource_0();
		uint8_t L_10 = __this->get_handedness_1();
		MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * L_11 = ___interactionMapping0;
		NullCheck(L_11);
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_12 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline(L_11, /*hidden argument*/NULL);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_13 = __this->get_currentIndexPose_5();
		NullCheck(G_B4_0);
		InterfaceActionInvoker4< RuntimeObject*, uint8_t, MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E , MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  >::Invoke(44 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaisePoseInputChanged(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction,Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B4_0, L_9, L_10, L_12, L_13);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::SetHandMeshObserver(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m188538084248204F54ECEFFFBFBEB1AA20E5F4BB (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m188538084248204F54ECEFFFBFBEB1AA20E5F4BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_0 = ___sourceState0;
		(&V_0)->set_sourceState_2(L_0);
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_1 = AsyncVoidMethodBuilder_Create_m2EF884A75C3C230F0E6A63B1E23DC82F3B159130(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_1);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5  L_2 = V_0;
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF  L_3 = L_2.get_U3CU3Et__builder_1();
		V_1 = L_3;
		AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE79950B5EAE0DE73EB9FA810ED51CF5DA2BE3FBE((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)(&V_1), (U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_mE79950B5EAE0DE73EB9FA810ED51CF5DA2BE3FBE_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::InitializeUVs(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE24D9BE1ED68B15A39779CD736509223545C75F1 (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___neutralPoseVertices0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE24D9BE1ED68B15A39779CD736509223545C75F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (neutralPoseVertices.Length == 0)
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___neutralPoseVertices0;
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogError("Loaded 0 verts for neutralPoseVertices");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralBA683544036E9391092847670BF68C892E6D1F4A, /*hidden argument*/NULL);
	}

IL_000e:
	{
		// float minY = neutralPoseVertices[0].y;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = ___neutralPoseVertices0;
		NullCheck(L_1);
		float L_2 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_y_3();
		V_0 = L_2;
		// float maxY = minY;
		float L_3 = V_0;
		V_1 = L_3;
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		V_3 = 1;
		goto IL_0054;
	}

IL_0021:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = ___neutralPoseVertices0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		// if (p.y < minY)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = V_4;
		float L_9 = L_8.get_y_3();
		float L_10 = V_0;
		if ((!(((float)L_9) < ((float)L_10))))
		{
			goto IL_003e;
		}
	}
	{
		// minY = p.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_4;
		float L_12 = L_11.get_y_3();
		V_0 = L_12;
		// }
		goto IL_0050;
	}

IL_003e:
	{
		// else if (p.y > maxY)
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_4;
		float L_14 = L_13.get_y_3();
		float L_15 = V_1;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_0050;
		}
	}
	{
		// maxY = p.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = V_4;
		float L_17 = L_16.get_y_3();
		V_1 = L_17;
	}

IL_0050:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0054:
	{
		// for (int ix = 1; ix < neutralPoseVertices.Length; ix++)
		int32_t L_19 = V_3;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_20 = ___neutralPoseVertices0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		// float scale = 1.0f / (maxY - minY);
		float L_21 = V_1;
		float L_22 = V_0;
		V_2 = ((float)((float)(1.0f)/(float)((float)il2cpp_codegen_subtract((float)L_21, (float)L_22))));
		// handMeshUVs = new Vector2[neutralPoseVertices.Length];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_23 = ___neutralPoseVertices0;
		NullCheck(L_23);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_24 = (Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6*)SZArrayNew(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))));
		__this->set_handMeshUVs_6(L_24);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		V_5 = 0;
		goto IL_00b3;
	}

IL_0077:
	{
		// Vector3 p = neutralPoseVertices[ix];
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_25 = ___neutralPoseVertices0;
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_6 = L_28;
		// handMeshUVs[ix] = new Vector2(p.x * scale + 0.5f, (p.y - minY) * scale);
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_29 = __this->get_handMeshUVs_6();
		int32_t L_30 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_6;
		float L_32 = L_31.get_x_2();
		float L_33 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_6;
		float L_35 = L_34.get_y_3();
		float L_36 = V_0;
		float L_37 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_38), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_32, (float)L_33)), (float)(0.5f))), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_36)), (float)L_37)), /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D )L_38);
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00b3:
	{
		// for (int ix = 0; ix < neutralPoseVertices.Length; ix++)
		int32_t L_40 = V_5;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_41 = ___neutralPoseVertices0;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))))
		{
			goto IL_0077;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition::UpdateHandMesh(Windows.UI.Input.Spatial.SpatialInteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_m4A6EC281D2E0E8EAF67747E5F06476A455101944 (WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * __this, SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * ___sourceState0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityArticulatedHandDefinition_UpdateHandMesh_m4A6EC281D2E0E8EAF67747E5F06476A455101944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * V_0 = NULL;
	MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * V_1 = NULL;
	HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * V_2 = NULL;
	HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * V_3 = NULL;
	uint32_t V_4 = 0;
	UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* V_5 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_6 = NULL;
	HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * V_7 = NULL;
	HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* V_8 = NULL;
	int32_t V_9 = 0;
	HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* V_10 = NULL;
	Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_15 = NULL;
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_16 = NULL;
	HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * V_17 = NULL;
	int32_t V_18 = 0;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * G_B3_0 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B31_0 = NULL;
	RuntimeObject* G_B30_0 = NULL;
	{
		// MixedRealityHandTrackingProfile handTrackingProfile = null;
		V_0 = (MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 *)NULL;
		// MixedRealityInputSystemProfile inputSystemProfile = CoreServices.InputSystem?.InputSystemProfile;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = ((MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 *)(NULL));
		goto IL_0013;
	}

IL_000e:
	{
		NullCheck(G_B2_0);
		MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * L_2 = InterfaceFuncInvoker0< MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * >::Invoke(6 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_InputSystemProfile() */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0013:
	{
		V_1 = G_B3_0;
		// if (inputSystemProfile != null)
		MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * L_3 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// handTrackingProfile = inputSystemProfile.HandTrackingProfile;
		MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * L_5 = V_1;
		NullCheck(L_5);
		MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * L_6 = MixedRealityInputSystemProfile_get_HandTrackingProfile_mDE81888B7849D35DDD54C89A7EE6AE8C2E5D6FF2_inline(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0024:
	{
		// if (handTrackingProfile == null || !handTrackingProfile.EnableHandMeshVisualization)
		MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_7, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = MixedRealityHandTrackingProfile_get_EnableHandMeshVisualization_mBCA6E5ECB922E4F38E45F7468A35517D86459E09(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_006f;
		}
	}

IL_0035:
	{
		// if (handMeshObserver != null)
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_11 = __this->get_handMeshObserver_7();
		if (!L_11)
		{
			goto IL_006e;
		}
	}
	{
		// HandMeshInfo handMeshInfo = new HandMeshInfo();
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_12 = (HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 *)il2cpp_codegen_object_new(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473_il2cpp_TypeInfo_var);
		HandMeshInfo__ctor_mE14C2FFE75EFE5AF846B2EDFD867B39FEACB956E(L_12, /*hidden argument*/NULL);
		V_3 = L_12;
		// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, handMeshInfo);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_14 = L_13;
		G_B9_0 = L_14;
		if (L_14)
		{
			G_B10_0 = L_14;
			goto IL_004e;
		}
	}
	{
		goto IL_0060;
	}

IL_004e:
	{
		RuntimeObject* L_15 = __this->get_inputSource_0();
		uint8_t L_16 = __this->get_handedness_1();
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_17 = V_3;
		NullCheck(G_B10_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B10_0, L_15, L_16, L_17);
	}

IL_0060:
	{
		// hasRequestedHandMeshObserver = false;
		__this->set_hasRequestedHandMeshObserver_9((bool)0);
		// handMeshObserver = null;
		__this->set_handMeshObserver_7((HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 *)NULL);
	}

IL_006e:
	{
		// return;
		return;
	}

IL_006f:
	{
		// HandPose handPose = sourceState.TryGetHandPose();
		SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_18 = ___sourceState0;
		NullCheck(L_18);
		HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_19 = SpatialInteractionSourceState_TryGetHandPose_m982D9241242B89C5B714CF4E42601EEF0870DA0B(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// if (handMeshObserver == null && !hasRequestedHandMeshObserver)
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_20 = __this->get_handMeshObserver_7();
		if (L_20)
		{
			goto IL_0094;
		}
	}
	{
		bool L_21 = __this->get_hasRequestedHandMeshObserver_9();
		if (L_21)
		{
			goto IL_0094;
		}
	}
	{
		// SetHandMeshObserver(sourceState);
		SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_22 = ___sourceState0;
		WindowsMixedRealityArticulatedHandDefinition_SetHandMeshObserver_m188538084248204F54ECEFFFBFBEB1AA20E5F4BB(__this, L_22, /*hidden argument*/NULL);
		// hasRequestedHandMeshObserver = true;
		__this->set_hasRequestedHandMeshObserver_9((bool)1);
	}

IL_0094:
	{
		// if (handMeshObserver != null && handMeshTriangleIndices == null)
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_23 = __this->get_handMeshObserver_7();
		if (!L_23)
		{
			goto IL_0177;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_24 = __this->get_handMeshTriangleIndices_8();
		if (L_24)
		{
			goto IL_0177;
		}
	}
	{
		// uint indexCount = handMeshObserver.TriangleIndexCount;
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_25 = __this->get_handMeshObserver_7();
		NullCheck(L_25);
		uint32_t L_26 = HandMeshObserver_get_TriangleIndexCount_m72D9A87FD7433C47F4F9F1AB0EB8F37661451466(L_25, /*hidden argument*/NULL);
		V_4 = L_26;
		// ushort[] indices = new ushort[indexCount];
		uint32_t L_27 = V_4;
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_28 = (UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E*)SZArrayNew(UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E_il2cpp_TypeInfo_var, (uint32_t)L_27);
		V_5 = L_28;
		// handMeshObserver.GetTriangleIndices(indices);
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_29 = __this->get_handMeshObserver_7();
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_30 = V_5;
		NullCheck(L_29);
		HandMeshObserver_GetTriangleIndices_mA0A850F3FF458E34C3B7DED4BF76FFE0B3B7F772(L_29, L_30, /*hidden argument*/NULL);
		// handMeshTriangleIndices = new int[indexCount];
		uint32_t L_31 = V_4;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_32 = (Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83*)SZArrayNew(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83_il2cpp_TypeInfo_var, (uint32_t)L_31);
		__this->set_handMeshTriangleIndices_8(L_32);
		// Array.Copy(indices, handMeshTriangleIndices, (int)handMeshObserver.TriangleIndexCount);
		UInt16U5BU5D_t2D4BB1F8C486FF4359FFA7E4A76A8708A684543E* L_33 = V_5;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_34 = __this->get_handMeshTriangleIndices_8();
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_35 = __this->get_handMeshObserver_7();
		NullCheck(L_35);
		uint32_t L_36 = HandMeshObserver_get_TriangleIndexCount_m72D9A87FD7433C47F4F9F1AB0EB8F37661451466(L_35, /*hidden argument*/NULL);
		Array_Copy_m2D96731C600DE8A167348CA8BA796344E64F7434((RuntimeArray *)(RuntimeArray *)L_33, (RuntimeArray *)(RuntimeArray *)L_34, L_36, /*hidden argument*/NULL);
		// Vector3[] neutralPoseVertices = new Vector3[handMeshObserver.VertexCount];
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_37 = __this->get_handMeshObserver_7();
		NullCheck(L_37);
		uint32_t L_38 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_37, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_39 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_38);
		V_6 = L_39;
		// HandPose neutralPose = handMeshObserver.NeutralPose;
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_40 = __this->get_handMeshObserver_7();
		NullCheck(L_40);
		HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_41 = HandMeshObserver_get_NeutralPose_m089C4B81C9090BF049E6372A602A60491CEB7D86(L_40, /*hidden argument*/NULL);
		V_7 = L_41;
		// var vertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_42 = __this->get_handMeshObserver_7();
		NullCheck(L_42);
		uint32_t L_43 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_42, /*hidden argument*/NULL);
		HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* L_44 = (HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE*)(HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE*)SZArrayNew(HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_8 = L_44;
		// HandMeshVertexState handMeshVertexState = handMeshObserver.GetVertexStateForPose(neutralPose);
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_45 = __this->get_handMeshObserver_7();
		HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_46 = V_7;
		NullCheck(L_45);
		HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_47 = HandMeshObserver_GetVertexStateForPose_m929A618E54D6ED72FC013D830E5DC420BA8FE391(L_45, L_46, /*hidden argument*/NULL);
		// handMeshVertexState.GetVertices(vertexAndNormals);
		HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* L_48 = V_8;
		NullCheck(L_47);
		HandMeshVertexState_GetVertices_m0A39BCC22D116DE1DB2AC21F6CC93E8DAF97EA97(L_47, L_48, /*hidden argument*/NULL);
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		V_9 = 0;
		goto IL_015e;
	}

IL_013c:
	{
		// neutralPoseVertices[i] = vertexAndNormals[i].Position.ToUnityVector3();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_49 = V_6;
		int32_t L_50 = V_9;
		HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* L_51 = V_8;
		int32_t L_52 = V_9;
		NullCheck(L_51);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_53 = ((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->get_Position_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = SystemNumericsExtensions_ToUnityVector3_m3A8EF68BE13E5F1F59C14486C9300D0F08046761(L_53, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_54);
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_55 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_015e:
	{
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_56 = V_9;
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_57 = __this->get_handMeshObserver_7();
		NullCheck(L_57);
		uint32_t L_58 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_57, /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_56)))) < ((int64_t)(((int64_t)((uint64_t)L_58))))))
		{
			goto IL_013c;
		}
	}
	{
		// InitializeUVs(neutralPoseVertices);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_59 = V_6;
		WindowsMixedRealityArticulatedHandDefinition_InitializeUVs_mE24D9BE1ED68B15A39779CD736509223545C75F1(__this, L_59, /*hidden argument*/NULL);
	}

IL_0177:
	{
		// if (handPose != null && handMeshObserver != null && handMeshTriangleIndices != null)
		HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_60 = V_2;
		if (!L_60)
		{
			goto IL_02c7;
		}
	}
	{
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_61 = __this->get_handMeshObserver_7();
		if (!L_61)
		{
			goto IL_02c7;
		}
	}
	{
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_62 = __this->get_handMeshTriangleIndices_8();
		if (!L_62)
		{
			goto IL_02c7;
		}
	}
	{
		// var vertexAndNormals = new HandMeshVertex[handMeshObserver.VertexCount];
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_63 = __this->get_handMeshObserver_7();
		NullCheck(L_63);
		uint32_t L_64 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_63, /*hidden argument*/NULL);
		HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* L_65 = (HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE*)(HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE*)SZArrayNew(HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE_il2cpp_TypeInfo_var, (uint32_t)L_64);
		V_10 = L_65;
		// var handMeshVertexState = handMeshObserver.GetVertexStateForPose(handPose);
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_66 = __this->get_handMeshObserver_7();
		HandPose_t51A7E835EA330CC8F84938C90A4E616ADF2DC83C * L_67 = V_2;
		NullCheck(L_66);
		HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_68 = HandMeshObserver_GetVertexStateForPose_m929A618E54D6ED72FC013D830E5DC420BA8FE391(L_66, L_67, /*hidden argument*/NULL);
		// handMeshVertexState.GetVertices(vertexAndNormals);
		HandMeshVertexState_t98608C8F5C0BF239759E4520057BA24105B6F463 * L_69 = L_68;
		HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* L_70 = V_10;
		NullCheck(L_69);
		HandMeshVertexState_GetVertices_m0A39BCC22D116DE1DB2AC21F6CC93E8DAF97EA97(L_69, L_70, /*hidden argument*/NULL);
		// var meshTransform = handMeshVertexState.CoordinateSystem.TryGetTransformTo(WindowsMixedRealityUtilities.SpatialCoordinateSystem);
		NullCheck(L_69);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_71 = HandMeshVertexState_get_CoordinateSystem_mD4B2BFFD6A3E44494044A9DCF231F1075556A42E(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_72 = WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m7CA59ABA995070CFE58B994568AA48CBFD7E41AA(/*hidden argument*/NULL);
		NullCheck(L_71);
		Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  L_73 = SpatialCoordinateSystem_TryGetTransformTo_m9B3D98B85802722F2CC37F275351B746E6A79A25(L_71, L_72, /*hidden argument*/NULL);
		V_11 = L_73;
		// if (meshTransform.HasValue)
		bool L_74 = Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_inline((Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *)(&V_11), /*hidden argument*/Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_RuntimeMethod_var);
		if (!L_74)
		{
			goto IL_02c7;
		}
	}
	{
		// System.Numerics.Matrix4x4.Decompose(meshTransform.Value, out scale, out rotation, out translation);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_75 = Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57((Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *)(&V_11), /*hidden argument*/Nullable_1_get_Value_m2FF1A8A834E0AE0F139395B39F0FE1F934140C57_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var);
		Matrix4x4_Decompose_m2E014E7635A20424EDDD710F414B6DAD0F501E84(L_75, (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 *)(&V_12), (Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A *)(&V_13), (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 *)(&V_14), /*hidden argument*/NULL);
		// var handMeshVertices = new Vector3[handMeshObserver.VertexCount];
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_76 = __this->get_handMeshObserver_7();
		NullCheck(L_76);
		uint32_t L_77 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_76, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_78 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_77);
		V_15 = L_78;
		// var handMeshNormals = new Vector3[handMeshObserver.VertexCount];
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_79 = __this->get_handMeshObserver_7();
		NullCheck(L_79);
		uint32_t L_80 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_79, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_81 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)L_80);
		V_16 = L_81;
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		V_18 = 0;
		goto IL_0250;
	}

IL_0212:
	{
		// handMeshVertices[i] = vertexAndNormals[i].Position.ToUnityVector3();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_82 = V_15;
		int32_t L_83 = V_18;
		HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* L_84 = V_10;
		int32_t L_85 = V_18;
		NullCheck(L_84);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_86 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_85)))->get_Position_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_87 = SystemNumericsExtensions_ToUnityVector3_m3A8EF68BE13E5F1F59C14486C9300D0F08046761(L_86, /*hidden argument*/NULL);
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_87);
		// handMeshNormals[i] = vertexAndNormals[i].Normal.ToUnityVector3();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_88 = V_16;
		int32_t L_89 = V_18;
		HandMeshVertexU5BU5D_tDB45C4032E93E7E4151597D02CE340FFAAC2F7AE* L_90 = V_10;
		int32_t L_91 = V_18;
		NullCheck(L_90);
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_92 = ((L_90)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_91)))->get_Normal_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = SystemNumericsExtensions_ToUnityVector3_m3A8EF68BE13E5F1F59C14486C9300D0F08046761(L_92, /*hidden argument*/NULL);
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 )L_93);
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_94 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0250:
	{
		// for (int i = 0; i < handMeshObserver.VertexCount; i++)
		int32_t L_95 = V_18;
		HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_96 = __this->get_handMeshObserver_7();
		NullCheck(L_96);
		uint32_t L_97 = HandMeshObserver_get_VertexCount_m5BF946FC59A9C0E25F545DFEA8C00D6285F4AABC(L_96, /*hidden argument*/NULL);
		if ((((int64_t)(((int64_t)((int64_t)L_95)))) < ((int64_t)(((int64_t)((uint64_t)L_97))))))
		{
			goto IL_0212;
		}
	}
	{
		// HandMeshInfo handMeshInfo = new HandMeshInfo
		// {
		//     vertices = handMeshVertices,
		//     normals = handMeshNormals,
		//     triangles = handMeshTriangleIndices,
		//     uvs = handMeshUVs,
		//     position = translation.ToUnityVector3(),
		//     rotation = rotation.ToUnityQuaternion()
		// };
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_98 = (HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 *)il2cpp_codegen_object_new(HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473_il2cpp_TypeInfo_var);
		HandMeshInfo__ctor_mE14C2FFE75EFE5AF846B2EDFD867B39FEACB956E(L_98, /*hidden argument*/NULL);
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_99 = L_98;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_100 = V_15;
		NullCheck(L_99);
		L_99->set_vertices_0(L_100);
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_101 = L_99;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_102 = V_16;
		NullCheck(L_101);
		L_101->set_normals_2(L_102);
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_103 = L_101;
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_104 = __this->get_handMeshTriangleIndices_8();
		NullCheck(L_103);
		L_103->set_triangles_1(L_104);
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_105 = L_103;
		Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* L_106 = __this->get_handMeshUVs_6();
		NullCheck(L_105);
		L_105->set_uvs_3(L_106);
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_107 = L_105;
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_108 = V_14;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109 = SystemNumericsExtensions_ToUnityVector3_m3A8EF68BE13E5F1F59C14486C9300D0F08046761(L_108, /*hidden argument*/NULL);
		NullCheck(L_107);
		L_107->set_position_4(L_109);
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_110 = L_107;
		Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  L_111 = V_13;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_112 = SystemNumericsExtensions_ToUnityQuaternion_m46E85116F374D8ABBF6F543476B533AA4248C233(L_111, /*hidden argument*/NULL);
		NullCheck(L_110);
		L_110->set_rotation_5(L_112);
		V_17 = L_110;
		// CoreServices.InputSystem?.RaiseHandMeshUpdated(inputSource, handedness, handMeshInfo);
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_tCE2B97F97A327FD582D9B9D76FEBBBC9C8F4FEC9_il2cpp_TypeInfo_var);
		RuntimeObject* L_113 = CoreServices_get_InputSystem_m83C181137C97C2C648104C5150676E0AFE28FD1D(/*hidden argument*/NULL);
		RuntimeObject* L_114 = L_113;
		G_B30_0 = L_114;
		if (L_114)
		{
			G_B31_0 = L_114;
			goto IL_02b4;
		}
	}
	{
		return;
	}

IL_02b4:
	{
		RuntimeObject* L_115 = __this->get_inputSource_0();
		uint8_t L_116 = __this->get_handedness_1();
		HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * L_117 = V_17;
		NullCheck(G_B31_0);
		InterfaceActionInvoker3< RuntimeObject*, uint8_t, HandMeshInfo_t47A149B2175A6CC52631EDDE2726773C063B4473 * >::Invoke(63 /* System.Void Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::RaiseHandMeshUpdated(Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Input.HandMeshInfo) */, IMixedRealityInputSystem_tAA8B5FC6B371B00E381A7DC2F8EF8739D507FFB7_il2cpp_TypeInfo_var, G_B31_0, L_115, L_116, L_117);
	}

IL_02c7:
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
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_MoveNext_m0E55366FD965EB724E1FE65ED372198F64B44EE4 (U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSetHandMeshObserverU3Ed__17_MoveNext_m0E55366FD965EB724E1FE65ED372198F64B44EE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * V_1 = NULL;
	HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * V_2 = NULL;
	TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0050;
			}
		}

IL_0011:
		{
			// handMeshObserver = await sourceState.Source.TryCreateHandMeshObserverAsync();
			SpatialInteractionSourceState_tCDB5A5BBF75A0CBCAAB79AFB468FF51B77921384 * L_3 = __this->get_sourceState_2();
			NullCheck(L_3);
			SpatialInteractionSource_tEF85A5FCAF63AF21DEADC6A46CA8F919861745BA * L_4 = SpatialInteractionSourceState_get_Source_m4869A5CAE87869961CC4C7322D71008B42C3E779(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			RuntimeObject* L_5 = SpatialInteractionSource_TryCreateHandMeshObserverAsync_m579BCF683A9AF55D46D09730F4AD40670EFF1835(L_4, /*hidden argument*/NULL);
			TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  L_6 = WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_m3CB00592C57B07D70E59409ED7C56788772F643C(L_5, /*hidden argument*/WindowsRuntimeSystemExtensions_GetAwaiter_TisHandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622_m3CB00592C57B07D70E59409ED7C56788772F643C_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m80375EEADEA92FBD234AB344CBC0652692A564DE((TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m80375EEADEA92FBD234AB344CBC0652692A564DE_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_006c;
			}
		}

IL_0030:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  L_9 = V_3;
			__this->set_U3CU3Eu__1_4(L_9);
			AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_m5281D4BA7BE6E2820997865978210D3EA97841E2((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_10, (TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 *)(&V_3), (U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361_TisU3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5_m5281D4BA7BE6E2820997865978210D3EA97841E2_RuntimeMethod_var);
			goto IL_00a9;
		}

IL_0050:
		{
			TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361  L_11 = __this->get_U3CU3Eu__1_4();
			V_3 = L_11;
			TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 * L_12 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_006c:
		{
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_14 = TaskAwaiter_1_GetResult_m51B30360D42BD29CB3C342FB939F070931D2E72D((TaskAwaiter_1_tC94F98087FFFDA77D6E73C8A4D4F6CE3FDD1E361 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m51B30360D42BD29CB3C342FB939F070931D2E72D_RuntimeMethod_var);
			V_2 = L_14;
			WindowsMixedRealityArticulatedHandDefinition_t9A61F66AD56C45F97A5D910C534C023687CDDAD5 * L_15 = V_1;
			HandMeshObserver_t709681ED43D6E9586D3C63A3FCCC327CA1DA7622 * L_16 = V_2;
			NullCheck(L_15);
			L_15->set_handMeshObserver_7(L_16);
			goto IL_0096;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_007d;
		throw e;
	}

CATCH_007d:
	{ // begin catch(System.Exception)
		V_4 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_17 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_18 = V_4;
		AsyncVoidMethodBuilder_SetException_mA7D834CA1ECA91D65074D7608AADA2E2A9533136((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_17, L_18, /*hidden argument*/NULL);
		goto IL_00a9;
	} // end catch (depth: 1)

IL_0096:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_19 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_mFF6028CDDC809252656354DC1714B4EB5E40A625((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_19, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__17_MoveNext_m0E55366FD965EB724E1FE65ED372198F64B44EE4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__17_MoveNext_m0E55366FD965EB724E1FE65ED372198F64B44EE4(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityArticulatedHandDefinition_<SetHandMeshObserver>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m682E42F6F916A11918D099C86B1F0F1A46C44466 (U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_mF3AEE42ED8474F11A5521D94271E884CF99E65B3((AsyncVoidMethodBuilder_t44E3C9B52B019BB5BDCC0E1BB83188B536161CFF *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m682E42F6F916A11918D099C86B1F0F1A46C44466_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 * _thisAdjusted = reinterpret_cast<U3CSetHandMeshObserverU3Ed__17_t29EFA7A198CD9E504CEF9DD1C191A80FA4B4C2B5 *>(__this + _offset);
	U3CSetHandMeshObserverU3Ed__17_SetStateMachine_m682E42F6F916A11918D099C86B1F0F1A46C44466(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_RenderFromPVCameraForMixedRealityCapture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mEC287DD2FEFA42A0C8532A1BA5D0BA67D2935CBA (WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m285A218CFE5C0B1732BC92203140DEB88DB03C6F (WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityCameraSettingsProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityCameraSettingsProfile__ctor_m614F94C96253777F61F23D6ACB0DCC4EFC89CE11 (WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * __this, const RuntimeMethod* method)
{
	{
		BaseCameraSettingsProfile__ctor_mA3660897C968B789D009880007D2A97BB47C4FD1(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::get_ReprojectionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityReprojectionUpdater_get_ReprojectionMethod_m6BCF934833277146447F6CF2481B77B56610D355 (WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = __this->get_U3CReprojectionMethodU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::set_ReprojectionMethod(Microsoft.MixedReality.Toolkit.WindowsMixedReality.HolographicDepthReprojectionMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m17E7474D8BB1E8260BCCAAA8C562EB3358D33825 (WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityReprojectionUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater__ctor_m2B48EFEAEF1825B1C82796C11CA68D7E74CBB068 (WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_UtilitiesProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::set_UtilitiesProvider(Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities_set_UtilitiesProvider_m0CBFF81C453E2778EFA413A6BE48EF04C81293C7 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_set_UtilitiesProvider_m0CBFF81C453E2778EFA413A6BE48EF04C81293C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		RuntimeObject* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0(L_0);
		return;
	}
}
// Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_SpatialCoordinateSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m7CA59ABA995070CFE58B994568AA48CBFD7E41AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_SpatialCoordinateSystem_m7CA59ABA995070CFE58B994568AA48CBFD7E41AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (UtilitiesProvider != null)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0042;
		}
	}
	{
		// IntPtr newSpatialCoordinateSystemPtr = UtilitiesProvider.ISpatialCoordinateSystemPtr;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(0 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_ISpatialCoordinateSystemPtr() */, IWindowsMixedRealityUtilitiesProvider_t1562912BAC29CA290923537734E12F2BC84DB999_il2cpp_TypeInfo_var, L_1);
		V_0 = (intptr_t)L_2;
		// if (newSpatialCoordinateSystemPtr != currentSpatialCoordinateSystemPtr && newSpatialCoordinateSystemPtr != IntPtr.Zero)
		intptr_t L_3 = V_0;
		intptr_t L_4 = ((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->get_currentSpatialCoordinateSystemPtr_1();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		intptr_t L_6 = V_0;
		bool L_7 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_6, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// spatialCoordinateSystem = Marshal.GetObjectForIUnknown(newSpatialCoordinateSystemPtr) as SpatialCoordinateSystem;
		intptr_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_2(((SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 *)IsInstSealed((RuntimeObject*)L_9, SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658_il2cpp_TypeInfo_var)));
		// currentSpatialCoordinateSystemPtr = newSpatialCoordinateSystemPtr;
		intptr_t L_10 = V_0;
		((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_1((intptr_t)L_10);
	}

IL_0042:
	{
		// return spatialCoordinateSystem;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 * L_11 = ((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->get_spatialCoordinateSystem_2();
		return L_11;
	}
}
// Windows.Graphics.Holographic.HolographicFrame Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::get_CurrentHolographicFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 * WindowsMixedRealityUtilities_get_CurrentHolographicFrame_m97A20D39AA1AE8E5E79A8C39F440FDAF49A854F6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_CurrentHolographicFrame_m97A20D39AA1AE8E5E79A8C39F440FDAF49A854F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UtilitiesProvider == null || UtilitiesProvider.IHolographicFramePtr == IntPtr.Zero)
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_inline(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		intptr_t L_2 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_t1562912BAC29CA290923537734E12F2BC84DB999_il2cpp_TypeInfo_var, L_1);
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_001d:
	{
		// return null;
		return (HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 *)NULL;
	}

IL_001f:
	{
		// return Marshal.GetObjectForIUnknown(UtilitiesProvider.IHolographicFramePtr) as HolographicFrame;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		intptr_t L_5 = InterfaceFuncInvoker0< intptr_t >::Invoke(1 /* System.IntPtr Microsoft.MixedReality.Toolkit.WindowsMixedReality.IWindowsMixedRealityUtilitiesProvider::get_IHolographicFramePtr() */, IWindowsMixedRealityUtilitiesProvider_t1562912BAC29CA290923537734E12F2BC84DB999_il2cpp_TypeInfo_var, L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = Marshal_GetObjectForIUnknown_m4ABB91E8D7A1F5B5F9341FCBCD7100A4DC5E1DE2((intptr_t)L_5, /*hidden argument*/NULL);
		return ((HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543 *)IsInstSealed((RuntimeObject*)L_6, HolographicFrame_t79D5E1E3B66F6DBB2CC7BA49F7CEFA7C3F3CE543_il2cpp_TypeInfo_var));
	}
}
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemVector3ToUnity(System.Numerics.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WindowsMixedRealityUtilities_SystemVector3ToUnity_m857D5DA07A88C05DAFF463BF81728E92FDE0A48E (Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___vector0, const RuntimeMethod* method)
{
	{
		// return vector.ToUnityVector3();
		Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  L_0 = ___vector0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = SystemNumericsExtensions_ToUnityVector3_m3A8EF68BE13E5F1F59C14486C9300D0F08046761(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::SystemQuaternionToUnity(System.Numerics.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  WindowsMixedRealityUtilities_SystemQuaternionToUnity_mA759229C619A4EB3E734A142E2428360BBB6FC2B (Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___quaternion0, const RuntimeMethod* method)
{
	{
		// return quaternion.ToUnityQuaternion();
		Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  L_0 = ___quaternion0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = SystemNumericsExtensions_ToUnityQuaternion_m46E85116F374D8ABBF6F543476B533AA4248C233(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.WindowsMixedReality.WindowsMixedRealityUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowsMixedRealityUtilities__cctor_m6BC44A408A4A70E9D2CAFED220963C7B3B927B55 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities__cctor_m6BC44A408A4A70E9D2CAFED220963C7B3B927B55_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->set_U3CUtilitiesProviderU3Ek__BackingField_0((RuntimeObject*)NULL);
		// private static IntPtr currentSpatialCoordinateSystemPtr = IntPtr.Zero;
		((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->set_currentSpatialCoordinateSystemPtr_1((intptr_t)(0));
		// private static SpatialCoordinateSystem spatialCoordinateSystem = null;
		((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->set_spatialCoordinateSystem_2((SpatialCoordinateSystem_t463C6F7766AF0ABD1822EF5FF8B7D70DE54B1658 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityHandRecorder_get_ReferenceJoint_m3ED120908E91FCF069A2FA9BD2D9C0B3031CC498_inline (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint ReferenceJoint { get; set; } = TrackedHandJoint.IndexTip;
		int32_t L_0 = __this->get_U3CReferenceJointU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityPose_get_Position_mA24C149CFCC87AE4C94A927052D31FE856765318_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 Position { get { return position; } set { position = value; } }
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_position_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WindowsMixedRealityHandRecorder_get_OutputFileName_mD9C60DEDFEBA39AE63B7F954DC9BFFE730C959D0_inline (WindowsMixedRealityHandRecorder_tBB457D127249740E39CE54707C77E46D95A0BAAF * __this, const RuntimeMethod* method)
{
	{
		// public string OutputFileName { get; } = "ArticulatedHandPose";
		String_t* L_0 = __this->get_U3COutputFileNameU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WindowsMixedRealityCameraSettingsProfile_get_RenderFromPVCameraForMixedRealityCapture_mEC287DD2FEFA42A0C8532A1BA5D0BA67D2935CBA_inline (WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * __this, const RuntimeMethod* method)
{
	{
		// public bool RenderFromPVCameraForMixedRealityCapture => renderFromPVCameraForMixedRealityCapture;
		bool L_0 = __this->get_renderFromPVCameraForMixedRealityCapture_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WindowsMixedRealityCameraSettingsProfile_get_ReprojectionMethod_m285A218CFE5C0B1732BC92203140DEB88DB03C6F_inline (WindowsMixedRealityCameraSettingsProfile_t48937F9FF68FCA516FA72F0761B8DD640BB127F8 * __this, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod => reprojectionMethod;
		int32_t L_0 = __this->get_reprojectionMethod_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WindowsMixedRealityReprojectionUpdater_set_ReprojectionMethod_m17E7474D8BB1E8260BCCAAA8C562EB3358D33825_inline (WindowsMixedRealityReprojectionUpdater_t80AB82D0B18034871BEF4D8A2194D01EA45B4EDF * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public HolographicDepthReprojectionMethod ReprojectionMethod { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CReprojectionMethodU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603AD_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityPose_get_ZeroIdentity_m84B3EF5706960B89FA1ABE354C377C3ABD9603ADMicrosoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MixedRealityPose ZeroIdentity { get; } = new MixedRealityPose(Vector3.zero, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var);
		MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148  L_0 = ((MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_StaticFields*)il2cpp_codegen_static_fields_for(MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148_il2cpp_TypeInfo_var))->get_U3CZeroIdentityU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityPose_get_Rotation_mC33B3728AA49661EBD3CB4594F9D955F3B6F4723_inline (MixedRealityPose_t244D55491B07E2511AF67FE856B430109C716148 * __this, const RuntimeMethod* method)
{
	{
		// public Quaternion Rotation { get { return rotation; } set { rotation = value; } }
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_rotation_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  MixedRealityInteractionMapping_get_MixedRealityInputAction_m3D3CE48DAB3037F51AD53C0E124CEDD3CF579160_inline (MixedRealityInteractionMapping_tBD2EA2EF7FA85EE17A4BDA1AA167137B877D3C6F * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t6F8A3B7D40ADD670F8D6F08A378C13AFC715131E  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * MixedRealityInputSystemProfile_get_HandTrackingProfile_mDE81888B7849D35DDD54C89A7EE6AE8C2E5D6FF2_inline (MixedRealityInputSystemProfile_tEA912CF019C39C02C7DA8C2421A24105685D76B1 * __this, const RuntimeMethod* method)
{
	{
		// get { return handTrackingProfile; }
		MixedRealityHandTrackingProfile_tFB1824AB77D77B6DB0469184EFAEAA80186A6D60 * L_0 = __this->get_handTrackingProfile_19();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsMixedRealityUtilities_get_UtilitiesProvider_mAD515298D72AF567994A1225AA43DA407A0CA7E8Microsoft_MixedReality_Toolkit_Providers_WindowsMixedReality_Shared_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static IWindowsMixedRealityUtilitiesProvider UtilitiesProvider { get; set; } = null;
		IL2CPP_RUNTIME_CLASS_INIT(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_StaticFields*)il2cpp_codegen_static_fields_for(WindowsMixedRealityUtilities_t0C49D5419C624384CD47B2B64B383D2A78E047AD_il2cpp_TypeInfo_var))->get_U3CUtilitiesProviderU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA79CF586094D58C9CE6FAA71FE098110025842B4_gshared_inline (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
