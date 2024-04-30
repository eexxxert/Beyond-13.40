#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaBottomBarWidget

#include "Basic.hpp"

#include "AthenaBottomBarWidget_classes.hpp"
#include "AthenaBottomBarWidget_parameters.hpp"


namespace SDK
{

// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaBottomBarWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBottomBarWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBottomBarWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBottomBarWidget_C", "PreConstruct");

	Params::AthenaBottomBarWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AthenaBottomBarWidget.AthenaBottomBarWidget_C.ExecuteUbergraph_AthenaBottomBarWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaBottomBarWidget_C::ExecuteUbergraph_AthenaBottomBarWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AthenaBottomBarWidget_C", "ExecuteUbergraph_AthenaBottomBarWidget");

	Params::AthenaBottomBarWidget_C_ExecuteUbergraph_AthenaBottomBarWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
