@class NSSet, NSMutableSet, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ICCache : NSCache

@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource;
@property (retain, nonatomic) NSMutableSet *mutableKeys;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mutableKeysAccessQueue;
@property (readonly, nonatomic) NSSet *allKeys;

+ (id)cacheCollection;
+ (void)purgeAllCaches;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;
- (void)receivedMemoryWarning;
- (void)registerForMemoryWarnings;
- (void)unregisterForMemoryWarnings;
- (void)removeObjectsWithKeyContainingString:(id)a0;

@end
