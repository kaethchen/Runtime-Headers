@class NSURLSession, NSURLRequest, NSString, NSURLSessionDownloadTask, NSData, NSLock, _PKURLSessionDelegate;

@interface PKURLSession : NSObject {
    id /* block */ _challengeBlock;
    id /* block */ _redirectResponseBlock;
}

@property (retain) NSLock *connectionLock;
@property (retain) NSURLSession *urlSession;
@property (retain) NSURLSessionDownloadTask *downloadTask;
@property (retain) _PKURLSessionDelegate *pkURLSessionDelegate;
@property (retain) NSData *resumeData;
@property (retain, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSString *destinationDirectory;
@property BOOL inBackground;

- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)startAsyncDownloadNotifyingOnQueue:(id)a0 withBytesReceivedHandler:(id /* block */)a1 withCompletionHandler:(id /* block */)a2;
- (id)_initWithURLRequest:(id)a0 withResumeData:(id)a1 withDestinationDirectory:(id)a2 inBackground:(BOOL)a3 withAuthenticationHandler:(id /* block */)a4 withRedirectResponseHandler:(id /* block */)a5;
- (void)_startAsyncDownloadNotifyingOnQueue:(id)a0 notifyOnThread:(id)a1 withBytesReceivedHandler:(id /* block */)a2 withCompletionHandler:(id /* block */)a3;
- (id)initWithResumeData:(id)a0 withDestinationDirectory:(id)a1 inBackground:(BOOL)a2 withAuthenticationHandler:(id /* block */)a3 withRedirectResponseHandler:(id /* block */)a4;
- (id)initWithURLRequest:(id)a0 withDestinationDirectory:(id)a1 inBackground:(BOOL)a2;
- (id)initWithURLRequest:(id)a0 withDestinationDirectory:(id)a1 inBackground:(BOOL)a2 withAuthenticationHandler:(id /* block */)a3;
- (id)initWithURLRequest:(id)a0 withDestinationDirectory:(id)a1 inBackground:(BOOL)a2 withAuthenticationHandler:(id /* block */)a3 withRedirectResponseHandler:(id /* block */)a4;
- (void)startAsyncDownloadNotifyingOnThread:(id)a0 withBytesReceivedHandler:(id /* block */)a1 withCompletionHandler:(id /* block */)a2;

@end
