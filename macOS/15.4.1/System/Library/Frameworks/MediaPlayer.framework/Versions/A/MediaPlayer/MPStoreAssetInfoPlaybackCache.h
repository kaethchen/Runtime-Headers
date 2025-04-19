@class NSMutableDictionary, NSMutableArray;

@interface MPStoreAssetInfoPlaybackCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_accessOrderedRequests;
    NSMutableDictionary *_requestToCachedResponse;
}

@property (class, readonly, nonatomic) MPStoreAssetInfoPlaybackCache *sharedCache;

- (void).cxx_destruct;
- (id)_init;
- (id)cachedResponseForRequest:(id)a0;
- (void)addCachedResponse:(id)a0 forRequest:(id)a1;
- (void)updateForPlaybackOfFileAsset:(id)a0 fromResponse:(id)a1;
- (void)withSyncLock:(id /* block */)a0;

@end
