@class NSArray, NSString, TVISAssetServiceManager, NSObject;
@protocol TVISScreenSaverDelegateServiceInterface, OS_dispatch_queue;

@interface TVISScreenSaverService : NSObject <TVISCacheDeleteManagerObserver, TVISAssetServiceObserver, TVISScreenSaverServiceInterface>

@property (retain, nonatomic) TVISAssetServiceManager *assetManager;
@property (retain, nonatomic) id<TVISScreenSaverDelegateServiceInterface> serviceDelegate;
@property (retain, nonatomic) NSArray *preferredLocalizations;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)assetServiceDidDownloadNewAsset;
- (void)removeUserWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)activateCategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)activateScreenSaverType:(long long)a0 reply:(id /* block */)a1;
- (void)activateSubcategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)assetServiceDidUpdateManifest;
- (void)cacheDeleteManager:(id)a0 didPurgeFiles:(id)a1;
- (void)deactivateCategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)deactivateSubcategoryWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchNextDownloadableAssetsWithCount:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)fetchScreenSaverConfigurationWithReply:(id /* block */)a0;
- (id)forceDownloadAssetsWithIDs:(id)a0 reply:(id /* block */)a1;
- (void)setUserWithIdentifier:(id)a0 activeCategoryIdentifiers:(id)a1 activeSubcategoryIdentifiers:(id)a2 pinnedAssetIdentifiers:(id)a3 lastActiveDate:(id)a4 reply:(id /* block */)a5;

@end
