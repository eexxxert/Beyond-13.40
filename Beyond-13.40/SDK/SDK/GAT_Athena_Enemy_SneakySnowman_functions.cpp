#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GAT_Athena_Enemy_SneakySnowman

#include "Basic.hpp"

#include "GAT_Athena_Enemy_SneakySnowman_classes.hpp"
#include "GAT_Athena_Enemy_SneakySnowman_parameters.hpp"


namespace SDK
{

// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Athena_Enemy_SneakySnowman_C::ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_Enemy_SneakySnowman_C", "ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman");

	Params::GAT_Athena_Enemy_SneakySnowman_C_ExecuteUbergraph_GAT_Athena_Enemy_SneakySnowman Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGAT_Athena_Enemy_SneakySnowman_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_Enemy_SneakySnowman_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GAT_Athena_Enemy_SneakySnowman.GAT_Athena_Enemy_SneakySnowman_C.Remove Snowman
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*                  Param_PlayerPawn                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Athena_Enemy_SneakySnowman_C::Remove_Snowman(class AFortPlayerPawn* Param_PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GAT_Athena_Enemy_SneakySnowman_C", "Remove Snowman");

	Params::GAT_Athena_Enemy_SneakySnowman_C_Remove_Snowman Parms{};

	Parms.Param_PlayerPawn = Param_PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

