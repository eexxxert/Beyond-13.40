#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LagerRuntime

#include "Basic.hpp"

#include "GameplayAbilities_structs.hpp"
#include "Engine_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "ModularGameplay_classes.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "LagerRuntime_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// Class LagerRuntime.FortAthenaLivingWorldConfigData
// 0x0088 (0x00B8 - 0x0030)
class UFortAthenaLivingWorldConfigData final : public UDataAsset
{
public:
	TSoftObjectPtr<class UDataTable>              CategoryTable;                                     // 0x0030(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         MaxActorCount;                                     // 0x0058(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         MaxEventSpawnPerTick;                              // 0x0078(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         MinimumEventGenerationInterval;                    // 0x0098(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldConfigData">();
	}
	static class UFortAthenaLivingWorldConfigData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldConfigData>();
	}
};

// Class LagerRuntime.FortAthenaLivingWorldEventData
// 0x0068 (0x0098 - 0x0030)
class UFortAthenaLivingWorldEventData final : public UDataAsset
{
public:
	int32                                         TimeOfDayFilters;                                  // 0x0030(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         WaterLevelIndexMin;                                // 0x0034(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                         WaterLevelIndexMax;                                // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_41BD[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagQuery                      ProviderFiltersTagQuery;                           // 0x0040(0x0048)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortAthenaLivingWorldEventDataActorSpawnDescription> ActorDescriptions;                                 // 0x0088(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldEventData">();
	}
	static class UFortAthenaLivingWorldEventData* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldEventData>();
	}
};

// Class LagerRuntime.FortAthenaLivingWorldManager
// 0x0240 (0x02F0 - 0x00B0)
class UFortAthenaLivingWorldManager : public UGameStateComponent
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldConfigData> LagerConfig;                                       // 0x00B0(0x0028)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         LagerEnabled;                                      // 0x00D8(0x0020)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<class AActor*>                         PointProviders;                                    // 0x00F8(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                            SpecialActorMinimapIconBrush;                      // 0x0108(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                              SpecialActorMinimapIconScale;                      // 0x0190(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSlateBrush                            SpecialActorCompassIconBrush;                      // 0x0198(0x0088)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FVector2D                              SpecialActorCompassIconScale;                      // 0x0220(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UFortAthenaAISpawnerData>> LoadedSpawnerDataClass;                            // 0x0228(0x0010)(ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class APawn>>              LoadedPawnClasses;                                 // 0x0238(0x0010)(Net, ZeroConstructor, Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class AFortGameStateAthena*                   CachedGameState;                                   // 0x0248(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_41BE[0xA0];                                    // 0x0250(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void LivingWorldManagerRegisterPointProvider(class AActor* PointProvider);
	static void LivingWorldManagerUnregisterPointProvider(class AActor* PointProvider);

	void LivingWorldManagerFlush();
	void LivingWorldManagerGenerateEvents();
	void LivingWorldManagerProviderDebugActor(int32 ProviderIndex);
	void LivingWorldManagerToggleActorMinimap();
	void LivingWorldManagerToggleGenerateEvents();
	void LivingWorldManagerToggleVerboseLogging();
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void OnSpawnedActorDestroy(class AActor* DestroyedActor);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldManager">();
	}
	static class UFortAthenaLivingWorldManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortAthenaLivingWorldManager>();
	}
};

// Class LagerRuntime.FortAthenaLivingWorldPointProviderInterface
// 0x0000 (0x0028 - 0x0028)
class IFortAthenaLivingWorldPointProviderInterface final : public IInterface
{
public:
	void GetFiltersTags(struct FGameplayTagContainer* FilterTags) const;
	bool GetValidLocation(struct FVector* OutPosition, struct FRotator* OutRotation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldPointProviderInterface">();
	}
	static class IFortAthenaLivingWorldPointProviderInterface* GetDefaultObj()
	{
		return GetDefaultObjImpl<IFortAthenaLivingWorldPointProviderInterface>();
	}
};

// Class LagerRuntime.FortAthenaLivingWorldVolume
// 0x0080 (0x02D8 - 0x0258)
class AFortAthenaLivingWorldVolume final : public AVolume
{
public:
	uint8                                         Pad_41C0[0x8];                                     // 0x0258(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGameplayTagContainer                  FiltersTags;                                       // 0x0260(0x0020)(Edit, NativeAccessSpecifierPrivate)
	class UEnvQuery*                              EnvironmentQuery;                                  // 0x0280(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         WaterLevelIndexMin;                                // 0x0288(0x0020)(Edit, NativeAccessSpecifierPrivate)
	struct FScalableFloat                         WaterLevelIndexMax;                                // 0x02A8(0x0020)(Edit, NativeAccessSpecifierPrivate)
	uint8                                         Pad_41C1[0x10];                                    // 0x02C8(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void OnCurrentPlaylistLoaded(class FName PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortAthenaLivingWorldVolume">();
	}
	static class AFortAthenaLivingWorldVolume* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFortAthenaLivingWorldVolume>();
	}
};

// Class LagerRuntime.FortCheatManager_LivingWorldManager
// 0x0000 (0x0028 - 0x0028)
class UFortCheatManager_LivingWorldManager final : public UChildCheatManager
{
public:
	void LivingWorldManagerSpawn(const class FString& EventDataName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FortCheatManager_LivingWorldManager">();
	}
	static class UFortCheatManager_LivingWorldManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFortCheatManager_LivingWorldManager>();
	}
};

}
