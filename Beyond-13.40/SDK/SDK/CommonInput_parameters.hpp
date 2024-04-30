#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonInput

#include "Basic.hpp"

#include "CommonInput_structs.hpp"


namespace SDK::Params
{

// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_SetCurrentInputType final
{
public:
	ECommonInputType                              NewInputType;                                      // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_SetGamepadInputType final
{
public:
	ECommonGamepadType                            InGamepadInputType;                                // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_GetCurrentGamepadType final
{
public:
	ECommonGamepadType                            ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_GetCurrentInputType final
{
public:
	ECommonInputType                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_GetDefaultInputType final
{
public:
	ECommonInputType                              ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.IsInputMethodActive
// 0x0002 (0x0002 - 0x0000)
struct CommonInputSubsystem_IsInputMethodActive final
{
public:
	ECommonInputType                              InputMethod;                                       // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_IsUsingPointerInput final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// 0x0001 (0x0001 - 0x0000)
struct CommonInputSubsystem_ShouldShowInputKeys final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
