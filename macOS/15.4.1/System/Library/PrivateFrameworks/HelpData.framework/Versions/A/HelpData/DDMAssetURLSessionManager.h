@class NSURLSession, NSMutableDictionary, NSString, NSOperationQueue, NSURLSessionConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface DDMAssetURLSessionManager : NSObject <NSURLSessionDelegate>

@property (retain) NSOperationQueue *sessionDelegateQueue;
@property (retain) NSMutableDictionary *activeTasks;
@property (retain) NSObject<OS_dispatch_queue> *activeTasksQueue;
@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (readonly) NSURLSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didBecomeDownloadTask:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 willCacheResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (id)initWithConfiguration:(id)a0;
- (id)dataTaskWithRequest:(id)a0 delegate:(id)a1;
- (id)delegateForTask:(id)a0;

@end
