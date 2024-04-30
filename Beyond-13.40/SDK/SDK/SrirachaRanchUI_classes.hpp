#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SrirachaRanchUI

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// Class SrirachaRanchUI.FortMobileActionButtonBehavior_ToggleRadio
// 0x0010 (0x00C0 - 0x00B0)
class UFortMobileActionButtonBehavior_ToggleRadio : public UFortMobileActionButtonBehavior
{
public:
	class UPaperSprite*                           ToggleRadioOffSprite;                              // 0x00B0(0x0008)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_430E[0x8];                                     // 0x00B8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void HandleRadioPlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void HandleRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortMobileActionButtonBehavior_ToggleRadio">();
	}
	static class UFortMobileActionButtonBehavior_ToggleRadio* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortMobileActionButtonBehavior_ToggleRadio>();
	}
};

// Class SrirachaRanchUI.RadioPlayerWidgetBase
// 0x0050 (0x0280 - 0x0230)
class URadioPlayerWidgetBase final : public UUserWidget
{
public:
	uint8                                         Pad_430F[0x40];                                    // 0x0230(0x0040)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFortPrioritizedWidgetData             PriorityData;                                      // 0x0270(0x0002)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                         Pad_4310[0x6];                                     // 0x0272(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStreamingRadioPlayerComponent*         LastValidComp;                                     // 0x0278(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	void NativeEnteredVehicle();
	void NativeExitedVehicle();
	void OnDisconnectFromComp();
	void OnFailedToOpenSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnLoadingNewSource(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnRadioStopped(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* LastSource);
	void OnShouldShowDueToEntrance();
	void OnSourceFinished(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void OnSourcePlaying(class UStreamingRadioPlayerComponent* Radio, class URadioContentSourceItemDefinition* Source);
	void SetControllable(bool bCanControl);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RadioPlayerWidgetBase">();
	}
	static class URadioPlayerWidgetBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<URadioPlayerWidgetBase>();
	}
};

}
