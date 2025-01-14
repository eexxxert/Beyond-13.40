#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DA_CarminePack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C
// 0x00A0 (0x0D40 - 0x0CA0)
class ADA_CarminePack_C final : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         TimePressed;                                       // 0x0CA8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PunchPicker;                                       // 0x0CAC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasLandedAfterBeam;                                // 0x0CB0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_666C[0x7];                                     // 0x0CB1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  Carmine_Ability_Tags;                              // 0x0CB8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FGameplayTag>                   StoneTags;                                         // 0x0CD8(0x0010)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	TArray<struct FGameplayTag>                   GemTags;                                           // 0x0CE8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         Int;                                               // 0x0CF8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_666D[0x4];                                     // 0x0CFC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  SkydiveCue;                                        // 0x0D00(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                  TrailsCue;                                         // 0x0D20(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_DA_CarminePack(int32 EntryPoint);
	void BindPartchanged();
	void Landed(const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void OnRep_StoneTags();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DA_CarminePack_C">();
	}
	static class ADA_CarminePack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADA_CarminePack_C>();
	}
};

}

