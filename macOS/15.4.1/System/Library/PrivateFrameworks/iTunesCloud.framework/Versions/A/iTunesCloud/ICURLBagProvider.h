@class NSMutableDictionary, NSMutableSet, MSVLRUDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject {
    MSVLRUDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
    NSMutableSet *_cacheKeysScheduledForRefresh;
    NSMutableDictionary *_bagChangeNotificationReceivedForRequestContext;
}

@property (class, readonly, nonatomic) ICURLBagProvider *sharedBagProvider;

@property (nonatomic) BOOL useAMSBag;
@property (nonatomic) BOOL useRawPayload;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)getBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_amsProcessInfoFromRequestContext:(id)a0;
- (id)_cacheDirectoryPath;
- (void)_cleanBagCacheExcludingPaths:(id)a0;
- (id)_dictionaryFromBagPayloadDictionaryAddingKnownMissingKeys:(id)a0 forProfileName:(id)a1;
- (void)_fetchBagForRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_getCacheKeyForRequestContext:(id)a0;
- (void)_handleAMSBagChangedNotification:(id)a0;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (id)_knownMissingBagValuesDictionary;
- (id)_legacyCacheFilePath;
- (void)_loadCache;
- (void)_loadMonoCache;
- (id)_loadPlistAtPath:(id)a0;
- (void)_persistBagToDisk:(id)a0 withKey:(id)a1;
- (void)getBagAndURLMetricsForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)getBagForRequestContext:(id)a0 forceRefetch:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

@end
