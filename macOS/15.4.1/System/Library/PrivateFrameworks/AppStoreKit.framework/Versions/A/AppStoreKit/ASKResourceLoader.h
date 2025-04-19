@class NSMutableDictionary, NSMapTable, ASKResourceCache, NSOperationQueue;

@interface ASKResourceLoader : NSObject {
    long long _requestCountMap[6];
}

@property (readonly, nonatomic) NSMutableDictionary *pendingOperations;
@property (readonly, nonatomic) NSMapTable *requestsByCacheKey;
@property (readonly, nonatomic) ASKResourceCache *cachedResources;
@property (readonly, nonatomic) NSOperationQueue *accessQueue;
@property (readonly, nonatomic) NSOperationQueue *notificationQueue;
@property (readonly, nonatomic) NSOperationQueue *requestQueue;
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) BOOL isInBackground;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)cancelAllRequests;
- (void)enterBackground;
- (void)enterForeground;
- (BOOL)loadResourceWithRequest:(id)a0 reason:(long long)a1;
- (void)addResource:(id)a0 forCacheKey:(id)a1;
- (id)cachedResourcesForCacheKey:(id)a0;
- (BOOL)canGoFromOldLoadReason:(long long)a0 toNewLoadReason:(long long)a1;
- (void)cancelRequestForCacheKey:(id)a0;
- (long long)currentQualityOfService;
- (void)finishLoadForRequest:(id)a0 withResource:(id)a1 error:(id)a2;
- (id)initWithParentResourceLoader:(id)a0;
- (id)initWithRequestQueue:(id)a0 accessQueue:(id)a1 notificationQueue:(id)a2 cacheLimit:(long long)a3;
- (BOOL)isIdleForReason:(long long)a0;
- (BOOL)isIdleForReasons:(id)a0;
- (void)postDidBeginLoadingForReason:(long long)a0 requestKey:(id)a1;
- (void)postDidBeginLoadingIfIdle;
- (void)postDidFinishLoadingForReason:(long long)a0 requestKey:(id)a1;
- (void)postDidIdleIfIdle;
- (void)postDidLoadAllForReason:(long long)a0;
- (void)prefetchResourceWithRequest:(id)a0;
- (void)removeAllCachedResources;
- (void)reprioritizeOperations;
- (id)requestKeyForCacheKey:(id)a0;
- (void)setDidGoOffScreenForRequestWithKey:(id)a0;
- (void)updateLoadReason:(long long)a0 forOperation:(id)a1 requestKey:(id)a2 onlyIfHigherPriority:(BOOL)a3;

@end
