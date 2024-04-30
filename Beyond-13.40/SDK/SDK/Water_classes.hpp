#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Water

#include "Basic.hpp"

#include "Water_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Niagara_classes.hpp"
#include "AIModule_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Water.OceanBoxCollisionComponent
// 0x0000 (0x0460 - 0x0460)
class UOceanBoxCollisionComponent final : public UBoxComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanBoxCollisionComponent">();
	}
	static class UOceanBoxCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOceanBoxCollisionComponent>();
	}
};

// Class Water.BuoyancyComponent
// 0x00C8 (0x0178 - 0x00B0)
class UBuoyancyComponent : public UActorComponent
{
public:
	TArray<struct FSphericalPontoon>              Pontoons;                                          // 0x00B0(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnEnteredWaterDelegate;                            // 0x00C0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnExitedWaterDelegate;                             // 0x00D0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class AWaterBody*>                     CurrentWaterBodies;                                // 0x00E0(0x0010)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BuoyancyCoefficient;                               // 0x00F0(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BuoyancyDamp;                                      // 0x00F4(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BuoyancyDamp2;                                     // 0x00F8(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BuoyancyRampMinVelocity;                           // 0x00FC(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BuoyancyRampMaxVelocity;                           // 0x0100(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         BuoyancyRampMax;                                   // 0x0104(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxBuoyantForce;                                   // 0x0108(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         WaterShorePushFactor;                              // 0x010C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         WaterVelocityStrength;                             // 0x0110(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxWaterForce;                                     // 0x0114(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3F58[0x60];                                    // 0x0118(0x0060)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnPontoonEnteredWater(const struct FSphericalPontoon& Pontoon);
	void OnPontoonExitedWater(const struct FSphericalPontoon& Pontoon);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"BuoyancyComponent">();
	}
	static class UBuoyancyComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuoyancyComponent>();
	}
};

// Class Water.NiagaraWaterFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNiagaraWaterFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void SetWaterBody(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class AWaterBody* WaterBody);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraWaterFunctionLibrary">();
	}
	static class UNiagaraWaterFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraWaterFunctionLibrary>();
	}
};

// Class Water.EnvQueryTest_InsideWaterBody
// 0x0008 (0x0200 - 0x01F8)
class UEnvQueryTest_InsideWaterBody final : public UEnvQueryTest
{
public:
	bool                                          bIncludeWaves;                                     // 0x01F8(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSimpleWaves;                                      // 0x01F9(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIgnoreExclusionVolumes;                           // 0x01FA(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F59[0x5];                                     // 0x01FB(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EnvQueryTest_InsideWaterBody">();
	}
	static class UEnvQueryTest_InsideWaterBody* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEnvQueryTest_InsideWaterBody>();
	}
};

// Class Water.OceanCollisionComponent
// 0x0030 (0x0460 - 0x0430)
class UOceanCollisionComponent final : public UPrimitiveComponent
{
public:
	class UBodySetup*                             CachedBodySetup;                                   // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3F5A[0x28];                                    // 0x0438(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanCollisionComponent">();
	}
	static class UOceanCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOceanCollisionComponent>();
	}
};

// Class Water.LakeCollisionComponent
// 0x0020 (0x0450 - 0x0430)
class ULakeCollisionComponent final : public UPrimitiveComponent
{
public:
	class UBodySetup*                             CachedBodySetup;                                   // 0x0430(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, NonPIEDuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                                BoxExtent;                                         // 0x0438(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3F5B[0xC];                                     // 0x0444(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LakeCollisionComponent">();
	}
	static class ULakeCollisionComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULakeCollisionComponent>();
	}
};

// Class Water.NiagaraDataInterfaceWater
// 0x0008 (0x0038 - 0x0030)
class UNiagaraDataInterfaceWater final : public UNiagaraDataInterface
{
public:
	class AWaterBody*                             SourceBody;                                        // 0x0030(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NiagaraDataInterfaceWater">();
	}
	static class UNiagaraDataInterfaceWater* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNiagaraDataInterfaceWater>();
	}
};

// Class Water.WaterBodyGenerator
// 0x0000 (0x0028 - 0x0028)
class UWaterBodyGenerator : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyGenerator">();
	}
	static class UWaterBodyGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterBodyGenerator>();
	}
};

// Class Water.RiverGenerator
// 0x0038 (0x0060 - 0x0028)
class URiverGenerator final : public UWaterBodyGenerator
{
public:
	TArray<class USplineMeshComponent*>           SplineMeshComponents;                              // 0x0028(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UStaticMesh>             RiverMesh;                                         // 0x0038(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RiverGenerator">();
	}
	static class URiverGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<URiverGenerator>();
	}
};

