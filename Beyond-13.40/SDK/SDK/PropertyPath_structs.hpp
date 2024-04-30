#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropertyPath

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct PropertyPath.PropertyPathSegment
// 0x0028 (0x0028 - 0x0000)
struct FPropertyPathSegment final
{
public:
	class FName                                   Name;                                              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ArrayIndex;                                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E96[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStruct*                                Struct;                                            // 0x0010(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4E97[0x10];                                    // 0x0018(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct PropertyPath.CachedPropertyPath
// 0x0028 (0x0028 - 0x0000)
struct FCachedPropertyPath
{
public:
	TArray<struct FPropertyPathSegment>           Segments;                                          // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4E98[0x8];                                     // 0x0010(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	class UFunction*                              CachedFunction;                                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_4E99[0x8];                                     // 0x0020(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
