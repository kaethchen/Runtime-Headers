@class PKURLSession;

@interface PKURLTransport : NSObject

@property (retain) PKURLSession *pkURLSession;

- (void)dealloc;
- (void)cancel;
- (void)startAsyncDownloadNotifyingOnQueue:(id)a0 withBytesReceivedHandler:(id /* block */)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithResumeData:(id)a0 withDestinationDirectory:(id)a1 inBackground:(BOOL)a2 withConnectionAuthenticationHandler:(id /* block */)a3 withSessionAuthenticationHandler:(id /* block */)a4 withRedirectResponseHandler:(id /* block */)a5;
- (id)initWithURLRequest:(id)a0 withDestinationDirectory:(id)a1 inBackground:(BOOL)a2 withConnectionAuthenticationHandler:(id /* block */)a3 withSessionAuthenticationHandler:(id /* block */)a4 withRedirectResponseHandler:(id /* block */)a5;

@end
