#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_HookDestroy

#include "Basic.hpp"

#include "ToyAngleSelectorInfo_structs.hpp"
#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// 0x00B8 (0x0B30 - 0x0A78)
class UGA_Athena_HookDestroy_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            SwitchLockGE;                                      // 0x0A88(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Hit_;                                              // 0x0A90(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5613[0x3];                                     // 0x0A91(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CleanedAngle;                                      // 0x0A94(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FToyAngleSelectorInfo>          LaunchAngleVariations;                             // 0x0A98(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UAnimMontage*                           TravelMontage;                                     // 0x0AA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0AB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5614[0x7];                                     // 0x0AB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AB_Hookgun_Athena_C*                    WeaponActor;                                       // 0x0AB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  ChangeEquipmentTag;                                // 0x0AC0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                           RopeActiveTag;                                     // 0x0AE0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                                NullMontage;                                       // 0x0AE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GliderGrappler;                                    // 0x0AF0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5615[0x3];                                     // 0x0AF1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BadgerGrapeDelayFailsafe;                          // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           DestroyEvent;                                      // 0x0AF8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_GrapplerHit;                                 // 0x0B00(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Event_GrapplerReturn;                              // 0x0B08(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  T_HoverboardMontage;                               // 0x0B10(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_GA_Athena_HookDestroy(int32 EntryPoint);
	void ResetDoOnce();
	void K2_ActivateAbility();
	void OnSync_A7AA33494F9F686A79A026809EAEF410();
	void EventReceived_1B71851D49048B6433DA75B0D6007B6E(const struct FGameplayEventData& Payload);
	void OnCompleted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnBlendOut_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnInterrupted_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnNotifyBegin_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnNotifyEnd_7CDAB77949F908D1F388AB845AE6C282(class FName NotifyName);
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(class FName NotifyName);
	void EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload);
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(class FName NotifyName);
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload);
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(class FName NotifyName);
	void OnRep_AmmoReserves();
	void PickGrappleMontage(float PitchAngle, class FName* SectionName);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnRep_BadgerGrapeDelayFailsafe();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Athena_HookDestroy_C">();
	}
	static class UGA_Athena_HookDestroy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Athena_HookDestroy_C>();
	}
};

}
