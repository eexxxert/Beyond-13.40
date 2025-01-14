#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCL_BoostJumpPack_FuelRegen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
// 0x0040 (0x0478 - 0x0438)
class AGCL_BoostJumpPack_FuelRegen_C final : public AGameplayCueNotify_Jetpack_FuelRegen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1; // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1; // 0x0444(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5141[0x3];                                     // 0x0445(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     FullBlinkTimeline;                                 // 0x0448(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SpawnedParticleEmitter;                            // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                   PlayerPawn;                                        // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FuelMax;                                           // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5142[0x4];                                     // 0x0464(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        OnFuelRechargeRamp_Comp;                           // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ReserveFuelMax;                                    // 0x0470(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32 EntryPoint);
	void ResetBlink(class AFortPlayerPawn* Param_PlayerPawn);
	void FullBlinkTimeline__UpdateFunc();
	void FullBlinkTimeline__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GCL_BoostJumpPack_FuelRegen_C">();
	}
	static class AGCL_BoostJumpPack_FuelRegen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGCL_BoostJumpPack_FuelRegen_C>();
	}
};

}

