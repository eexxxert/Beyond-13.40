#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_StormMeshRotator

#include "Basic.hpp"

#include "BP_StormMeshRotator_classes.hpp"
#include "BP_StormMeshRotator_parameters.hpp"


namespace SDK
{

// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ExecuteUbergraph_BP_StormMeshRotator
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StormMeshRotator_C::ExecuteUbergraph_BP_StormMeshRotator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StormMeshRotator_C", "ExecuteUbergraph_BP_StormMeshRotator");

	Params::BP_StormMeshRotator_C_ExecuteUbergraph_BP_StormMeshRotator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StormMeshRotator.BP_StormMeshRotator_C.OnStormEffectsEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StormMeshRotator_C::OnStormEffectsEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StormMeshRotator_C", "OnStormEffectsEnabled");

	Params::BP_StormMeshRotator_C_OnStormEffectsEnabled Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_StormMeshRotator.BP_StormMeshRotator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_StormMeshRotator_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StormMeshRotator_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_StormMeshRotator.BP_StormMeshRotator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_StormMeshRotator_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_StormMeshRotator_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

