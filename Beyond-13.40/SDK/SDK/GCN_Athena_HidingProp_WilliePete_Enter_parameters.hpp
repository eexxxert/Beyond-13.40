#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GCN_Athena_HidingProp_WilliePete_Enter

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function GCN_Athena_HidingProp_WilliePete_Enter.GCN_Athena_HidingProp_WilliePete_Enter_C.OnBurst
// 0x0258 (0x0258 - 0x0000)
struct GCN_Athena_HidingProp_WilliePete_Enter_C_OnBurst final
{
public:
	class AActor*                                 MyTarget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                 Parameters;                                        // 0x0008(0x00B8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UParticleSystemComponent*>       ParticleComponents;                                // 0x00C0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UAudioComponent*>                AudioComponents;                                   // 0x00D0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UCameraShake*                           BurstCameraShakeInstance;                          // 0x00E0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                            BurstDecalInstance;                                // 0x00E8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_NormalizedMagnitude; // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakGameplayCueParameters_RawMagnitude;  // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6791[0x4];                                     // 0x00FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayEffectContextHandle           CallFunc_BreakGameplayCueParameters_EffectContext; // 0x0100(0x0018)()
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_MatchedTagName; // 0x0118(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           CallFunc_BreakGameplayCueParameters_OriginalTag;   // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedSourceTags; // 0x0128(0x0020)()
	struct FGameplayTagContainer                  CallFunc_BreakGameplayCueParameters_AggregatedTargetTags; // 0x0148(0x0020)()
	struct FVector                                CallFunc_BreakGameplayCueParameters_Location;      // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakGameplayCueParameters_Normal;        // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_Instigator;    // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakGameplayCueParameters_EffectCauser;  // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BreakGameplayCueParameters_SourceObject;  // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakGameplayCueParameters_PhysicalMaterial; // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_GameplayEffectLevel; // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakGameplayCueParameters_AbilityLevel;  // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_BreakGameplayCueParameters_TargetAttachComponent; // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_Array_Get_Item;                           // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x01C0(0x008C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6792[0x3];                                     // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
