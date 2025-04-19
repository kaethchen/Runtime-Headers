@class NSData, NSString, CDPStateController, SFDevice, SFSession, NSObject, CDPContext, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupSessioniOS : NSObject {
    BOOL _activateCalled;
    unsigned int _appNextID;
    BOOL _buddyComplete;
    BOOL _configRequestSent;
    BOOL _configResponseReceived;
    BOOL _invalidateCalled;
    BOOL _pairSetupDone;
    BOOL _pairSetupReset;
    BOOL _pairSetupRunning;
    int _preAuthPairSetupState;
    BOOL _preAuthRequestSent;
    BOOL _preAuthResponseReceived;
    NSData *_resumeAuthTag;
    SFDeviceDiscovery *_resumeDiscovery;
    NSString *_resumePassword;
    int _resumeState;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    int _cdpState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    int _dependentSetupState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) unsigned int pairFlags;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (nonatomic) BOOL supportsDependentSetup;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ receivedObjectHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)tryPIN:(id)a0;
- (void)_run;
- (void)_sendConfigInfo;
- (void)_completedWithError:(id)a0;
- (void)_handleSetupActionRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleSetupActionSoftwareUpdate;
- (void)_handleSetupPeerSuspended;
- (void)_handleSetupResumeFoundDevice:(id)a0;
- (void)_receivedConfigResponse:(id)a0;
- (void)_receivedObject:(id)a0 flags:(unsigned int)a1;
- (int)_runCoreCDPSetup;
- (int)_runPreAuthPairSetup;
- (int)_runResume;
- (void)_runSFSessionActivated;
- (void)_runSFSessionStart;
- (void)_sendPreAuthInfo;
- (void)_startBuddySession;
- (void)sendAppEvent:(id)a0;
- (id)sfSession;

@end
