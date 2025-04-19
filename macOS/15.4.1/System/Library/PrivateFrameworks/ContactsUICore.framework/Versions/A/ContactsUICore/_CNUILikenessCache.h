@class CNCache, CNUnfairLock, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface _CNUILikenessCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) CNCache *cache;
@property (retain, nonatomic) CNUnfairLock *lock;

+ (id)log;

- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0 onCacheMiss:(id /* block */)a1;
- (void)didEvictCacheEntry:(id)a0;
- (void)emptyCache:(id)a0;
- (void)receiveDatabaseChangeNotification:(id)a0;
- (void)receiveMemoryPressureSignal;
- (void)setUpDatabaseChangeNotificationHandler;
- (void)setUpEvictionHandler;
- (void)setUpIvarsWithCacheCapacity:(unsigned long long)a0;
- (void)setUpMemoryPressureWatcher;

@end
