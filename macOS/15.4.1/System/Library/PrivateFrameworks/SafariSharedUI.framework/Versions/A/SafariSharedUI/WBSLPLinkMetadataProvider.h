@class NSString, NSURL, NSMutableDictionary, NSOperationQueue, WBSCacheRetainReleasePolicy, NSMutableArray, NSObject, WBSLPLinkMetadataCache, NSMutableSet;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSLPLinkMetadataProvider : NSObject <WBSSiteMetadataProvider> {
    NSMutableDictionary *_requestsToResponses;
    NSMutableDictionary *_requestsToOperations;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSLPLinkMetadataCache *_cache;
    BOOL _isCacheSetUpPending;
    NSMutableArray *_pendingRequests;
    WBSCacheRetainReleasePolicy *_cachedResponsePolicy;
    NSMutableSet *_cancelledRequestsForRetainedURLStrings;
    NSMutableSet *_urlsWithActiveWebViewFetches;
    NSMutableArray *_pendingUpdatesUsingWebViews;
}

@property (readonly, copy, nonatomic) NSURL *cacheDirectoryURL;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)linkMetadataForURL:(id)a0 webView:(id)a1 iconCache:(id)a2;
+ (id)unpackMetadataFromResponse:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (BOOL)cacheData:(id)a0 forRequest:(id)a1 usingToken:(id)a2;
- (id)initWithCacheDirectoryURL:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)releaseResponseForURLString:(id)a0;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)retainResponseForURLString:(id)a0;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (void)updateMetadataIfNeededUsingWebView:(id)a0;
- (void)_cacheMetadata:(id)a0 forRequest:(id)a1 completionHandler:(id /* block */)a2;
- (void)_didReceiveNewMetadata:(id)a0 forRequest:(id)a1;
- (void)_discardPreparedResponseForRequest:(id)a0;
- (void)_fetchMetadataForWebView:(id)a0 url:(id)a1 completionHandler:(id /* block */)a2;
- (void)_getCachedMetadataInfoForRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getCachedMetadataWithInfo:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isImageInMetadata:(id)a0;
- (void)_notifyResponse:(id)a0 ofType:(long long)a1 didReceiveNewData:(BOOL)a2 forRequest:(id)a3;
- (id)_operationForRequest:(id)a0;
- (void)_prepareCachedResponseForRequest:(id)a0;
- (id)_preparedResponseForRequest:(id)a0;
- (void)_provideCachedResponseIfAvailableForRequest:(id)a0 withMetadataInfo:(id)a1;
- (void)_removeAllOperations;
- (void)_removeOperationForRequest:(id)a0;
- (void)_serveAllPendingRequests;
- (void)_setOperation:(id)a0 forRequest:(id)a1;
- (void)_setUpCache;
- (void)_setUpCachedResponsePolicy;
- (BOOL)_shouldStartFetchOperationForRequest:(id)a0 withMetadataInfo:(id)a1;
- (BOOL)_shouldUseWebViewToUpdateMetadataWithInfo:(id)a0 request:(id)a1 existingOperation:(id)a2;
- (void)_storeAndNotifySuccessfulResponseForRequest:(id)a0 withMetadata:(id)a1 didReceiveNewData:(BOOL)a2;
- (void)_storePreparedResponse:(id)a0 forRequest:(id)a1;
- (void)_updateMetadataIfNeededUsingWebView:(id)a0 url:(id)a1;
- (void)reuseMetadataOfURLString:(id)a0 forURLString:(id)a1 completionHandler:(id /* block */)a2;

@end
