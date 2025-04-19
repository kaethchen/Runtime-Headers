@class TVISAerialServiceConfiguration, TVISAerialServiceDefaults, TVISReachabilityMonitor, NSCache, NSString, NSObject, TVISAerialStore;
@protocol OS_dispatch_queue, TVISAssetServiceObserver;

@interface TVISAerialAssetService : NSObject <TVISAssetService>

@property (readonly, nonatomic) TVISAerialServiceConfiguration *configuration;
@property (readonly, nonatomic) TVISAerialServiceDefaults *defaults;
@property (readonly, nonatomic) TVISAerialStore *store;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQ;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *networkQ;
@property (readonly, nonatomic) TVISReachabilityMonitor *reachabilityMonitor;
@property (readonly, nonatomic) NSCache *cachedResumeData;
@property (weak, nonatomic) id<TVISAssetServiceObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)purgeableInfoForUrgency:(long long)a0 volume:(id)a1;
- (id)_batchDownloadAssets:(id)a0 completion:(id /* block */)a1;
- (void)_batchDownloadPreviewsWithCompletion:(id /* block */)a0;
- (void)_batchUpdateDownloadedAssets:(id)a0 withCompletion:(id /* block */)a1;
- (id)_bundleManifestJSONObject;
- (void)_downloadAssetWithID:(id)a0 remoteURL:(id)a1 parentProgress:(id)a2 completion:(id /* block */)a3;
- (void)_downloadAssetsIfNeededWithContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_downloadedAssetIDs;
- (void)_fetchRemoteMetadataWithURL:(id)a0 targetFileURL:(id)a1 completion:(id /* block */)a2;
- (id)_localManifestJSONObject;
- (BOOL)_localizationNeedsValidation;
- (unsigned long long)_minimumAssetsNeededForManifest:(id)a0 alreadyDownloadedAssetIDs:(id)a1;
- (void)_monitorForRemoteReachability;
- (BOOL)_needToDownloadAssetsToMeetMinimum;
- (id)_protectedAssetURLs;
- (id)_purgeableItemsInDirectory:(id)a0 excludedURLs:(id)a1 protected:(unsigned long long)a2;
- (void)_setAssetFilePermissions:(id)a0;
- (void)_updateManifestIfNeededWithCompletion:(id /* block */)a0;
- (void)_validateLocalizedStringsBundle:(id)a0 resourcesTarURL:(id)a1;
- (void)fetchNextDownloadableAssetsWithCount:(unsigned long long)a0 preferredLocalizations:(id)a1 completion:(id /* block */)a2;
- (id)forceDownloadAssetsWithIDs:(id)a0 completion:(id /* block */)a1;
- (id)localManifest;
- (id)localizedStringsBundle;
- (void)runServiceUpdatesWithContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)runStateChangeUpdatesIfNeeded;
- (BOOL)serviceNeedsUpdateForContext:(unsigned long long)a0;
- (void)setUpService;

@end
