@class NSURLSession, HPDAuthChallengeHandler, NSThread, NSArray, NSURLSessionDataTask, NSURLAuthenticationChallenge;

@interface DDMAssetURLProtocol : NSURLProtocol

@property (class, copy) HPDAuthChallengeHandler *authHandler;

@property (weak) NSThread *clientThread;
@property (copy) NSArray *modes;
@property (copy) id /* block */ pendingChallengeCompletionHandler;
@property (retain) NSURLAuthenticationChallenge *pendingChallenge;
@property (retain) NSURLSession *session;
@property (retain) NSURLSessionDataTask *task;
@property double startTime;
@property long long retryCount;
@property BOOL isAuthenticating;
@property (copy) id /* block */ completionBlock;

+ (id)scheme;
+ (id)sharedManager;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)registerProtocolWithAuthHandler:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopLoading;
- (id)initWithRequest:(id)a0 cachedResponse:(id)a1 client:(id)a2;
- (void)startLoading;
- (void)handleURLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)_completeAuthChallengeWithDisposition:(long long)a0 credentials:(id)a1;
- (void)cancelPendingChallenge;
- (void)handleURLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)handleURLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)handleURLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)onThreadPerformBlock:(id /* block */)a0;
- (void)performOnClientThreadBlock:(id /* block */)a0;
- (void)performOnThread:(id)a0 modes:(id)a1 block:(id /* block */)a2;

@end
