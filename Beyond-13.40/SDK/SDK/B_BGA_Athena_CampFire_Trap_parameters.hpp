#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_BGA_Athena_CampFire_Trap

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.ExecuteUbergraph_B_BGA_Athena_CampFire_Trap
// 0x0008 (0x0008 - 0x0000)
struct B_BGA_Athena_CampFire_Trap_C_ExecuteUbergraph_B_BGA_Athena_CampFire_Trap final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuildingInitializationReason             K2Node_Event_InitializationReason;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuildingPersistentState                  K2Node_Event_BuildingPersistentState;              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_BGA_Athena_CampFire_Trap.B_BGA_Athena_CampFire_Trap_C.OnBuildingActorInitialized
// 0x0002 (0x0002 - 0x0000)
struct B_BGA_Athena_CampFire_Trap_C_OnBuildingActorInitialized final
{
public:
	EFortBuildingInitializationReason             InitializationReason;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortBuildingPersistentState                  BuildingPersistentState;                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

