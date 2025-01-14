#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BLGA_BattleLab_Parent

#include "Basic.hpp"

#include "Enum_HeldObject_GenericWeights_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "BL_HeldState_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BLGA_BattleLab_Parent.BLGA_BattleLab_Parent_C
// 0x01C8 (0x0980 - 0x07B8)
class ABLGA_BattleLab_Parent_C final : public ABattleLabDeviceGameplayActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x07B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortWaterInteractionComponent*         FortWaterInteraction;                              // 0x07C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortLinkToActorComponent*              FortLinkToActor;                                   // 0x07C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortHeldObjectComponent*               FortHeldObject;                                    // 0x07D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortProjectileMovementComponent*       FortProjectileMovement;                            // 0x07D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x07E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortCurieComponent*                    FortCurie;                                         // 0x07E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         RepStartMoving;                                    // 0x07F0(0x0004)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	struct FGameplayTag                           GC_HitPlayer;                                      // 0x07F4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_HitWorld;                                       // 0x07FC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Throw;                                          // 0x0804(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_EnterWater;                                     // 0x080C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Pickup;                                         // 0x0814(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           GC_Death;                                          // 0x081C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayDeathGC;                                       // 0x0824(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepHideActor;                                      // 0x0825(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor, AdvancedDisplay)
	bool                                          SetHideActorOnDeath;                               // 0x0826(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsDestructable;                                    // 0x0827(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                           GC_GenericDeath;                                   // 0x0828(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         WorldStopSlop;                                     // 0x0830(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AttachToWallsAndCeilings;                          // 0x0834(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_62D5[0x3];                                     // 0x0835(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ELinkToDirection, struct FVector>        Map_DirectionToRelativeVector;                     // 0x0838(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, AdvancedDisplay)
	ELinkToDirection                              DirectionToAttach;                                 // 0x0888(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_62D6[0x7];                                     // 0x0889(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 EmptyAttachLinkActor;                              // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                         Pad_62D7[0x8];                                     // 0x0898(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             AttachRelativeTrans;                               // 0x08A0(0x0030)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	struct FTransform                             AttachTransform;                                   // 0x08D0(0x0030)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	class FText                                   FirstInteractString;                               // 0x0900(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   SecondInteractString;                              // 0x0918(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         SecondInteractTime;                                // 0x0930(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FirstInteractTime;                                 // 0x0934(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EverBeenThrownPlaced;                              // 0x0938(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                          AutoEnableCurieInteractionsOnStop;                 // 0x0939(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AlreadySavedDefaultTransform;                      // 0x093A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, AdvancedDisplay)
	Enum_HeldObject_GenericWeights                ObjectWeights;                                     // 0x093B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62D8[0x4];                                     // 0x093C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnStartedMoving;                                   // 0x0940(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABLGA_BattleLab_Parent_C*               AttachBaseDevice;                                  // 0x0950(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EBL_HeldState                                 HeldState;                                         // 0x0958(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_62D9[0x7];                                     // 0x0959(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  TC_BlockPickup;                                    // 0x0960(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnStartedMoving__DelegateSignature();
	void ExecuteUbergraph_BLGA_BattleLab_Parent(int32 EntryPoint);
	void OnHeldObjectStateChangedClient(EBL_HeldState Param_HeldState);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_8_OnHeldObjectDropped__DelegateSignature();
	void OnBaseDeviceStartedMoving();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_7_OnProjectileVelocityReplicated__DelegateSignature(const struct FVector& ReplicatedVelocity);
	void ReceiveDestroyed();
	void OnSecondInteract(class AFortPawn* InteractingPawn);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_5_OnHeldObjectPlaced__DelegateSignature();
	void OnFirstInteract(class AFortPawn* Interacting_Pawn);
	void ResetRelativeTransformOnAttach();
	void ReceiveBeginPlay();
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_6_OnHeldObjectPickedUp__DelegateSignature();
	void AttachSetup(const struct FVector& Location, const struct FVector& HitNormal, bool NewParam);
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void BlueprintOnInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted);
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature();
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void PlayGenericDeath();
	void HideActor();
	void OnDeathServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_3_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody);
	void BndEvt__FortHeldObject_K2Node_ComponentBoundEvent_2_OnHeldObjectThrown__DelegateSignature();
	void OnRep_RepStartMoving();
	void OnRep_RepHideActor();
	bool ShouldDie(float Damage, class AController* EventInstigator, class AActor* DamageCauser);
	void FindAttachAngle(const struct FVector& HitLoc);
	void GetAttachComponent(class USceneComponent** Component);
	void SetAttachDefaultTransform();
	void OnRep_AttachTransform();
	void SetBeenThrownPlaced();
	void OnRep_HeldState();

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	class FText BlueprintGetInteractionString(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	bool BlueprintGetInteractionTime(const class AFortPawn* InteractingPawn, float* OutInteractionTime, const EInteractionBeingAttempted InteractionBeingAttempted) const;
	void GetCanFirstInteract(class AFortPawn* InteractingPawn, bool* Return) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BLGA_BattleLab_Parent_C">();
	}
	static class ABLGA_BattleLab_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABLGA_BattleLab_Parent_C>();
	}
};

}

