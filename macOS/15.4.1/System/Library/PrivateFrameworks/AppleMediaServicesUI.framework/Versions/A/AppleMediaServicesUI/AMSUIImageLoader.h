@class NSURLSession, AMSUIAssetQueue, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface AMSUIImageLoader : NSObject

@property (retain) NSCache *imageCache;
@property (retain) AMSUIAssetQueue *fetchQueue;
@property (retain) NSURLSession *urlSession;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)defaultLoader;

- (id)init;
- (void).cxx_destruct;
- (void)_cacheImage:(id)a0 withURL:(id)a1;
- (id)_fetchImageFromCacheWithURL:(id)a0;
- (id)_fetchImageWithURL:(id)a0 searchBundles:(id)a1 atPriority:(long long)a2;
- (BOOL)_isURLBundleResource:(id)a0;
- (BOOL)_isURLEngagementContent:(id)a0;
- (BOOL)_isURLSystemImage:(id)a0;
- (id)_makeOperationForImageWithURL:(id)a0 searchBundles:(id)a1 error:(id *)a2;
- (id)_makeSystemImageFetchOperationForSystemURL:(id)a0 error:(id *)a1;
- (id)_performLowLatencyOperation:(id)a0;
- (id)fetchImageWithURL:(id)a0;
- (id)fetchImageWithURL:(id)a0 searchBundles:(id)a1;

@end
