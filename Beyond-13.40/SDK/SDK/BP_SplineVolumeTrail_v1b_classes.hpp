#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SplineVolumeTrail_v1b

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "En_SplineForwardAxes_01_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
// 0x0230 (0x0450 - 0x0220)
class ABP_SplineVolumeTrail_v1b_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                        DebugArrow;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9; // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4426[0x7];                                     // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     DebugRotateTimeline;                               // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh;                                     // 0x0250(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Socket_Attach_Point;                               // 0x0258(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UStaticMesh*                            SplineMeshTemplate;                                // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                     SplineMeshMaterialOverride;                        // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        Particles;                                         // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifeTime;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Lifetime_Buffer;                                   // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineSystemDuration;                              // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         LifetimeAfterCompletion;                           // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          KeepTickEnabledWhenCompleting;                     // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4427[0x3];                                     // 0x0289(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NumberOfSplineMeshesToUpdate;                      // 0x028C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Initial_Size;                                      // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4428[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USplineMeshComponent*>           SplineMeshes;                                      // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	float                                         SplineDistanceThreshold;                           // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         SplineDistanceThresholdEmpty;                      // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class USplineMeshComponent*>           SplineMeshesHidden;                                // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<float>                                 SplineTimestamps;                                  // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         ArrayIndex;                                        // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SplineSystemActive;                                // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4429[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CompletionTimestamp;                               // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LifetimeAdjusted;                                  // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SizeOverLife;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       MIDs_0;                                            // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UCurveLinearColor*                      ColorAndAlphaOverLife;                             // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticlesComponent;                                // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SplineID;                                          // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_442A[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   Current_Spline_Mesh;                               // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Initial_Rotation__Roll_;                           // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_442B[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            RotationOverLife;                                  // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          DebugMode;                                         // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_442C[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                DebugPositionOffset;                               // 0x032C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                               DebugRotationRate;                                 // 0x0338(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	float                                         DebugTickDelta;                                    // 0x0344(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugPreviousTickTimestamp;                        // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_442D[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Spline_System_Duration_Event_Handle;               // 0x0350(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Tick_Interval_LODs;                            // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_442E[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Tick_Interval_Event_Handle;                        // 0x0360(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Tick_Interval_LOD_Check_Rate;                      // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_442F[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Tick_Interval_LOD_Distances;                       // 0x0370(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<float>                                 Tick_Actor_Intervals;                              // 0x0380(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         LOD_Array_Index;                                   // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Use_Recently_Rendered_LOD;                         // 0x0394(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4430[0x3];                                     // 0x0395(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Check_Rate;                      // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4431[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Recently_Rendered_Event_Handle;                    // 0x03A0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          RecentlyRendered;                                  // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4432[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Recently_Rendered_Tolerance;                       // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                SplineDefaultUpVector;                             // 0x03B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          SplineDefaultUpVectorInWorldSpace;                 // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	En_SplineForwardAxes_01                       SplineMeshForwardAxis;                             // 0x03BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          CeaseAndDetachSplineUponCompletion;                // 0x03BE(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          CanNewSplinePointsBeCreated;                       // 0x03BF(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          LinearColorOverLengthOfSpline;                     // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4433[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 IndiciesToDelete;                                  // 0x03C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          RedistributePointsAlongSplineWhenCreated;          // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4434[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CurveBakeMID;                                      // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector2D                              RenderTextureResolution;                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UCurveLinearColor*>              LinearColorCurvesToBake;                           // 0x03F8(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          WriteBakedCurveDataToDisk;                         // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4435[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 File_Path;                                         // 0x0410(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 File_Name;                                         // 0x0420(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   LinearColorArray;                                  // 0x0430(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          UseCheapSplines;                                   // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4436[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture*                               LinearColorTexture;                                // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int32 EntryPoint);
	void GenerateCurveTextures();
	void ClearRenderTarget();
	void Recently_Rendered_Check();
	void Tick_Interval_LOD_Check();
	void ManuallyStopSplineSystem();
	void DebugMode_Rotate();
	void SplineSystemDurationReached();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DebugRotateTimeline__UpdateFunc();
	void DebugRotateTimeline__FinishedFunc();
	void UserConstructionScript();
	void AddSplineMesh();
	void SetStartAndEndSplineMesh(bool Update_Spline_Mesh);
	void AddSplinePoint();
	void UpdateSplinePointPosition();
	void SplineTimestampManagement();
	void ScaleSplineMesh();
	void UpdateMID();
	void UpdateParticleSystemPosition();
	void RollSplineMesh();
	void SetForwardAxisOnSplineMesh(class USplineMeshComponent* SplineMesh);
	void SetNewSplinePointsBool();
	bool AddSplineDistanceCheck();
	void SetWasRecentlyRendered();
	void TickIntervalLODCheck();
	void GetLinearColorFromCurveAtTime(class UCurveLinearColor* Curve_Linear_Color, int32 Param_Index, struct FLinearColor* LinearColorOut);
	void RedistributePointsAlongSpline();
	void SplineUpdateOnTick();
	void ReturnSplineMeshToPool(class USplineMeshComponent* SplineMesh, int32 IndexToRemove);
	void BakeLinearColor(class UCurveLinearColor* Curve_Linear_Color, int32 Pixel__X_, struct FLinearColor* LinearColorOut);
	void DestroyAllSplineMeshes();
	void SetStartAndEndAllSplineMeshes(bool Update_All_Spline_Meshes);
	void GetSocketLocationWS(class FName Socket_Name, struct FVector* Location_WS);
	void UpdateCheapSplinesWPOVectors();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SplineVolumeTrail_v1b_C">();
	}
	static class ABP_SplineVolumeTrail_v1b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SplineVolumeTrail_v1b_C>();
	}
};

}

