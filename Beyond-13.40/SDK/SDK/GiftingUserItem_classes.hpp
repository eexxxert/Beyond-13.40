#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GiftingUserItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GiftingUserItem.GiftingUserItem_C
// 0x0040 (0x0BC8 - 0x0B88)
class UGiftingUserItem_C final : public UFortGiftingUserItem
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B88(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Toggle;                                            // 0x0B90(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ImageEmptyCheck;                                   // 0x0B98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageErrorState;                                   // 0x0BA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSelectedCheck;                                // 0x0BA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                  Switcher_UserStatus;                               // 0x0BB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       Text_Message;                                      // 0x0BB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_UserDetails;                           // 0x0BC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GiftingUserItem(int32 EntryPoint);
	void UpdateMessageText(const class FText& NewMessage);
	void SetSelectionState(ESelectionState NewState, bool bAnimateOnSelect);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GiftingUserItem_C">();
	}
	static class UGiftingUserItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGiftingUserItem_C>();
	}
};

}
