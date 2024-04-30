#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BGA_Athena_Petrol

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Curie_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BGA_Athena_Petrol.BGA_Athena_Petrol_C
// 0x0150 (0x09A0 - 0x0850)
class ABGA_Athena_Petrol_C final : public ABuildingGameplayActorPetrol
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0850(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0858(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCurieComponent*                    FortCurie;                                         // 0x0860(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ImpactNormal;                                      // 0x0868(0x000C)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5746[0x4];                                     // 0x0874(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynamic_Decal;                                     // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class AActor*, struct FCurieInteractHandle> InteractHandleMap;                                 // 0x0880(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Lit;                                               // 0x08D0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                         Pad_5747[0x3];                                     // 0x08D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ActorLifespanAfterIgnition;                        // 0x08D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SelfFireMagnitude;                                 // 0x08D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelfPropagationFuel;                               // 0x08DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SelfCurieLandscapeIgnitionRadius;                  // 0x08E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgniteSelf;                                        // 0x08E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5748[0x3];                                     // 0x08E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         IgniteNearbyMaterialsRadius;                       // 0x08E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5749[0x4];                                     // 0x08EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      IgniteMaterialsObjectTypes;                        // 0x08F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UClass*                                 IgniteMaterialsClassFilter;                        // 0x0900(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IgniteNearbyMaterialsFireMagnitude;                // 0x0908(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         IgniteNearbyMaterialsPropogationFuel;              // 0x090C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IgniteNearbyMaterialsLandscapeIgnitionRadius;      // 0x0910(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitResult;                                         // 0x0914(0x008C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)

public:
	void ExecuteUbergraph_BGA_Athena_Petrol(int32 EntryPoint);
	void OnCurieStateDetached_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& StateTag);
	void OnCurieElementInteract_BP(const struct FCurieContainerHandle& CurieContainerHandle, const struct FGameplayTag& ElementTag, const struct FCurieInteractParamsHandle& InteractParamsHandle);
	void ReceiveDestroyed();
	void InteractingWithFire(class AActor* OverlappingActor, const struct FHitResult& Param_HitResult);
	void ReceiveBeginPlay();
	void BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__SphereCollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ClientOnIgnite();
	void UserConstructionScript();
	void OnRep_Lit();
	void Ignite_Self();
	void IgniteNearbyMaterials();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BGA_Athena_Petrol_C">();
	}
	static class ABGA_Athena_Petrol_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABGA_Athena_Petrol_C>();
	}
};

}
