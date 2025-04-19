@class TVISScreenSaverConfiguration, TVISScreenSaverServiceProxy, NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue, TVISScreenSaver;

@interface TVISScreenSaverServiceController : NSObject <TVISScreenSaverDelegateServiceInterface> {
    int idleScreenAssetServiceManagerUpdated;
}

@property (class, readonly, nonatomic) TVISScreenSaverServiceController *sharedInstance;

@property (readonly, nonatomic) TVISScreenSaverServiceProxy *serviceProxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) int connectionRetryAttempts;
@property (readonly, nonatomic) TVISScreenSaverConfiguration *currentConfiguration;
@property (readonly, nonatomic) id<TVISScreenSaver> activeScreenSaver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)reconnect;
- (void)_configureRemoteProxy;
- (void)_handleUpdateWithConfiguration:(id)a0 error:(id)a1;
- (void)_notifyObserversConfigurationDidUpdate:(id)a0;
- (void)_registerAssetServiceManagerUpdates;
- (void)_updateActiveScreenSaver;
- (void)activateCategoryWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)activatePhotosSharingFilter:(id)a0 completion:(id /* block */)a1;
- (void)activatePhotosSourceFilter:(id)a0 completion:(id /* block */)a1;
- (void)activateScreenSaverType:(long long)a0 completion:(id /* block */)a1;
- (void)activateSubcategoryWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deactivateCategoryWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deactivateSubcategoryWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchNextDownloadableAssetsWithCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)forceDownloadAssetsWithIDs:(id)a0 completion:(id /* block */)a1;
- (void)removeUserWithReply:(id /* block */)a0;
- (void)screenSaverService:(id)a0 didUpdateConfiguration:(id)a1;
- (void)setUserActiveCategoryIdentifiers:(id)a0 activeSubcategoryIdentifiers:(id)a1 pinnedAssetIdentifiers:(id)a2 reply:(id /* block */)a3;

@end
