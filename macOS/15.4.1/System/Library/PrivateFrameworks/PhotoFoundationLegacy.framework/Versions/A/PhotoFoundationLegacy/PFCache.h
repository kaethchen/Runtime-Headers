@class PFCachePolicy, NSMapTable, NSObject, PFCacheStatistics;
@protocol OS_dispatch_queue;

@interface PFCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_contents;
    PFCachePolicy *_policy;
    PFCacheStatistics *_statistics;
}

@property (copy) id /* block */ willBeRemovedFromCacheHandler;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)statistics;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)initWithPolicy:(id)a0;
- (void)enumerateCacheEntriesUsingBlock:(id /* block */)a0;
- (void)removeObjectForKeyWithoutNotification:(id)a0;
- (id)setObject:(id)a0 forKeyIfNotPresent:(id)a1;
- (void)_removeObjectForKey:(id)a0 notify:(BOOL)a1;
- (void)_setEntry:(id)a0 forKey:(id)a1;

@end
