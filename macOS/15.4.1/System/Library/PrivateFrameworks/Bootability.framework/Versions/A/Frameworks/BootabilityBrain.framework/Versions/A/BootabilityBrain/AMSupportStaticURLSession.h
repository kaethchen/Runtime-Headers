@class NSURLSession, NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSupportStaticURLSession : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeout;
@property (nonatomic) float priority;
@property (retain, nonatomic) NSURLSession *session;
@property (retain, nonatomic) NSDictionary *options;
@property (readonly) BOOL sslEvalFailed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)invalidateAndCancel;
- (void)sendRequest:(struct __CFHTTPMessage { } *)a0 completion:(id /* block */)a1;
- (id)_defaultSessionConfigurationWithIdentifier:(id)a0;
- (id)_newSession;
- (id)_urlRequestForHTTPMessage:(struct __CFHTTPMessage { } *)a0;

@end
