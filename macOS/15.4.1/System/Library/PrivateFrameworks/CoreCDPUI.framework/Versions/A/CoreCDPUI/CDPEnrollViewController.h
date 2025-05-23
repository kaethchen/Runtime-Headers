@class CDPUIEDPRecoveryTokenFlowCoordinator, NSDictionary, CDPRPDConfirmationFlow, CDPDevice, NSButton, MMPinFieldView, CDPQuotaStoragePresenter, NSMutableArray, NSString, IASPickerViewController, CDPRemoteDeviceSecretValidator, NSArray, NSTextField, CDPContext, NSSecureTextField, NSWindow, NSLayoutConstraint, NSView, NSImage, NSProgressIndicator, NSNumber;
@protocol CDPRPDLedger;

@interface CDPEnrollViewController : NSViewController <MMPinFieldViewDelegate, CDPUIEDPRecoveryTokenFlowCoordinatorDelegate, CDPQuotaScreenUIHandlerCapable>

@property BOOL localUserPassword;
@property (retain) NSView *pinContainerView;
@property (retain) NSTextField *instructionLabel;
@property (retain) NSTextField *instructionMessageLabel;
@property (retain) NSTextField *errorLabel;
@property (retain) NSSecureTextField *passwordField;
@property (retain) NSTextField *randomPasswordField;
@property (retain) NSTextField *waitingForApprovalLabel;
@property (retain) NSProgressIndicator *progressIndicator;
@property (retain) NSProgressIndicator *waitingForApprovalProgressIndicator;
@property (retain) NSButton *backButton;
@property (retain) NSButton *nextButton;
@property (retain) NSButton *alternateButton;
@property (retain) NSWindow *sheet;
@property (retain) NSLayoutConstraint *widthOfPinViewConstraint;
@property (retain) NSLayoutConstraint *errorConstraint;
@property (weak) NSLayoutConstraint *alternateButtonTopConstraint;
@property (weak) NSLayoutConstraint *stackViewTopConstraint;
@property (weak) NSLayoutConstraint *progressIndicatorConstraint;
@property (readonly) NSNumber *defaultCode;
@property (readonly) NSNumber *enteredPin;
@property (readonly) CDPQuotaStoragePresenter *quotaStorageViewPresenter;
@property (setter=setCodeEditable:) BOOL isCodeEditable;
@property (retain) NSArray *shownDevices;
@property NSView *devicePickerPlaceholderView;
@property (retain) IASPickerViewController *devicePickerController;
@property (retain) CDPDevice *selectedDevice;
@property (retain, nonatomic) NSView *subflowContainerView;
@property (retain, nonatomic) NSDictionary *subflowRestorationState;
@property (retain, nonatomic) CDPUIEDPRecoveryTokenFlowCoordinator *edpRecoveryTokenCoordinator;
@property unsigned long long attemptNumber;
@property (retain, nonatomic) CDPRPDConfirmationFlow *rpdConfirmationFlow;
@property (retain) MMPinFieldView *pinView;
@property (retain) NSString *code;
@property (retain) NSButton *iOSSelectionButton;
@property (retain) NSButton *macOSSelectionButton;
@property (readonly, copy) NSString *custodianRecoverySession;
@property (copy, nonatomic) id /* block */ remoteApprovalCompletion;
@property (setter=setHasReachedAttemptLimit:) BOOL hasReachedAttemptLimit;
@property BOOL shouldShowPassword;
@property BOOL promptForICSC;
@property BOOL isNumeric;
@property BOOL isRandom;
@property BOOL offeringRemoteApproval;
@property BOOL offeringToUseRecoveryKey;
@property BOOL offeringToUseCustodianRecovery;
@property (nonatomic) BOOL offeringToUseEDPRecoveryToken;
@property (copy, nonatomic) id /* block */ cdpRecoverySuccessFromEDPContinuationHandler;
@property BOOL offeringToUseResetProtectedData;
@property BOOL makeSheetCritical;
@property BOOL shouldWaitForApproval;
@property BOOL isFollowup;
@property (nonatomic) BOOL isWalrusEnabled;
@property (nonatomic) BOOL rpdProbationDuration;
@property (nonatomic) unsigned long long viewBeforeSubflow;
@property (retain) NSWindow *hostWindow;
@property (retain) NSNumber *codeLength;
@property (retain) NSMutableArray *devices;
@property (retain) NSArray *cdpDevices;
@property (retain) CDPRemoteDeviceSecretValidator *remoteValidator;
@property (retain) CDPContext *cdpContext;
@property unsigned long long currentShownView;
@property unsigned long long previousShownView;
@property (retain) NSImage *displayImage;
@property (retain) id<CDPRPDLedger> rpdLedger;
@property (copy) id /* block */ backButtonAction;
@property (copy) id /* block */ nextButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (id)initWithMessage:(id)a0;
- (void)cdpContext:(id)a0 showResetCompletedAlertWithCompletion:(id /* block */)a1;
- (void)cdpContext:(id)a0 showResetFailedAlertWithUnderlyingError:(id)a1 completion:(id /* block */)a2;
- (void)setDefaultCode:(id)a0;
- (void)_codeEntered;
- (void)_hideError;
- (void)_resetPinView;
- (void)alternateButtonPressed:(id)a0;
- (void)makePinViewActive;
- (void)nextButtonPressed:(id)a0;
- (void)pinFieldViewTextDidChange:(id)a0;
- (void)pinFieldViewTextDidComplete:(id)a0;
- (void)setFocusToView;
- (void)showError:(id)a0;
- (void)showWaitingScreen;
- (id)_makeRemoteApprovalCompletedEventWithContext:(id)a0 didApprove:(BOOL)a1 error:(id)a2;
- (id)_makeRemoteApprovalStartedBreadCrumbEventWithContext:(id)a0;
- (void)sendRemoteApprovalCompletedEventWithContext:(id)a0 didApprove:(BOOL)a1 error:(id)a2;
- (void)sendRemoteApprovalStartedBreadCrumbEventWithContext:(id)a0;
- (void)handleRecoveryKeyDeviceAttemptsLimitReached:(id)a0 andValidatedDevice:(id)a1;
- (void)showFirstDevice;
- (id)_buildQuotaStorageViewPresenter;
- (id)_defaultButtonTitleDeviceAttemptsLimitReachedForRecoveryFactor:(unsigned long long)a0;
- (id)_deviceToDeviceEncryptionHelper;
- (void)hideAll;
- (void)showCustodianInstructionsForOS:(unsigned long long)a0;
- (id)_alternateButtonTitleDeviceAttemptsLimitReachedForRecoveryFactor:(unsigned long long)a0;
- (void)_beginSubflowWithFirstView:(id)a0 flowNumber:(unsigned long long)a1;
- (BOOL)_canShowRPDOption;
- (void)_clearDevicePickerPlaceHolderView;
- (void)_confirmSkipCustodianRecovery;
- (void)_confirmSkipRecoveryKey;
- (void)_fetchCustodianRecoveryInfoWithCompletion:(id /* block */)a0;
- (void)_handleCustodianChoiceFromReturnCode:(long long)a0 shouldReset:(BOOL)a1;
- (void)_handleSkipRecoveryKeyChoiceFromReturnCode:(long long)a0 resetEligible:(BOOL)a1;
- (void)_initiateCustodianRecoverySessionWithCompletion:(id /* block */)a0;
- (id)_makeEventWithName:(id)a0;
- (id)_makeLandingEvent:(id)a0 withOptions:(id)a1;
- (id)_makeOfferPresentedEvent:(id)a0;
- (id)_makeOfferSelectedEvent:(id)a0;
- (id)_makeRemoteSecretInputEventWithOffer:(id)a0;
- (id)_messageDeviceAttemptsLimitReachedForRecoveryFactor:(unsigned long long)a0;
- (void)_onMainQueuePerform:(id /* block */)a0;
- (void)_performRPD;
- (void)_presentAlertWithTitle:(id)a0 message:(id)a1 defaultButtonText:(id)a2 alternateButtonText:(id)a3 otherButtonText:(id)a4 returnHandler:(id /* block */)a5;
- (void)_removeSubflow;
- (void)_resetConfirmationAlert;
- (BOOL)_resetEligible;
- (id)_sendHandleSkipRecoveryKeyPresentedEventWithResetEligible:(BOOL)a0;
- (void)_setSelectedDevice:(id)a0;
- (void)_showCurrentScreenAgain;
- (void)_showDeviceSelectionScreen;
- (void)_showInitialOptionScreen;
- (void)_showLocalPasswordScreen;
- (void)_showSkipiCSCAlertWithTitle:(id)a0 message:(id)a1 skipOption:(id)a2 cancelOption:(id)a3 tryOtherDeviceOption:(id)a4;
- (void)_showStorageAppListViewWithExtraChecks:(BOOL)a0;
- (void)_startNativeRPDFlow;
- (void)_startRPDConfirmationFlow;
- (BOOL)_supportsEscapeOfferSkip;
- (id)_titleDeviceAttemptsLimitReachedForDevice:(id)a0;
- (void)_trySettingPasswordAndResetCDP;
- (void)_updateSubflowToShowView:(id)a0;
- (void)_validateCustodianRecoveryCodeWithCompletion:(id /* block */)a0;
- (void)backButtonPressed:(id)a0;
- (void)beginEDPRecoveryTokenFlowAfterFailedCDPRecovery:(BOOL)a0 showCancel:(BOOL)a1;
- (void)cancelPressedOnQuotaScreenWithPresentationSource:(unsigned long long)a0;
- (void)cantApproveFromAnotherDeviceButtonPressed:(id)a0;
- (void)cdpRequestApprovalButtonPressed:(id)a0;
- (void)clearSecretField;
- (void)dismissRemoteApprovalFlowWithAction:(unsigned long long)a0;
- (void)displayError:(id)a0;
- (void)handleAlernateButtonInICSCScreen;
- (void)handleAlternateButtonPressed;
- (void)handleAlternateButtonPressedAccountRecovery;
- (void)handleCustodianRecoveryDeviceAttemptsLimitReached:(id)a0 andValidatedDevice:(id)a1;
- (void)handleDeviceAttemptsLimitReached:(id)a0 andValidatedDevice:(id)a1;
- (void)handleDeviceSelectionDeviceAttemptsLimitReached:(id)a0 andValidatedDevice:(id)a1;
- (void)handleForgot;
- (void)handleForgotAccountRecovery;
- (void)handleForgotSOSOnlyMode;
- (void)handleForgotSOSOnlyModeinICSCScreen;
- (void)handleOSPickerButtonSelected:(id)a0;
- (void)handleSkipRecoveryKey;
- (void)handleSkipiCSCButtonForCustodian;
- (void)hardLimitShowRecoveryUsingRecoveryKey;
- (void)hideMainUIElements:(BOOL)a0;
- (void)hideVariableUIElements;
- (void)makePasswordActive;
- (void)makeRandomPasswordActive;
- (void)recoveryTokenFlowCoordinator:(id)a0 didRequestUpdatedView:(id)a1;
- (void)recoveryTokenFlowCoordinatorDidSelectAccessDataLater:(id)a0;
- (void)recoveryTokenFlowCoordinatorDidSelectBack:(id)a0;
- (void)recoveryTokenFlowCoordinatorDidSelectCancel:(id)a0;
- (void)recoveryTokenFlowCoordinatorDidSelectResetProtectedData:(id)a0;
- (void)recoveryTokenFlowCoordinatorDidSuccessfullyFinish:(id)a0;
- (void)removeDeviceFromList:(id)a0;
- (void)resetConfirmationWithExtraChecks:(BOOL)a0;
- (void)setEnabledForCancel:(BOOL)a0;
- (void)showCustodianCodeEntry;
- (void)showCustodianOSPicker;
- (void)showDevicePickerView:(BOOL)a0;
- (void)showICSCWaitingScreen;
- (void)showIncorrectRemoteSecretAlertForPasscode:(id)a0 withRecoveryError:(id)a1 andCDPDevice:(id)a2 completion:(id /* block */)a3;
- (void)showPromptForICSC;
- (void)showRKRecovery;
- (void)showRecoveryUsingRecoveryKey;
- (void)showSelectedDeviceVerification;
- (void)skipiCSCCantApprove;
- (void)skipiCSCEnterSecretLaterFromDeviceScreen;
- (void)skipiCSCEnterSecretLaterFromDeviceSelectionScreen;
- (BOOL)supportsCustodianRecovery;
- (BOOL)supportsRecoveryKeyRecovery;
- (void)validateSecret:(id)a0 devices:(id)a1 type:(unsigned long long)a2;

@end
