#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameSubCatalog

#include "Basic.hpp"

#include "JsonUtilities_structs.hpp"
#include "McpProfileSys_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum GameSubCatalog.ECatalogRequirementType
// NumValues: 0x0005
enum class ECatalogRequirementType : uint8
{
	RequireFulfillment                       = 0,
	DenyOnFulfillment                        = 1,
	RequireItemOwnership                     = 2,
	DenyOnItemOwnership                      = 3,
	ECatalogRequirementType_MAX              = 4,
};

// Enum GameSubCatalog.ECatalogOfferType
// NumValues: 0x0003
enum class ECatalogOfferType : uint8
{
	StaticPrice                              = 0,
	DynamicBundle                            = 1,
	ECatalogOfferType_MAX                    = 2,
};

// Enum GameSubCatalog.ECatalogSaleType
// NumValues: 0x0007
enum class ECatalogSaleType : uint8
{
	NotOnSale                                = 0,
	UndecoratedNewPrice                      = 1,
	AmountOff                                = 2,
	PercentOff                               = 3,
	PercentOn                                = 4,
	Strikethrough                            = 5,
	MAX                                      = 6,
};

// Enum GameSubCatalog.EAppStore
// NumValues: 0x000B
enum class EAppStore : uint8
{
	DebugStore                               = 0,
	EpicPurchasingService                    = 1,
	IOSAppStore                              = 2,
	WeGameStore                              = 3,
	GooglePlayAppStore                       = 4,
	KindleStore                              = 5,
	PlayStationStore                         = 6,
	XboxLiveStore                            = 7,
	NintendoEShop                            = 8,
	SamsungGalaxyAppStore                    = 9,
	MAX                                      = 10,
};

// Enum GameSubCatalog.EStoreCurrencyType
// NumValues: 0x0005
enum class EStoreCurrencyType : uint8
{
	RealMoney                                = 0,
	MtxCurrency                              = 1,
	GameItem                                 = 2,
	Other                                    = 3,
	MAX                                      = 4,
};

