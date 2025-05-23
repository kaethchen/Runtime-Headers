@class NSString, NSArray, NSURL, WBSFaviconProviderPersistenceController, NSMutableDictionary, NSCalendar, NSCountedSet, NSObject, NSMutableArray, NSCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSFaviconProvider : NSObject <WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider> {
    NSMutableDictionary *_hostsToRequestsMap;
    NSCache *_responseCache;
    NSCountedSet *_requestsPendingResponse;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_internalSavingQueue;
    WBSFaviconProviderPersistenceController *_persistenceController;
    NSCalendar *_calendar;
    double _expirationInterval;
    long long _providerState;
    unsigned long long _privateDataRetentionCount;
    struct CGSize { double width; double height; } _scaledPreferredIconSize;
    id /* block */ _shouldCheckIntegrityWhenOpeningDatabaseBlock;
    BOOL _isSavingPendingChangesBeforeTermination;
    NSMutableArray *_webViewImageOperationSemaphores;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } defaultFaviconSize;

@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) struct CGSize { double width; double height; } preferredIconSize;
@property (readonly, nonatomic) double preferredIconScale;
@property (readonly, copy, nonatomic) NSArray *allIconScales;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;
- (void)_registerRequest:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (id)persistenceController;
- (id /* block */)_blockOperationForRequest:(id)a0;
- (id)builtInIconForRequest:(id)a0;
- (id)fallbackIconForRequest:(id)a0;
- (id)initWithPersistenceBaseURL:(id)a0 persistenceName:(id)a1 preferredIconSize:(struct CGSize { double x0; double x1; })a2 atScale:(double)a3 allScales:(id)a4 isReadOnly:(BOOL)a5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)a6;
- (void)linkIconFromPageURL:(id)a0 toCurrentPageURL:(id)a1 isPrivate:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (long long)providerState;
- (void)releasePrivateData;
- (void)removeAllIconsForURLStringsNotIn:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeIconForURLString:(id)a0 completionHandler:(id /* block */)a1;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)retainPrivateData;
- (void)saveFaviconImageData:(id)a0 iconURL:(id)a1 pageURL:(id)a2 originalPageURL:(id)a3 size:(struct CGSize { double x0; double x1; })a4 isPrivate:(BOOL)a5 completionHandler:(id /* block */)a6;
- (void)setUpWithCompletionHandler:(id /* block */)a0;
- (void)shouldIconDataBeSavedForIconWithPageURL:(id)a0 originalPageURL:(id)a1 iconURL:(id)a2 size:(struct CGSize { double x0; double x1; })a3 isPrivate:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (void)_addCachedResponse:(id)a0 forRequest:(id)a1;
- (void)_atomicallyLinkPageURLs:(id)a0 toIconWithInfo:(id)a1 isPrivate:(BOOL)a2;
- (void)_atomicallySaveImageData:(id)a0 iconURL:(id)a1 pageURL:(id)a2 originalPageURL:(id)a3 size:(struct CGSize { double x0; double x1; })a4 isPrivate:(BOOL)a5 completionHandler:(id /* block */)a6;
- (id)_cachedResponseForRequest:(id)a0;
- (void)_confirmImageDataShouldBeSaved:(id)a0 size:(struct CGSize { double x0; double x1; })a1 pageURL:(id)a2 iconURL:(id)a3 includingPrivateData:(BOOL)a4 completionHandler:(id /* block */)a5;
- (id)_createSemaphoreAndAddToWebViewImageOperationSemaphoresIfNecessary:(BOOL *)a0;
- (void)_getIconForRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_hostFromRequest:(id)a0;
- (id)_hostFromURL:(id)a0;
- (BOOL)_isIconDateExpired:(id)a0;
- (void)_linkPageURL:(id)a0 toIconWithInfo:(id)a1 isPrivate:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_multiResolutionImageFromImageData:(id)a0 withPreferredSize:(struct CGSize { double x0; double x1; })a1 atScales:(id)a2 completionHandler:(id /* block */)a3;
- (void)_prepareAndSendResponseForRequests:(id)a0 forceDidReceiveNewData:(BOOL)a1;
- (void)_removeCachedResponsesForRequest:(id)a0;
- (void)_removeCachedResponsesForURL:(id)a0;
- (id)_requestsForHost:(id)a0;
- (id)_responseCacheKeyForRequest:(id)a0;
- (id)_responseDictionaryKeyForRequest:(id)a0;
- (void)_saveImageData:(id)a0 iconURL:(id)a1 pageURL:(id)a2 originalPageURL:(id)a3 size:(struct CGSize { double x0; double x1; })a4 isPrivate:(BOOL)a5 completionHandler:(id /* block */)a6;
- (BOOL)_shouldRejectIconWithBadData;
- (void)_sizeOfImageWithData:(id)a0 closestToPreferredSize:(struct CGSize { double x0; double x1; })a1 completionHandler:(id /* block */)a2;
- (void)_updateOutstandingRequestsAfterSuccessfulSetup;
- (void)_updateOutstandingRequestsForPageURL:(id)a0 forceDidReceiveNewData:(BOOL)a1;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* block */)a0;
- (void)setUpPersistenceAtPath:(id)a0 completionHandler:(id /* block */)a1;
- (void)webViewMetadataFetchOperation:(id)a0 didFinishUsingWebView:(id)a1;
- (void)webViewMetadataFetchOperation:(id)a0 getWebViewOfSize:(struct CGSize { double x0; double x1; })a1 withConfiguration:(id)a2 completionHandler:(id /* block */)a3;

@end
