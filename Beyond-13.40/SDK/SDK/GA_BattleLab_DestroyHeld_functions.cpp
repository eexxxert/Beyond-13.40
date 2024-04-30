#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_BattleLab_DestroyHeld

#include "Basic.hpp"

#include "GA_BattleLab_DestroyHeld_classes.hpp"
#include "GA_BattleLab_DestroyHeld_parameters.hpp"


namespace SDK
{

// Function GA_BattleLab_DestroyHeld.GA_BattleLab_DestroyHeld_C.ExecuteUbergraph_GA_BattleLab_DestroyHeld
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BattleLab_DestroyHeld_C::ExecuteUbergraph_GA_BattleLab_DestroyHeld(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BattleLab_DestroyHeld_C", "ExecuteUbergraph_GA_BattleLab_DestroyHeld");

	Params::GA_BattleLab_DestroyHeld_C_ExecuteUbergraph_GA_BattleLab_DestroyHeld Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_BattleLab_DestroyHeld.GA_BattleLab_DestroyHeld_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_BattleLab_DestroyHeld_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_BattleLab_DestroyHeld_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}
