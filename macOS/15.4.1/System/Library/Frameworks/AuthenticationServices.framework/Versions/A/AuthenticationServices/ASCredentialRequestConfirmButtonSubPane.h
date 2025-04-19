@class NSView, NSString, NSTextField, NSData, NSStackView, LAUIAuthenticationView, ASCCredentialRequestTestOptions, NSObject, ASCredentialRequestPaneContext, ASCredentialRequestButton;
@protocol OS_dispatch_group, OS_os_activity, ASCredentialRequestSubPaneConfirmButtonDelegate;

@interface ASCredentialRequestConfirmButtonSubPane : ASCredentialRequestSubPane <LAUIAuthenticationDelegate> {
    NSStackView *_mainStackView;
    NSView *_containerView;
    BOOL _canPerformBiometricAuthentication;
    NSView *_authorizationButtonContainerView;
    LAUIAuthenticationView *_biometricsView;
    ASCredentialRequestPaneContext *_paneContext;
    NSObject<OS_os_activity> *_authorizationActivity;
    NSTextField *_biometricLabel;
    id /* block */ _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
    NSData *_auditTokenData;
}

@property (nonatomic, readonly) BOOL shouldOverrideLocalAuthenticationForTesting;
@property (nonatomic, readonly) BOOL isBiometricAuthenticationAvailable;
@property (copy, nonatomic) NSString *buttonText;
@property (readonly, nonatomic) ASCredentialRequestButton *authorizationButton;
@property (weak, nonatomic) id<ASCredentialRequestSubPaneConfirmButtonDelegate> delegate;
@property (nonatomic) BOOL authorizationCapabilityEnabled;
@property (readonly, nonatomic) ASCCredentialRequestTestOptions *testOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createMainStackView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_windowDidBecomeKey:(id)a0;
- (id)initWithActivity:(id)a0;
- (id)callerIconBundlePath;
- (id)localizedCallerName;
- (void)_waitForTimeInterval:(double)a0 withGroup:(id)a1;
- (void)_addArrangedSpaceToMainStackView:(double)a0;
- (unsigned long long)_authenticationMechanism;
- (void)_authorizationButtonBioSelected:(id)a0;
- (void)_enterProcessingStateWithCompletionHandler:(id /* block */)a0;
- (void)_initializeAuthorizationButton;
- (void)authenticationResult:(id)a0 error:(id)a1 context:(id)a2;
- (void)biometricNoMatch;
- (void)finishProcessingWithCompletionHandler:(id /* block */)a0;
- (void)invalidateProcessingState;
- (id)localizedAuthWatchPrompt;
- (void)processBiometricMatchWithCompletionHandler:(id /* block */)a0;
- (id)_setUpAlertImageWithConstraints;
- (void)_authorizationWithPasscodeOrPasswordButtonSelected:(id)a0;
- (void)_authorizeAppleAccountWithPasswordButtonSelected:(id)a0;
- (void)_continueButtonTapped;
- (void)_enableLAUIAuthenticationMechanism;
- (BOOL)_isDelegateReadyForAuthorization;
- (id)_passcodeOrPasswordButtonTitle;
- (id)_passwordAuthenticationButtonTitle;
- (void)_performPasscodeOrPasswordValidation:(id /* block */)a0;
- (void)_setupBiometricButtonWithConstraints:(id)a0;
- (void)_setupLabelWithTitle:(id)a0 animated:(BOOL)a1;
- (void)_switchToAppleAccountPassword;
- (void)_switchToBiometricsView:(BOOL)a0 withAuthenticationMechanismEnabled:(BOOL)a1 showAlert:(BOOL)a2 alertString:(id)a3;
- (void)_switchToPasscodeOrPassword;
- (void)_updateLabelAnimatedWithTitle:(id)a0;
- (id)_verticalSpacerWithConstant:(double)a0;
- (void)addToStackView:(id)a0 withCustomSpacingAfter:(double)a1 context:(id)a2;
- (void)biometricAuthenticationFailureWithAlertString:(id)a0;
- (void)disableBiometricView;
- (id)initWithActivity:(id)a0 auditTokenData:(id)a1 testOptions:(id)a2;
- (void)setUpButtonInPaneContext:(id)a0;
- (void)setUpButtonInPaneContext:(id)a0 buttonTitle:(id)a1;
- (void)showActivityIndicator;
- (void)showAlertContinuingWithPassword:(BOOL)a0;
- (void)showAuthenticationMechanismForExternalPasswordCredential;
- (void)showContinueButton;
- (void)showContinueButtonWithTitle:(id)a0;
- (void)showContinueWithPasswordButton;

@end
