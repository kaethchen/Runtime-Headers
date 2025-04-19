@class NSString, NSMutableDictionary, NSObject, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface FavoritesPickerImageProvider : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    NSMutableDictionary *_imageCacheKeysToRequests;
    NSMutableDictionary *_requestsToResponseStates;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSSiteMetadataImageCache *_imageCache;
    BOOL _terminating;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

+ (id)sharedProvider;
+ (id)_sanitizeThemeColor:(id)a0;

- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (void)releaseCachedImageForURLString:(id)a0;
- (id)_cachedImageForRequest:(id)a0;
- (long long)_cachedImageSourceForRequestURL:(id)a0;
- (id)_cachedImageThemeColorForRequestURL:(id)a0;
- (void)_handleSubResponse:(id)a0 forRequest:(id)a1;
- (void)_prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (id)_responseForResponseState:(id)a0;
- (id)_responseStateForRequest:(id)a0;
- (void)_setCachedImage:(id)a0 forURL:(id)a1;
- (void)_setCachedImageSource:(long long)a0 forRequestURL:(id)a1;
- (void)_setCachedImageThemeColor:(id)a0 forRequestURL:(id)a1;
- (id)initWithCacheDirectoryURL:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)retainCachedImageForURLString:(id)a0;
- (void)siteMetadataImageCache:(id)a0 didFinishLoadingImage:(id)a1 forKeyString:(id)a2;
- (void)siteMetadataImageCache:(id)a0 didRemoveImageFromCacheForKeyString:(id)a1;
- (void)stopWatchingUpdatesForRequest:(id)a0;

@end
