@class NSURLSession, NSString, NSArray, AVURLAsset, NSData, NSDictionary;

@interface __NSCFBackgroundAVAggregateAssetDownloadTask : __NSCFBackgroundSessionTask <AVAssetDownloadDelegate, AVAssetDownloadDelegatePrivate> {
    BOOL _sentWillDownloadToURL;
    BOOL _sentWillBeginDelayedRequest;
    unsigned long long _AVAssetDownloadToken;
    NSArray *_mediaSelections;
    NSString *_assetTitle;
    NSData *_assetArtworkData;
    NSDictionary *_options;
    NSString *_childAssetDownloadTasksSessionIdentifier;
    NSURLSession *_childAssetDownloadSession;
    NSArray *_childAssetDownloadTasks;
}

@property (retain) AVURLAsset *URLAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (void)URLSession:(id)a0 task:(id)a1 willBeginDelayedRequest:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)response;
- (id)originalRequest;
- (void)_onqueue_cancel;
- (void)_onqueue_resume;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 didLoadTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 totalTimeRangesLoaded:(id)a3 timeRangeExpectedToLoad:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
- (void)URLSession:(id)a0 assetDownloadTask:(id)a1 willDownloadToURL:(id)a2;
- (BOOL)_isAVAssetTask;
- (void)_onqueue_suspend;
- (id)cookiesForCurrentRequest;
- (id)currentRequest;
- (id)initWithTaskInfo:(id)a0 taskGroup:(id)a1 ident:(unsigned long long)a2;

@end
