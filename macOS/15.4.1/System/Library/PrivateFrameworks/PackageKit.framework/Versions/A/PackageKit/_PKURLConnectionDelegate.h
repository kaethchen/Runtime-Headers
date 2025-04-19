@class NSString, NSURLResponse, NSFileHandle, NSMutableData, NSObject, NSThread;
@protocol OS_dispatch_queue;

@interface _PKURLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)_notifyCompletionHandlerWithData:(id)a0 withURLResponse:(id)a1 withError:(id)a2;
- (id)initWithNotifyQueue:(id)a0 withNotifyThread:(id)a1 withDestinationDirectory:(id)a2 withAuthenticationHandler:(id /* block */)a3 withRedirectResponseHandler:(id /* block */)a4 withBytesReceivedHandler:(id /* block */)a5 usingBlock:(id /* block */)a6;

@end
