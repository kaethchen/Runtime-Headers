@class NSString, BKUIFingerSecurePairingStateObserver, BKUIMagicKeyBoardClientAdapterController, BKUISystemPrefsPairingView, BKMesaSecureIntentProvider, NSWindow, NSObject, BKUILockScreenAssertionHandler;
@protocol BKUIMagicKeyboardEnrollmentPrepUIDelegate, OS_os_log;

@interface BKUIMagicKeyboardEnrollmentPrepUIController : NSObject <BKSecureIntentDisplayHost> {
    NSObject<OS_os_log> *MagicKeyBoardEnrollmentPrepLogs;
}

@property (weak, nonatomic) NSWindow *alertWindow;
@property (retain) BKUIFingerSecurePairingStateObserver *securePairingStateObserver;
@property (retain, nonatomic) BKUISystemPrefsPairingView *pairingView;
@property (retain) BKMesaSecureIntentProvider *secureIntentProvider;
@property (retain) BKUIMagicKeyBoardClientAdapterController *clienPairingUIAdapterController;
@property (retain) BKUIMagicKeyBoardClientAdapterController *clienSIUIAdapterController;
@property (retain) BKUILockScreenAssertionHandler *lockScreenAssertionHandler;
@property (weak, nonatomic) id<BKUIMagicKeyboardEnrollmentPrepUIDelegate> uiDelegate;
@property BOOL inBuddy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cleanUP;
- (void)_preemptiveSecureIntentRequest;
- (void)_safeRemoveViewController:(id)a0;
- (void)_safeShowViewController:(id)a0;
- (void)_updateSecurePairingUI;
- (void)displaySecureIntentView:(id)a0;
- (void)failSetupDueToClamShell;
- (id)initWithUIDelegate:(id)a0 alertParentWindow:(id)a1;
- (void)removeSecureIntentView:(id)a0 didSucceed:(BOOL)a1 wasCancelled:(BOOL)a2;
- (BOOL)shouldContinueDisplayingSecureIntentView;
- (void)startMagicKeyboardPreEnrollmentSetup;

@end
