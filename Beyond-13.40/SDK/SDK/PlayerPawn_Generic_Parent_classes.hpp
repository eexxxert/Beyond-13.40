#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Generic_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// 0x00F0 (0x2B00 - 0x2A10)
#pragma pack(push, 0x1)
class alignas(0x10) APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2A10(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x2A18(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x2A28(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x2A38(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x2A48(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x2A58(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x2A68(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x2A78(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             PawnLegsMaterials;                                 // 0x2A88(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             PawnTorsoMaterials;                                // 0x2A98(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x2AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x2AB0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x2AC0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         WaterCounter;                                      // 0x2AD0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5385[0x4];                                     // 0x2AD4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CurrentWaterMeshActor;                             // 0x2AD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInWater;                                         // 0x2AE0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5386[0x3];                                     // 0x2AE1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time_when_you_ll_be_able_to_splash_again;          // 0x2AE4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnOverlapWaterVolume;                              // 0x2AE8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnOverlapWaterVolume__DelegateSignature(bool bIsInWater, class AFortPlayerPawn* Pawn, class AActor* Water);
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint);
	void ReinitializeWeaponMaterials();
	void Player_Creates_a_Splash(const struct FTransform& NewTransform);
	void Entered_Water_Volume();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Generic_Parent_C">();
	}
	static class APlayerPawn_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Generic_Parent_C>();
	}
};
#pragma pack(pop)

}

