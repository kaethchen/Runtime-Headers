@class FCSportsEventController, NSString, NSURL, FCPuzzleController, FCPuzzleTypeController, FCAVAssetDownloadManager, FCAssetManager, FCContentContextInternal, FCContextConfiguration, FCFlintResourceManager, FCTagController, FCArticleController;
@protocol FCAVAssetKeyServiceType, FCAssetKeyServiceType, FCCoreConfigurationManager, FCAVAssetKeyManagerType, FCNetworkReachabilityRequirement, FCNetworkReachabilityType, FCAssetKeyCacheType, FCNewsAppConfigurationManager, FCAssetKeyManagerType, FCAVAssetCacheType, FCAVAssetPrewarming, FCBackgroundTaskable, FCFeedDatabaseProtocol, FCAVAssetResourceLoaderType, FCAVAssetKeyCacheType, FCFeedItemFactoryType, FCAVAssetFactoryType, FCPPTContext;

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext>

@property (copy, nonatomic) FCContextConfiguration *contextConfiguration;
@property (retain, nonatomic) NSURL *contentHostDirectoryURL;
@property (copy, nonatomic) NSString *contentDirectory;
@property (retain, nonatomic) NSURL *assetCacheDirectoryURL;
@property (copy, nonatomic) NSString *tabiResourcesContentDirectory;
@property (copy, nonatomic) NSString *tabiResourcesContentDirectoryLegacy;
@property (copy, nonatomic) NSString *tabiModelsContentDirectory;
@property (copy, nonatomic) NSString *tabiModelsContentDirectoryLegacy;
@property (copy, nonatomic) NSString *tabiRequestsContentDirectory;
@property (retain, nonatomic) FCContentContextInternal *internalContentContext;
@property (retain, nonatomic) id<FCAssetKeyServiceType> assetKeyService;
@property (retain, nonatomic) id<FCAssetKeyCacheType> assetKeyCache;
@property (retain, nonatomic) id<FCAssetKeyManagerType> assetKeyManager;
@property (retain, nonatomic) id<FCAVAssetFactoryType> avAssetFactory;
@property (retain, nonatomic) id<FCAVAssetCacheType> avAssetCache;
@property (retain, nonatomic) FCAVAssetDownloadManager *avAssetDownloadManager;
@property (retain, nonatomic) id<FCAVAssetKeyServiceType> avAssetKeyService;
@property (retain, nonatomic) id<FCAVAssetKeyCacheType> avAssetKeyCache;
@property (retain, nonatomic) id<FCAVAssetKeyManagerType> avAssetKeyManager;
@property (retain, nonatomic) id<FCAVAssetResourceLoaderType> avAssetResourceLoader;
@property (retain, nonatomic) id<FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property (readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property (readonly, copy, nonatomic) NSString *contentEnvironment;
@property (readonly, nonatomic) id<FCCoreConfigurationManager> configurationManager;
@property (readonly, nonatomic) id<FCNetworkReachabilityType> networkReachability;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) id<FCAVAssetPrewarming> avAssetPrewarmer;
@property (readonly, nonatomic) FCArticleController *articleController;
@property (readonly, nonatomic) FCTagController *tagController;
@property (readonly, nonatomic) FCSportsEventController *sportsEventController;
@property (readonly, nonatomic) FCPuzzleController *puzzleController;
@property (readonly, nonatomic) FCPuzzleTypeController *puzzleTypeController;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (readonly, weak, nonatomic) id<FCBackgroundTaskable> backgroundTaskable;
@property (readonly, nonatomic) id<FCPPTContext> pptContext;
@property (readonly, nonatomic) id<FCFeedDatabaseProtocol> feedDatabase;
@property (readonly, nonatomic) id<FCFeedItemFactoryType> feedItemFactory;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentToken;
@property (readonly, nonatomic) long long storageSize;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)save;
- (id)convertRecords:(id)a0;
- (void)_updateReachabilityGivenRequirements;
- (void)configurationManager:(id)a0 configurationDidChange:(id)a1;
- (void)configurationManagerScienceExperimentFieldsDidChange:(id)a0;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0 exceptForFlusher:(id)a1;
- (id)initWithConfiguration:(id)a0 configurationManager:(id)a1 contentDatabase:(id)a2 contentHostDirectory:(id)a3 networkBehaviorMonitor:(id)a4 networkReachability:(id)a5 setupCustomURLProtocols:(BOOL)a6 desiredHeadlineFieldOptions:(unsigned long long)a7 feedUsage:(long long)a8 assetKeyManagerDelegate:(id)a9 appActivityMonitor:(id)a10 backgroundTaskable:(id)a11 pptContext:(id)a12;
- (id)initWithConfiguration:(id)a0 configurationManager:(id)a1 contentHostDirectory:(id)a2 networkBehaviorMonitor:(id)a3 desiredHeadlineFieldOptions:(unsigned long long)a4 feedUsage:(long long)a5 appActivityMonitor:(id)a6 backgroundTaskable:(id)a7 pptContext:(id)a8;
- (id)initWithConfiguration:(id)a0 configurationManager:(id)a1 contentHostDirectory:(id)a2 networkBehaviorMonitor:(id)a3 networkReachability:(id)a4 desiredHeadlineFieldOptions:(unsigned long long)a5 feedUsage:(long long)a6 assetKeyManagerDelegate:(id)a7 appActivityMonitor:(id)a8 backgroundTaskable:(id)a9 pptContext:(id)a10;
- (id)interestTokenForContentManifest:(id)a0;
- (id)magazinesConfigurationManager;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)a0;
- (id)news_core_ConfigurationManager;
- (void)ppt_overrideFeedEndpoint:(long long)a0;
- (void)ppt_prewarmFeedDatabase;
- (void)prewarmStores;
- (id)recordSourceWithSchema:(id)a0;
- (id)recordTreeSourceWithRecordSources:(id)a0;

@end
