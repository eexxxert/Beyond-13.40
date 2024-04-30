#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JoinVoiceChannelButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass JoinVoiceChannelButton.JoinVoiceChannelButton_C
// 0x0010 (0x0B80 - 0x0B70)
class UJoinVoiceChannelButton_C final : public UFortJoinVoiceChannelButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B70(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OnHover;                                           // 0x0B78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_JoinVoiceChannelButton(int32 EntryPoint);
	void BP_OnUnhovered();
	void BP_OnHovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"JoinVoiceChannelButton_C">();
	}
	static class UJoinVoiceChannelButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinVoiceChannelButton_C>();
	}
};

}
