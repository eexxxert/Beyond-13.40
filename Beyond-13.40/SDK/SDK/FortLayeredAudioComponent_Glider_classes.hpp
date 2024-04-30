#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortLayeredAudioComponent_Glider

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FortLayeredAudioComponent_Glider.FortLayeredAudioComponent_Glider_C
// 0x0010 (0x0870 - 0x0860)
class UFortLayeredAudioComponent_Glider_C final : public UFortGliderAudioComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0860(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_FortLayeredAudioComponent_Glider(int32 EntryPoint);
	void Update_Glider_Audio(float ForwardDot, float RightDot);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FortLayeredAudioComponent_Glider_C">();
	}
	static class UFortLayeredAudioComponent_Glider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortLayeredAudioComponent_Glider_C>();
	}
};

}
