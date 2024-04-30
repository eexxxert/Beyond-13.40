#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MagicLeapARPin

#include "Basic.hpp"


namespace SDK
{

// Enum MagicLeapARPin.EMagicLeapAutoPinType
// NumValues: 0x0004
enum class EMagicLeapAutoPinType : uint8
{
	OnlyOnDataRestoration                    = 0,
	Always                                   = 1,
	Never                                    = 2,
	EMagicLeapAutoPinType_MAX                = 3,
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
// NumValues: 0x000C
enum class EMagicLeapPassableWorldError : uint8
{
	None                                     = 0,
	LowMapQuality                            = 1,
	UnableToLocalize                         = 2,
	Unavailable                              = 3,
	PrivilegeDenied                          = 4,
	InvalidParam                             = 5,
	UnspecifiedFailure                       = 6,
	PrivilegeRequestPending                  = 7,
	StartupPending                           = 8,
	NotImplemented                           = 9,
	PinNotFound                              = 10,
	EMagicLeapPassableWorldError_MAX         = 11,
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// 0x0010 (0x0010 - 0x0000)
struct FMagicLeapARPinState final
{
public:
	float                                         Confidence;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ValidRadius;                                       // 0x0004(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         RotationError;                                     // 0x0008(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         TranslationError;                                  // 0x000C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
