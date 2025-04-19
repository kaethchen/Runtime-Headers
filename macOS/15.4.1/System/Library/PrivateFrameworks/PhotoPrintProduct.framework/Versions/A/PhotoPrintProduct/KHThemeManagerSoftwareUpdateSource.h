@class NSCache, KHThemeManager, NSXPCConnection, NSURL, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface KHThemeManagerSoftwareUpdateSource : KHThemeManagerSource <KHThemeManagerCatalogedSource> {
    NSMutableDictionary *_progressForSession;
    NSObject<OS_dispatch_source> *_progressHeartBeat;
    NSObject<OS_dispatch_queue> *_progressQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_xpcServiceQueue;
    NSObject<OS_dispatch_queue> *_catalogRetrievalQueue;
    NSObject<OS_dispatch_queue> *_catalogCacheQueue;
    int _softwareUpdateOperationsInFlight;
    NSMutableDictionary *_themeProviderCache;
    NSCache *_catalogCache;
    NSCache *_themeProviderURLCache;
    BOOL _sourceIsPrepared;
}

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;
@property (readonly, weak, nonatomic) KHThemeManager *manager;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) BOOL sourceIsLocal;
@property (readonly, nonatomic) unsigned long long sourceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)URLForTheme:(id)a0;
- (id)URLForThemePreview:(id)a0;
- (id)_URLForThemeProvider:(id)a0 preview:(BOOL)a1;
- (id)_bulkPrepareThemeProvidersForUse:(id)a0 isPreview:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)_cachedLatestVersionNumberForTags:(id)a0 metadata:(id)a1;
- (void)_cancelFetchWithSessionIdentifier:(id)a0;
- (id)_catalogForProduct:(id)a0;
- (void)_createProgressTimer;
- (void)_decrementSoftwareUpdatesInFlight;
- (id)_defaultNSProgressUserInfo;
- (id)_fetchBundlesMatchingTags:(id)a0 metadata:(id)a1 timeout:(unsigned long long)a2 completionBlock:(id /* block */)a3;
- (void)_handleProgressHeartBeat;
- (void)_incrementSoftwareUpdatesInFlight;
- (id)_localCatalogURLs;
- (id)_progressForSessionIdentifier:(id)a0;
- (void)_removeProgressForSession:(id)a0;
- (void)_setProgress:(id)a0 forSessionIdentifier:(id)a1;
- (void)_softwareUpdateCacheResultsForTags:(id)a0 metadata:(id)a1 completion:(id /* block */)a2;
- (void)_tearDownXPC;
- (id)_themeProvidersForCatalog:(id)a0 forcedProductCodes:(id)a1 onlyLocalThemes:(BOOL)a2;
- (id)_themeProvidersWithinCatalog:(BOOL)a0;
- (id)allThemeProviders;
- (id)catalogBundleForProjectType:(long long)a0;
- (id)categoriesForThemeProvider:(id)a0;
- (id)descriptionForThemeProvider:(id)a0;
- (id)fetchCatalog:(id /* block */)a0;
- (id)fetchThemeProvidersForProductCodes:(id)a0;
- (id)initWithSourceURL:(id)a0 manager:(id)a1;
- (BOOL)isThemeLocal:(id)a0;
- (BOOL)isThemePreviewLocal:(id)a0;
- (BOOL)isThemePreviewValid:(id)a0;
- (BOOL)isThemeValid:(id)a0;
- (id)localThemeProviders;
- (id)prepareThemePreviewsForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)prepareThemesForProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)productCodesForThemeProvider:(id)a0;
- (id)remoteThemeProviders;
- (id)requestRemoteObjectProxyWithRetries:(unsigned long long)a0 errorHandler:(id /* block */)a1;
- (void)resetCatalog;
- (id)scanSourceForCatalogUpdates:(id /* block */)a0;
- (BOOL)sourceIsAvailable;
- (id)titleForThemeProvider:(id)a0;

@end
