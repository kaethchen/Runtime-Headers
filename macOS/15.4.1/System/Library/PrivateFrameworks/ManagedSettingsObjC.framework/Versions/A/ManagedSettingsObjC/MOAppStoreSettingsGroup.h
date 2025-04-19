@class MOIntegerSettingMetadata, NSNumber, MOBoolSettingMetadata;

@interface MOAppStoreSettingsGroup : MOSettingsGroup

@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyAppStoreAppInstallationMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyInAppPurchasesMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyMarketplaceAppInstallationMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *denyWebDistributionAppInstallationMetadata;
@property (class, readonly, nonatomic) MOIntegerSettingMetadata *maximumRatingMetadata;
@property (class, readonly, nonatomic) MOBoolSettingMetadata *requirePasswordForPurchasesMetadata;

@property (retain, nonatomic) NSNumber *denyAppStoreAppInstallation;
@property (retain, nonatomic) NSNumber *denyInAppPurchases;
@property (retain, nonatomic) NSNumber *denyMarketplaceAppInstallation;
@property (retain, nonatomic) NSNumber *denyWebDistributionAppInstallation;
@property (retain, nonatomic) NSNumber *maximumRating;
@property (retain, nonatomic) NSNumber *requirePasswordForPurchases;

+ (id)groupName;

@end
