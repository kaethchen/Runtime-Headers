@class CNContactPicker, NSDictionary, AOSUIOBBaseViewController, ACAccount, AOSUIContactsProvider, NSMutableArray, iCloudAccountDetailsWebTabView, NSString, AOSUIAccountContactsSharingController, AALocalContactInfo, AABeneficiaryInfo, NSWindow, AKBiometricRatchetController, AACustodianController, NSUUID;
@protocol AOSUIAccountContactSetupFlowControllerDelegate;

@interface AOSUIAccountContactSetupFlowController : NSObject <AOSUIOBBaseViewControllerDelegate, AOSUIAccountContactSelectorDelegate, AOSUIBeneficiaryRadioListViewSelectorDelegate, CNContactPickerDelegate, iCloudWebViewDelegate> {
    ACAccount *_appleAccount;
    NSWindow *_modalWindow;
    unsigned long long _requestedFlow;
    AOSUIOBBaseViewController *baseViewController;
    unsigned long long currentSetupStep;
    AOSUIContactsProvider *_contactsProvider;
    NSDictionary *_authResults;
    AALocalContactInfo *_selectedContact;
    AABeneficiaryInfo *_selectedBeneficiary;
    AACustodianController *_custodianController;
    NSUUID *_custodianshipID;
    NSMutableArray *_suggestedContacts;
    CNContactPicker *contactPicker;
    unsigned long long _currentRadioListSelection;
    AOSUIAccountContactsSharingController *_sharingController;
    id /* block */ _dismref;
    iCloudAccountDetailsWebTabView *_webView;
    AKBiometricRatchetController *_bioRatchetController;
}

@property (retain, nonatomic) NSWindow *hostWindow;
@property (weak, nonatomic) id<AOSUIAccountContactSetupFlowControllerDelegate> delegate;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (nonatomic) BOOL isWalrusEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endWebView:(id)a0;
- (void)resizeModalSheet:(struct CGSize { double x0; double x1; })a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)_stopObservingWalrusStateChangeNotification;
- (void)printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(void *)a2;
- (void)contactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)contactPickerDidClose:(id)a0;
- (void)beginFlow;
- (id)initWithAccount:(id)a0 forFlow:(unsigned long long)a1;
- (void)loadFailed:(id)a0;
- (void)_secondButtonPressedInheritance;
- (void)_validateAccountWithCompletion:(id /* block */)a0;
- (void)_showInheritanceMessageTemplate;
- (void)_beginObservingWalrusStateChangeNotification;
- (id)_bioRatchetController;
- (void)_continueValidatingAccount;
- (void)_dismissWithReturnCode:(long long)a0;
- (void)_fetchSuggestedContactsWithCompletion:(id /* block */)a0;
- (void)_firstButtonPressedInheritance;
- (void)_firstButtonPressedTrustedContact;
- (void)_printAccessKeyDocument;
- (void)_processLinkButtonPressForSetupStep:(unsigned long long)a0;
- (void)_secondButtonPressedTrustedContact;
- (void)_sendDefaultiMessageToSelectedContact;
- (void)_sendDefaultiMessageWithContext:(id)a0;
- (void)_sendEscapeOfferSelectedEvent:(id)a0;
- (void)_sendInvitationToSelectedContact;
- (void)_sendTelemetryEvent:(id)a0 offers:(id)a1;
- (void)_setupBeneficiary;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)_showChoseHowToShare;
- (void)_showContactSelector:(id)a0;
- (void)_showCustodianAddNotAllowedAlert;
- (void)_showDeviceUpgradeUI;
- (void)_showEditMessageUI;
- (void)_showFirstTimeSetup;
- (void)_showICDRSUI;
- (void)_showICDRSUIWithWindow:(id)a0;
- (void)_showInheritanceEditMessageUI;
- (void)_showInheritanceSetupCompletedForAccessKeyShareType:(unsigned long long)a0;
- (void)_showMessageTemplate;
- (void)_showShareData;
- (void)_showTrustedContactEditMessageUI;
- (void)_showTrustedContactMessageTemplate;
- (void)_showTrustedContactSetupCompleted;
- (void)_validateAccount;
- (void)_validateTrustedContactIsMessageable;
- (void)_verifyCDPWithCompletion:(id /* block */)a0;
- (void)_walrusStateChanged;
- (void)addTrustedContactButtonPressed;
- (void)beginDataRecoveryServiceFlowInWindow:(id)a0;
- (void)beginPrefPaneAction;
- (void)contactSelected:(id)a0;
- (void)currentSelection:(unsigned long long)a0;
- (void)firstButtonPressed;
- (void)linkButtonPressed;
- (void)secondButtonPressed;
- (void)showContactPickerRelativeToItem:(id)a0;

@end
