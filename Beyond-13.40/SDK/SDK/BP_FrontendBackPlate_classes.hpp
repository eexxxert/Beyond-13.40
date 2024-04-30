#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_FrontendBackPlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_FrontendBackPlate.BP_FrontendBackPlate_C
// 0x0170 (0x0390 - 0x0220)
class ABP_FrontendBackPlate_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               P_DudeBro_MultiHomingProj_Trail;                   // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem11;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               ParticleSystem1;                                   // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FrontendBackPlate_Floor;                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_fog;                                    // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         StopHyperSpeed_BlurControl_740818E745B3B8A476EC3CA79F88917D; // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StopHyperSpeed_LessBrightFlash_740818E745B3B8A476EC3CA79F88917D; // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StopHyperSpeed_Flash_740818E745B3B8A476EC3CA79F88917D; // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            StopHyperSpeed__Direction_740818E745B3B8A476EC3CA79F88917D; // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E28[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     StopHyperSpeed;                                    // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_StarUVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_StarFieldFade_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_StarBloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_NumStarLoops_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_UVScale_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0288(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_ShowStarLines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x028C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_bloom_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_Tunnel_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_flash_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HyperSpace_starlines_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x029C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            HyperSpace__Direction_BA3E59114EDDA7E96C3E87A6A52D0356; // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E29[0x7];                                     // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     HyperSpace;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UISpecailEventTransition_UsingUISpecialEventColors_26FA49894E4D045B21346598A2D837C2; // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            UISpecailEventTransition__Direction_26FA49894E4D045B21346598A2D837C2; // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E2A[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     UISpecailEventTransition;                          // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                               BackgroundTexture;                                 // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Material_background;                               // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Material_Fog;                                      // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               BlurMaterial;                                      // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget;                                      // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UpdateFoginRealTime;                               // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E2B[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               MID_Floor;                                         // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     PreBlurMaterial;                                   // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 RenderTarget_preblur;                              // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Background;                                    // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               MID_Preblur;                                       // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BeginRockyRidge;                                   // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRockyRidgeFinished;                              // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             HidePlayer;                                        // 0x0338(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             RequestLobbyColorChanges;                          // 0x0348(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                           CurrentUIColorScheme;                              // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bHasUIColorOverride;                               // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E2C[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         FloatingShapes;                                    // 0x0370(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class UAudioComponent*                        LoopingAudio;                                      // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AllowMatchmakingInteraction;                       // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void BeginRockyRidge__DelegateSignature();
	void OnRockyRidgeFinished__DelegateSignature();
	void HidePlayer__DelegateSignature();
	void RequestLobbyColorChanges__DelegateSignature(const struct FLinearColor& Color_A, bool UseDefaultScheme);
	void ExecuteUbergraph_BP_FrontendBackPlate(int32 EntryPoint);
	void EnteringMatchmaking();
	void MatchmakingEnded(bool bWasSuccess);
	void ReceiveBeginPlay();
	void HandleSpecialEventAudioOnMatchmakingEnd(bool Success);
	void TestBlur();
	void SetAllowMatchmakingInteraction(bool AllowInteraction);
	void ResetMatchmakingAnim();
	void PlayEnterMatchmakingAnim();
	void ReceiveTick(float DeltaSeconds);
	void PlayUISpecialEventTransition(bool bTransitionToSpecialEvent);
	void SetEnableBlackMondayFX(bool IsEnabled);
	void UpdateSettings();
	void StopHyperSpeed__UpdateFunc();
	void StopHyperSpeed__FinishedFunc();
	void HyperSpace__UpdateFunc();
	void HyperSpace__FinishedFunc();
	void UISpecailEventTransition__UpdateFunc();
	void UISpecailEventTransition__FinishedFunc();
	void UserConstructionScript();
	void SetBackgroundTexture(class UTexture* Texture, class UMaterialInterface* Material, class UMaterialInterface* Param_PreBlurMaterial);
	void UpdateRenderTarget();
	void EnableRealtimeUpdate(bool Enabled);
	void UpdateRenderTargetRealtime();
	void RequestUIColorScheme(const struct FLinearColor& MainUIColor);
	void GetUIColorScheme(struct FLinearColor* ColorScheme, bool* bHasOverride);
	void ResetUIColorScheme();
	void HasUIColorOverride(bool* Param_HasUIColorOverride);
	void SetSpecialEventUIColorScheme(bool SetUIPanelColors, const struct FLinearColor& Backing, const struct FLinearColor& Backing_Hover, const struct FLinearColor& Backing_Selection, bool SetFontColors, const struct FLinearColor& Primary, const struct FLinearColor& Secondary, const struct FLinearColor& Tertiary, const struct FLinearColor& Quaternary);
	void SetFloatingShapeVisibility(bool Show);
	void CreateUniqueMaterialName(const class FString& PostFix, class FString* UniqueString);
	void HasMatcmakingInteraction(bool* HasInteraction);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_FrontendBackPlate_C">();
	}
	static class ABP_FrontendBackPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_FrontendBackPlate_C>();
	}
};

}
