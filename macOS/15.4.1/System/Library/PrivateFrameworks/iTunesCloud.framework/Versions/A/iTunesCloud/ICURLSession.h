@class NSURLSession, NSString, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ICURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_operationQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    unsigned long long _pendingRequestsProcessingCounter;
    NSMutableOrderedSet *_pendingRequests;
    NSMutableSet *_activeRequests;
    NSMutableDictionary *_completionHandlers;
    BOOL _paused;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    NSURLSession *_urlSession;
}

@property (class, readonly, nonatomic) unsigned long long defaultMaximumConcurrentRequests;

@property (readonly, nonatomic) unsigned long long maxConcurrentRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0;
- (void)_processRequest:(id)a0;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)URLSession:(id)a0 avAssetDownloadTask:(id)a1 didReceiveAVAssetDownloadToken:(unsigned long long)a2;
- (void)URLSession:(id)a0 avAssetDownloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)cancelRequest:(id)a0;
- (void)_finishRequest:(id)a0;
- (void)enqueueDataRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)cancelPendingRequestsWithError:(id)a0;
- (void)_checkRequestTimeouts;
- (id)_createURLSessionTaskForRequest:(id)a0 usingSession:(id)a1;
- (id)_createURLSessionWithConfiguration:(id)a0;
- (void)_enqueueRequest:(id)a0;
- (id)_newResponseForRequest:(id)a0;
- (void)_processPendingRequests;
- (id)_requestForTask:(id)a0;
- (void)_scheduleNextRequestTimeoutCheck;
- (double)_timeoutForRequest:(id)a0;
- (void)_updateProgressForSessionTask:(id)a0 withTotalBytesWritten:(long long)a1 totalBytesExpectedToWrite:(long long)a2;
- (void)cancelRequest:(id)a0 withError:(id)a1;
- (void)enqueueDownloadRequest:(id)a0 toDestination:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)enqueueDownloadRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)enqueueUploadRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithConfiguration:(id)a0 maxConcurrentRequests:(unsigned long long)a1;
- (id)initWithConfiguration:(id)a0 maxConcurrentRequests:(unsigned long long)a1 qualityOfService:(long long)a2;
- (void)pauseRequest:(id)a0;
- (void)resumeRequest:(id)a0;

@end
