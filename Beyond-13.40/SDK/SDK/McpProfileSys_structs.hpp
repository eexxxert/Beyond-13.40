#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: McpProfileSys

#include "Basic.hpp"

#include "JsonUtilities_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct McpProfileSys.McpLootEntry
// 0x0058 (0x0058 - 0x0000)
struct FMcpLootEntry
{
public:
	class FString                                 ItemType;                                          // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ItemGuid;                                          // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quantity;                                          // 0x0020(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42DF[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJsonObjectWrapper                     Attributes;                                        // 0x0028(0x0020)(Edit, NativeAccessSpecifierPublic)
	class FString                                 ItemProfile;                                       // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpChangeQuantityRequest
// 0x0018 (0x0018 - 0x0000)
struct FMcpChangeQuantityRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DeltaQuantity;                                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42E0[0x4];                                     // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct McpProfileSys.ProfileUpdateSingle
// 0x0050 (0x0050 - 0x0000)
struct FProfileUpdateSingle
{
public:
	int64                                         ProfileRevision;                                   // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ProfileId;                                         // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                         ProfileChangesBaseRevision;                        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>             ProfileChanges;                                    // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              LockExpiration;                                    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>             Notifications;                                     // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ProfileCommandRevision;                            // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42E1[0x4];                                     // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct McpProfileSys.BaseUrlContext
// 0x0080 (0x0080 - 0x0000)
struct alignas(0x10) FBaseUrlContext
{
public:
	uint8                                         Pad_42E2[0x80];                                    // 0x0000(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct McpProfileSys.McpAddItemRequest
// 0x0048 (0x0048 - 0x0000)
struct FMcpAddItemRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TemplateId;                                        // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quantity;                                          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42E3[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJsonObjectWrapper                     Attributes;                                        // 0x0028(0x0020)(NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpRemoveItemRequest
// 0x0010 (0x0010 - 0x0000)
struct FMcpRemoveItemRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpChangeAttributesRequest
// 0x0030 (0x0030 - 0x0000)
struct FMcpChangeAttributesRequest final
{
public:
	class FString                                 ItemId;                                            // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                     Attributes;                                        // 0x0010(0x0020)(NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpProfileChangeRequest
// 0x0058 (0x0058 - 0x0000)
struct FMcpProfileChangeRequest final
{
public:
	int32                                         BaseCommandRevision;                               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42E4[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FMcpAddItemRequest>             AddRequests;                                       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpRemoveItemRequest>          RemoveRequests;                                    // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeQuantityRequest>      ChangeQuantityRequests;                            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpChangeAttributesRequest>    ChangeAttributesRequests;                          // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FJsonObjectWrapper>             ChangeStatRequests;                                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.ClientUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FClientUrlContext final : public FBaseUrlContext
{
};

// ScriptStruct McpProfileSys.DedicatedServerUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FDedicatedServerUrlContext final : public FBaseUrlContext
{
};

// ScriptStruct McpProfileSys.PublicUrlContext
// 0x0000 (0x0080 - 0x0080)
struct FPublicUrlContext final : public FBaseUrlContext
{
};

// ScriptStruct McpProfileSys.ProfileEntry
// 0x0020 (0x0020 - 0x0000)
struct FProfileEntry final
{
public:
	class FString                                 ProfileId;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMcpProfile*                            ProfileObject;                                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bWaitingForRefreshAllProfilesResponse;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bForwardUpdatesToClient;                           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42E5[0x6];                                     // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct McpProfileSys.ProfileGroupEntry
// 0x0020 (0x0020 - 0x0000)
struct FProfileGroupEntry final
{
public:
	uint8                                         Pad_42E6[0x18];                                    // 0x0000(0x0018)(Fixing Size After Last Property [ Dumper-7 ])
	class UMcpProfileGroup*                       ProfileGroup;                                      // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.ProfileUpdateNotification
// 0x0028 (0x0028 - 0x0000)
struct FProfileUpdateNotification final
{
public:
	TArray<struct FJsonObjectWrapper>             Changes;                                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              LockExpiration;                                    // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CommandRevision;                                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42E7[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         Revision;                                          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.ProfileUpdate
// 0x0020 (0x0070 - 0x0050)
struct FProfileUpdate final : public FProfileUpdateSingle
{
public:
	int32                                         ResponseVersion;                                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_42E8[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              ServerTime;                                        // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProfileUpdateSingle>           MultiUpdate;                                       // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.AccountIdAndProfileResponse
// 0x0080 (0x0080 - 0x0000)
struct FAccountIdAndProfileResponse final
{
public:
	class FString                                 AccountId;                                         // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FProfileUpdate                         Response;                                          // 0x0010(0x0070)(NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.GiftBoxInfo
// 0x0048 (0x0048 - 0x0000)
struct FGiftBoxInfo final
{
public:
	struct FDateTime                              GiftedOn;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 FromAccountId;                                     // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                  LootList;                                          // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                     Params;                                            // 0x0028(0x0020)(NativeAccessSpecifierPublic)
};

// ScriptStruct McpProfileSys.McpItemIdAndQuantity
// 0x0000 (0x0058 - 0x0058)
struct FMcpItemIdAndQuantity final : public FMcpLootEntry
{
};

// ScriptStruct McpProfileSys.McpLootResult
// 0x0020 (0x0020 - 0x0000)
struct FMcpLootResult final
{
public:
	class FString                                 TierGroupName;                                     // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMcpLootEntry>                  Items;                                             // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
