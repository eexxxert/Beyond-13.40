#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GiftBoxButton

#include "Basic.hpp"

#include "GiftBoxButton_classes.hpp"
#include "GiftBoxButton_parameters.hpp"


namespace SDK
{

// Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftBoxButton_C::ExecuteUbergraph_GiftBoxButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftBoxButton_C", "ExecuteUbergraph_GiftBoxButton");

	Params::GiftBoxButton_C_ExecuteUbergraph_GiftBoxButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGiftBoxButton_C::PlayGiftSelectedAnimation(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftBoxButton_C", "PlayGiftSelectedAnimation");

	Params::GiftBoxButton_C_PlayGiftSelectedAnimation Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GiftBoxButton.GiftBoxButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGiftBoxButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GiftBoxButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}
