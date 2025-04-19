@class DMFApplicationPolicyMonitor, TLKAsyncCache, NSString, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface SearchUIScreenTimeManager : TLKAsyncCache <SearchUIBatchedCachePrewarmer>

@property (retain) DMFApplicationPolicyMonitor *monitor;
@property (retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain) NSCache *possiblyCorrectCache;
@property (readonly) TLKAsyncCache *cacheToPrewarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)computeObjectsForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)getCachedObjectIfAvailableForKey:(id)a0;
- (id)itemsToBatchPreFetchForRowModel:(id)a0;

@end
