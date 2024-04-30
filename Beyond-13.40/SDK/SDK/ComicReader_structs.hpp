#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComicReader

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum ComicReader.EFortComicClickableZone
// NumValues: 0x0004
enum class EFortComicClickableZone : uint8
{
	None                                     = 0,
	Previous                                 = 1,
	Next                                     = 2,
	EFortComicClickableZone_MAX              = 3,
};

// Enum ComicReader.EFortComicPanelUnit
// NumValues: 0x0003
enum class EFortComicPanelUnit : uint8
{
	Pixel                                    = 0,
	Percent                                  = 1,
	EFortComicPanelUnit_MAX                  = 2,
};

// Enum ComicReader.EFortComicPanelTransitionType
// NumValues: 0x0003
enum class EFortComicPanelTransitionType : uint8
{
	Pan                                      = 0,
	CrossFade                                = 1,
	EFortComicPanelTransitionType_MAX        = 2,
};

// Enum ComicReader.EFortComicPanelMaskType
// NumValues: 0x0003
enum class EFortComicPanelMaskType : uint8
{
	Rectangle                                = 0,
	Quad                                     = 1,
	EFortComicPanelMaskType_MAX              = 2,
};

// Enum ComicReader.EFortComicViewMode
// NumValues: 0x0003
enum class EFortComicViewMode : uint8
{
	Page                                     = 0,
	Panel                                    = 1,
	EFortComicViewMode_MAX                   = 2,
};

// ScriptStruct ComicReader.FortComicPanelTransition
// 0x0008 (0x0008 - 0x0000)
struct FFortComicPanelTransition final
{
public:
	EFortComicPanelTransitionType                 Type;                                              // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C86[0x3];                                      // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct ComicReader.FortComicPanel
// 0x0048 (0x0048 - 0x0000)
struct alignas(0x08) FFortComicPanel final
{
public:
	struct FVector2D                              Position;                                          // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              Size;                                              // 0x0008(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFortComicPanelTransition              ForwardTransition;                                 // 0x0010(0x0008)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	EFortComicPanelMaskType                       Mask;                                              // 0x0018(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C87[0x3];                                      // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              MaskPoints[0x4];                                   // 0x001C(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C88[0xC];                                      // 0x003C(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct ComicReader.FortComicPanelReference
// 0x0008 (0x0008 - 0x0000)
struct FFortComicPanelReference final
{
public:
	int32                                         PageIndex;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PanelIndex;                                        // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