// Class Water.LakeGenerator
// 0x0040 (0x0068 - 0x0028)
class ULakeGenerator final : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                   LakeMeshComp;                                      // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBoxComponent*                          LakeCollisionComp;                                 // 0x0030(0x0008)(ExportObject, ZeroConstructor, InstancedReference, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class ULakeCollisionComponent*                LakeCollision;                                     // 0x0038(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UStaticMesh>             LakeMesh;                                          // 0x0040(0x0028)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LakeGenerator">();
	}
	static class ULakeGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULakeGenerator>();
	}
};

// Class Water.OceanGenerator
// 0x0020 (0x0048 - 0x0028)
class UOceanGenerator final : public UWaterBodyGenerator
{
public:
	TArray<class UOceanBoxCollisionComponent*>    CollisionBoxes;                                    // 0x0028(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UOceanCollisionComponent*>       CollisionHullSets;                                 // 0x0038(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OceanGenerator">();
	}
	static class UOceanGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOceanGenerator>();
	}
};

// Class Water.CustomMeshGenerator
// 0x0008 (0x0030 - 0x0028)
class UCustomMeshGenerator final : public UWaterBodyGenerator
{
public:
	class UStaticMeshComponent*                   MeshComp;                                          // 0x0028(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CustomMeshGenerator">();
	}
	static class UCustomMeshGenerator* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomMeshGenerator>();
	}
};

// Class Water.WaterBody
// 0x0BC0 (0x0DE0 - 0x0220)
class AWaterBody : public AActor
{
public:
	uint8                                         Pad_3F5C[0x8];                                     // 0x0220(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      PhysicalMaterial;                                  // 0x0228(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWaterWaveParams>               WaveParams;                                        // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WaveSpeedFactor;                                   // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TargetWaveMaskDepth;                               // 0x0244(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WaveParamTextureOffset;                            // 0x0248(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFillCollisionUnderWaterBodiesForNavmesh;          // 0x024C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F5D[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUnderwaterPostProcessSettings         UnderwaterPostProcessSettings;                     // 0x0250(0x0560)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	EWaterBodyType                                WaterBodyType;                                     // 0x07B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F5E[0x7];                                     // 0x07B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWaterCurveSettings                    CurveSettings;                                     // 0x07B8(0x0020)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     WaterMaterial;                                     // 0x07D8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     UnderwaterPostProcessMaterial;                     // 0x07E0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAffectsLandscape;                                 // 0x07E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSnapToOceanHeight;                                // 0x07E9(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bGenerateCollisions;                               // 0x07EA(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bOverrideWaterMesh;                                // 0x07EB(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3F5F[0x4];                                     // 0x07EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            WaterMeshOverride;                                 // 0x07F0(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     RiverToLakeTransitionMat;                          // 0x07F8(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                     RiverToOceanTransitionMat;                         // 0x0800(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         OverlapMaterialPriority;                           // 0x0808(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         MaxWaveHeight;                                     // 0x080C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                   CollisionProfileName;                              // 0x0810(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector                                OceanCollisionExtents;                             // 0x0818(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3F60[0x4];                                     // 0x0824(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWaterSplineComponent*                  SplineComp;                                        // 0x0828(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterBodyGenerator*                    Generator;                                         // 0x0830(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWaterSplineMetadata*                   WaterSplineMetadata;                               // 0x0838(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               WaterMaterialInstance;                             // 0x0840(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               RiverToLakeTransitionMID;                          // 0x0848(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               RiverToOceanTransitionMID;                         // 0x0850(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*               UnderwaterPostProcessMID;                          // 0x0858(0x0008)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyIsland>> Islands;                                           // 0x0860(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TLazyObjectPtr<class AWaterBodyExclusionVolume>> ExclusionVolumes;                                  // 0x0870(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALandscapeProxy>         Landscape;                                         // 0x0880(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3F61[0x8];                                     // 0x0888(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPostProcessSettings                   CurrentPostProcessSettings;                        // 0x0890(0x0540)(Transient, Protected, NativeAccessSpecifierProtected)
	float                                         OceanHeightOffset;                                 // 0x0DD0(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bCanAffectNavigation;                              // 0x0DD4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_3F62[0x3];                                     // 0x0DD5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class UNavAreaBase>               WaterNavAreaClass;                                 // 0x0DD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
	class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
	class UMaterialInstanceDynamic* GetWaterMaterialInstance();
	void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
	void OnWaterBodyFinishedUpdating();

	TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes() const;
	TArray<class AWaterBodyIsland*> GetIslands() const;
	TArray<class UStaticMeshComponent*> GetWaterMeshComponents() const;
	class UWaterSplineComponent* GetWaterSpline() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBody">();
	}
	static class AWaterBody* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBody>();
	}
};

// Class Water.WaterBodyExclusionVolume
// 0x0018 (0x0280 - 0x0268)
class AWaterBodyExclusionVolume : public APhysicsVolume
{
public:
	bool                                          bIgnoreAllOverlappingWaterBodies;                  // 0x0268(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F63[0x7];                                     // 0x0269(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AWaterBody*>                     WaterBodiesToIgnore;                               // 0x0270(0x0010)(Edit, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyExclusionVolume">();
	}
	static class AWaterBodyExclusionVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyExclusionVolume>();
	}
};

