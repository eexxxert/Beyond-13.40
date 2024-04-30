#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HBOnboardingFlow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "FortniteUI_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass HBOnboardingFlow.HBOnboardingFlow_C
// 0x0038 (0x0258 - 0x0220)
class AHBOnboardingFlow_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               PlayPeriodicEventMovieQuest;                       // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bPlayedPeriodicEventMovie;                         // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHasRecheckedNeedToPlayPeriodicEventMovie;         // 0x0239(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F0A[0x6];                                     // 0x023A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    PlayPeriodicEventCineObjective;                    // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                 PeriodicEventMovieAnnouncementClass;               // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetCampaignQuestManager(class UFortQuestManager** QuestManager);
	void RecheckNeedToPlayEventMovie(bool* WaitingToCheckAgain);
	bool NeedsToPlayEventMovie();
	void OnCanceled_856A325D44ECC73B857CE5B301E90D33();
	void OnAllClientsReady_856A325D44ECC73B857CE5B301E90D33();
	void OnFailure_50CD26324B96B121A5B49DA66113AE5D();
	void OnIgnored_50CD26324B96B121A5B49DA66113AE5D();
	void OnSuccess_50CD26324B96B121A5B49DA66113AE5D();
	void HandlePlayEventCine();
	void HandleClientEvent_PlayEventMovie(class UObject* EventSource, class UObject* EventFocus, const struct FFortClientEvent& ClientEvent);
	void StartFlow();
	void ExecuteUbergraph_HBOnboardingFlow(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HBOnboardingFlow_C">();
	}
	static class AHBOnboardingFlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHBOnboardingFlow_C>();
	}
};

}
