#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Pawn_DangerGrape

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.ExecuteUbergraph_BP_Pawn_DangerGrape
// 0x0108 (0x0108 - 0x0000)
struct BP_Pawn_DangerGrape_C_ExecuteUbergraph_BP_Pawn_DangerGrape final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMobilePlatform_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3EA3[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_Damage;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  K2Node_Event_DamageTags;                           // 0x0010(0x0020)(ConstParm)
	struct FVector                                K2Node_Event_Momentum;                             // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_HitInfo;                              // 0x003C(0x008C)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              K2Node_Event_InstigatedBy;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_DamageCauser;                         // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           K2Node_Event_EffectContext;                        // 0x00D8(0x0018)()
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pawn_DangerGrape.BP_Pawn_DangerGrape_C.OnDeathPlayEffects
// 0x00E8 (0x00E8 - 0x0000)
struct BP_Pawn_DangerGrape_C_OnDeathPlayEffects final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EA5[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  DamageTags;                                        // 0x0008(0x0020)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                Momentum;                                          // 0x0028(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             HitInfo;                                           // 0x0034(0x008C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortPawn*                              InstigatedBy;                                      // 0x00C0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 DamageCauser;                                      // 0x00C8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle           EffectContext;                                     // 0x00D0(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}

