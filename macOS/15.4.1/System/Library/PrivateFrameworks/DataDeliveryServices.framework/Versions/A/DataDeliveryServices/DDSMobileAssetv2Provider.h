@class NSString, NSMutableDictionary, DDSAssetQueryResultCache;
@protocol DDSAssetProvidingDelegate, DDSMobileAssetv2ProviderDataSource;

@interface DDSMobileAssetv2Provider : NSObject <DDSAssetProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) DDSAssetQueryResultCache *assetQueryResultsCache;
@property (readonly, nonatomic) NSMutableDictionary *downloadStateByAssetID;
@property (readonly, nonatomic) NSMutableDictionary *compatabilityVersionByAssetType;
@property (readonly, nonatomic) id<DDSMobileAssetv2ProviderDataSource> dataSource;
@property (retain, nonatomic) id<DDSAssetProvidingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)platformVersion;
+ (id)latestAssetsOnlyFromAssets:(id)a0;
+ (id)latestBetweenAssetA:(id)a0 AssetB:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)removeAssets:(id)a0;
- (void)updateCatalogForAssetType:(id)a0 discretionaryDownload:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)allContentItemsMatchingQuery:(id)a0 error:(id *)a1;
- (id)assetsForQuery:(id)a0 errorPtr:(id *)a1;
- (id)assetsInCalalogForQuery:(id)a0 errorPtr:(id *)a1;
- (void)beginDownloadForAssertion:(id)a0 discretionaryDownload:(BOOL)a1 handler:(id /* block */)a2;
- (void)beginDownloadForAssertions:(id)a0 discretionaryDownload:(BOOL)a1;
- (void)beginDownloadForAssets:(id)a0 withPolicy:(id)a1 discretionaryDownload:(BOOL)a2 error:(id *)a3 handler:(id /* block */)a4;
- (long long)compatabilityVersionForAssetType:(id)a0;
- (id)contentItemsFromAssets:(id)a0 matchingFilter:(id)a1;
- (void)didChangeDownloadState:(unsigned long long)a0 forAsset:(id)a1;
- (void)didCompleteDownloadForAssertion:(id)a0 error:(id)a1;
- (void)didUpdateCatalogWithAssetType:(id)a0 error:(id)a1;
- (id)downloadOptionsForCatalogWithType:(id)a0 discretionaryDownload:(BOOL)a1;
- (id)downloadOptionsForPolicy:(id)a0 discretionaryDownload:(BOOL)a1;
- (void)removeAssetsForAssertions:(id)a0;
- (void)removeOldAssetsForAssertions:(id)a0;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)setCompatabilityVersion:(long long)a0 forAssetType:(id)a1;
- (BOOL)shouldMatchAttributeValue:(id)a0 givenValue:(id)a1;
- (void)startCatalogDownloadForAssetType:(id)a0 withDownloadOptions:(id)a1 withCompletion:(id /* block */)a2;
- (void)startDownloadForAsset:(id)a0 withOptions:(id)a1 progress:(id /* block */)a2 handler:(id /* block */)a3;
- (id)updatableAssetsForAssertion:(id)a0;

@end
