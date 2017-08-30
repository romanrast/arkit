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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct Dictionary_2_t1671816866;
// UnityEngine.MeshCollider
struct MeshCollider_t22396122;
// UnityEngine.MeshFilter
struct MeshFilter_t424497278;
// UnityEngine.GameObject
struct GameObject_t3150723002;
// System.Void
struct Void_t21381191;
// System.Char[]
struct CharU5BU5D_t1097078358;
// UnityEngine.Light
struct Light_t1653406301;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t85436522;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t520252593;
// UnityEngine.Material
struct Material_t1026927369;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t773774222;
// UnityEngine.Texture2D
struct Texture2D_t2152568564;
// System.String
struct String_t;
// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t1732957623;
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t1665754851;
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t2691453143;
// UnityEngine.Transform
struct Transform_t905905532;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t2996583878;
// UnityEngine.Camera
struct Camera_t106676157;
// UnityEngine.Animation
struct Animation_t2787726586;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1893573524;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T2093859844_H
#define VALUETYPE_T2093859844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2093859844  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2093859844_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2093859844_marshaled_com
{
};
#endif // VALUETYPE_T2093859844_H
#ifndef UNITYARANCHORMANAGER_T2996583878_H
#define UNITYARANCHORMANAGER_T2996583878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorManager
struct  UnityARAnchorManager_t2996583878  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::planeAnchorMap
	Dictionary_2_t1671816866 * ___planeAnchorMap_0;

public:
	inline static int32_t get_offset_of_planeAnchorMap_0() { return static_cast<int32_t>(offsetof(UnityARAnchorManager_t2996583878, ___planeAnchorMap_0)); }
	inline Dictionary_2_t1671816866 * get_planeAnchorMap_0() const { return ___planeAnchorMap_0; }
	inline Dictionary_2_t1671816866 ** get_address_of_planeAnchorMap_0() { return &___planeAnchorMap_0; }
	inline void set_planeAnchorMap_0(Dictionary_2_t1671816866 * value)
	{
		___planeAnchorMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___planeAnchorMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORMANAGER_T2996583878_H
#ifndef UNITYARMATRIXOPS_T1928930283_H
#define UNITYARMATRIXOPS_T1928930283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrixOps
struct  UnityARMatrixOps_t1928930283  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIXOPS_T1928930283_H
#ifndef UNITYARUTILITY_T1200884429_H
#define UNITYARUTILITY_T1200884429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_t1200884429  : public RuntimeObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t22396122 * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t424497278 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_t1200884429, ___meshCollider_0)); }
	inline MeshCollider_t22396122 * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t22396122 ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t22396122 * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshCollider_0), value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_t1200884429, ___meshFilter_1)); }
	inline MeshFilter_t424497278 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t424497278 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t424497278 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilter_1), value);
	}
};

struct UnityARUtility_t1200884429_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_t3150723002 * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_t1200884429_StaticFields, ___planePrefab_2)); }
	inline GameObject_t3150723002 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t3150723002 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t3150723002 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUTILITY_T1200884429_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T1454088945_H
#define ENUM_T1454088945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1454088945  : public ValueType_t2093859844
{
public:

public:
};

struct Enum_t1454088945_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1097078358* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1454088945_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1097078358* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1097078358** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1097078358* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1454088945_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1454088945_marshaled_com
{
};
#endif // ENUM_T1454088945_H
#ifndef U24ARRAYTYPEU3D24_T528531708_H
#define U24ARRAYTYPEU3D24_T528531708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t528531708 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t528531708__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T528531708_H
#ifndef SCREENORIENTATION_T2067082354_H
#define SCREENORIENTATION_T2067082354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t2067082354 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScreenOrientation_t2067082354, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T2067082354_H
#ifndef OBJECT_T3678079957_H
#define OBJECT_T3678079957_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3678079957  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3678079957, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3678079957_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3678079957_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3678079957_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3678079957_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3678079957_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2696705279_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2696705279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t2696705279  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t2696705279_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t528531708  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0;

