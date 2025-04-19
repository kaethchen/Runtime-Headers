@class SFDeviceOperationCDPSetup, SFSession, SFDevice, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHASession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned long long _peerFeatureFlags;
    unsigned long long _peerProblemsFlags;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForHomeHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;
@property (copy, nonatomic) id /* block */ promptForRoomHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_cleanup;
- (void)_reportError:(id)a0;
- (void)_run;
- (int)_runFinish;
- (void)pairSetupTryPIN:(id)a0;
- (void)_runInfoExchangeResponse:(id)a0 error:(id)a1;
- (int)_runCDPSetup;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (BOOL)_verifyiCloudMatch:(unsigned long long)a0 error:(id *)a1;
- (void)homeKitSelectHome:(id)a0;
- (void)homeKitSelectRoom:(id)a0;

@end
