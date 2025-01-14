#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FancyToastWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FancyToastWidget.FancyToastWidget_C
// 0x00A8 (0x0300 - 0x0258)
class UFancyToastWidget_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Outro;                                             // 0x0260(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Intro;                                             // 0x0268(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                       Description;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       DescriptionRegular;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               RegularToast;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SmallPreviewPortrait;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SpecialToast;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Title;                                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TitleRegular;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TypeWidgetSwitcher;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinishedToast;                                   // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UTexture2D>              Dev_TestImage;                                     // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnToastClicked;                                    // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          DoNotUseTimerToDismiss;                            // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void OnFinishedToast__DelegateSignature();
	void OnToastClicked__DelegateSignature();
	void ExecuteUbergraph_FancyToastWidget(int32 EntryPoint);
	void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent_2();
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent_0();
	void RemoveWidget();
	void CompleteToast();
	void Clicked();
	void SimulateAthenaStoreToast();
	void On_Idle_Finished();
	void Start_Toast_Animation();
	void OnShowToast(const struct FFortToastDisplayInfo& DispalyInfo);
	void OnLoaded_9A8F5ACC4328AC430C10CEB22D17B3C8(class UObject* Loaded);
	void ShowToast(const struct FFortToastDisplayInfo& DisplayInfo);
	void SetAndShowText(const class FText& Text, class UCommonTextBlock* TextBlock);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FancyToastWidget_C">();
	}
	static class UFancyToastWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFancyToastWidget_C>();
	}
};

}