public:
	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t2696705279_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0)); }
	inline U24ArrayTypeU3D24_t528531708  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline U24ArrayTypeU3D24_t528531708 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(U24ArrayTypeU3D24_t528531708  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T2696705279_H
#ifndef COMPONENT_T4086741972_H
#define COMPONENT_T4086741972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t4086741972  : public Object_t3678079957
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T4086741972_H
#ifndef BEHAVIOUR_T1007437870_H
#define BEHAVIOUR_T1007437870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1007437870  : public Component_t4086741972
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1007437870_H
#ifndef MONOBEHAVIOUR_T669868244_H
#define MONOBEHAVIOUR_T669868244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t669868244  : public Behaviour_t1007437870
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T669868244_H
#ifndef UNITYARAMBIENT_T579313613_H
#define UNITYARAMBIENT_T579313613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAmbient
struct  UnityARAmbient_t579313613  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.Light UnityEngine.XR.iOS.UnityARAmbient::l
	Light_t1653406301 * ___l_2;

public:
	inline static int32_t get_offset_of_l_2() { return static_cast<int32_t>(offsetof(UnityARAmbient_t579313613, ___l_2)); }
	inline Light_t1653406301 * get_l_2() const { return ___l_2; }
	inline Light_t1653406301 ** get_address_of_l_2() { return &___l_2; }
	inline void set_l_2(Light_t1653406301 * value)
	{
		___l_2 = value;
		Il2CppCodeGenWriteBarrier((&___l_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARAMBIENT_T579313613_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T3703088173_H
#define UNITYPOINTCLOUDEXAMPLE_T3703088173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t3703088173  : public MonoBehaviour_t669868244
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_2;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t3150723002 * ___PointCloudPrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t85436522 * ___pointCloudObjects_4;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t520252593* ___m_PointCloudData_5;

public:
	inline static int32_t get_offset_of_numPointsToShow_2() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3703088173, ___numPointsToShow_2)); }
	inline uint32_t get_numPointsToShow_2() const { return ___numPointsToShow_2; }
	inline uint32_t* get_address_of_numPointsToShow_2() { return &___numPointsToShow_2; }
	inline void set_numPointsToShow_2(uint32_t value)
	{
		___numPointsToShow_2 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_3() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3703088173, ___PointCloudPrefab_3)); }
	inline GameObject_t3150723002 * get_PointCloudPrefab_3() const { return ___PointCloudPrefab_3; }
	inline GameObject_t3150723002 ** get_address_of_PointCloudPrefab_3() { return &___PointCloudPrefab_3; }
	inline void set_PointCloudPrefab_3(GameObject_t3150723002 * value)
	{
		___PointCloudPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_3), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3703088173, ___pointCloudObjects_4)); }
	inline List_1_t85436522 * get_pointCloudObjects_4() const { return ___pointCloudObjects_4; }
	inline List_1_t85436522 ** get_address_of_pointCloudObjects_4() { return &___pointCloudObjects_4; }
	inline void set_pointCloudObjects_4(List_1_t85436522 * value)
	{
		___pointCloudObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_4), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t3703088173, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t520252593* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t520252593** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t520252593* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T3703088173_H
