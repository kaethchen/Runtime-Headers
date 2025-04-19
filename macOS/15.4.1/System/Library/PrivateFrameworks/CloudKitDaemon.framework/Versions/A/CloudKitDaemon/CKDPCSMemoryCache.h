@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPCSMemoryCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property double oldestCacheEntry;
@property unsigned long long memoryCacheRequestCount;
@property unsigned long long memoryCacheHitCount;
@property unsigned long long memoryCacheHighwaterCount;
@property unsigned long long memoryCacheDeleteCount;
@property unsigned long long memoryCacheUpdateCount;
@property unsigned long long memoryCacheEvictCount;
@property (nonatomic) unsigned long long maxEntries;
@property (nonatomic) double minAge;

+ (void)initialize;
+ (void)setupMemoryNotifications;
+ (void)registerEvictionTimer;
+ (void)runMemoryCacheEvictionInAllCaches;
+ (void)startEvictionTimer;
+ (void)stopEvictionTimer;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (id)CKStatusReportArray;
- (unsigned long long)_cacheCount;
- (void)_lockedEvictEntriesFromCache;
- (void)getPCSDataFromCacheForID:(id)a0 databaseScope:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)hasStatusToReport;
- (void)runCacheEviction;
- (void)setPCSData:(id)a0 forItemID:(id)a1 databaseScope:(long long)a2 withCompletionHandler:(id /* block */)a3;

@end
