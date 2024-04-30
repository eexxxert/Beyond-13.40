#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaEliminationIndicator

#include "Basic.hpp"

#include "AthenaEliminationIndicator_classes.hpp"
#include "AthenaEliminationIndicator_parameters.hpp"


namespace SDK
{

// Function AthenaEliminationIndicator.AthenaEliminationIndicator_C.ExecuteUbergraph_AthenaEliminationIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaEliminationIndicator_C::ExecuteUbergraph_AthenaEliminationIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEliminationIndicator_C", "ExecuteUbergraph_AthenaEliminationIndicator");

	Params::AthenaEliminationIndicator_C_ExecuteUbergraph_AthenaEliminationIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaEliminationIndicator.AthenaEliminationIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaEliminationIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaEliminationIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
