#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CareerScreen

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
// 0x0050 (0x04D8 - 0x0488)
class UCareerScreen_C final : public UAthenaCareerScreen
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0488(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                        FeatDisplaySwitcher;                               // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GradOvr;                                           // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   NoAchievementMessage;                              // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       SeasonHeadingTextLabel;                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                    Input_ReplayCinematic;                             // 0x04B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UActivatableMovieWidget_C*              ActivatableMovieWidget;                            // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AutoPlayVideo;                                     // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CareerScreen(int32 EntryPoint);
	void OnInitialized();
	void BP_OnActivated();
	void ShowFeats(bool bHasCompletedFeats);
	void PlayCinematic();
	void ReplayCinematic(bool* PassThrough);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CareerScreen_C">();
	}
	static class UCareerScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCareerScreen_C>();
	}
};

}

