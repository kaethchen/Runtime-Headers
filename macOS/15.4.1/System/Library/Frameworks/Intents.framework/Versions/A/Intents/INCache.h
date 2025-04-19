@class NSCache;

@interface INCache : NSObject {
    NSCache *_underlyingCache;
}

@property (readonly, nonatomic) NSCache *_cacheDictionary;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)addCacheableObject:(id)a0;
- (id)cacheableObjectForIdentifier:(id)a0;
- (id)consumeCacheableObjectForIdentifier:(id)a0;
- (void)removeAllCacheableObjects;
- (void)removeCacheableObject:(id)a0;

@end
