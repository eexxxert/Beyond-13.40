#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AthenaGenericLobbyViolator

#include "Basic.hpp"


namespace SDK::Params
{

// Function AthenaGenericLobbyViolator.AthenaGenericLobbyViolator_C.SetGamemodeName
// 0x0068 (0x0068 - 0x0000)
struct AthenaGenericLobbyViolator_C_SetGamemodeName final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Param_SubText;                                     // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   CallFunc_TextToUpper_ReturnValue;                  // 0x0030(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD3[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextToUpper_ReturnValue_1;                // 0x0050(0x0018)()
};

}
