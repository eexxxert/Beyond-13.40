#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Athena_GameState

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// 0x0028 (0x29A8 - 0x2980)
class AAthena_GameState_C final : public AFortGameStateBR
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2980(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x2988(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_NewTrack_0_21F3C11243B4DF8C6B6A958D51E85950; // 0x2990(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_21F3C11243B4DF8C6B6A958D51E85950; // 0x2994(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C2B[0x3];                                     // 0x2995(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x2998(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Victory_Royale_Sound;                              // 0x29A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Athena_GameState(int32 EntryPoint);
	void OnWinnerAnnounced();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Athena_GameState_C">();
	}
	static class AAthena_GameState_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAthena_GameState_C>();
	}
};

}

