#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Petrol_Pump_Handle

#include "Basic.hpp"

#include "B_Petrol_Pump_Handle_classes.hpp"
#include "B_Petrol_Pump_Handle_parameters.hpp"


namespace SDK
{

// Function B_Petrol_Pump_Handle.B_Petrol_Pump_Handle_C.ExecuteUbergraph_B_Petrol_Pump_Handle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Petrol_Pump_Handle_C::ExecuteUbergraph_B_Petrol_Pump_Handle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Petrol_Pump_Handle_C", "ExecuteUbergraph_B_Petrol_Pump_Handle");

	Params::B_Petrol_Pump_Handle_C_ExecuteUbergraph_B_Petrol_Pump_Handle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Petrol_Pump_Handle.B_Petrol_Pump_Handle_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)

void AB_Petrol_Pump_Handle_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Petrol_Pump_Handle_C", "K2_OnUnEquip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Petrol_Pump_Handle.B_Petrol_Pump_Handle_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)

void AB_Petrol_Pump_Handle_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Petrol_Pump_Handle_C", "OnWeaponAttached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Petrol_Pump_Handle.B_Petrol_Pump_Handle_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)

void AB_Petrol_Pump_Handle_C::OnStopWeaponFireFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Petrol_Pump_Handle_C", "OnStopWeaponFireFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Petrol_Pump_Handle.B_Petrol_Pump_Handle_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bPersistentFire                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bSecondaryFire                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Petrol_Pump_Handle_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Petrol_Pump_Handle_C", "OnPlayWeaponFireFX");

	Params::B_Petrol_Pump_Handle_C_OnPlayWeaponFireFX Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Petrol_Pump_Handle.B_Petrol_Pump_Handle_C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*              SpawnProjectile                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Petrol_Pump_Handle_C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Petrol_Pump_Handle_C", "OnSpawnProjectile");

	Params::B_Petrol_Pump_Handle_C_OnSpawnProjectile Parms{};

	Parms.SpawnProjectile = SpawnProjectile;

	UObject::ProcessEvent(Func, &Parms);
}

}

