#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_Melee_Generic

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "GameplayTags_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// 0x0140 (0x0D58 - 0x0C18)
class AB_Melee_Generic_C final : public AFortWeapon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0C18(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               IdleFX;                                            // 0x0C20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               SwingFX;                                           // 0x0C28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AnimTrial;                                         // 0x0C30(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               MeleeHeavy_PSC;                                    // 0x0C38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystem*                        IdleFX_Template;                                   // 0x0C40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Idle_Effect;                                   // 0x0C48(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_630F[0x7];                                     // 0x0C49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Idle_Effect;                                       // 0x0C50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystemComponent*               Idle_Effect_Component;                             // 0x0C58(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   IdleFXAttachSocket;                                // 0x0C60(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EAttachmentRule                               IdleFX_Location_Rule;                              // 0x0C68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Rotation_Rule;                             // 0x0C69(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Idle_FX_Scale_Rule;                                // 0x0C6A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6310[0x5];                                     // 0x0C6B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Swing_FX_Template;                                 // 0x0C70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_Swing_Effect;                                  // 0x0C78(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay)
	uint8                                         Pad_6311[0x7];                                     // 0x0C79(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Swing_Effect;                                      // 0x0C80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UParticleSystemComponent*               Swing_Effect_Component;                            // 0x0C88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   SwingFXSocket;                                     // 0x0C90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	EAttachmentRule                               SwingFX_Location_Rule;                             // 0x0C98(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Rotation_Rule;                            // 0x0C99(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachmentRule                               Swing_FX_Scale_Rule;                               // 0x0C9A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseAnimTrails;                                     // 0x0C9B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_6312[0x4];                                     // 0x0C9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        Anim_Trail_Template;                               // 0x0CA0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   OverrideFirstSocketName;                           // 0x0CA8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   OverrideSecond_Socket_Name;                        // 0x0CB0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UParticleSystem*                        AnimTrailsParticles;                               // 0x0CB8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               AnimTrail_PSC;                                     // 0x0CC0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class FName                                   FirstSocketName;                                   // 0x0CC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   Second_Socket_Name;                                // 0x0CD0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0CD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6313[0x4];                                     // 0x0CDC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystem*                        MeleeHeavy_ParticleSystem;                         // 0x0CE0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffect;                     // 0x0CE8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        WeaponDurabilityDestroyEffectIcon;                 // 0x0CF0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDestroyEffect;                                  // 0x0CF8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6314[0x7];                                     // 0x0CF9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAnimMontage*>                   PokeAnimations;                                    // 0x0D00(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               WeaponMID;                                         // 0x0D10(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Alteration_Ambient_PS;                             // 0x0D18(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class USoundBase*                             MeleeHeavy_Sound;                                  // 0x0D20(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Melee_Heavy_Launch_Gameplay_Cue_Tag_Override;      // 0x0D28(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           Melee_Heavy_Impact_Gameplay_Cue_Tag_Override;      // 0x0D30(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Effects_Color_Level;                               // 0x0D38(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6315[0x4];                                     // 0x0D44(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundAttenuation*                      MeleeHeavySoundAttenuationSettings;                // 0x0D48(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundConcurrency*                      MeleeHeavySoundConcurrencySettings;                // 0x0D50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_B_Melee_Generic(int32 EntryPoint);
	void OnWeaponDetached();
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly);
	void OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod);
	void OnWeaponAttached();
	void OnEquippedWeaponDestory();
	void OnPlayImpactFX(const struct FHitResult& HitResult, EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC);
	void PlayRClickImpacts();
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);
	void ReceiveBeginPlay();
	void MeleeSwingLeft_End();
	void MeleeSwingRight_End();
	void FootStepRight();
	void FootStepLeft();
	void MeleeSwingLeft(bool First_Left);
	void MeleeSwingRight(bool First_Right);
	void OnLoaded_CB594210420542B302428F8181D85E48(class UObject* Loaded);
	void UserConstructionScript();
	void SetWpnRarity();
	void SetActiveAlterationIdleParticles(bool Active, bool Reset);
	void PlayCQCPickaxeEnemyAudio(const struct FHitResult& Hit_Result);
	void Melee_Effect_Color(struct FVector* Melee_Color_Set);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"B_Melee_Generic_C">();
	}
	static class AB_Melee_Generic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AB_Melee_Generic_C>();
	}
};

}
