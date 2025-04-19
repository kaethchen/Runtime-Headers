@class SFSession, SFDeviceOperationCDPSetup, HMHomeManager, ACAccountStore, SFDevice, NSObject;
@protocol OS_dispatch_queue;

@interface SFAuthenticateAccountsSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _accountsState;
    ACAccountStore *_accountStore;
    int _iCloudTermsState;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned int _targetedAccountTypes;
    unsigned long long _problemFlags;
    unsigned long long _peerFeatureFlags;
    BOOL _isSigningInNewiCloud;
    HMHomeManager *_homeManager;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    int _cdpState;
    int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

+ (id)_myGameCenterAccount;

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
- (void)__runFinishWithSFSession:(id)a0;
- (int)__validateAccountsWithAccountStore:(id)a0;
- (id)_availableAccountsToSignIn;
- (void)_handleShowTermsUI:(id)a0 responseHandler:(id /* block */)a1;
- (void)_presentiCloudTermsUIWithAccount:(id)a0;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runRepairCDP;
- (int)_runSFSessionStart;
- (int)_validateAccounts;
- (int)_validateiCloudAccountTerms;

@end
