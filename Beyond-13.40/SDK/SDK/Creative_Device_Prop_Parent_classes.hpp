#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Creative_Device_Prop_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"
#include "EVisibleInGameState_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C
// 0x0080 (0x0C40 - 0x0BC0)
class ACreative_Device_Prop_Parent_C final : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCreative_VisibleInGame_Component_C*    VisibleInGameComponent;                            // 0x0BC8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCreative_Enabled_Component_C*          EnabledComponent;                                  // 0x0BD0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortMinigameProgressComponent*         FortMinigameProgress;                              // 0x0BD8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                 ToyOptionsComponent;                               // 0x0BE0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         ActivateOnGamePhase;                               // 0x0BE8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         EnabledIndex;                                      // 0x0BEC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             On_Device_Activated;                               // 0x0BF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AController*                            Instigating_Controller;                            // 0x0C00(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsVisible;                                        // 0x0C08(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A13[0x7];                                     // 0x0C09(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_Device_Initialized;                             // 0x0C10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         Knob_Health;                                       // 0x0C20(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A14[0x4];                                     // 0x0C24(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             On_Play_Mode_Changed;                              // 0x0C28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Update_on_Minigame_State_Change;                   // 0x0C38(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Update_on_Play_Mode_Changed;                       // 0x0C39(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void On_Device_Activated__DelegateSignature();
	void On_Device_Initialized__DelegateSignature();
	void On_Play_Mode_Changed__DelegateSignature(bool New_Play_Mode);
	void ExecuteUbergraph_Creative_Device_Prop_Parent(int32 EntryPoint);
	void OnMinigameEnded();
	void OnMinigameStarted();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature();
	void OnWorldReady();
	void ReceiveBeginPlay();
	void On_Mingame_State_Changed(class AFortMinigame* Minigame, EFortMinigameState MinigameState);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature();
	void PlayModeChanged(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void Activate_on_Phase(EFortMinigameState State);
	void Activate_Device();
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	void Initialize_Device();
	void Attempt_Activate_Device(class AController* Param_Instigating_Controller, bool Additional_Requirements);
	void Activate_Device_Failed();
	float BlueprintModifyIncomingDamage(float Damage, const struct FGameplayTagContainer& InTags, const struct FGameplayEffectContextHandle& EffectContext, class AController* EventInstigator, class AActor* DamageCauser);
	void Is_Visible_In_Game(bool* Visible);
	void Update_Visibility_In_Game();
	void GetVisibilityComponents(TArray<class USceneComponent*>* VisibilityComponents);
	void GetVisibilityComponentsWithCollisionOverrides(TMap<class USceneComponent*, ECollisionEnabled>* VisibilityComponents);

	bool BlueprintCanInteract(const class AFortPawn* InteractingPawn, const EInteractionBeingAttempted InteractionBeingAttempted, const ETInteractionType InteractionType) const;
	void IsInPlayMode(bool* bIsInPlayMode) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Creative_Device_Prop_Parent_C">();
	}
	static class ACreative_Device_Prop_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACreative_Device_Prop_Parent_C>();
	}
};

}

