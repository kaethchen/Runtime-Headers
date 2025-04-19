@class NSURLSession, NSString, NSMutableDictionary, NSObject, AKServerBackoffHelper;
@protocol OS_dispatch_queue;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_tasksByIdentifier;
    AKServerBackoffHelper *_serverBackoffHelper;
}

@property (nonatomic) BOOL _usesAppleIDContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllCachedResponses;
+ (id)_createURLSessionUsesAppleIDContext:(BOOL)a0;
+ (id)_urlBagCache;
+ (id)sharedAnisetteFreeURLSession;
+ (id)sharedCacheEnabledAnisetteFreeSession;
+ (id)sharedCacheEnabledURLSession;
+ (id)sharedCacheReliantAnisetteFreeSession;
+ (id)sharedURLSession;
+ (id)sharedURLSessionWithDenyVirtualInterfaces;

- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)_unsafe_completeTask:(id)a0 withError:(id)a1;
- (void)cancelDataTask:(id)a0;
- (id)_URLSession;
- (BOOL)_unsafe_retryTaskIfPossible:(id)a0;
- (id)beginAuthenticationDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)beginDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)defaultSessionObjectWithConfiguration:(id)a0;
- (BOOL)isRecoverableError:(id)a0;
- (id)sessionConfiguration;

@end
