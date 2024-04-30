#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPC_Pawn_Parent

#include "Basic.hpp"

#include "NPC_Pawn_Parent_classes.hpp"
#include "NPC_Pawn_Parent_parameters.hpp"


namespace SDK
{

// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Parent_C::ExecuteUbergraph_NPC_Pawn_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ExecuteUbergraph_NPC_Pawn_Parent");

	Params::NPC_Pawn_Parent_C_ExecuteUbergraph_NPC_Pawn_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::TestLoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "TestLoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Vehicle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Velocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Parent_C::NPC_ParentLaunchVehicle(class AActor* Vehicle, const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ParentLaunchVehicle");

	Params::NPC_Pawn_Parent_C_NPC_ParentLaunchVehicle Parms{};

	Parms.Vehicle = Vehicle;
	Parms.Velocity = std::move(Velocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Pawn_Parent_C::WidgetVisibilityChanged(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "WidgetVisibilityChanged");

	Params::NPC_Pawn_Parent_C_WidgetVisibilityChanged Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Parent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceiveEndPlay");

	Params::NPC_Pawn_Parent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::GrantStartingItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "GrantStartingItems");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANPC_Pawn_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                        InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Parent_C::OnDamagePlayEffects(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDamagePlayEffects");

	Params::NPC_Pawn_Parent_C_OnDamagePlayEffects Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            DamageTags                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitInfo                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandle     EffectContext                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ANPC_Pawn_Parent_C::OnDamageServer(float Damage, const struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnDamageServer");

	Params::NPC_Pawn_Parent_C_OnDamageServer Parms{};

	Parms.Damage = Damage;
	Parms.DamageTags = std::move(DamageTags);
	Parms.Momentum = std::move(Momentum);
	Parms.HitInfo = std::move(HitInfo);
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = std::move(EffectContext);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ANPC_Pawn_Parent_C::ShouldUpdateSkeletalMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "ShouldUpdateSkeletalMesh");

	Params::NPC_Pawn_Parent_C_ShouldUpdateSkeletalMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           RecentlyDamagedOverride                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Parent_C::NPC_ApplyRecentlyDamagedTag(class UClass* RecentlyDamagedOverride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC ApplyRecentlyDamagedTag");

	Params::NPC_Pawn_Parent_C_NPC_ApplyRecentlyDamagedTag Parms{};

	Parms.RecentlyDamagedOverride = RecentlyDamagedOverride;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// Enum_NPC_AlertLevel                     AlertLevel                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                     AlertLevelTag                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                                    ValidDataFound                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Pawn_Parent_C::NPC_GetAlertLevelInfo(Enum_NPC_AlertLevel* AlertLevel, struct FGameplayTag* AlertLevelTag, bool* ValidDataFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC GetAlertLevelInfo");

	Params::NPC_Pawn_Parent_C_NPC_GetAlertLevelInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AlertLevel != nullptr)
		*AlertLevel = Parms.AlertLevel;

	if (AlertLevelTag != nullptr)
		*AlertLevelTag = std::move(Parms.AlertLevelTag);

	if (ValidDataFound != nullptr)
		*ValidDataFound = Parms.ValidDataFound;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::OnRep_NPC_AlertLevel()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC_AlertLevel");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortRarity                             Param_NPC_BestLootRarityInInventory                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANPC_Pawn_Parent_C::NPC_SetBestLootRarityInInventory(EFortRarity* Param_NPC_BestLootRarityInInventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SetBestLootRarityInInventory");

	Params::NPC_Pawn_Parent_C_NPC_SetBestLootRarityInInventory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_NPC_BestLootRarityInInventory != nullptr)
		*Param_NPC_BestLootRarityInInventory = Parms.Param_NPC_BestLootRarityInInventory;
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           String                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    OnlyWhenDebug                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ANPC_Pawn_Parent_C::NPC_PawnDebugMessage(const class FString& String, bool OnlyWhenDebug)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC PawnDebugMessage");

	Params::NPC_Pawn_Parent_C_NPC_PawnDebugMessage Parms{};

	Parms.String = std::move(String);
	Parms.OnlyWhenDebug = OnlyWhenDebug;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::NPC_SendGameplayCuePickupGrabbed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "NPC SendGameplayCuePickupGrabbed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory
// (BlueprintCallable, BlueprintEvent)

void ANPC_Pawn_Parent_C::OnRep_NPC_BestLootRarityInInventory()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPC_Pawn_Parent_C", "OnRep_NPC BestLootRarityInInventory");

	UObject::ProcessEvent(Func, nullptr);
}

}
