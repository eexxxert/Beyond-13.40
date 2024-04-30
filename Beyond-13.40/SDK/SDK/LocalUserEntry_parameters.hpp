#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalUserEntry

#include "Basic.hpp"

#include "FortniteUI_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry
// 0x0020 (0x0020 - 0x0000)
struct LocalUserEntry_C_ExecuteUbergraph_LocalUserEntry final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F88[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELocalUserOnlineStatus                        K2Node_Event_OnlineStatus;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged
// 0x0001 (0x0001 - 0x0000)
struct LocalUserEntry_C_OnOnlineStatusChanged final
{
public:
	ELocalUserOnlineStatus                        OnlineStatus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView
// 0x0014 (0x0014 - 0x0000)
struct LocalUserEntry_C_HandleOnlineIndicatorView final
{
public:
	ELocalUserOnlineStatus                        InLocalUserOnlineStatus;                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELocalUserOnlineStatus                        Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F89[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
