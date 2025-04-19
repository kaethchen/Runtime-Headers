@class NSString, DDSAssetQueryResultCache;
@protocol DDSMAAutoAssetProvider, DDSMAAutoAssetManagerDataSource;

@interface DDSMAAutoAssetManager : NSObject <DDSMAAutoAssetManager>

@property (readonly, nonatomic) id<DDSMAAutoAssetProvider> provider;
@property (readonly, nonatomic) id<DDSMAAutoAssetManagerDataSource> dataSource;
@property (readonly, nonatomic) DDSAssetQueryResultCache *assetQueryResultsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAutoAssetType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)assetsForQuery:(id)a0;
- (id)assetsAvailableOnDeviceForQuery:(id)a0;
- (id)autoAssetSelectorsForQuery:(id)a0;
- (id)autoAssetTypeForAsserType:(id)a0;
- (id)autoAssetsForQuery:(id)a0;
- (void)fetchAssetUpdateStatusForQuery:(id)a0 callback:(id /* block */)a1;
- (id)initWithProvider:(id)a0 dataSource:(id)a1;
- (void)lockAssetsForQuery:(id)a0;
- (void)registerInterestInContentForQuery:(id)a0;
- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)unregisterInterestInContentForAssetSelector:(id)a0;
- (void)updateAssetForQuery:(id)a0 callback:(id /* block */)a1;

@end
