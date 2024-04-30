#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fringe_Plank_AnimBP

#include "Basic.hpp"

#include "Fringe_Plank_AnimBP_classes.hpp"
#include "Fringe_Plank_AnimBP_parameters.hpp"


namespace SDK
{

// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFringe_Plank_AnimBP_C::ExecuteUbergraph_Fringe_Plank_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "ExecuteUbergraph_Fringe_Plank_AnimBP");

	Params::Fringe_Plank_AnimBP_C_ExecuteUbergraph_Fringe_Plank_AnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UFringe_Plank_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fringe_Plank_AnimBP_C", "AnimGraph");

	Params::Fringe_Plank_AnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}
