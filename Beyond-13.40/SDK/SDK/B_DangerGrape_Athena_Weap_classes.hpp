#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_DangerGrape_Athena_Weap

#include "Basic.hpp"

#include "B_ConsumableSmall_Athena_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_DangerGrape_Athena_Weap.B_DangerGrape_Athena_Weap_C
// 0x0008 (0x0C30 - 0x0C28)
class AB_DangerGrape_Athena_Weap_C final : public AB_ConsumableSmall_Athena_C
{
public:
	class UStaticMeshComponent*                   SM_PG_Bot_Grenade;                                 // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_DangerGrape_Athena_Weap_C">();
	}
	static class AB_DangerGrape_Athena_Weap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_DangerGrape_Athena_Weap_C>();
	}
};

}
