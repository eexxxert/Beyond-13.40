#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_HeldObject_AbilityWeapon_Pickup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_HeldObject_AbilityWeapon_Pickup.GA_HeldObject_AbilityWeapon_Pickup_C
// 0x0010 (0x0A88 - 0x0A78)
class UGA_HeldObject_AbilityWeapon_Pickup_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_HeldObject_AbilityWeapon_Pickup(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_064121774728AAB46B8294B952EF27BA();
	void OnBlendOut_064121774728AAB46B8294B952EF27BA();
	void OnInterrupted_064121774728AAB46B8294B952EF27BA();
	void OnCancelled_064121774728AAB46B8294B952EF27BA();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_HeldObject_AbilityWeapon_Pickup_C">();
	}
	static class UGA_HeldObject_AbilityWeapon_Pickup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_HeldObject_AbilityWeapon_Pickup_C>();
	}
};

}

