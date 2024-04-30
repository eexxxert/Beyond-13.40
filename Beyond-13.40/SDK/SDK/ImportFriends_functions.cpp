#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImportFriends

#include "Basic.hpp"

#include "ImportFriends_classes.hpp"
#include "ImportFriends_parameters.hpp"


namespace SDK
{

// Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImportFriends_C::ExecuteUbergraph_ImportFriends(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "ExecuteUbergraph_ImportFriends");

	Params::ImportFriends_C_ExecuteUbergraph_ImportFriends Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImportFriends.ImportFriends_C.OnIncentivizedSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIncentivized                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImportFriends_C::OnIncentivizedSet(bool bIncentivized)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "OnIncentivizedSet");

	Params::ImportFriends_C_OnIncentivizedSet Parms{};

	Parms.bIncentivized = bIncentivized;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImportFriends.ImportFriends_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)

void UImportFriends_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "BP_OnActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*                    Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImportFriends_C::BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature");

	Params::ImportFriends_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImportFriends.ImportFriends_C.OnPanelTypeSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// ESocialImportPanelType                  NewType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImportFriends_C::OnPanelTypeSet(ESocialImportPanelType NewType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "OnPanelTypeSet");

	Params::ImportFriends_C_OnPanelTypeSet Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImportFriends.ImportFriends_C.HandleDescriptionText
// (BlueprintCallable, BlueprintEvent)

void UImportFriends_C::HandleDescriptionText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "HandleDescriptionText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImportFriends.ImportFriends_C.HandleHeaderText
// (BlueprintCallable, BlueprintEvent)

void UImportFriends_C::HandleHeaderText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "HandleHeaderText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ImportFriends.ImportFriends_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UImportFriends_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "PreConstruct");

	Params::ImportFriends_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScaleBox*                        ContainingScaleBox                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CharLimitThreshold                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*                 TargetText                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   WrapAtHorrizontal                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImportFriends_C::ScaleTextboxWithWrappingWorkaround(class UScaleBox* ContainingScaleBox, int32 CharLimitThreshold, class UCommonTextBlock* TargetText, int32 WrapAtHorrizontal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "ScaleTextboxWithWrappingWorkaround");

	Params::ImportFriends_C_ScaleTextboxWithWrappingWorkaround Parms{};

	Parms.ContainingScaleBox = ContainingScaleBox;
	Parms.CharLimitThreshold = CharLimitThreshold;
	Parms.TargetText = TargetText;
	Parms.WrapAtHorrizontal = WrapAtHorrizontal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ImportFriends.ImportFriends_C.ScaleTextButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CharThreshold                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScaleBox*                        ContainingScaleBox                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UImportFriends_C::ScaleTextButton(int32 CharThreshold, class UScaleBox* ContainingScaleBox, class UIconTextButton_C* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ImportFriends_C", "ScaleTextButton");

	Params::ImportFriends_C_ScaleTextButton Parms{};

	Parms.CharThreshold = CharThreshold;
	Parms.ContainingScaleBox = ContainingScaleBox;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}

}
