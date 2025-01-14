#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Prj_Ranged_FringePlankSecondary_Athena

#include "Basic.hpp"

#include "B_Prj_Ranged_FringePlankSecondary_Athena_classes.hpp"
#include "B_Prj_Ranged_FringePlankSecondary_Athena_parameters.hpp"


namespace SDK
{

// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.ExecuteUbergraph_B_Prj_Ranged_FringePlankSecondary_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::ExecuteUbergraph_B_Prj_Ranged_FringePlankSecondary_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "ExecuteUbergraph_B_Prj_Ranged_FringePlankSecondary_Athena");

	Params::B_Prj_Ranged_FringePlankSecondary_Athena_C_ExecuteUbergraph_B_Prj_Ranged_FringePlankSecondary_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.Play Impact Sound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::Play_Impact_Sound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "Play Impact Sound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.Burnout
// (BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::Burnout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "Burnout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AFortWaterBodyActor*              WaterBody                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWaterInteractionComponent*   Param_WaterInteractionComponent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsFirstBody                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(class AFortWaterBodyActor* WaterBody, class UFortWaterInteractionComponent* Param_WaterInteractionComponent, bool bIsFirstBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature");

	Params::B_Prj_Ranged_FringePlankSecondary_Athena_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature Parms{};

	Parms.WaterBody = WaterBody;
	Parms.Param_WaterInteractionComponent = Param_WaterInteractionComponent;
	Parms.bIsFirstBody = bIsFirstBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   HitActors                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FHitResult>               HitResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::OnExploded(const TArray<class AActor*>& HitActors, const TArray<struct FHitResult>& HitResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "OnExploded");

	Params::B_Prj_Ranged_FringePlankSecondary_Athena_C_OnExploded Parms{};

	Parms.HitActors = std::move(HitActors);
	Parms.HitResults = std::move(HitResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.OnStop
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::OnStop(const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "OnStop");

	Params::B_Prj_Ranged_FringePlankSecondary_Athena_C_OnStop Parms{};

	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_Prj_Ranged_FringePlankSecondary_Athena.B_Prj_Ranged_FringePlankSecondary_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_Prj_Ranged_FringePlankSecondary_Athena_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_Prj_Ranged_FringePlankSecondary_Athena_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

