#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_Umbrella_Build_A_Brella

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.ExecuteUbergraph_B_Glider_Umbrella_Build_A_Brella
// 0x0048 (0x0048 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_ExecuteUbergraph_B_Glider_Umbrella_Build_A_Brella final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bParachuteVisibility;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7258[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_MovementLengthSquared;                // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ForwardDot_1;                         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RightDot_1;                           // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RotationalMovementAcceleration;       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7259[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_725A[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVinderTech_Umbrella_BuildABrella_AnimBP_C* K2Node_DynamicCast_AsVinder_Tech_Umbrella_Build_ABrella_Anim_BP; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EFortDayPhase                                 K2Node_Event_CurrentDayPhase;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 K2Node_Event_PreviousDayPhase;                     // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAtCreation;                          // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_ForwardDot;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RightDot;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.Audio Update
// 0x0008 (0x0008 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Audio_Update final
{
public:
	float                                         ForwardDot;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightDot;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.OnDayPhaseChanged
// 0x0003 (0x0003 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_OnDayPhaseChanged final
{
public:
	EFortDayPhase                                 CurrentDayPhase;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 PreviousDayPhase;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAtCreation;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.OnParachuteTrailUpdated
// 0x0010 (0x0010 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_OnParachuteTrailUpdated final
{
public:
	float                                         MovementLengthSquared;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardDot;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightDot;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationalMovementAcceleration;                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.K2_SetChuteMeshVisibility
// 0x0001 (0x0001 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_K2_SetChuteMeshVisibility final
{
public:
	bool                                          bParachuteVisibility;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.UserConstructionScript
// 0x0005 (0x0005 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_4;       // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.get Niagara Particles (Gameplay Tag Array)
// 0x0040 (0x0040 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Get_Niagara_Particles__Gameplay_Tag_Array_ final
{
public:
	struct FGameplayTagContainer                  Gameplay_Tag_Container;                            // 0x0000(0x0020)(Parm, OutParm)
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0020(0x0020)()
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.set Niagara System User Variable (Float)
// 0x000C (0x000C - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Set_Niagara_System_User_Variable__Float_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.set Niagara System User Variable (Vector)
// 0x0014 (0x0014 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Set_Niagara_System_User_Variable__Vector_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Value;                                             // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.set Niagara System User Variable (Int)
// 0x000C (0x000C - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Set_Niagara_System_User_Variable__Int_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.set Niagara System User Variable (Bool)
// 0x000C (0x000C - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Set_Niagara_System_User_Variable__Bool_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Value;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.set Niagara System User Variable (Color)
// 0x0018 (0x0018 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Set_Niagara_System_User_Variable__Color_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Value;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Umbrella_Build_A_Brella.B_Glider_Umbrella_Build_A_Brella_C.activate Niagara System
// 0x0001 (0x0001 - 0x0000)
struct B_Glider_Umbrella_Build_A_Brella_C_Activate_Niagara_System final
{
public:
	bool                                          Reset;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