// Class Water.WaterBodyIsland
// 0x0008 (0x0228 - 0x0220)
class AWaterBodyIsland : public AActor
{
public:
	class UWaterSplineComponent*                  SplineComp;                                        // 0x0220(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	class UWaterSplineComponent* GetWaterSpline() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyIsland">();
	}
	static class AWaterBodyIsland* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyIsland>();
	}
};

// Class Water.WaterBodyProxy
// 0x0000 (0x0220 - 0x0220)
class AWaterBodyProxy final : public AActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterBodyProxy">();
	}
	static class AWaterBodyProxy* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterBodyProxy>();
	}
};

// Class Water.WaterMeshActor
// 0x0010 (0x0230 - 0x0220)
class AWaterMeshActor final : public AActor
{
public:
	class UTexture2D*                             WaterVelocityTexture;                              // 0x0220(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWaterMeshComponent*                    WaterMesh;                                         // 0x0228(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterMeshActor">();
	}
	static class AWaterMeshActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterMeshActor>();
	}
};

// Class Water.WaterMeshComponent
// 0x0100 (0x0560 - 0x0460)
class UWaterMeshComponent final : public UMeshComponent
{
public:
	int32                                         ForceCollapseDensityLevel;                         // 0x0458(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TileSize;                                          // 0x045C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                              ExtentInTiles;                                     // 0x0460(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     FarDistanceMaterial;                               // 0x0468(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FarDistanceMeshExtent;                             // 0x0470(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F64[0xE4];                                    // 0x0474(0x00E4)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TessellationFactor;                                // 0x0558(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         LODScale;                                          // 0x055C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	bool IsEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterMeshComponent">();
	}
	static class UWaterMeshComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterMeshComponent>();
	}
};

// Class Water.WaterRuntimeSettings
// 0x0008 (0x0040 - 0x0038)
class UWaterRuntimeSettings final : public UDeveloperSettings
{
public:
	ECollisionChannel                             CollisionChannelForWaterTraces;                    // 0x0038(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F65[0x7];                                     // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterRuntimeSettings">();
	}
	static class UWaterRuntimeSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterRuntimeSettings>();
	}
};

// Class Water.WaterSplineComponent
// 0x0030 (0x0550 - 0x0520)
class UWaterSplineComponent final : public USplineComponent
{
public:
	struct FWaterSplineCurveDefaults              WaterSplineDefaults;                               // 0x0520(0x0014)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaterSplineCurveDefaults              PreviousWaterSplineDefaults;                       // 0x0534(0x0014)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_3F66[0x8];                                     // 0x0548(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterSplineComponent">();
	}
	static class UWaterSplineComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterSplineComponent>();
	}
};

// Class Water.WaterSplineMetadata
// 0x0090 (0x00B8 - 0x0028)
class UWaterSplineMetadata final : public USplineMetadata
{
public:
	struct FInterpCurveFloat                      Depth;                                             // 0x0028(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                      WaterVelocityScalar;                               // 0x0040(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                      ShorelineWidth;                                    // 0x0058(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                      RiverWidth;                                        // 0x0070(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveFloat                      AudioIntensity;                                    // 0x0088(0x0018)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInterpCurveVector                     WaterVelocity;                                     // 0x00A0(0x0018)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterSplineMetadata">();
	}
	static class UWaterSplineMetadata* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterSplineMetadata>();
	}
};

// Class Water.WaterSubsystem
// 0x0080 (0x00B0 - 0x0030)
class UWaterSubsystem final : public UWorldSubsystem
{
public:
	uint8                                         Pad_3F67[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCameraUnderwaterStateChanged;                    // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnWaterScalabilityChanged;                         // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class AWaterMeshActor*                        WaterMeshActor;                                    // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3F68[0x28];                                    // 0x0060(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialParameterCollection*           MaterialParameterCollection;                       // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_3F69[0x20];                                    // 0x0090(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static int32 GetShallowWaterMaxDynamicForces();
	static int32 GetShallowWaterMaxImpulseForces();
	static int32 GetShallowWaterSimulationRenderTargetSize();

	void PrintToWaterLog(const class FString& Message, bool bWarning);
	void SetOceanFloodHeight(float InFloodHeight);

	float GetCameraUnderwaterDepth() const;
	float GetOceanBaseHeight() const;
	float GetOceanFloodHeight() const;
	float GetOceanTotalHeight() const;
	float GetSmoothedWorldTimeSeconds() const;
	bool IsShallowWaterSimulationEnabled() const;
	bool IsUnderwaterPostProcessEnabled() const;
	bool IsWaterRenderingEnabled() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"WaterSubsystem">();
	}
	static class UWaterSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWaterSubsystem>();
	}
};

}
