@interface CDMAssetsUtils : NSObject

+ (BOOL)areFactorsValid:(id)a0 inKnownFactors:(id)a1;
+ (id)appendPathWithServiceAssetFolder:(id)a0 assetPath:(id)a1;
+ (id)cdmAssetSetToStr:(long long)a0;
+ (id)filterFactors:(id)a0 forAssetSets:(id)a1 withAssetSetNameToFactors:(id)a2;
+ (id)filterFactors:(id)a0 withFactorsInAssetSet:(id)a1;
+ (id)findExistFolderInAssetFolders:(id)a0 underBasePath:(id)a1 useFileManager:(id)a2;
+ (id)getAssetVersionFromAssetMetadata:(id)a0;
+ (id)getAssistantUsages:(id)a0;
+ (id)getCDMAssetsInfoForNLRouterWithLocale:(id)a0;
+ (id)getGraphNameForAssetAvailabilityType:(long long)a0;
+ (id)getLanguageFromLocaleString:(id)a0;
+ (id)getNLUsages:(id)a0;
+ (id)getSsuUsages:(id)a0;
+ (BOOL)isNLAssetValid:(id)a0 forLocale:(id)a1;
+ (BOOL)isNLAssetValid:(id)a0 forLocale:(id)a1 withFolders:(id)a2 useFileManager:(id)a3 withAssetAvailabilityType:(long long)a4;
+ (id)loadAssetMetadataFromAsset:(id)a0;
+ (BOOL)registerWithAssetsDelegate:(id)a0 withCDMAssetsInfo:(id)a1 withType:(long long)a2 withLocale:(id)a3;
+ (BOOL)registerWithAssetsDelegate:(id)a0 withType:(long long)a1 withLocale:(id)a2;

@end
