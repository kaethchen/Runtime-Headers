@class NSString, NSMutableDictionary, NSObject, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface WBSLeadImageCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    WBSSiteMetadataImageCache *_imageCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_urlStringToRequestSets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;
- (void)_addRequest:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (id)initWithImageDirectoryURL:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)purgeUnneededCacheEntries;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)siteMetadataImageCacheDidEmptyCache:(id)a0;
- (void)stopWatchingUpdatesForRequest:(id)a0;
- (id)initWithoutDiskCache;
- (void)saveImage:(id)a0 forURL:(id)a1 completionHandler:(id /* block */)a2;

@end
