#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ApplyMedkit_Athena_AnimBP

#include "Basic.hpp"

#include "AnimGraphRuntime_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ApplyMedkit_Athena_AnimBP.ApplyMedkit_Athena_AnimBP_C
// 0x0310 (0x05B0 - 0x02A0)
class UApplyMedkit_Athena_AnimBP_C final : public UFortItemAnimInstance
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02A8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot_1;                              // 0x02D8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0320(0x0078)()
	struct FAnimNode_BlendListByEnum              AnimGraphNode_BlendListByEnum;                     // 0x0398(0x00B0)()
	struct FAnimNode_SaveCachedPose               AnimGraphNode_SaveCachedPose;                      // 0x0448(0x00C8)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0510(0x0048)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose_1;                     // 0x0558(0x0028)()
	struct FAnimNode_UseCachedPose                AnimGraphNode_UseCachedPose;                       // 0x0580(0x0028)()

public:
	void ExecuteUbergraph_ApplyMedkit_Athena_AnimBP(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ApplyMedkit_Athena_AnimBP_C">();
	}
	static class UApplyMedkit_Athena_AnimBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UApplyMedkit_Athena_AnimBP_C>();
	}
};

}

