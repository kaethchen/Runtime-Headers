@class SFSession, NSUUID, NSString, NSData, SFClient, NSObject, SFService;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupServiceiOS : NSObject {
    BOOL _activateCalled;
    BOOL _advertiseFast;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSUUID *_peer;
    BOOL _pinShowing;
    SFClient *_preventExitForLocaleClient;
    NSData *_resumeAuthTag;
    NSString *_resumePassword;
    int _resumeState;
    SFService *_sfService;
    BOOL _sfServiceActivated;
    SFSession *_sfSession;
    BOOL _suspendPending;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ showPINHandlerEx;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;
@property (copy, nonatomic) id /* block */ progressHandlerEx;
@property (copy, nonatomic) id /* block */ receivedObjectHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_invalidated;
- (void)_completed:(int)a0;
- (void)_run;
- (void)_sfServiceStart;
- (void)_handleAppEventReceived:(id)a0;
- (void)_handleConfigRequestReceived:(id)a0;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleSessionSecured:(id)a0;
- (void)_handleSessionStarted:(id)a0;
- (void)_handleSetupActionRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSetupActionResume;
- (void)_handleSetupActionSuspend;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (int)_runResumeIfNeeded;
- (void)sendObject:(id)a0;
- (void)sendSetupAction:(unsigned int)a0 info:(id)a1 responseHandler:(id /* block */)a2;

@end
