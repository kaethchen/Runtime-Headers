@class NSMutableDictionary;

@interface CDMUAFAssetsManager : NSObject {
    NSMutableDictionary *_assetSetNameToObserver;
}

+ (id)filterFactors:(id)a0 forAssetSetNameToFactors:(id)a1;
+ (id)getAssetSetNameToFactors:(id)a0 withError:(id *)a1;
+ (id)getAssetSetNameToUafClientManager:(id)a0 withError:(id *)a1;
+ (id)getFactorToAssetSetName:(id)a0 uafClientManagers:(id)a1 withError:(id *)a2;
+ (id)getFactorsForClientManager:(id)a0;
+ (id)getNLAssetFromUAFAsset:(id)a0 withFactor:(id)a1 withAssetSetName:(id)a2 withAssetSet:(id)a3;
+ (id)getNLAssetFromUAFAssetPostValidation:(id)a0 asset:(id)a1 locale:(id)a2 assetSetName:(id)a3 assetSet:(id)a4;
+ (id)getNLUAFClientManagers;
+ (id)getUAFAssetsForFactors:(id)a0 withCDMAssetsInfo:(id)a1 locale:(id)a2;
+ (id)getUAFClientManagersForLocale:(id)a0 withCDMAssetsInfo:(id)a1;
+ (void)initUAFClientManagers:(id)a0 locale:(id)a1 error:(id *)a2;
+ (void)reInitCDMUAFAssetsCache;
+ (void)setAssetsAvailabilityForFactors:(id)a0 withAssetSet:(id)a1 forAssetSetName:(id)a2 withDelegateHandler:(id)a3 withLocale:(id)a4 withFactorAndFolders:(id)a5 useFileManager:(id)a6 withAssetAvailabilityType:(long long)a7;
+ (void)subscribeToAssetsForAssetSet:(long long)a0 withCDMAssetsUsages:(id)a1;
+ (void)subscribeToSsuAssetsForLocale:(id)a0;
+ (BOOL)validateFactors:(id)a0 inAssetSet:(id)a1 forLocale:(id)a2 withAssetSetName:(id)a3;

- (void).cxx_destruct;
- (id)initManager;
- (BOOL)registerForCDMAssetsInfo:(id)a0 withLocale:(id)a1 withAssetsDelegate:(id)a2 useFileManager:(id)a3 withSelfContextId:(id)a4 withSelfMetadata:(id)a5 withDataDispatcherContext:(id)a6 withAssetAvailabilityType:(long long)a7 withError:(id *)a8;
- (void)registerForFactors:(id)a0 inAssetSetName:(id)a1 withAssetsDelegate:(id)a2 withLocale:(id)a3 withFactorAndFolders:(id)a4 useFileManager:(id)a5 withAssetAvailabilityType:(long long)a6;
- (void)setupForLocale:(id)a0 cdmAssetsInfo:(id)a1 error:(id *)a2;

@end
