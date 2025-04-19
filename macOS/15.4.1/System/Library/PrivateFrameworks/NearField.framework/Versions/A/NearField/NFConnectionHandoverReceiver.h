@class NSString, NFHCESession, NFConnectionHandoverSelect, NFTimer, NSObject;
@protocol NFConnectionHandoverReceiverDelegate;

@interface NFConnectionHandoverReceiver : NFConnectionHandoverController <NFHCESessionDelegate, NFFieldDetectSessionDelegate> {
    BOOL _hceAppSelected;
    BOOL _didConnect;
    NFHCESession *_hceSession;
    NFConnectionHandoverSelect *_pendingCHSelect;
    NFTimer *_emuAssertTimer;
    id /* block */ _delaySendSelectCompletion;
}

@property (weak, nonatomic) NSObject<NFConnectionHandoverReceiverDelegate> *delegate;
@property (readonly, nonatomic) BOOL roleBroadcastInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)receiverWithDelegate:(id)a0;
+ (id)receiverWithDelegate:(id)a0 callbackQueue:(id)a1;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)start;
- (void)stop;
- (void)_stopWithError:(id)a0;
- (BOOL)_processSelectCommand:(id)a0 response:(id)a1;
- (void)_processConnect;
- (id)initWithDelegate:(id)a0 callbackQueue:(id)a1;
- (void)_emuAssertTimerExpired;
- (void)_processRetryRequest:(id)a0;
- (void)_sendFailureAPDU;
- (void)_startWithAutoResume:(BOOL)a0 customBroadcastData:(id)a1;
- (void)forceResumeWithCompletionHandler:(id /* block */)a0;
- (void)handleSessionResumed;
- (void)hceSession:(id)a0 didReceiveAPDU:(id)a1;
- (void)hceSession:(id)a0 didReceiveField:(id)a1;
- (void)hceSession:(id)a0 triggeredByField:(id)a1 started:(BOOL)a2;
- (void)hceSessionDidConnect:(id)a0;
- (void)hceSessionDidDisconnect:(id)a0;
- (void)hceSessionDidEndUnexpectedly:(id)a0;
- (void)sendHandoverSelect:(id)a0 delay:(double)a1 completionHandler:(id /* block */)a2;
- (BOOL)sendHandoverSelect:(id)a0 error:(id *)a1;
- (void)startAutoResumeOnFieldDisableWithCustomBroadcastData:(id)a0;
- (void)startWithAutoResumeOnFieldDisable;
- (void)startWithCustomBroadcastData:(id)a0;

@end