// ScriptStruct GameSubCatalog.CatalogPurchaseNotification
// 0x0020 (0x0020 - 0x0000)
struct FCatalogPurchaseNotification final
{
public:
	struct FMcpLootResult                         LootResult;                                        // 0x0000(0x0020)(NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogKeyValue
// 0x0020 (0x0020 - 0x0000)
struct FCatalogKeyValue final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Value;                                             // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogItemPrice
// 0x0050 (0x0050 - 0x0000)
struct FCatalogItemPrice final
{
public:
	EStoreCurrencyType                            CurrencyType;                                      // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E22[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencySubType;                                   // 0x0008(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RegularPrice;                                      // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FinalPrice;                                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   PriceTextOverride;                                 // 0x0020(0x0018)(NativeAccessSpecifierPublic)
	ECatalogSaleType                              SaleType;                                          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E23[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              SaleExpiration;                                    // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EAppStore                                     AppStoreId;                                        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E24[0x7];                                     // 0x0049(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameSubCatalog.ItemQuantity
// 0x0038 (0x0038 - 0x0000)
struct FItemQuantity final
{
public:
	class FString                                 TemplateId;                                        // 0x0000(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Quantity;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E25[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FJsonObjectWrapper                     Attributes;                                        // 0x0018(0x0020)(Edit, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundleItem
// 0x0078 (0x0078 - 0x0000)
struct FCatalogDynamicBundleItem final
{
public:
	struct FItemQuantity                          Item;                                              // 0x0000(0x0038)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                          bCanOwnMultiple;                                   // 0x0038(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E26[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RegularPrice;                                      // 0x003C(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DiscountedPrice;                                   // 0x0040(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         AlreadyOwnedPriceReduction;                        // 0x0044(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x0048(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x0060(0x0018)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogDynamicBundle
// 0x0038 (0x0038 - 0x0000)
struct FCatalogDynamicBundle final
{
public:
	int32                                         DiscountedBasePrice;                               // 0x0000(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         RegularBasePrice;                                  // 0x0004(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         FloorPrice;                                        // 0x0008(0x0004)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStoreCurrencyType                            CurrencyType;                                      // 0x000C(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E27[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencySubType;                                   // 0x0010(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECatalogSaleType                              DisplayType;                                       // 0x0020(0x0001)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E28[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCatalogDynamicBundleItem>      BundleItems;                                       // 0x0028(0x0010)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogMetaAssetInfo
// 0x0030 (0x0030 - 0x0000)
struct FCatalogMetaAssetInfo final
{
public:
	class FString                                 StructName;                                        // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                     Payload;                                           // 0x0010(0x0020)(NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogOfferRequirement
// 0x0018 (0x0018 - 0x0000)
struct FCatalogOfferRequirement final
{
public:
	ECatalogRequirementType                       RequirementType;                                   // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E29[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MinQuantity;                                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 RequiredId;                                        // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogGiftInfo
// 0x0028 (0x0028 - 0x0000)
struct FCatalogGiftInfo final
{
public:
	bool                                          bIsEnabled;                                        // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E2A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ForcedGiftBoxTemplateId;                           // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOfferRequirement>       PurchaseRequirements;                              // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogOffer
// 0x0240 (0x0240 - 0x0000)
struct FCatalogOffer final
{
public:
	class FString                                 OfferId;                                           // 0x0000(0x0010)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DevName;                                           // 0x0010(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogKeyValue>               MetaInfo;                                          // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECatalogOfferType                             OfferType;                                         // 0x0030(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E2B[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCatalogItemPrice>              Prices;                                            // 0x0038(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCatalogDynamicBundle                  DynamicBundleInfo;                                 // 0x0048(0x0038)(Edit, NativeAccessSpecifierPublic)
	int32                                         DailyLimit;                                        // 0x0080(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         WeeklyLimit;                                       // 0x0084(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MonthlyLimit;                                      // 0x0088(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E2C[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Categories;                                        // 0x0090(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 CatalogGroup;                                      // 0x00A0(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         CatalogGroupPriority;                              // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SortPriority;                                      // 0x00B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                   Title;                                             // 0x00B8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   ShortDescription;                                  // 0x00D0(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FText                                   Description;                                       // 0x00E8(0x0018)(Edit, NativeAccessSpecifierPublic)
	class FString                                 AppStoreId[0xA];                                   // 0x0100(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCatalogMetaAssetInfo                  MetaAssetInfo;                                     // 0x01A0(0x0030)(NativeAccessSpecifierPublic)
	class FString                                 DisplayAssetPath;                                  // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FItemQuantity>                  ItemGrants;                                        // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOfferRequirement>       Requirements;                                      // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCatalogGiftInfo                       GiftInfo;                                          // 0x0200(0x0028)(NativeAccessSpecifierPublic)
	bool                                          Refundable;                                        // 0x0228(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E2D[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         DenyItemTemplateIds;                               // 0x0230(0x0010)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// ScriptStruct GameSubCatalog.Storefront
// 0x0020 (0x0020 - 0x0000)
struct FStorefront final
{
public:
	class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCatalogOffer>                  CatalogEntries;                                    // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogDownload
// 0x0020 (0x0020 - 0x0000)
struct FCatalogDownload final
{
public:
	int32                                         RefreshIntervalHrs;                                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         DailyPurchaseHrs;                                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              Expiration;                                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FStorefront>                    Storefronts;                                       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogItemSalePrice
// 0x0018 (0x0018 - 0x0000)
struct FCatalogItemSalePrice final
{
public:
	int32                                         SalePrice;                                         // 0x0000(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECatalogSaleType                              SaleType;                                          // 0x0004(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E2E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              StartTime;                                         // 0x0008(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                              EndTime;                                           // 0x0010(0x0008)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfoGift
// 0x0070 (0x0070 - 0x0000)
struct FCatalogPurchaseInfoGift final
{
public:
	class FString                                 OfferId;                                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStoreCurrencyType                            Currency;                                          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E2F[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencySubType;                                   // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ExpectedTotalPrice;                                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E30[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GameContext;                                       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         ReceiverAccountIds;                                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 GiftWrapTemplateId;                                // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PersonalMessage;                                   // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogPurchaseInfo
// 0x0040 (0x0040 - 0x0000)
struct FCatalogPurchaseInfo final
{
public:
	class FString                                 OfferId;                                           // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PurchaseQuantity;                                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStoreCurrencyType                            Currency;                                          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E31[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrencySubType;                                   // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ExpectedTotalPrice;                                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E32[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 GameContext;                                       // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct GameSubCatalog.CatalogReceiptInfo
// 0x0050 (0x0050 - 0x0000)
struct FCatalogReceiptInfo final
{
public:
	EAppStore                                     AppStore;                                          // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E33[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 AppStoreId;                                        // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReceiptId;                                         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReceiptInfo;                                       // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 PurchaseCorrelationId;                             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4E34[0x8];                                     // 0x0048(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

// ScriptStruct GameSubCatalog.KeychainDownload
// 0x0010 (0x0010 - 0x0000)
struct alignas(0x08) FKeychainDownload final
{
public:
	uint8                                         Pad_4E35[0x10];                                    // 0x0000(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};

}
