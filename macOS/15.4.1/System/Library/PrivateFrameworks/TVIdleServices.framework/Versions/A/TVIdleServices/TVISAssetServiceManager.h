@class NSSet, NSMapTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface TVISAssetServiceManager : NSObject <TVISAssetServiceObserver>

@property (class, readonly) BOOL isInitialRun;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQ;
@property (retain, nonatomic) NSMapTable *observers;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)assetServiceDidDownloadNewAsset;
- (id)_activeServices;
- (id)purgeableInfoForUrgency:(long long)a0 volume:(id)a1;
- (id)_aerialAssetService;
- (id)_permittedServices;
- (void)assetServiceDidUpdateManifest;
- (void)fetchNextDownloadableAssetsWithCount:(unsigned long long)a0 preferredLocalizations:(id)a1 completion:(id /* block */)a2;
- (id)forceDownloadAssetsWithIDs:(id)a0 completion:(id /* block */)a1;
- (BOOL)isAnyServiceRequestingUpdateForContext:(unsigned long long)a0;
- (void)runServicesWithContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)runStateChangeUpdatesIfNeeded;
- (void)runStateChangeUpdatesIfNeededWithCompletion:(id /* block */)a0;

@end
