@class NSError, NSString, UAFAssetSetExperiment, NSUUID, NSDictionary, UAFAutoAssetSet, UAFAssetSetConfiguration, UAFAssetSetConsistencyToken, TRIClient;

@interface UAFAssetSet : NSObject {
    TRIClient *_client;
    UAFAssetSetConfiguration *_cfg;
    UAFAutoAssetSet *_cachingAutoAssetSet;
    NSDictionary *_minVersions;
    NSDictionary *_assetNameToTrial;
    NSDictionary *_assetNameToAutoAsset;
    NSDictionary *_assets;
    BOOL _rootsPresent;
    BOOL _factoryAssetsPresent;
    NSUUID *_uuid;
}

@property (retain, nonatomic) UAFAutoAssetSet *autoAssetSet;
@property (retain, nonatomic) NSError *autoAssetSetError;
@property (retain, nonatomic) UAFAssetSetExperiment *experiment;
@property (readonly, nonatomic) NSDictionary *usages;
@property (readonly, copy) NSString *assetSetId;
@property (readonly, copy) NSString *name;
@property (readonly, copy) UAFAssetSetConsistencyToken *consistencyToken;
@property (readonly, nonatomic) BOOL experimentationEnabled;
@property (readonly, copy) NSString *experimentId;

+ (id)autoAssetSet:(id)a0 usages:(id)a1 uuid:(id)a2 autoAssets:(id)a3 experiment:(id)a4 atomicInstance:(id)a5 error:(id *)a6;
+ (id)autoAssets:(id)a0 usages:(id)a1;
+ (id)getEntitledTrialAssets:(id)a0 usages:(id)a1;
+ (id)getTrialPurgeabilityLevel:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)assets;
- (id)assetNamed:(id)a0;
- (id)assetNamed:(id)a0 withUsage:(id)a1;
- (id)initWithAssetSet:(id)a0 usages:(id)a1;
- (void)mapAsset:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)invalidateWithQueue:(id)a0 completion:(id /* block */)a1;
- (BOOL)markAssetsPromoted:(id)a0 error:(id *)a1;
- (BOOL)markAssetsProvisional:(id)a0 error:(id *)a1;
- (id)_createAssetFromTrialInfo:(id)a0 assetName:(id)a1 fallback:(BOOL)a2 validPathOnly:(BOOL)a3;
- (id)applyAssetTransformations:(id)a0;
- (id)applyMinVersions:(id)a0;
- (id)applyOSCompatibility:(id)a0;
- (id)assetNamed:(id)a0 withUsage:(id)a1 disableExperimentation:(BOOL)a2;
- (id)assetSetIdForSELF:(BOOL)a0 stagedDuringSU:(BOOL *)a1;
- (id)createAssetFromMAAsset:(id)a0 assetName:(id)a1 experimentationEnabled:(BOOL)a2 experimentId:(id)a3;
- (id)createAssetFromPreinstalledWithAutoAssetInfo:(id)a0 assetName:(id)a1 experimentationEnabled:(BOOL)a2 experimentId:(id)a3;
- (id)createAssetFromTrialInfo:(id)a0 assetName:(id)a1;
- (id)createAssets;
- (id)getAutoAssetPreinstalled;
- (id)getTrialAssets;
- (id)initWithAssetSet:(id)a0 usages:(id)a1 configurationDirURLs:(id)a2;
- (id)initWithAssetSet:(id)a0 usages:(id)a1 configurationDirURLs:(id)a2 disableExperimentation:(BOOL)a3 consistencyToken:(id)a4;
- (id)initWithAssetSet:(id)a0 usages:(id)a1 disableExperimentation:(BOOL)a2;
- (id)namespacesOfAssetNames:(id)a0 error:(id *)a1;
- (id)overlayRoots:(id)a0;

@end
