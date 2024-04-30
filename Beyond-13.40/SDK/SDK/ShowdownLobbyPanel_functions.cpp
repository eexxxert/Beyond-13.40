#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShowdownLobbyPanel

#include "Basic.hpp"

#include "ShowdownLobbyPanel_classes.hpp"
#include "ShowdownLobbyPanel_parameters.hpp"


namespace SDK
{

// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.ExecuteUbergraph_ShowdownLobbyPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownLobbyPanel_C::ExecuteUbergraph_ShowdownLobbyPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "ExecuteUbergraph_ShowdownLobbyPanel");

	Params::ShowdownLobbyPanel_C_ExecuteUbergraph_ShowdownLobbyPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventSwitchUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownLobbyPanel_C::EventSwitchUI(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "EventSwitchUI");

	Params::ShowdownLobbyPanel_C_EventSwitchUI Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BrandingToggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    HasBranding                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownLobbyPanel_C::BrandingToggle(bool HasBranding)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "BrandingToggle");

	Params::ShowdownLobbyPanel_C_BrandingToggle Parms{};

	Parms.HasBranding = HasBranding;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownLobbyPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "PreConstruct");

	Params::ShowdownLobbyPanel_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::ShowdownLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.EventColorize
// (BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::EventColorize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "EventColorize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownLobbyPanel_C::BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::ShowdownLobbyPanel_C_BndEvt__EventDetailsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShowdownLobbyPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)

void UShowdownLobbyPanel_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "RefreshDataBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "Refresh");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.UpdateColors
// (Public, BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::UpdateColors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "UpdateColors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.HandleCrossplayChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UShowdownLobbyPanel_C::HandleCrossplayChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "HandleCrossplayChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShowdownLobbyPanel.ShowdownLobbyPanel_C.InputTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamepad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShowdownLobbyPanel_C::InputTypeChanged(bool IsGamepad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShowdownLobbyPanel_C", "InputTypeChanged");

	Params::ShowdownLobbyPanel_C_InputTypeChanged Parms{};

	Parms.IsGamepad = IsGamepad;

	UObject::ProcessEvent(Func, &Parms);
}

}
