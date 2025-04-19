@class NSMutableDictionary, NSTimer, NSMutableSet, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WFWeatherStoreCache : NSObject

@property (retain, nonatomic) NSTimer *cacheStoreTimer;
@property (retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue;
@property (retain) NSMutableDictionary *cacheForDomain;
@property (retain) NSMutableSet *dirtyCacheDomains;
@property (copy, nonatomic) NSURL *URL;

+ (id)createCacheIfNecessary:(id)a0 error:(id *)a1;
+ (BOOL)removeObjectsFromCache:(id)a0 passingTest:(id /* block */)a1;
+ (id)wf_mainDomains;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)removeAllObjects;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)a0 allowedStaleness:(unsigned long long)a1;
- (BOOL)_concurrentQueue_barrier_loadDomain:(id)a0;
- (void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)a0 forKey:(id)a1;
- (void)_concurrentQueue_barrier_shrinkDomain:(id)a0;
- (void)_concurrentQueue_barrier_writeCacheDictionaryToFile;
- (id)_dirtyCacheDomains;
- (void)_ensureDomainIsLoaded:(id)a0;
- (BOOL)_loadDomain:(id)a0;
- (id)_loadedCacheDomains;
- (void)_markDomainDirty:(id)a0;
- (void)_shrinkDomain:(id)a0;
- (void)_startCacheStoreTimer;
- (void)_stopCacheStoreTimer;
- (void)cache:(id)a0 withinDomain:(id)a1 date:(id)a2 forKey:(id)a3 expiration:(id)a4 synchronous:(BOOL)a5;
- (void)cache:(id)a0 withinDomain:(id)a1 forKey:(id)a2;
- (void)cache:(id)a0 withinDomain:(id)a1 forKey:(id)a2 expiration:(id)a3;
- (id)cachedObjectWithinDomain:(id)a0 forKey:(id)a1;
- (id)cachedObjectWithinDomain:(id)a0 forKey:(id)a1 staleness:(unsigned long long)a2;
- (void)deleteOldDataFromCache:(id)a0 allowedStaleness:(unsigned long long)a1;
- (void)executeTransaction:(id /* block */)a0;
- (void)removeObjectWithinDomain:(id)a0 forKey:(id)a1;
- (void)writeCacheDictionaryToFile;

@end