#ifndef UNITYARVIDEO_T3612610609_H
#define UNITYARVIDEO_T3612610609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t3612610609  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t1026927369 * ___m_ClearMaterial_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t773774222 * ___m_VideoCommandBuffer_3;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t2152568564 * ____videoTextureY_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t2152568564 * ____videoTextureCbCr_5;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_6;
	// System.Single UnityEngine.XR.iOS.UnityARVideo::fTexCoordScale
	float ___fTexCoordScale_7;
	// UnityEngine.ScreenOrientation UnityEngine.XR.iOS.UnityARVideo::screenOrientation
	int32_t ___screenOrientation_8;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_2() { return static_cast<int32_t>(offsetof(UnityARVideo_t3612610609, ___m_ClearMaterial_2)); }
	inline Material_t1026927369 * get_m_ClearMaterial_2() const { return ___m_ClearMaterial_2; }
	inline Material_t1026927369 ** get_address_of_m_ClearMaterial_2() { return &___m_ClearMaterial_2; }
	inline void set_m_ClearMaterial_2(Material_t1026927369 * value)
	{
		___m_ClearMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClearMaterial_2), value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_3() { return static_cast<int32_t>(offsetof(UnityARVideo_t3612610609, ___m_VideoCommandBuffer_3)); }
	inline CommandBuffer_t773774222 * get_m_VideoCommandBuffer_3() const { return ___m_VideoCommandBuffer_3; }
	inline CommandBuffer_t773774222 ** get_address_of_m_VideoCommandBuffer_3() { return &___m_VideoCommandBuffer_3; }
	inline void set_m_VideoCommandBuffer_3(CommandBuffer_t773774222 * value)
	{
		___m_VideoCommandBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoCommandBuffer_3), value);
	}

	inline static int32_t get_offset_of__videoTextureY_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t3612610609, ____videoTextureY_4)); }
	inline Texture2D_t2152568564 * get__videoTextureY_4() const { return ____videoTextureY_4; }
	inline Texture2D_t2152568564 ** get_address_of__videoTextureY_4() { return &____videoTextureY_4; }
	inline void set__videoTextureY_4(Texture2D_t2152568564 * value)
	{
		____videoTextureY_4 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureY_4), value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t3612610609, ____videoTextureCbCr_5)); }
	inline Texture2D_t2152568564 * get__videoTextureCbCr_5() const { return ____videoTextureCbCr_5; }
	inline Texture2D_t2152568564 ** get_address_of__videoTextureCbCr_5() { return &____videoTextureCbCr_5; }
	inline void set__videoTextureCbCr_5(Texture2D_t2152568564 * value)
	{
		____videoTextureCbCr_5 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureCbCr_5), value);
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t3612610609, ___bCommandBufferInitialized_6)); }
	inline bool get_bCommandBufferInitialized_6() const { return ___bCommandBufferInitialized_6; }
	inline bool* get_address_of_bCommandBufferInitialized_6() { return &___bCommandBufferInitialized_6; }
	inline void set_bCommandBufferInitialized_6(bool value)
	{
		___bCommandBufferInitialized_6 = value;
	}

	inline static int32_t get_offset_of_fTexCoordScale_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t3612610609, ___fTexCoordScale_7)); }
	inline float get_fTexCoordScale_7() const { return ___fTexCoordScale_7; }
	inline float* get_address_of_fTexCoordScale_7() { return &___fTexCoordScale_7; }
	inline void set_fTexCoordScale_7(float value)
	{
		___fTexCoordScale_7 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_8() { return static_cast<int32_t>(offsetof(UnityARVideo_t3612610609, ___screenOrientation_8)); }
	inline int32_t get_screenOrientation_8() const { return ___screenOrientation_8; }
	inline int32_t* get_address_of_screenOrientation_8() { return &___screenOrientation_8; }
	inline void set_screenOrientation_8(int32_t value)
	{
		___screenOrientation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEO_T3612610609_H
#ifndef UNITYARUSERANCHORCOMPONENT_T4199176376_H
#define UNITYARUSERANCHORCOMPONENT_T4199176376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t4199176376  : public MonoBehaviour_t669868244
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_2;

public:
	inline static int32_t get_offset_of_m_AnchorId_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t4199176376, ___m_AnchorId_2)); }
	inline String_t* get_m_AnchorId_2() const { return ___m_AnchorId_2; }
	inline String_t** get_address_of_m_AnchorId_2() { return &___m_AnchorId_2; }
	inline void set_m_AnchorId_2(String_t* value)
	{
		___m_AnchorId_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnchorId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORCOMPONENT_T4199176376_H
#ifndef UNITYARKITCONTROL_T724601301_H
#define UNITYARKITCONTROL_T724601301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARKitControl
struct  UnityARKitControl_t724601301  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.XR.iOS.UnityARSessionRunOption[] UnityEngine.XR.iOS.UnityARKitControl::runOptions
	UnityARSessionRunOptionU5BU5D_t1732957623* ___runOptions_2;
	// UnityEngine.XR.iOS.UnityARAlignment[] UnityEngine.XR.iOS.UnityARKitControl::alignmentOptions
	UnityARAlignmentU5BU5D_t1665754851* ___alignmentOptions_3;
	// UnityEngine.XR.iOS.UnityARPlaneDetection[] UnityEngine.XR.iOS.UnityARKitControl::planeOptions
	UnityARPlaneDetectionU5BU5D_t2691453143* ___planeOptions_4;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentOptionIndex
	int32_t ___currentOptionIndex_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentAlignmentIndex
	int32_t ___currentAlignmentIndex_6;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentPlaneIndex
	int32_t ___currentPlaneIndex_7;

public:
	inline static int32_t get_offset_of_runOptions_2() { return static_cast<int32_t>(offsetof(UnityARKitControl_t724601301, ___runOptions_2)); }
	inline UnityARSessionRunOptionU5BU5D_t1732957623* get_runOptions_2() const { return ___runOptions_2; }
	inline UnityARSessionRunOptionU5BU5D_t1732957623** get_address_of_runOptions_2() { return &___runOptions_2; }
	inline void set_runOptions_2(UnityARSessionRunOptionU5BU5D_t1732957623* value)
	{
		___runOptions_2 = value;
		Il2CppCodeGenWriteBarrier((&___runOptions_2), value);
	}

	inline static int32_t get_offset_of_alignmentOptions_3() { return static_cast<int32_t>(offsetof(UnityARKitControl_t724601301, ___alignmentOptions_3)); }
	inline UnityARAlignmentU5BU5D_t1665754851* get_alignmentOptions_3() const { return ___alignmentOptions_3; }
	inline UnityARAlignmentU5BU5D_t1665754851** get_address_of_alignmentOptions_3() { return &___alignmentOptions_3; }
	inline void set_alignmentOptions_3(UnityARAlignmentU5BU5D_t1665754851* value)
	{
		___alignmentOptions_3 = value;
		Il2CppCodeGenWriteBarrier((&___alignmentOptions_3), value);
	}

	inline static int32_t get_offset_of_planeOptions_4() { return static_cast<int32_t>(offsetof(UnityARKitControl_t724601301, ___planeOptions_4)); }
	inline UnityARPlaneDetectionU5BU5D_t2691453143* get_planeOptions_4() const { return ___planeOptions_4; }
	inline UnityARPlaneDetectionU5BU5D_t2691453143** get_address_of_planeOptions_4() { return &___planeOptions_4; }
	inline void set_planeOptions_4(UnityARPlaneDetectionU5BU5D_t2691453143* value)
	{
		___planeOptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeOptions_4), value);
	}

	inline static int32_t get_offset_of_currentOptionIndex_5() { return static_cast<int32_t>(offsetof(UnityARKitControl_t724601301, ___currentOptionIndex_5)); }
	inline int32_t get_currentOptionIndex_5() const { return ___currentOptionIndex_5; }
	inline int32_t* get_address_of_currentOptionIndex_5() { return &___currentOptionIndex_5; }
	inline void set_currentOptionIndex_5(int32_t value)
	{
		___currentOptionIndex_5 = value;
	}

	inline static int32_t get_offset_of_currentAlignmentIndex_6() { return static_cast<int32_t>(offsetof(UnityARKitControl_t724601301, ___currentAlignmentIndex_6)); }
	inline int32_t get_currentAlignmentIndex_6() const { return ___currentAlignmentIndex_6; }
	inline int32_t* get_address_of_currentAlignmentIndex_6() { return &___currentAlignmentIndex_6; }
	inline void set_currentAlignmentIndex_6(int32_t value)
	{
		___currentAlignmentIndex_6 = value;
	}

	inline static int32_t get_offset_of_currentPlaneIndex_7() { return static_cast<int32_t>(offsetof(UnityARKitControl_t724601301, ___currentPlaneIndex_7)); }
	inline int32_t get_currentPlaneIndex_7() const { return ___currentPlaneIndex_7; }
	inline int32_t* get_address_of_currentPlaneIndex_7() { return &___currentPlaneIndex_7; }
	inline void set_currentPlaneIndex_7(int32_t value)
	{
		___currentPlaneIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARKITCONTROL_T724601301_H
#ifndef UNITYARHITTESTEXAMPLE_T1836745931_H
#define UNITYARHITTESTEXAMPLE_T1836745931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t1836745931  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t905905532 * ___m_HitTransform_2;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t1836745931, ___m_HitTransform_2)); }
	inline Transform_t905905532 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t905905532 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t905905532 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARHITTESTEXAMPLE_T1836745931_H
#ifndef UNITYARGENERATEPLANE_T445515891_H
#define UNITYARGENERATEPLANE_T445515891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARGeneratePlane
struct  UnityARGeneratePlane_t445515891  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARGeneratePlane::planePrefab
	GameObject_t3150723002 * ___planePrefab_2;
	// UnityEngine.XR.iOS.UnityARAnchorManager UnityEngine.XR.iOS.UnityARGeneratePlane::unityARAnchorManager
	UnityARAnchorManager_t2996583878 * ___unityARAnchorManager_3;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t445515891, ___planePrefab_2)); }
	inline GameObject_t3150723002 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t3150723002 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t3150723002 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}

	inline static int32_t get_offset_of_unityARAnchorManager_3() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t445515891, ___unityARAnchorManager_3)); }
	inline UnityARAnchorManager_t2996583878 * get_unityARAnchorManager_3() const { return ___unityARAnchorManager_3; }
	inline UnityARAnchorManager_t2996583878 ** get_address_of_unityARAnchorManager_3() { return &___unityARAnchorManager_3; }
	inline void set_unityARAnchorManager_3(UnityARAnchorManager_t2996583878 * value)
	{
		___unityARAnchorManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___unityARAnchorManager_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARGENERATEPLANE_T445515891_H
#ifndef UNITYARCAMERANEARFAR_T699633173_H
#define UNITYARCAMERANEARFAR_T699633173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraNearFar
struct  UnityARCameraNearFar_t699633173  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.Camera UnityARCameraNearFar::attachedCamera
	Camera_t106676157 * ___attachedCamera_2;
	// System.Single UnityARCameraNearFar::currentNearZ
	float ___currentNearZ_3;
	// System.Single UnityARCameraNearFar::currentFarZ
	float ___currentFarZ_4;

public:
	inline static int32_t get_offset_of_attachedCamera_2() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t699633173, ___attachedCamera_2)); }
	inline Camera_t106676157 * get_attachedCamera_2() const { return ___attachedCamera_2; }
	inline Camera_t106676157 ** get_address_of_attachedCamera_2() { return &___attachedCamera_2; }
	inline void set_attachedCamera_2(Camera_t106676157 * value)
	{
		___attachedCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&___attachedCamera_2), value);
	}

	inline static int32_t get_offset_of_currentNearZ_3() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t699633173, ___currentNearZ_3)); }
	inline float get_currentNearZ_3() const { return ___currentNearZ_3; }
	inline float* get_address_of_currentNearZ_3() { return &___currentNearZ_3; }
	inline void set_currentNearZ_3(float value)
	{
		___currentNearZ_3 = value;
	}

	inline static int32_t get_offset_of_currentFarZ_4() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t699633173, ___currentFarZ_4)); }
	inline float get_currentFarZ_4() const { return ___currentFarZ_4; }
	inline float* get_address_of_currentFarZ_4() { return &___currentFarZ_4; }
	inline void set_currentFarZ_4(float value)
	{
		___currentFarZ_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERANEARFAR_T699633173_H
#ifndef ZOMBIECONTROL_T88266174_H
#define ZOMBIECONTROL_T88266174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieControl
struct  ZombieControl_t88266174  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.Animation ZombieControl::animation
	Animation_t2787726586 * ___animation_2;
	// System.Boolean ZombieControl::shouldMove
	bool ___shouldMove_3;

public:
	inline static int32_t get_offset_of_animation_2() { return static_cast<int32_t>(offsetof(ZombieControl_t88266174, ___animation_2)); }
	inline Animation_t2787726586 * get_animation_2() const { return ___animation_2; }
	inline Animation_t2787726586 ** get_address_of_animation_2() { return &___animation_2; }
	inline void set_animation_2(Animation_t2787726586 * value)
	{
		___animation_2 = value;
		Il2CppCodeGenWriteBarrier((&___animation_2), value);
	}

	inline static int32_t get_offset_of_shouldMove_3() { return static_cast<int32_t>(offsetof(ZombieControl_t88266174, ___shouldMove_3)); }
	inline bool get_shouldMove_3() const { return ___shouldMove_3; }
	inline bool* get_address_of_shouldMove_3() { return &___shouldMove_3; }
	inline void set_shouldMove_3(bool value)
	{
		___shouldMove_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ZOMBIECONTROL_T88266174_H
#ifndef UNITYARCAMERAMANAGER_T179908048_H
#define UNITYARCAMERAMANAGER_T179908048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t179908048  : public MonoBehaviour_t669868244
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t106676157 * ___m_camera_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t1893573524 * ___m_session_3;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t1026927369 * ___savedClearMaterial_4;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t179908048, ___m_camera_2)); }
	inline Camera_t106676157 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t106676157 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t106676157 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t179908048, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t1893573524 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t1893573524 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t1893573524 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t179908048, ___savedClearMaterial_4)); }
	inline Material_t1026927369 * get_savedClearMaterial_4() const { return ___savedClearMaterial_4; }
	inline Material_t1026927369 ** get_address_of_savedClearMaterial_4() { return &___savedClearMaterial_4; }
	inline void set_savedClearMaterial_4(Material_t1026927369 * value)
	{
		___savedClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERAMANAGER_T179908048_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (UnityARCameraManager_t179908048), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[3] = 
{
	UnityARCameraManager_t179908048::get_offset_of_m_camera_2(),
	UnityARCameraManager_t179908048::get_offset_of_m_session_3(),
	UnityARCameraManager_t179908048::get_offset_of_savedClearMaterial_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (UnityARCameraNearFar_t699633173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1901[3] = 
{
	UnityARCameraNearFar_t699633173::get_offset_of_attachedCamera_2(),
	UnityARCameraNearFar_t699633173::get_offset_of_currentNearZ_3(),
	UnityARCameraNearFar_t699633173::get_offset_of_currentFarZ_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (UnityARGeneratePlane_t445515891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1902[2] = 
{
	UnityARGeneratePlane_t445515891::get_offset_of_planePrefab_2(),
	UnityARGeneratePlane_t445515891::get_offset_of_unityARAnchorManager_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (UnityARHitTestExample_t1836745931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[1] = 
{
	UnityARHitTestExample_t1836745931::get_offset_of_m_HitTransform_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (UnityARKitControl_t724601301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[6] = 
{
	UnityARKitControl_t724601301::get_offset_of_runOptions_2(),
	UnityARKitControl_t724601301::get_offset_of_alignmentOptions_3(),
	UnityARKitControl_t724601301::get_offset_of_planeOptions_4(),
	UnityARKitControl_t724601301::get_offset_of_currentOptionIndex_5(),
	UnityARKitControl_t724601301::get_offset_of_currentAlignmentIndex_6(),
	UnityARKitControl_t724601301::get_offset_of_currentPlaneIndex_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (UnityARUserAnchorComponent_t4199176376), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[1] = 
{
	UnityARUserAnchorComponent_t4199176376::get_offset_of_m_AnchorId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (UnityARVideo_t3612610609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[7] = 
{
	UnityARVideo_t3612610609::get_offset_of_m_ClearMaterial_2(),
	UnityARVideo_t3612610609::get_offset_of_m_VideoCommandBuffer_3(),
	UnityARVideo_t3612610609::get_offset_of__videoTextureY_4(),
	UnityARVideo_t3612610609::get_offset_of__videoTextureCbCr_5(),
	UnityARVideo_t3612610609::get_offset_of_bCommandBufferInitialized_6(),
	UnityARVideo_t3612610609::get_offset_of_fTexCoordScale_7(),
	UnityARVideo_t3612610609::get_offset_of_screenOrientation_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (UnityPointCloudExample_t3703088173), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1907[4] = 
{
	UnityPointCloudExample_t3703088173::get_offset_of_numPointsToShow_2(),
	UnityPointCloudExample_t3703088173::get_offset_of_PointCloudPrefab_3(),
	UnityPointCloudExample_t3703088173::get_offset_of_pointCloudObjects_4(),
	UnityPointCloudExample_t3703088173::get_offset_of_m_PointCloudData_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (UnityARAnchorManager_t2996583878), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[1] = 
{
	UnityARAnchorManager_t2996583878::get_offset_of_planeAnchorMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (UnityARMatrixOps_t1928930283), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (UnityARUtility_t1200884429), -1, sizeof(UnityARUtility_t1200884429_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1910[3] = 
{
	UnityARUtility_t1200884429::get_offset_of_meshCollider_0(),
	UnityARUtility_t1200884429::get_offset_of_meshFilter_1(),
	UnityARUtility_t1200884429_StaticFields::get_offset_of_planePrefab_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (UnityARAmbient_t579313613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[1] = 
{
	UnityARAmbient_t579313613::get_offset_of_l_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (ZombieControl_t88266174), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1912[2] = 
{
	ZombieControl_t88266174::get_offset_of_animation_2(),
	ZombieControl_t88266174::get_offset_of_shouldMove_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (U3CPrivateImplementationDetailsU3E_t2696705279), -1, sizeof(U3CPrivateImplementationDetailsU3E_t2696705279_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1913[1] = 
{
	U3CPrivateImplementationDetailsU3E_t2696705279_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (U24ArrayTypeU3D24_t528531708)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t528531708 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
