#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_UtilityItem_Generic_Athena

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ExecuteUbergraph_B_UtilityItem_Generic_Athena
// 0x0090 (0x0090 - 0x0000)
struct B_UtilityItem_Generic_Athena_C_ExecuteUbergraph_B_UtilityItem_Generic_Athena final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility;    // 0x0004(0x0008)(NoDestructor)
	bool                                          K2Node_CustomEvent_Targeting;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_Visible;                        // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_53A0[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_1;  // 0x0010(0x0008)(NoDestructor)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_2;  // 0x0018(0x0008)(NoDestructor)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_3;  // 0x0020(0x0008)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility>  K2Node_MakeArray_Array;                            // 0x0028(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_4;  // 0x0038(0x0008)(NoDestructor)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_5;  // 0x0040(0x0008)(NoDestructor)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_6;  // 0x0048(0x0008)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility>  K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_7;  // 0x0060(0x0008)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility>  K2Node_MakeArray_Array_2;                          // 0x0068(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FWeaponHudKeyActionVisibility          K2Node_MakeStruct_WeaponHudKeyActionVisibility_8;  // 0x0078(0x0008)(NoDestructor)
	TArray<struct FWeaponHudKeyActionVisibility>  K2Node_MakeArray_Array_3;                          // 0x0080(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
};

// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Visible
// 0x0001 (0x0001 - 0x0000)
struct B_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Visible final
{
public:
	bool                                          Visible;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C.ThrowConsumableHudActionKey_Targeting
// 0x0001 (0x0001 - 0x0000)
struct B_UtilityItem_Generic_Athena_C_ThrowConsumableHudActionKey_Targeting final
{
public:
	bool                                          Targeting;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

