#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeavePartyListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeavePartyListEntry.LeavePartyListEntry_C
// 0x00A8 (0x0C40 - 0x0B98)
class ULeavePartyListEntry_C final : public UFortLeavePartyListEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B98(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Selected;                                          // 0x0BA0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BA8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                AnimatedInputBorder;                               // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                      EmptyButtonToEatOneMouseUpEvent;                   // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EntryBorder;                                       // 0x0BC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   Text_LeavePartyText;                               // 0x0BD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserActionMenuInputButton_C*           UserActionMenuInputButton;                         // 0x0BD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstance*                      InviteMaterial;                                    // 0x0BE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      DefaultMaterial;                                   // 0x0BE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            InviteFontColor;                                   // 0x0BF0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                            DefaultFontColor;                                  // 0x0C18(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_LeavePartyListEntry(int32 EntryPoint);
	void BP_OnHovered();
	void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeavePartyListEntry_C">();
	}
	static class ULeavePartyListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeavePartyListEntry_C>();
	}
};

}
