#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiscellaneousModeItemDetailsHostPanel_Store

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiscellaneousModeItemDetailsHostPanel_Store.MiscellaneousModeItemDetailsHostPanel_Store_C
// 0x0038 (0x0378 - 0x0340)
class UMiscellaneousModeItemDetailsHostPanel_Store_C final : public UFortItemManagementItemDetailsPanel
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UItemDetailsHeader_C*                   HeaderWidget;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHeroLoadoutPerksDetailWidget_C*        HeroLoadoutPerksDetailWidget;                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemCraftingIngredientsDetailWidget_C* ItemCraftingIngredientsDetailWidget;               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MarkedForMulchingBackgroundImage;                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMultiSizeImage*                    MarkedForMulchingIndicatorImage;                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USurvivorTraitsDetailWidget_C*          SurvivorTraitsDetailWidget;                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void HandleHasItemMarkedForMulchingChanged();
	void ExecuteUbergraph_MiscellaneousModeItemDetailsHostPanel_Store(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiscellaneousModeItemDetailsHostPanel_Store_C">();
	}
	static class UMiscellaneousModeItemDetailsHostPanel_Store_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiscellaneousModeItemDetailsHostPanel_Store_C>();
	}
};

}

