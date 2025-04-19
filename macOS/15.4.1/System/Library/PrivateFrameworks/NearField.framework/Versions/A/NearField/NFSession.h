@class NSString, NFTimer, NSObject;
@protocol NFSessionDelegate, NFSessionInterface, OS_dispatch_queue, NSXPCProxyCreating;

@interface NFSession : NSObject <NFSession> {
    BOOL _isFirstInQueue;
    BOOL _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionInterface, NSXPCProxyCreating> *_proxy;
    NFTimer *_sessionKillSwitch;
}

@property (copy, nonatomic) id /* block */ didStartCallback;
@property (copy, nonatomic) id /* block */ didEndCallback;
@property (readonly) unsigned long long state;
@property (readonly) BOOL didEnd;
@property (readonly) BOOL isActive;
@property (weak) id<NFSessionDelegate> sessionDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)proxy;
- (void)endSession;
- (void)setProxy:(id)a0;
- (id)activateWithToken:(id)a0;
- (id)createSessionHandoffToken:(id *)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (id)initWithCallbackQueue:(id)a0;
- (BOOL)isFirstInQueue;
- (void)_endProxySession;
- (void)_invokeDidEndSession;
- (void)_invokeDidStartCallback:(id)a0;
- (void)didEndUnexpectedly;
- (void)didStartSession:(id)a0;
- (void)didStartSessionWithoutQueue:(id)a0;
- (void)endSessionAndStartNextSession:(id)a0 completion:(id /* block */)a1;
- (void)handleSessionResumed;
- (void)handleSessionSuspended:(id)a0;
- (id)internalInit;
- (BOOL)isTimeLimited;
- (void)prioritizeSession;
- (void)requestBugCapture:(id)a0 subtype:(id)a1 context:(id)a2;
- (void)setIsFirstInQueue:(BOOL)a0;
- (void)setSessionTimeLimit:(double)a0;

@end
