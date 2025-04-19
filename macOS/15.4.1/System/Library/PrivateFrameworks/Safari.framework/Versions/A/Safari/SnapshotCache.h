@class NSString, NSMutableDictionary, NSURL, NSObject, WBSSiteMetadataImageCache;
@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

@interface SnapshotCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSSiteMetadataImageCache *_imageCache;
    NSMutableDictionary *_urlStringsToRequestSets;
}

@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

+ (id)sharedCache;
+ (id)_imageDirectoryURL;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canHandleRequest:(id)a0;
- (void)_registerRequest:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)emptyCaches;
- (id /* block */)_blockOperationForRequest:(id)a0;
- (id)_lowFidelitySnapshotFromHighFidelitySnapshot:(id)a0;
- (id)_scaleSnapshot:(id)a0 scaleFactor:(double)a1;
- (id)initWithImageDirectoryURL:(id)a0;
- (BOOL)isMissingSnapshotForURLString:(id)a0;
- (void)prepareResponseForRequest:(id)a0 allowDelayedResponse:(BOOL)a1;
- (void)purgeUnneededCacheEntries;
- (void)releaseSnapshotForURLString:(id)a0;
- (void)releaseSnapshotsForURLStrings:(id)a0;
- (id)responseForRequest:(id)a0 willProvideUpdates:(BOOL *)a1;
- (void)retainSnapshotForURLString:(id)a0;
- (void)retainSnapshotsForURLStrings:(id)a0;
- (void)saveSnapshotToDisk:(id)a0 forURLString:(id)a1;
- (void)siteMetadataImageCache:(id)a0 didFinishLoadingImage:(id)a1 forKeyString:(id)a2;
- (void)siteMetadataImageCacheDidEmptyCache:(id)a0;
- (id)snapshotForURLString:(id)a0;
- (void)stopWatchingUpdatesForRequest:(id)a0;

@end
