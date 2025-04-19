@class CDMDefaultAssetsManager, CDMUAFAssetsManager, NSFileManager;

@interface CDMAssetsManager : NSObject {
    CDMDefaultAssetsManager *_cdmDefaultAssetsManager;
    CDMUAFAssetsManager *_cdmUAFAssetsManager;
    NSFileManager *_fileManager;
}

+ (id)getFactorNamesForService:(id)a0;
+ (id)getFactorToUnprocessedNLAsset:(id)a0 cdmAssetsInfo:(id)a1 locale:(id)a2;
+ (id)getSingletonCDMAssetsManager;

- (void).cxx_destruct;
- (id)initManager;
- (void)_setupUafAssetManagerForLocale:(id)a0 cdmAssetsInfo:(id)a1 error:(id *)a2;
- (BOOL)areAssetsAvailableForCDMAssetsInfo:(id)a0 factorToAsset:(id)a1 withError:(id *)a2;
- (BOOL)areAssetsAvailableForCDMAssetsInfo:(id)a0 factorToAsset:(id)a1 withError:(id *)a2 withSelfMetadata:(id)a3 withSelfContextId:(id)a4 withDataDispatcherContext:(id)a5;
- (id)getAssetsByFactorNamesForCDMAssetsInfo:(id)a0 assetDirPath:(id)a1 locale:(id)a2;
- (id)getCDMDefaultAssetsManager;
- (id)getCDMUAFAssetsManager;
- (id)getNSFileManager;
- (BOOL)isAssetAvailableForCDMAssetsFactorConfig:(id)a0 factorToAsset:(id)a1 withError:(id *)a2;
- (id)processNLAsset:(id)a0 withAssetFolders:(id)a1;
- (id)processSideLoadedAssetForNLAsset:(id)a0 withAssetFolders:(id)a1 assetDirPath:(id)a2 locale:(id)a3;
- (BOOL)registerForCDMAssetsInfo:(id)a0 withLocale:(id)a1 withAssetsDelegate:(id)a2 selfContextId:(id)a3 selfMetadata:(id)a4 dataDispatcherContext:(id)a5 withAssetAvailabilityType:(long long)a6 withError:(id *)a7;
- (void)setupForLocale:(id)a0 cdmAssetsInfo:(id)a1 error:(id *)a2;
- (BOOL)shouldReSetupForLocale:(id)a0 cdmAssetsInfo:(id)a1;

@end
