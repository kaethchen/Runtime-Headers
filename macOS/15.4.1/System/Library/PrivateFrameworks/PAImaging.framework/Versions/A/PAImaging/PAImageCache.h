@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PAImageCache : NSObject {
    unsigned long long _partitions;
    id *_contents;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_invalidationKeys;
    BOOL _enabled;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)clearCache;
- (id)cacheStatistics;
- (void)_addInvalidationKey:(id)a0 forKey:(id)a1;
- (id)_setEntry:(id)a0 forKey:(id)a1 invalidationKey:(id)a2 failIfAlreadyPresent:(BOOL)a3;
- (id)cacheContents;
- (id)cachedImageForKey:(id)a0 request:(id)a1;
- (void)invalidateKey:(id)a0;
- (id)newErrorResponse:(id)a0 forRequest:(id)a1;
- (void)removeInvalidationKeyForEntry:(id)a0;
- (id)setBuffer:(id)a0 scaled:(BOOL)a1 cgImageProperties:(id)a2 colorProfile:(id)a3 masterToRasterOrientation:(long long)a4 rasterToDisplayOrientation:(long long)a5 requestedSubsampleFactor:(unsigned long long)a6 forKey:(id)a7 invalidationKey:(id)a8 request:(id)a9;
- (id)setProperties:(id)a0 colorProfile:(id)a1 format:(int)a2 forKey:(id)a3 request:(id)a4;
- (id)uncachedResponseForBuffer:(id)a0 scaled:(BOOL)a1 cgImageProperties:(id)a2 colorProfile:(id)a3 masterToRasterOrientation:(long long)a4 rasterToDisplayOrientation:(long long)a5 requestedSubsampleFactor:(unsigned long long)a6 forKey:(id)a7 invalidationKey:(id)a8 request:(id)a9;

@end
