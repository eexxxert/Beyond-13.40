#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_S1_Solid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_S1_Solid.PBWA_S1_Solid_C
// 0x0028 (0x0CE8 - 0x0CC0)
class APBWA_S1_Solid_C final : public ABuildingWall
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0CC0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         GnomeWallChance;                                   // 0x0CC8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         GnomeWallMax;                                      // 0x0CCC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gnomed;                                            // 0x0CD0(0x0001)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5BD4[0x7];                                     // 0x0CD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceConstant*              GnomeMaterial;                                     // 0x0CD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            GnomeWall;                                         // 0x0CE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PBWA_S1_Solid(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_Solid_C">();
	}
	static class APBWA_S1_Solid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_Solid_C>();
	}
};

}
