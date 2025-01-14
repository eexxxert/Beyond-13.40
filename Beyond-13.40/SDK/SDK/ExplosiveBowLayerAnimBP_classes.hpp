#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ExplosiveBowLayerAnimBP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AnimGraphRuntime_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ExplosiveBowLayerAnimBP.ExplosiveBowLayerAnimBP_C
// 0x2850 (0x2BB0 - 0x0360)
class UExplosiveBowLayerAnimBP_C final : public UFortItemLayerAnimInstance_ExplosiveBow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0360(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root_34;                             // 0x0368(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_17;                  // 0x0398(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_33;                             // 0x0420(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_16;                  // 0x0450(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_32;                             // 0x04D8(0x0030)()
	float                                         Pitch;                                             // 0x0508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Yaw;                                               // 0x050C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AimOffsetAlpha;                                    // 0x0510(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6353[0x4];                                     // 0x0514(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_15;                  // 0x0518(0x0088)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_14;                  // 0x05A0(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_31;                             // 0x0628(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_13;                  // 0x0658(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_30;                             // 0x06E0(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_29;                             // 0x0710(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_28;                             // 0x0740(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_27;                             // 0x0770(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_26;                             // 0x07A0(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_25;                             // 0x07D0(0x0030)()
	struct FFortAnimInput_AdjustedAim             InputParam;                                        // 0x0800(0x0240)(NoDestructor)
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_12;                  // 0x0A40(0x0088)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer_1;                  // 0x0AC8(0x00E0)()
	struct FAnimNode_RotationOffsetBlendSpace     AnimGraphNode_RotationOffsetBlendSpace;            // 0x0BA8(0x0188)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_16;                   // 0x0D30(0x0078)()
	struct FAnimNode_ApplyAdditive                AnimGraphNode_ApplyAdditive;                       // 0x0DA8(0x00C8)()
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x0E70(0x00E0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum_1;                   // 0x0F50(0x00B0)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x1000(0x00B0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_15;                   // 0x10B0(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_8;                   // 0x1128(0x00A0)()
	struct FAnimNode_Root                         AnimGraphNode_Root_24;                             // 0x11C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_11;                  // 0x11F8(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_23;                             // 0x1280(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_10;                  // 0x12B0(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_22;                             // 0x1338(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_21;                             // 0x1368(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_20;                             // 0x1398(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_14;                   // 0x13C8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_7;                   // 0x1440(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_13;                   // 0x14E0(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_6;                   // 0x1558(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_12;                   // 0x15F8(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_19;                             // 0x1670(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_11;                   // 0x16A0(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_5;                   // 0x1718(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_10;                   // 0x17B8(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_4;                   // 0x1830(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_9;                    // 0x18D0(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_18;                             // 0x1948(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_8;                    // 0x1978(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_3;                   // 0x19F0(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_7;                    // 0x1A90(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_2;                   // 0x1B08(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_6;                    // 0x1BA8(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_17;                             // 0x1C20(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_5;                    // 0x1C50(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool_1;                   // 0x1CC8(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_4;                    // 0x1D68(0x0078)()
	struct FAnimNode_BlendListByBool              AnimGraphNode_BlendListByBool;                     // 0x1DE0(0x00A0)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_3;                    // 0x1E80(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_16;                             // 0x1EF8(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_2;                    // 0x1F28(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_15;                             // 0x1FA0(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer_1;                    // 0x1FD0(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_14;                             // 0x2048(0x0030)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x2078(0x0078)()
	struct FAnimNode_Root                         AnimGraphNode_Root_13;                             // 0x20F0(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_12;                             // 0x2120(0x0030)()
	struct FAnimNode_Root                         AnimGraphNode_Root_11;                             // 0x2150(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_9;                   // 0x2180(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_10;                             // 0x2208(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_8;                   // 0x2238(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_9;                              // 0x22C0(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_7;                   // 0x22F0(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_8;                              // 0x2378(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_6;                   // 0x23A8(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_7;                              // 0x2430(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_5;                   // 0x2460(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_6;                              // 0x24E8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_4;                   // 0x2518(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_5;                              // 0x25A0(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_3;                   // 0x25D0(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_4;                              // 0x2658(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_2;                   // 0x2688(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_3;                              // 0x2710(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose_1;                   // 0x2740(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_2;                              // 0x27C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x27F8(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root_1;                              // 0x2880(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_SubInput;                            // 0x28B0(0x0088)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x2938(0x0030)()
	struct FFortAnimInput_AdjustedAim             AdjustedAim;                                       // 0x2968(0x0240)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void ExecuteUbergraph_ExplosiveBowLayerAnimBP(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_11A315AA4DFC9DAEFD15619E18677637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_RotationOffsetBlendSpace_4FE1ED204DA63B600CCE7AB1BB6028C4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosiveBowLayerAnimBP_AnimGraphNode_BlendSpacePlayer_EDF172954C1F699670096999A0687B8B();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* Param_ItemRelaxedEntry);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* Param_ItemLowerBodyJogPostPivot);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* Param_ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* Param_ItemLowerBodyJogStop);
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* Param_ItemLowerBodyJogStart);
	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* Param_ItemLowerBodyLeanAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* Param_ItemLowerBodyMovement);
	void ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* Param_ItemJogPostPivotAdditive);
	void ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* Param_ItemJogPrePivotAdditive);
	void ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* Param_ItemJogStopAdditive);
	void ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* Param_ItemJogStartAdditive);
	void ItemFlyModeLoopAdditive(struct FPoseLink* Param_ItemFlyModeLoopAdditive);
	void ItemFlyModeStartAdditive(struct FPoseLink* Param_ItemFlyModeStartAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* Param_ItemZipLineStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* Param_ItemJetPackJumpAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* Param_ItemJetPackStartAdditive);
	void ItemFallLandAdditive(struct FPoseLink* Param_ItemFallLandAdditive);
	void ItemFallAdditive(struct FPoseLink* Param_ItemFallAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* Param_ItemJumpLoopAdditive);
	void ItemJumpUpAdditive(struct FPoseLink* Param_ItemJumpUpAdditive);
	void ItemSlopeSliding(struct FPoseLink* Param_ItemSlopeSliding);
	void ItemCrouchTurningAdditive(struct FPoseLink* Param_ItemCrouchTurningAdditive);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* Param_ItemIdleAdditive);
	void ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* Param_ItemFullBodySprint);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& Param_InputParam, struct FPoseLink* Param_ItemUpperBody);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ExplosiveBowLayerAnimBP_C">();
	}
	static class UExplosiveBowLayerAnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UExplosiveBowLayerAnimBP_C>();
	}
};

}

