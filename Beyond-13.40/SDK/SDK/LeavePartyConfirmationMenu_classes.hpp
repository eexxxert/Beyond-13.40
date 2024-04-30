#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LeavePartyConfirmationMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C
// 0x0010 (0x0330 - 0x0320)
class ULeavePartyConfirmationMenu_C final : public UFortLeavePartyMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Opened;                                            // 0x0328(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LeavePartyConfirmationMenu(int32 EntryPoint);
	void OnOpened();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LeavePartyConfirmationMenu_C">();
	}
	static class ULeavePartyConfirmationMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULeavePartyConfirmationMenu_C>();
	}
};

}
