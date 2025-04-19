@class NSStackView, TUIKTStateManager, AIDAAccountManager, TUIAppleAccountManager, IDSService, iCloudAccountDetailsWebTabView, OBTemplateView, NSMutableArray, KTOptInManager, NSString, OBTemplateContainerViewController, TUIDeviceDetailsViewController, NSWindow, IDSSignInController, ACAccountStore;
@protocol TUIOptInFlowControllerDelegate;

@interface TUIOptInFlowControllerImpl : NSObject <iCloudWebViewDelegate, TUIOptInFlowController> {
    BOOL _ineligibleDevicesRemoteUIViewUnexpectedState;
}

@property (retain, nonatomic) NSWindow *keyWindow;
@property (retain, nonatomic) NSWindow *flowWindow;
@property (retain, nonatomic) OBTemplateContainerViewController *containerView;
@property (retain, nonatomic) OBTemplateView *templateView;
@property (retain, nonatomic) KTOptInManager *optInManager;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) IDSService *idsService;
@property (retain, nonatomic) NSMutableArray *devicesWithIssuesIdentifiers;
@property (retain, nonatomic) NSStackView *stackView;
@property (retain, nonatomic) TUIDeviceDetailsViewController *deviceDetailController;
@property (retain, nonatomic) iCloudAccountDetailsWebTabView *ineligibleDevicesRemoteUIView;
@property (retain, nonatomic) TUIAppleAccountManager *appleAccountManager;
@property (retain, nonatomic) TUIKTStateManager *stateManager;
@property (retain, nonatomic) IDSSignInController *idsSignInController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUIOptInFlowControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)_appleAccount;
- (void)endWebView:(id)a0;
- (void)icaSetButtonBar:(id)a0 webViewName:(id)a1;
- (BOOL)shouldHideCancelButton;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)authenticationFailed:(id)a0;
- (void)loadFailed:(id)a0;
- (void)showPurchaseSharingForAltDSID:(id)a0 callback:(id)a1;
- (void)webViewDidFinishLoading:(id)a0;
- (void)_verifyCDPWithCompletion:(id /* block */)a0;
- (void)_initOBContainterViewWithModel:(id)a0;
- (void)_showMessagesSettingsOptOutFlow;
- (void)beginOptOutFlow;
- (void)_attemptToSetOptInWithState:(BOOL)a0;
- (void)_beginIneligibleDevicesRemoteUIRequestWithCompletion:(id /* block */)a0;
- (void)_clearKeyForButton:(id)a0;
- (void)_continueAttemptToSetOptInWithState:(BOOL)a0;
- (void)_dimissWithOptInState:(id)a0 completion:(id /* block */)a1;
- (void)_dismissIneligibleDevicesRemoteUI;
- (void)_dismissOptInFlow;
- (void)_dismissOptOutFlow;
- (void)_dismissWelcomeScreen;
- (BOOL)_iCloudAccountMatchesiMessageAccount;
- (BOOL)_ineligibleDevicesRemoteUIFeatureEnabled;
- (void)_learnMorePressed;
- (void)_setEscapeKeyForButton:(id)a0;
- (void)_showAppleIdPrefpane;
- (void)_showAppleIdPrefpaneOptInFlow;
- (void)_showErrorAlertWithError:(id)a0 presentingWindow:(id)a1;
- (void)_showErrorScreenForFlow:(unsigned long long)a0 withModel:(id)a1;
- (void)_showMessagesSettings;
- (void)_showMessagesSettingsOptInFlow;
- (void)_showOBSheetWithModel:(id)a0;
- (void)_showOptInResultError:(BOOL)a0 error:(id)a1;
- (void)_showWelcomeScreen;
- (void)_startFlowPressed;
- (void)_verifyMessages:(id /* block */)a0;
- (void)beginOptInFlow;
- (void)dismissPendingPopupUI;
- (id)initWithKeyWindow:(id)a0 accountManager:(id)a1 stateManager:(id)a2;
- (void)performAccountChecksForFlow:(unsigned long long)a0;

@end
