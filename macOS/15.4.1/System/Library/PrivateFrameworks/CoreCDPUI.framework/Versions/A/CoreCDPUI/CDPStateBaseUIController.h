@class NSWindow, CDPOption, NSString, NSImage, CDPEnrollViewController, NSView, CDPRecoveryKeySheetController;

@interface CDPStateBaseUIController : NSObject <CDPQuotaScreenUIHandlerCapable, CDPStateUIProvider> {
    double _rpdProbationDuration;
}

@property (retain, nonatomic) CDPRecoveryKeySheetController *recoveryKeyController;
@property (retain, nonatomic) CDPOption *cdpOptionViewController;
@property (copy, nonatomic) id /* block */ quotaScreenCompletion;
@property (copy, nonatomic) NSString *messageText;
@property (retain, nonatomic) NSWindow *parentWindow;
@property (retain, nonatomic) NSImage *displayImage;
@property (retain, nonatomic) CDPEnrollViewController *cdpViewController;
@property (nonatomic) BOOL viewBasedUI;
@property (retain, nonatomic) NSView *hostView;
@property (retain, nonatomic) NSView *iCDPContainerView;
@property (retain, nonatomic) NSView *iCDPContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cdpContext:(id)a0 createLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 presentRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 presentRemoteApprovalWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForAdoptionOfMultipleICSC:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForBeneficiaryAccessKeyWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForICSCWithIsNumeric:(BOOL)a1 numericLength:(id)a2 isRandom:(BOOL)a3 validator:(id)a4;
- (void)cdpContext:(id)a0 promptForInteractiveAuthenticationWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForLocalSecretWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithSecretValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)cdpContext:(id)a0 showError:(id)a1 withCompletion:(id /* block */)a2;
- (void)cdpContext:(id)a0 showError:(id)a1 withDefaultIndex:(long long)a2 withCompletion:(id /* block */)a3;
- (void)cdpContext:(id)a0 showResetCompletedAlertWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 showResetFailedAlertWithUnderlyingError:(id)a1 completion:(id /* block */)a2;
- (void)cdpRecoveryFlowContext:(id)a0 promptForRemoteSecretWithDevices:(id)a1 validator:(id)a2;
- (void)dismissRemoteApprovalWaitingScreenWithAction:(unsigned long long)a0;
- (void)endCDPView;
- (void)presentQuotaScreenWithCompletion:(id /* block */)a0;
- (id)initWithParentWindow:(id)a0;
- (void)cdpContext:(id)a0 promptForEDPRecoveryTokenWithValidator:(id)a1 successfulCDPRecoveryContinuationHandler:(id /* block */)a2;
- (void)generateNewRecoveryKey:(id /* block */)a0;
- (void)_cacheSecret:(id)a0 inContext:(id)a1;
- (void)_configureEnrollViewWithContext:(id)a0 devices:(id)a1 offeringRemoteApproval:(BOOL)a2 validator:(id)a3;
- (void)_extractPasswordFromData:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (BOOL)_hasEntitlementsToShowLocalAuthenticationSecretPrompt;
- (id)_makeAuthenticationSheetController;
- (void)_performRPD;
- (void)_promptForLocalAuthenticationWithMessage:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)_promptForLocalSecretOldUIWithMessage:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)_startNativeRPDFlow;
- (id)_utf8StringFromData:(id)a0;
- (void)cancelPressedOnQuotaScreenWithPresentationSource:(unsigned long long)a0;
- (void)changeView:(id)a0;

@end
