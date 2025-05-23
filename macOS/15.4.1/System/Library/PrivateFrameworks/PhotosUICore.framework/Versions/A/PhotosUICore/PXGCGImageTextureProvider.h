@class NSCache, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PXGCGImageTextureProvider : PXGTextureProvider {
    NSCache *_imageCache;
    NSCache *_additionalInfoCache;
    NSMapTable *_aliveImagesCache;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (id)init;
- (void).cxx_destruct;
- (void)invalidateCache;
- (void)releaseCachedResources;
- (void)_clearStrongCaches;
- (void)_updateCacheLimit;
- (void)cacheAdditionalInfo:(id)a0 withKey:(id)a1;
- (void)lowMemoryModeDidChange;
- (void)requestCGImageAndAdditionalInfoWithCacheKey:(id)a0 imageProvider:(id /* block */)a1 resultHandler:(id /* block */)a2;
- (void)requestCGImageWithCacheKey:(id)a0 imageProvider:(id /* block */)a1 resultHandler:(id /* block */)a2;

@end
