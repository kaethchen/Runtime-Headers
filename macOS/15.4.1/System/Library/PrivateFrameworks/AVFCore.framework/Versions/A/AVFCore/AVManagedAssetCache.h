@class AVManagedAssetCacheInternal;

@interface AVManagedAssetCache : AVAssetCache {
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheForHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadAndHTTPLiveStreamingWithURL:(id)a0;
+ (id)assetCacheForProgressiveDownloadWithURL:(id)a0;
+ (id)assetCacheWithURL:(id)a0;

- (void)dealloc;
- (id)allKeys;
- (id)URL;
- (id)initWithURL:(id)a0;
- (long long)maxSize;
- (void)setMaxSize:(long long)a0;
- (BOOL)isHTTPLiveStreamingCacheEnabled;
- (long long)currentSize;
- (void)enableAutomaticCacheSizeManagement;
- (id)initWithURL:(id)a0 enableCRABSCache:(BOOL)a1 enableHLSCache:(BOOL)a2;
- (BOOL)isPlayableOffline;
- (BOOL)isProgressiveDownloadCacheEnabled;
- (id)lastModifiedDateOfEntryForKey:(id)a0;
- (long long)maxEntrySize;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)a0;
- (void)removeEntryForKey:(id)a0;
- (void)setMaxEntrySize:(long long)a0;
- (long long)sizeOfEntryForKey:(id)a0;

@end
