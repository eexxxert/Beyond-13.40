#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_FringePlank_PassiveFromEvent_Athena

#include "Basic.hpp"

#include "GA_FringePlank_PassiveFromEvent_Athena_classes.hpp"
#include "GA_FringePlank_PassiveFromEvent_Athena_parameters.hpp"


namespace SDK
{

// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_FringePlank_PassiveFromEvent_Athena_C::ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_ExecuteUbergraph_GA_FringePlank_PassiveFromEvent_Athena Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               EventData                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_FringePlank_PassiveFromEvent_Athena_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "K2_ActivateAbilityFromEvent");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_K2_ActivateAbilityFromEvent Parms{};

	Parms.EventData = std::move(EventData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NotifyTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_FringePlank_PassiveFromEvent_Athena_C::OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_OnCompleted_4979E8004A3CAF88A4C44F903E62D3DC Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NotifyTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_FringePlank_PassiveFromEvent_Athena_C::OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_OnBlendOut_4979E8004A3CAF88A4C44F903E62D3DC Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NotifyTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_FringePlank_PassiveFromEvent_Athena_C::OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_OnInterrupted_4979E8004A3CAF88A4C44F903E62D3DC Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NotifyTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_FringePlank_PassiveFromEvent_Athena_C::OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_OnCancelled_4979E8004A3CAF88A4C44F903E62D3DC Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NotifyTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_FringePlank_PassiveFromEvent_Athena_C::OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_OnNotifyBegin_4979E8004A3CAF88A4C44F903E62D3DC Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_FringePlank_PassiveFromEvent_Athena.GA_FringePlank_PassiveFromEvent_Athena_C.OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                     NotifyTag                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_FringePlank_PassiveFromEvent_Athena_C::OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC(const struct FGameplayTag& NotifyTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_FringePlank_PassiveFromEvent_Athena_C", "OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC");

	Params::GA_FringePlank_PassiveFromEvent_Athena_C_OnNotifyEnd_4979E8004A3CAF88A4C44F903E62D3DC Parms{};

	Parms.NotifyTag = std::move(NotifyTag);

	UObject::ProcessEvent(Func, &Parms);
}

}

