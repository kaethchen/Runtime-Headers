@class TVISAerialServiceConfiguration, TVISAerialServiceDefaults, NSCache, NSBundle, TVISAerialManifest, TVISAerialStore;
@protocol TVISEvolutionServiceDelegate;

@interface TVISAerialEvolutionService : TVISEvolutionServiceTemplate {
    id<TVISEvolutionServiceDelegate> _delegate;
}

@property (readonly, nonatomic) TVISAerialServiceConfiguration *configuration;
@property (readonly, nonatomic) TVISAerialServiceDefaults *defaults;
@property (readonly, nonatomic) TVISAerialStore *store;
@property (readonly, nonatomic) NSCache *cachedResumeData;
@property (retain, nonatomic) TVISAerialManifest *localManifest;
@property (retain, nonatomic) NSBundle *localizationBundle;

+ (id)log;
+ (id)_opportunisticScheduledUpdateFromDate:(id)a0 interval:(long long)a1;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void)onStart;
- (id)_currentSnapshot;
- (BOOL)shouldScheduleUpdateForContext:(unsigned long long)a0;
- (void)TVISConformanceAerial;
- (id)_batchDownloadAssets:(id)a0 completion:(id /* block */)a1;
- (void)_batchDownloadPreviewsWithCompletion:(id /* block */)a0;
- (id)_downloadAssetWithID:(id)a0 remoteURL:(id)a1 completion:(id /* block */)a2;
- (id)_downloadAssetsIfNeededWithContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)_downloadedAssetIDs;
- (unsigned long long)_expectedScheduledUpdateDownloadCount;
- (void)_fetchRemoteMetadataWithURL:(id)a0 targetFileURL:(id)a1 completion:(id /* block */)a2;
- (BOOL)_localizationNeedsValidation;
- (BOOL)_needToDownloadAssetsToMeetMinimum;
- (id)_purgeableItemsInDirectoryAtURL:(id)a0;
- (id)_queryNextDownloadableAssetsForCount:(unsigned long long)a0 excludingIdentifiers:(id)a1 error:(id *)a2;
- (void)_updateManifestIfNeededWithData:(id)a0 targetFileURL:(id)a1 isResourceTar:(BOOL)a2;
- (void)_validateLocalizedStringsBundle:(id)a0 resourcesTarURL:(id)a1;
- (void)activateCategoryWithID:(id)a0 completion:(id /* block */)a1;
- (void)deactivateCategoryWithID:(id)a0 completion:(id /* block */)a1;
- (void)didEndUpdate:(id)a0;
- (void)didPurgeAssetsWithUrgency:(long long)a0;
- (void)executeUpdate:(id)a0 completion:(id /* block */)a1;
- (id)generatePurgeableManifest;
- (id)localCacheBaseURL;
- (void)onReleaseCachedResources;
- (void)queryAllCategoriesWithCompletion:(id /* block */)a0;
- (id)queryCurrentSnapshotWithError:(id *)a0;
- (void)willAccessWorkQueue;

@end
