#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TimeSynthTrackComponent_Mang

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "BP_TimeSynthTrackComponent_DataTracker_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_TimeSynthTrackComponent_Mang.BP_TimeSynthTrackComponent_Mang_C
// 0x0028 (0x0238 - 0x0210)
class UBP_TimeSynthTrackComponent_Mang_C final : public UBP_TimeSynthTrackComponent_DataTracker_C
{
public:
	uint8                                         Pad_6DEB[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTag                           UnawareAccumulationTag;                            // 0x020C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           AlertedLevelAccumulationTag;                       // 0x0214(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           ThreatenedLevelAccumulationTag;                    // 0x021C(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         UnawareSmoothed;                                   // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AlertedSmoothed;                                   // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ThreatenedSmoothed;                                // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPlayedAlert;                                    // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void GetRemainingEventCooldown(float* Cooldown);
	void OnDataTrackerUpdate();
	void HandleMixState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TimeSynthTrackComponent_Mang_C">();
	}
	static class UBP_TimeSynthTrackComponent_Mang_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TimeSynthTrackComponent_Mang_C>();
	}
};

}

