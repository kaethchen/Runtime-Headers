@class LACClientInfo, NSDate, NSDictionary, PreflightCacheBypassAssertion, MechanismBase, NSNumber;
@protocol LAUIDelegate, LACEvaluationRequest;

@interface AuthenticationInProgress : NSObject {
    id<LAUIDelegate> _uiDelegate;
    NSDictionary *_internalOptions;
    id /* block */ _reply;
    NSDate *_started;
    PreflightCacheBypassAssertion *_preflightCacheBypassAssertion;
    id<LACEvaluationRequest> _request;
    LACClientInfo *_clientInfo;
}

@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) MechanismBase *mechanism;
@property (readonly, nonatomic) long long originatorId;
@property (readonly, nonatomic) int originatorPid;
@property (readonly, nonatomic) unsigned int originatorUid;
@property (readonly, nonatomic) NSNumber *ahpMode;
@property (readonly, nonatomic) AuthenticationInProgress *enqueuedAuthentication;
@property (readonly, nonatomic) LACClientInfo *clientInfo;

- (id)description;
- (void).cxx_destruct;
- (void)cancelWithError:(id)a0;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (void)_bypassPreflightCache:(BOOL)a0;
- (BOOL)_isInteractiveEvaluationWithinProtectedAppsEvaluation:(id)a0;
- (void)enqueueAuthentication:(id)a0;
- (id)initWithMechanism:(id)a0 policy:(long long)a1 uiDelegate:(id)a2 originator:(id)a3 request:(id)a4 internalInfo:(id)a5 reply:(id /* block */)a6;
- (id)shouldDequeueAndRunAfterAuthentication:(id)a0 result:(id)a1 error:(id)a2;
- (BOOL)shouldEnqueueAuthentication:(id)a0;

@end
