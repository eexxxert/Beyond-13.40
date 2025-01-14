#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaFrontend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "S12_CineTransitionData_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaFrontend.AthenaFrontend_C
// 0x0090 (0x0788 - 0x06F8)
class UAthenaFrontend_C final : public UAthenaUIStateWidget_Frontend
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x06F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAthenaFPS_C*                           AthenaFPS;                                         // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAthenaTemperature_C*                   AthenaTemperature;                                 // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuildWatermark_C*                      BuildWatermark;                                    // 0x0710(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_PTT;                                        // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortVoiceChannelSpeakerContainer_C*    FortVoiceChannelSpeakerContainer;                  // 0x0720(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PTT_Image;                                         // 0x0728(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_1;                                        // 0x0730(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_Bottom;                                   // 0x0738(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBoxPTT;                                        // 0x0740(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          StartedPlayingVideo;                               // 0x0748(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5FD9[0x3];                                     // 0x0749(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TransitionIndex;                                   // 0x074C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS12_CineTransitionData>        TransitionAudioData;                               // 0x0750(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMediaPlayer*                           MovieMediaPlayer;                                  // 0x0760(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TransitionSound01;                                 // 0x0768(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             TransitionSound02;                                 // 0x0770(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTimerHandle>                   AudioTimerHandles;                                 // 0x0778(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AthenaFrontend(int32 EntryPoint);
	void StopTrailerTransitionAudioCheck();
	void StartTrailerTransitionAudioCheck(class UMediaPlayer* MediaPlayer);
	void OnSetFrontendVisibilityMode(EFrontendVisibilityMode InFrontendVisibilityMode);
	void BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void On_Can_PTT();
	void BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature(class UCommonButton* Button, bool Selected);
	void SetChatWidgetVisibility(bool Visible);
	void SetOverlayTitleBarVisibility(bool Visible);
	void UpdatePttVisibility(EPTTState PTTState);
	void InitChatVisibilityButton();
	void PlayTrailer();
	void OnTrailerTransitionAudioCheck();
	void OnTrailerMediaOpened(const class FString& OpenedUrl);
	void OnTrailerMediaEnded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaFrontend_C">();
	}
	static class UAthenaFrontend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaFrontend_C>();
	}
};

}

