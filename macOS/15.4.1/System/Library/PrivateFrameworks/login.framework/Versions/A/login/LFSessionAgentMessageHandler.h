@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface LFSessionAgentMessageHandler : NSObject <LFSessionAgentConnectionInterface> {
    NSObject<OS_dispatch_queue> *_faceTimeCallCallbackBlockQueue;
    id /* block */ _faceTimeCallMuteCallbackBlock;
    id /* block */ _faceTimeCallCancelCallbackBlock;
    NSObject<OS_dispatch_queue> *_miniBuddyCompletionBlockQueue;
    id /* block */ _miniBuddyCompletionBlock;
    NSObject<OS_dispatch_queue> *_logoutBlockQueue;
    id /* block */ _logoutFailureBlock;
    id /* block */ _logoutSuccessBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSessionAgentMessageHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)SACMessageFaceTimeCancelCall:(id /* block */)a0;
- (void)SACMessageLogoutStatusClientLogoutFailed:(id)a0 reply:(id /* block */)a1;
- (void)SACMessageFaceTimeMuteCall:(id /* block */)a0;
- (void)SACMessageLogoutStatusClientLogoutSuccess:(id)a0 reply:(id /* block */)a1;
- (void)SACMessageMiniBuddyUIShowing:(id /* block */)a0;
- (BOOL)isFaceTimeRegistered;
- (BOOL)isLogoutRegistered;
- (void)setFaceTimeQueue:(id)a0 muteBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
- (void)setLogoutQueue:(id)a0 failureBlock:(id /* block */)a1 successBlock:(id /* block */)a2;
- (void)setMiniBuddyQueue:(id)a0 completionBlock:(id /* block */)a1;

@end
