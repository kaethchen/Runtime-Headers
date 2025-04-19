@class AKAppleIDSession, NSString, NSHTTPURLResponse, NSMutableURLRequest, NSMutableData, NSObject, NSURLConnection;
@protocol OS_dispatch_queue;

@interface iCloudRequester : NSOperation <NSURLConnectionDelegate> {
    NSMutableURLRequest *_request;
    NSURLConnection *_urlConnection;
    id /* block */ _handler;
    NSMutableData *_data;
    BOOL _canceled;
    AKAppleIDSession *_appleIDSession;
    NSString *_accountID;
    BOOL _shouldRetry;
}

@property (nonatomic, getter=isExecuting) BOOL isExecuting;
@property (getter=isFinished) BOOL finished;
@property (getter=isCanceled) BOOL canceled;
@property (retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)__unsafe_callHandler;
- (void)_callHandler;
- (void)_kickOffRequest:(id)a0;
- (id)initWithRequest:(id)a0 handler:(id /* block */)a1;
- (id)initWithRequest:(id)a0 signForAccountID:(id)a1 handler:(id /* block */)a2;
- (void)generateiCloudRequestHeadersForAccountID:(id)a0 withCompletion:(id /* block */)a1;

@end
