@class NSString, NSWindow;

@interface PasswordManagerUI.PMCredentialPickerViewController : PasswordManagerUI.PMCredentialPickerViewControllerBase <_ASAuthenticationPresentationProvider, ASCredentialPickerViewControllerProtocol, _ASCredentialListViewControllerDelegate, _ASCredentialAuthenticationViewControllerDelegate, ASCredentialRequestSubPaneConfirmButtonDelegate> {
    void /* unknown type, empty encoding */ presentationContext;
    void /* unknown type, empty encoding */ uiContext;
    void /* unknown type, empty encoding */ confirmButtonSubpane;
    void /* unknown type, empty encoding */ authKitAuthorizationProvider;
    void /* unknown type, empty encoding */ alertQueue;
    void /* unknown type, empty encoding */ loginChoicesToShow;
    void /* unknown type, empty encoding */ externalPasswordCredentialForSelectedLoginChoice;
    void /* unknown type, empty encoding */ credentialAuthenticationViewController;
    void /* unknown type, empty encoding */ credentialListViewController;
    void /* unknown type, empty encoding */ secondaryButton;
    void /* unknown type, empty encoding */ navigationController;
    void /* unknown type, empty encoding */ _selectedLoginChoiceIndex;
}

@property (nonatomic, readonly) long long numberOfTableRows;
@property (nonatomic, readonly) NSString *localizedCallerNameForTouchBar;
@property (nonatomic, readonly) NSString *localizedAuthWatchPrompt;
@property (nonatomic, readonly) NSWindow *presentationAnchor;

- (void).cxx_destruct;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)authenticationProvider:(id)a0 presentAlert:(id)a1 primaryAction:(id /* block */)a2 alternateAction:(id /* block */)a3;
- (id)authenticationSheetControllerForConfirmButtonSubPane:(id)a0;
- (void)confirmButtonSubPaneDidEnterProcessingState:(id)a0 withAuthenticatedContext:(id)a1;
- (void)confirmButtonSubPaneDidFailBiometry:(id)a0 allowingPasscodeFallback:(BOOL)a1;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyRegistrationCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialListViewController:(id)a0 didFinishWithCredential:(id)a1 completion:(id /* block */)a2;
- (void)credentialListViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 completion:(id /* block */)a2;
- (void)credentialListViewControllerDidPrepareInterface:(id)a0;
- (id)initRequiringTableView:(BOOL)a0;
- (void)performAuthorization:(id)a0 withAuthenticatedLAContext:(id)a1;
- (void)performPasswordAuthentication:(id)a0;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)userTappedContinueButton;
- (BOOL)validateReadyForAuthorization:(id)a0;
- (void)setNavigationController:(id)a0;
- (void)expandLoginChoicesButtonPressed;
- (void)authenticationProvider:(id)a0 hideViewController:(id)a1;
- (void)authenticationProvider:(id)a0 showViewController:(id)a1;
- (id)initWithPresentationContext:(id)a0 shouldExpandOtherLoginChoices:(BOOL)a1 activity:(id)a2;
- (void)keychainSyncStatusMayHaveChangedWithNotificaiton:(id)a0;
- (void)manualPasswordEntryButtonPressed;
- (void)performConditionalRegistrationIfPossible;
- (void)useCABLEButtonPressed;

@end
