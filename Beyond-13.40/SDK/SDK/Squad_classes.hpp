#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Squad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Squad.Squad_C
// 0x0028 (0x02E0 - 0x02B8)
class USquad_C final : public UFortTeamSquadDetailedEntry
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                DarkenBorder;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        EntryLockSwitcher;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadLogo;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SquadRibbon;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Squad(int32 EntryPoint);
	void OnSquadIsEmptyChanged(bool bSquadIsEmpty, bool bMultipleSquadsPopulated);
	void OnSquadAssigned(const struct FAthenaTeamDisplayInfo& SquadStyle);
	void OnLoaded_2EC4A7E44D1A9CF51A66D8904054E26E(class UObject* Loaded);
	void OnLoaded_68F5F01141304474DB5D18BD77CD085C(class UObject* Loaded);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Squad_C">();
	}
	static class USquad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USquad_C>();
	}
};

}

