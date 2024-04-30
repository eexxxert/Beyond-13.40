#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LocalNotifications

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class LocalNotifications.LocalNotificationsSettings
// 0x0018 (0x0050 - 0x0038)
class ULocalNotificationsSettings final : public UDeveloperSettings
{
public:
	struct FSoftObjectPath                        StringTableLocalNotifications;                     // 0x0038(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LocalNotificationsSettings">();
	}
	static class ULocalNotificationsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULocalNotificationsSettings>();
	}
};

}
