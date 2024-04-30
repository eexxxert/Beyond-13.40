#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Glider_Niagara

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function B_Glider_Niagara.B_Glider_Niagara_C.ExecuteUbergraph_B_Glider_Niagara
// 0x0120 (0x0120 - 0x0000)
struct B_Glider_Niagara_C_ExecuteUbergraph_B_Glider_Niagara final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Forward_Dot;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_Right_Dot;                      // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Is_Fully_Deployed;              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724B[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0010(0x0020)()
	TArray<class UFXSystemComponent*>             CallFunc_GetMatchingSystemComponents_ReturnValue;  // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_724C[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container_1; // 0x0058(0x0020)()
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container_2; // 0x0078(0x0020)()
	EFortDayPhase                                 K2Node_Event_CurrentDayPhase;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 K2Node_Event_PreviousDayPhase;                     // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bAtCreation;                          // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724D[0x5];                                     // 0x009B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container_3; // 0x00A0(0x0020)()
	bool                                          K2Node_Event_bParachuteVisibility;                 // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724E[0x3];                                     // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_MovementLengthSquared;                // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_ForwardDot;                           // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RightDot;                             // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_RotationalMovementAcceleration;       // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsGliderFullyDeployedAccordingToAnim_ReturnValue; // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_724F[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortAsyncAction_WaitManagedParticles*  CallFunc_SpawnManagedParticlesWithCallback_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEndPlayReason                                K2Node_Event_EndPlayReason;                        // 0x00E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7250[0x6];                                     // 0x00E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container_4; // 0x00E8(0x0020)()
	float                                         K2Node_CustomEvent_ForwardDot;                     // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_CustomEvent_RightDot;                       // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7251[0x3];                                     // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.FX System Update
// 0x000C (0x000C - 0x0000)
struct B_Glider_Niagara_C_FX_System_Update final
{
public:
	float                                         Forward_Dot;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Right_Dot;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Fully_Deployed;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.Audio Update
// 0x0008 (0x0008 - 0x0000)
struct B_Glider_Niagara_C_Audio_Update final
{
public:
	float                                         ForwardDot;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightDot;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.ReceiveEndPlay
// 0x0001 (0x0001 - 0x0000)
struct B_Glider_Niagara_C_ReceiveEndPlay final
{
public:
	EEndPlayReason                                EndPlayReason;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.OnParachuteTrailUpdated
// 0x0010 (0x0010 - 0x0000)
struct B_Glider_Niagara_C_OnParachuteTrailUpdated final
{
public:
	float                                         MovementLengthSquared;                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForwardDot;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RightDot;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RotationalMovementAcceleration;                    // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.K2_SetChuteMeshVisibility
// 0x0001 (0x0001 - 0x0000)
struct B_Glider_Niagara_C_K2_SetChuteMeshVisibility final
{
public:
	bool                                          bParachuteVisibility;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.OnDayPhaseChanged
// 0x0003 (0x0003 - 0x0000)
struct B_Glider_Niagara_C_OnDayPhaseChanged final
{
public:
	EFortDayPhase                                 CurrentDayPhase;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EFortDayPhase                                 PreviousDayPhase;                                  // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAtCreation;                                       // 0x0002(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System Default Variables
// 0x0028 (0x0028 - 0x0000)
struct B_Glider_Niagara_C_Set_Niagara_System_Default_Variables final
{
public:
	float                                         Forward_Dot;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Right_Dot;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0008(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.get Niagara Particles (Gameplay Tag Array)
// 0x0050 (0x0050 - 0x0000)
struct B_Glider_Niagara_C_Get_Niagara_Particles__Gameplay_Tag_Array_ final
{
public:
	struct FGameplayTagContainer                  Gameplay_Tag_Container;                            // 0x0000(0x0020)(Parm, OutParm)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0030(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.get Cascade Particles (Gameplay Tag Array)
// 0x0050 (0x0050 - 0x0000)
struct B_Glider_Niagara_C_Get_Cascade_Particles__Gameplay_Tag_Array_ final
{
public:
	struct FGameplayTagContainer                  Gameplay_Tag_Container;                            // 0x0000(0x0020)(Parm, OutParm)
	TArray<struct FGameplayTag>                   K2Node_MakeArray_Array;                            // 0x0020(0x0010)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_MakeGameplayTagContainerFromArray_ReturnValue; // 0x0030(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Float)
// 0x0030 (0x0030 - 0x0000)
struct B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Float_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7252[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0010(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Vector)
// 0x0038 (0x0038 - 0x0000)
struct B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Vector_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Value;                                             // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7253[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0018(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Int)
// 0x0030 (0x0030 - 0x0000)
struct B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Int_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7254[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0010(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Bool)
// 0x0030 (0x0030 - 0x0000)
struct B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Bool_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Value;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7255[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0010(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.set Niagara System User Variable (Color)
// 0x0038 (0x0038 - 0x0000)
struct B_Glider_Niagara_C_Set_Niagara_System_User_Variable__Color_ final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Value;                                             // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0018(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.activate Niagara System
// 0x0028 (0x0028 - 0x0000)
struct B_Glider_Niagara_C_Activate_Niagara_System final
{
public:
	bool                                          Reset;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7256[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0008(0x0020)()
};

// Function B_Glider_Niagara.B_Glider_Niagara_C.deactivate Niagara System
// 0x0020 (0x0020 - 0x0000)
struct B_Glider_Niagara_C_Deactivate_Niagara_System final
{
public:
	struct FGameplayTagContainer                  CallFunc_get_Niagara_Particles__Gameplay_Tag_Array__Gameplay_Tag_Container; // 0x0000(0x0020)()
};

}
