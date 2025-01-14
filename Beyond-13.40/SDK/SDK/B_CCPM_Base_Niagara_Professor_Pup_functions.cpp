#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_CCPM_Base_Niagara_Professor_Pup

#include "Basic.hpp"

#include "B_CCPM_Base_Niagara_Professor_Pup_classes.hpp"
#include "B_CCPM_Base_Niagara_Professor_Pup_parameters.hpp"


namespace SDK
{

// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.ExecuteUbergraph_B_CCPM_Base_Niagara_Professor_Pup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_Professor_Pup_C::ExecuteUbergraph_B_CCPM_Base_Niagara_Professor_Pup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "ExecuteUbergraph_B_CCPM_Base_Niagara_Professor_Pup");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_ExecuteUbergraph_B_CCPM_Base_Niagara_Professor_Pup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.OnPawnAndPartChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::OnPawnAndPartChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "OnPawnAndPartChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.ResetSprint
// (BlueprintCallable, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::ResetSprint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "ResetSprint");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.Character Movement Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OldLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          OldVelocity                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Character_Movement_Updated(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "Character Movement Updated");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Character_Movement_Updated Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = std::move(OldLocation);
	Parms.OldVelocity = std::move(OldVelocity);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.OnBeginSkydiving
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::OnBeginSkydiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "OnBeginSkydiving");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.OnEndSkydiving
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::OnEndSkydiving()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "OnEndSkydiving");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.Enter Vehicle
// (BlueprintCallable, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Enter_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "Enter Vehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.Exit Vehicle
// (BlueprintCallable, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Exit_Vehicle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "Exit Vehicle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.OnHitPawn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SelfActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AB_CCPM_Base_Niagara_Professor_Pup_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "OnHitPawn");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_OnHitPawn Parms{};

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.ResIn
// (BlueprintCallable, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::ResIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "ResIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.ResOut
// (BlueprintCallable, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::ResOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "ResOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.Night Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    At_Creation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Night_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "Night Phase");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Night_Phase Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.Evening Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    At_Creation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Evening_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "Evening Phase");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Evening_Phase Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.Day Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    At_Creation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Day_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "Day Phase");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Day_Phase Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.Morning Phase
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    At_Creation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Morning_Phase(bool At_Creation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "Morning Phase");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Morning_Phase Parms{};

	Parms.At_Creation = At_Creation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.OnTargetingOrFirstPersonCameraChanged
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AB_CCPM_Base_Niagara_Professor_Pup_C::OnTargetingOrFirstPersonCameraChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "OnTargetingOrFirstPersonCameraChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.getIsDriving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsDriving                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_Professor_Pup_C::GetIsDriving(bool* Param_IsDriving)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "getIsDriving");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_GetIsDriving Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsDriving != nullptr)
		*Param_IsDriving = Parms.Param_IsDriving;
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.set Niagara System User Variable (Color)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Set_Niagara_System_User_Variable__Color_(class FName Param_Name, const struct FLinearColor& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "set Niagara System User Variable (Color)");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Set_Niagara_System_User_Variable__Color_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.set Niagara System User Variable (Float)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Set_Niagara_System_User_Variable__Float_(class FName Param_Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "set Niagara System User Variable (Float)");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Set_Niagara_System_User_Variable__Float_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.set Niagara System User Variable (Int)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Set_Niagara_System_User_Variable__Int_(class FName Param_Name, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "set Niagara System User Variable (Int)");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Set_Niagara_System_User_Variable__Int_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.set Niagara System User Variable (Vector)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Set_Niagara_System_User_Variable__Vector_(class FName Param_Name, const struct FVector& Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "set Niagara System User Variable (Vector)");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Set_Niagara_System_User_Variable__Vector_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = std::move(Value);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.set Niagara System User Variable (Bool)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_Professor_Pup_C::Set_Niagara_System_User_Variable__Bool_(class FName Param_Name, bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "set Niagara System User Variable (Bool)");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_Set_Niagara_System_User_Variable__Bool_ Parms{};

	Parms.Param_Name = Param_Name;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.getNiagaraParticles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer            Gameplay_Tag_Container                                 (Parm, OutParm)

void AB_CCPM_Base_Niagara_Professor_Pup_C::GetNiagaraParticles(struct FGameplayTagContainer* Gameplay_Tag_Container)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "getNiagaraParticles");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_GetNiagaraParticles Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gameplay_Tag_Container != nullptr)
		*Gameplay_Tag_Container = std::move(Parms.Gameplay_Tag_Container);
}


// Function B_CCPM_Base_Niagara_Professor_Pup.B_CCPM_Base_Niagara_Professor_Pup_C.getIsFrontEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsInFrontEnd                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CCPM_Base_Niagara_Professor_Pup_C::GetIsFrontEnd(bool* Param_IsInFrontEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_CCPM_Base_Niagara_Professor_Pup_C", "getIsFrontEnd");

	Params::B_CCPM_Base_Niagara_Professor_Pup_C_GetIsFrontEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsInFrontEnd != nullptr)
		*Param_IsInFrontEnd = Parms.Param_IsInFrontEnd;
}

}

