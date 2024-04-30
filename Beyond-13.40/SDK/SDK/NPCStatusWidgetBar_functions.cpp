#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NPCStatusWidgetBar

#include "Basic.hpp"

#include "NPCStatusWidgetBar_classes.hpp"
#include "NPCStatusWidgetBar_parameters.hpp"


namespace SDK
{

// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.ExecuteUbergraph_NPCStatusWidgetBar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidgetBar_C::ExecuteUbergraph_NPCStatusWidgetBar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "ExecuteUbergraph_NPCStatusWidgetBar");

	Params::NPCStatusWidgetBar_C_ExecuteUbergraph_NPCStatusWidgetBar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNPCStatusWidgetBar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "PreConstruct");

	Params::NPCStatusWidgetBar_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPCStatusWidgetBar_C::SetPercent(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NPCStatusWidgetBar_C", "SetPercent");

	Params::NPCStatusWidgetBar_C_SetPercent Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}
