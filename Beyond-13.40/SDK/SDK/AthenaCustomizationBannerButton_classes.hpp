#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaCustomizationBannerButton

#include "Basic.hpp"

#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AthenaCustomizationBannerButton.AthenaCustomizationBannerButton_C
// 0x0008 (0x0B80 - 0x0B78)
class UAthenaCustomizationBannerButton_C final : public UFortBannerSlotButton
{
public:
	class UNormalBangWrapper_C*                   NormalBangWrapper;                                 // 0x0B78(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AthenaCustomizationBannerButton_C">();
	}
	static class UAthenaCustomizationBannerButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAthenaCustomizationBannerButton_C>();
	}
};

}
