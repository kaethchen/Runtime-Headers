@class FCAssetDownloadOperation, FCCKContentFetchOperation;

@interface FCPuzzleThumbnailURLProtocol : NSURLProtocol

@property (retain, nonatomic) FCCKContentFetchOperation *fetchOperation;
@property (retain, nonatomic) FCAssetDownloadOperation *assetOperation;

+ (void)unregister;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (BOOL)canHandleURL:(id)a0;
+ (id)URLForResourceMapID:(id)a0 publishDate:(id)a1 difficulty:(id)a2;
+ (BOOL)canHandleURLWithComponents:(id)a0;
+ (id)resourceMapSerialQueue;
+ (void)setupWithArticleDatabase:(id)a0 cacheDirectory:(id)a1;
+ (id)sharedURLRequestScheduler;

- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (void)_fetchResourceMapWithID:(id)a0 completion:(id /* block */)a1;
- (id)_imageURLFromResourceMapFileURL:(id)a0 dayOfWeek:(long long)a1 difficulty:(id)a2 error:(id *)a3;

@end
