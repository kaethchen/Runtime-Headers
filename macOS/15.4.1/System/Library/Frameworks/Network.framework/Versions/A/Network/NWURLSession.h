@class NSHashTable, NSString, NSURLSession, NSOperationQueue, NSMutableDictionary, NSMutableSet, NSObject, NWURLSessionDelegateWrapper, NSURLSessionConfiguration;
@protocol OS_dispatch_queue, OS_nw_http_cookie_storage, OS_nw_context, OS_nw_http_alt_svc_storage, NSURLSessionDelegate, OS_nw_authentication_credential_storage, OS_nw_array;

@interface NWURLSession : NSObject {
    unsigned char uuid[16];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    BOOL _invalidated;
    unsigned int _nextTaskIdentifier;
    unsigned int _rootPort;
    unsigned int _notifierObject;
    NSObject<OS_nw_http_cookie_storage> *_HTTPCookieStorage;
    NSObject<OS_nw_authentication_credential_storage> *_URLCredentialStorage;
    NSObject<OS_nw_array> *_URLCredentialCache;
    NSObject<OS_nw_http_alt_svc_storage> *_altSvcStorage;
    NSObject<OS_nw_array> *_connectionProxyArray;
    NSURLSessionConfiguration *_internalConfiguration;
    NSHashTable *_weakUnresumedTasks;
    NSMutableSet *_runningTasks;
    NSMutableDictionary *_trustExceptions;
    struct IONotificationPort { } *_notifyPortRef;
    id _retainedSelf;
    NSObject<OS_dispatch_queue> *_queue;
    NWURLSessionDelegateWrapper *_delegateWrapper;
    NSObject<OS_nw_context> *_context;
}

@property (class, readonly) NSURLSession *sharedSession;

@property (readonly, nonatomic) NSOperationQueue *delegateQueue;
@property (readonly, nonatomic) id<NSURLSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSURLSessionConfiguration *configuration;
@property (copy) NSString *sessionDescription;
@property (readonly, nonatomic) NSObject<OS_nw_context> *_networkContext;
@property (nonatomic) BOOL _enablesEarlyData;

+ (void)initialize;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (id)sessionWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
+ (void)_disableAppSSO;
+ (void)_strictTrustEvaluate:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
+ (id)sessionWithConfiguration:(id)a0;

- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)_dataTaskWithRequest:(id)a0 delegate:(id)a1;
- (id)_dataTaskWithRequest:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_dataTaskWithURL:(id)a0 delegate:(id)a1;
- (id)_dataTaskWithURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_downloadTaskWithRequest:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_downloadTaskWithResumeData:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_downloadTaskWithURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)_uploadTaskWithRequest:(id)a0 fromData:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)_uploadTaskWithRequest:(id)a0 fromFile:(id)a1 delegate:(id)a2 completionHandler:(id /* block */)a3;
- (id)dataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)dataTaskWithRequest:(id)a0;
- (void)invalidateAndCancel;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1;
- (id)webSocketTaskWithURL:(id)a0 protocols:(id)a1;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1;
- (id)_uploadTaskWithResumeData:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (id)dataTaskWithURL:(id)a0;
- (id)dataTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)downloadTaskWithRequest:(id)a0;
- (id)downloadTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)downloadTaskWithResumeData:(id)a0;
- (id)downloadTaskWithResumeData:(id)a0 completionHandler:(id /* block */)a1;
- (id)downloadTaskWithURL:(id)a0;
- (id)downloadTaskWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)a0;
- (void)getAllTasksWithCompletionHandler:(id /* block */)a0;
- (void)getTasksWithCompletionHandler:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)resetWithCompletionHandler:(id /* block */)a0;
- (id)streamTaskWithHostName:(id)a0 port:(long long)a1;
- (id)streamTaskWithNetService:(id)a0;
- (id)uploadTaskWithRequest:(id)a0 fromData:(id)a1 completionHandler:(id /* block */)a2;
- (id)uploadTaskWithRequest:(id)a0 fromFile:(id)a1 completionHandler:(id /* block */)a2;
- (id)uploadTaskWithResumeData:(id)a0;
- (id)uploadTaskWithResumeData:(id)a0 completionHandler:(id /* block */)a1;
- (id)uploadTaskWithStreamedRequest:(id)a0;
- (id)webSocketTaskWithRequest:(id)a0;
- (id)webSocketTaskWithURL:(id)a0;

@end
