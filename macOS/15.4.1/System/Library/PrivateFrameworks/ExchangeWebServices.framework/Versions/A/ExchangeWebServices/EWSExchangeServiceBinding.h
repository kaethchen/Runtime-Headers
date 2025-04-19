@class EWSServerVersionInfo, NSString, NSURL, NSURLSession, NSDate, NSMutableDictionary, ACAccount, NSObject, NSMutableSet, NSMutableArray;
@protocol OS_os_log, EWSExchangeServiceBindingDelegate;

@interface EWSExchangeServiceBinding : NSObject <NSURLSessionDataDelegate> {
    NSMutableDictionary *_sentCredentials;
    NSMutableSet *_tasksWithSkippedInsecureProtectionSpaces;
    NSMutableDictionary *_requestsByTask;
    id _validityLock;
    BOOL _isValid;
    NSURL *_preferredURL;
    NSMutableSet *_attemptedURLs;
    NSMutableArray *_frozenTasks;
    NSDate *_unfreezeDate;
    NSMutableArray *_pendingOAuthTasks;
    NSDate *_tokenRefreshDate;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSURLSession *session;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, weak, nonatomic) id<EWSExchangeServiceBindingDelegate> delegate;
@property (retain) EWSServerVersionInfo *serverInfo;
@property (readonly) BOOL isValid;
@property BOOL logsActivity;
@property (readonly) BOOL isRefreshingOAuthToken;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)protectionSpaceForURL:(id)a0;
+ (BOOL)shouldAutodiscoverUponResponseCode:(long long)a0;
+ (id)testMessage;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancel;
- (void)sendMessage:(id)a0;
- (void)invalidateAndCancel;
- (id)initWithAccount:(id)a0;
- (id)_errorFromTask:(id)a0;
- (void)_backOffForTime:(double)a0;
- (void)_cancelBindingTask:(id)a0;
- (void)_clearRequestIfNeeded:(id)a0;
- (void)_continuePendingOAuthTasks;
- (void)_continueSendingRequestForBindingTask:(id)a0;
- (id)_dataTaskForBindingTask:(id)a0;
- (void)_exchangeServiceBindingCommonInitWithAccount:(id)a0;
- (id)_exchangeServiceErrorFromSOAPError:(id)a0 dataTask:(id)a1;
- (void)_renewOAuthTokenWithTask:(id)a0;
- (void)_sendRequestForBindingTask:(id)a0;
- (BOOL)_shouldFallbackFromError:(id)a0;
- (void)_tryUnfreeze;
- (void)finishMessagesAndInvalidate;
- (id)initWithURL:(id)a0 account:(id)a1 delegate:(id)a2;
- (id)newPullSubscription;
- (id)newStreamingSubscription;
- (id)newTaskWithRequest:(id)a0;
- (id)newTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)newTaskWithRequest:(id)a0 delegate:(id)a1;
- (id)sendSynchronousMessage:(id)a0 error:(id *)a1;

@end
