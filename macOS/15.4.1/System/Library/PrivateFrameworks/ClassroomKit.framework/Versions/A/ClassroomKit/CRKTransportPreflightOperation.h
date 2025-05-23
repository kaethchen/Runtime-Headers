@class CATTransport, NSString, NSDictionary, CRKSession;

@interface CRKTransportPreflightOperation : CATOperation <CATTransportDelegate, CATRemoteTransportDelegate>

@property (readonly, nonatomic) CATTransport *transport;
@property (nonatomic) BOOL decisionHandlerWantsBackoffReset;
@property (nonatomic) BOOL connectionInterruptedDueToDecisionHandler;
@property (nonatomic) BOOL invalidationTriggered;
@property (nonatomic) BOOL cancellationRequested;
@property (readonly, weak, nonatomic) CRKSession *session;
@property (readonly, copy, nonatomic) NSDictionary *stateDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (void)transport:(id)a0 didInterruptWithError:(id)a1;
- (void)transport:(id)a0 encounteredTrustDecisionWhileTryingToSecure:(id)a1;
- (void)transportDidConnect:(id)a0;
- (void)transportDidInvalidate:(id)a0;
- (id)ASMUserIdentifierFromTrustDecision:(id)a0;
- (BOOL)anyCommonNameInArrayHasLeaderPrefix:(id)a0;
- (void)clearDelegatesOnTransport:(id)a0;
- (BOOL)commonNameHasLeaderPrefix:(id)a0;
- (BOOL)errorIndicatesThatInterruptionWasCausedByDecisionHandler:(id)a0;
- (void)finishWithShouldResetBackoff:(BOOL)a0;
- (void)finishWithTransport:(id)a0;
- (void)handleContinuationDecision:(unsigned long long)a0 forTrustDecision:(id)a1;
- (id)initWithTransport:(id)a0 session:(id)a1;
- (void)invalidateTransport;
- (BOOL)isCommonNamePrefixValidForRemoteTransport:(id)a0;
- (BOOL)isCommonNamePrefixValidForTransport:(id)a0;
- (BOOL)isInsecureConnectionError:(id)a0;
- (void)respondToTrustDecision:(id)a0 withAllowUntrustedConnections:(BOOL)a1;
- (void)setDelegatesOnTransport:(id)a0;

@end
