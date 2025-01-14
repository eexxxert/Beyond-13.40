#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prj_Athena_GliderGrappler_Parent

#include "Basic.hpp"

#include "Prj_Athena_GliderGrappler_Parent_classes.hpp"
#include "Prj_Athena_GliderGrappler_Parent_parameters.hpp"


namespace SDK
{

// Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.ExecuteUbergraph_Prj_Athena_GliderGrappler_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_Athena_GliderGrappler_Parent_C::ExecuteUbergraph_Prj_Athena_GliderGrappler_Parent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_GliderGrappler_Parent_C", "ExecuteUbergraph_Prj_Athena_GliderGrappler_Parent");

	Params::Prj_Athena_GliderGrappler_Parent_C_ExecuteUbergraph_Prj_Athena_GliderGrappler_Parent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.Teleported - Return abilities and stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                        FortPawn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_Athena_GliderGrappler_Parent_C::Teleported_Minus_Return_abilities_and_stop(class AFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_GliderGrappler_Parent_C", "Teleported - Return abilities and stop");

	Params::Prj_Athena_GliderGrappler_Parent_C_Teleported_Minus_Return_abilities_and_stop Parms{};

	Parms.FortPawn = FortPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.Jump Apex Reached
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_GliderGrappler_Parent_C::Jump_Apex_Reached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_GliderGrappler_Parent_C", "Jump Apex Reached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.Grapple
// (BlueprintCallable, BlueprintEvent)

void APrj_Athena_GliderGrappler_Parent_C::Grapple()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_GliderGrappler_Parent_C", "Grapple");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Prj_Athena_GliderGrappler_Parent.Prj_Athena_GliderGrappler_Parent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APrj_Athena_GliderGrappler_Parent_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Prj_Athena_GliderGrappler_Parent_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}

}

