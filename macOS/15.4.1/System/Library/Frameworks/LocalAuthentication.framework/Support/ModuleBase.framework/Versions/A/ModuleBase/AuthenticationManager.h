@class NSMapTable, NSMutableArray, AuthenticationInProgress;
@protocol LACRemoteAuthenticationOwnership;

@interface AuthenticationManager : NSObject {
    NSMutableArray *_idleBlocks;
    BOOL _daemon;
    id<LACRemoteAuthenticationOwnership> _remoteAuthenticationOwnership;
    NSMapTable *_remoteAuthentications;
    int _bkOperationToken;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) AuthenticationInProgress *pendingAuthentication;
@property (readonly, nonatomic) AuthenticationInProgress *runningAuthentication;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_agentProxy;
- (BOOL)_bkIsBusy;
- (void)_bkOperationChanged;
- (id)_cancelationErrorWithDescription:(id)a0 cancelledByHigherPriority:(BOOL)a1;
- (void)_clearAuthentication:(id)a0;
- (void)_handleCompletionOfAuthentication:(id)a0 result:(id)a1 error:(id)a2;
- (id)_invalidationError;
- (void)_runAuthentication:(id)a0;
- (void)_runIdleBlocks;
- (void)_runIdleBlocksNow;
- (void)authenticateForPolicy:(long long)a0 constraintData:(id)a1 internalInfo:(id)a2 uiDelegate:(id)a3 originator:(id)a4 request:(id)a5 mechanism:(id)a6 reply:(id /* block */)a7;
- (BOOL)canStartAuthenticationWithPolicy:(long long)a0 options:(id)a1;
- (void)cancelWithError:(id)a0 originatorId:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)findMechanismForEvent:(long long)a0 mustBeRunning:(BOOL)a1 plugin:(id)a2;
- (void)remoteAuthenticationFinished;
- (void)remoteAuthenticationInProgressWithPriority:(long long)a0 pid:(int)a1 reply:(id /* block */)a2;
- (void)runWhenIdle:(id /* block */)a0;
- (id)runningMechanism;

@end
