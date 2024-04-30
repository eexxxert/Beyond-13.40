#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EpicCMSUIFramework

#include "Basic.hpp"


namespace SDK::Params
{

// Function EpicCMSUIFramework.EpicCMSImage.SetMediaURL
// 0x0010 (0x0010 - 0x0000)
struct EpicCMSImage_SetMediaURL final
{
public:
	class FString                                 MediaUrl;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage
// 0x0008 (0x0008 - 0x0000)
struct EpicCMSTileCarousel_AddTilePage final
{
public:
	class UWidget*                                TilePageWidget;                                    // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded
// 0x0008 (0x0008 - 0x0000)
struct EpicCMSTileCarousel_HandleTilePageAdded final
{
public:
	class UWidget*                                TileWidget;                                        // 0x0000(0x0008)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged
// 0x0001 (0x0001 - 0x0000)
struct EpicCMSTileCarousel_NavigationVisibilityChanged final
{
public:
	bool                                          bShowNavigation;                                   // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex
// 0x0004 (0x0004 - 0x0000)
struct EpicCMSTileCarousel_SetCurrentPageByIndex final
{
public:
	int32                                         PageIndex;                                         // 0x0000(0x0004)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex
// 0x0004 (0x0004 - 0x0000)
struct EpicCMSTileCarousel_GetCurrentPageIndex final
{
public:
	int32                                         ReturnValue;                                       // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
