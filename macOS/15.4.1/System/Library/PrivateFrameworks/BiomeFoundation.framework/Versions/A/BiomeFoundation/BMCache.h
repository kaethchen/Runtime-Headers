@class NSMapTable;

@interface BMCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_mapTable;
    BMCache *_fallback;
}

@property (copy) id /* block */ isExpiredBlock;

+ (id)weakCache;
+ (id)strongCache;
+ (id)strongCacheWithFallbackCache:(id)a0;

- (void).cxx_destruct;
- (void)pruneCacheWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_initWithMapTable:(id)a0 fallback:(id)a1;
- (id)cachedObjectWithKey:(id)a0;
- (id)cachedObjectWithKey:(id)a0 missHandler:(id /* block */)a1;
- (void)removeCachedObjectForKey:(id)a0;
- (void)removeCachedObjectForKey:(id)a0 performWhileLocked:(id /* block */)a1;

@end
