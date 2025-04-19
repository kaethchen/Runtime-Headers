@class NSURLRequest, NSString, _PKURLConnectionDelegate, NSLock, NSURLConnection;

@interface PKURLConnection : NSObject {
    id /* block */ _challengeBlock;
    id /* block */ _redirectResponseBlock;
}

@property (retain) NSLock *connectionLock;
@property (retain) NSURLConnection *urlConnection;
@property (retain) _PKURLConnectionDelegate *pkConnectionDelegate;
@property (retain, nonatomic) NSURLRequest *urlRequest;
@property (retain, nonatomic) NSString *destinationDirectory;

- (void)dealloc;
- (id)init;
- (void)cancel;
- (id)initWithURLRequest:(id)a0 withDestinationDirectory:(id)a1 withAuthenticationHandler:(id /* block */)a2;
- (void)startAsyncDownloadNotifyingOnQueue:(id)a0 withBytesReceivedHandler:(id /* block */)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)startSynchronousDownloadReturningResponse:(id *)a0 withBytesReceivedHandler:(id /* block */)a1 withOutData:(id *)a2 withOutLocation:(id *)a3 withError:(id *)a4;
- (void)_startAsyncDownloadNotifyingOnQueue:(id)a0 notifyOnThread:(id)a1 withBytesReceivedHandler:(id /* block */)a2 withCompletionHandler:(id /* block */)a3;
- (BOOL)_startSynchronousDownloadNotifyingOnQueue:(id)a0 onThread:(id)a1 returningResponse:(id *)a2 withBytesReceivedHandler:(id /* block */)a3 withOutData:(id *)a4 withOutLocation:(id *)a5 withError:(id *)a6;
- (id)initWithURLRequest:(id)a0 withDestinationDirectory:(id)a1;
- (id)initWithURLRequest:(id)a0 withDestinationDirectory:(id)a1 withAuthenticationHandler:(id /* block */)a2 withRedirectResponseHandler:(id /* block */)a3;
- (void)startAsyncDownloadNotifyingOnThread:(id)a0 withBytesReceivedHandler:(id /* block */)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)startSynchronousDownloadNotifyingOnQueue:(id)a0 returningResponse:(id *)a1 withBytesReceivedHandler:(id /* block */)a2 withOutData:(id *)a3 withOutLocation:(id *)a4 withError:(id *)a5;
- (BOOL)startSynchronousDownloadNotifyingOnThread:(id)a0 returningResponse:(id *)a1 withBytesReceivedHandler:(id /* block */)a2 withOutData:(id *)a3 withOutLocation:(id *)a4 withError:(id *)a5;

@end
