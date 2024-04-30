#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BuildWatermark

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"


namespace SDK::Params
{

// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// 0x0230 (0x0230 - 0x0000)
struct BuildWatermark_C_ExecuteUbergraph_BuildWatermark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FFortTeamMemberInfo& PlayerInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_604E[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UFortPartyContext*                      CallFunc_GetContext_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                    K2Node_CustomEvent_PlayerInfo;                     // 0x0030(0x0200)(ConstParm, HasGetValueTypeHash)
};

// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
// 0x0200 (0x0200 - 0x0000)
struct BuildWatermark_C_HandlePlayerStateChanged final
{
public:
	struct FFortTeamMemberInfo                    PlayerInfo;                                        // 0x0000(0x0200)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

}
