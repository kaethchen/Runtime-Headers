@class NSData, NSString, NSFileHandle, NSError, NSThread, NSURLResponse, NSObject, NSMutableData;
@protocol OS_dispatch_queue;

@interface _PKURLSessionDelegate : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {
    NSObject<OS_dispatch_queue> *_notifyQueue;
    NSThread *_notifyThread;
    NSString *_destinationDirectory;
    id /* block */ _notifyBlock;
    id /* block */ _challengeBlock;
    id /* block */ _redirectResponseBlock;
    id /* block */ _bytesReceivedBlock;
}

@property (retain) NSURLResponse *response;
@property (retain) NSMutableData *data;
@property (retain) NSFileHandle *fileHandle;
@property long long fullDownloadSize;
@property (retain) NSData *resumeData;
@property (retain) NSError *mostRecentError;
@property BOOL taskCompleted;
@property BOOL inBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)cancel;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didFinishDownloadingToURL:(id)a2;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didResumeAtOffset:(long long)a2 expectedTotalBytes:(long long)a3;
- (void)URLSession:(id)a0 downloadTask:(id)a1 didWriteData:(long long)a2 totalBytesWritten:(long long)a3 totalBytesExpectedToWrite:(long long)a4;
- (void)_combineMostRecentErrorWithError:(id)a0;
- (void)_notifyCompletionHandlerWithData:(id)a0 withURLResponse:(id)a1 withResumeData:(id)a2 withError:(id)a3;
- (void)cancelWithResumeData:(id)a0;
- (id)initWithNotifyQueue:(id)a0 withNotifyThread:(id)a1 withDestinationDirectory:(id)a2 inBackground:(BOOL)a3 withAuthenticationHandler:(id /* block */)a4 withRedirectResponseHandler:(id /* block */)a5 withBytesReceivedHandler:(id /* block */)a6 usingBlock:(id /* block */)a7;

@end
