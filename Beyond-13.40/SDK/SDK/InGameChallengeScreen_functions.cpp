#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InGameChallengeScreen

#include "Basic.hpp"

#include "InGameChallengeScreen_classes.hpp"
#include "InGameChallengeScreen_parameters.hpp"


namespace SDK
{

// Function InGameChallengeScreen.InGameChallengeScreen_C.ExecuteUbergraph_InGameChallengeScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInGameChallengeScreen_C::ExecuteUbergraph_InGameChallengeScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameChallengeScreen_C", "ExecuteUbergraph_InGameChallengeScreen");

	Params::InGameChallengeScreen_C_ExecuteUbergraph_InGameChallengeScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInGameChallengeScreen_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameChallengeScreen_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::InGameChallengeScreen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UInGameChallengeScreen_C::BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameChallengeScreen_C", "BndEvt__ButtonMobileCloseBackgroundButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInGameChallengeScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameChallengeScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InGameChallengeScreen.InGameChallengeScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PassThrough                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameChallengeScreen_C::HandleBack(bool* PassThrough)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InGameChallengeScreen_C", "HandleBack");

	Params::InGameChallengeScreen_C_HandleBack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PassThrough != nullptr)
		*PassThrough = Parms.PassThrough;
}

}
