@class AKNativeAccountRecoveryController, NSString, NSView, NSImage, NSWindow;
@protocol AKAppleIDAuthenticationInAppContextAlertDelegate, CDPStateUIProvider, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKInAppAuthenticationUIProvider;

@interface AKAppleIDAuthenticationInAppContext : AKAppleIDAuthenticationContext <AKAppleIDAuthenticationUIProvider> {
    AKNativeAccountRecoveryController *_nativeRecoveryController;
}

@property (weak, nonatomic) id<AKAppleIDAuthenticationInAppContextAlertDelegate> alertDelegate;
@property (retain, nonatomic) id<AKInAppAuthenticationUIProvider> inAppAuthUIProvider;
@property (retain, nonatomic, setter=_setCdpUiProvider:) id<CDPStateUIProvider> cdpUiProvider;
@property (weak, nonatomic, setter=_setPasswordDelegate:) id<AKAppleIDAuthenticationInAppContextPasswordDelegate> _passwordDelegate;
@property (copy, nonatomic) id /* block */ prepareRUIController;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) NSView *hostView;
@property (nonatomic) BOOL makeSheetCritical;
@property (nonatomic) BOOL showRememberPasswordCheckbox;
@property (retain, nonatomic) NSString *rememberPasswordCheckboxString;
@property (nonatomic) BOOL rememberPassswordCheckedByDefault;
@property (nonatomic) BOOL shouldPreventSignIn;
@property (nonatomic) long long selectedButton;
@property (retain, nonatomic) NSImage *displayImage;
@property (retain, nonatomic) NSString *initialError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)activateProximitySession:(id)a0 completion:(id /* block */)a1;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)a0;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)a0;
- (void)dismissProximityPairingUIWithCompletion:(id /* block */)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)endCDPView;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentFidoAuthForContext:(id)a0 fidoContext:(id)a1 completion:(id /* block */)a2;
- (void)presentKeepUsingUIForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentNativeRecoveryUIWithContext:(id)a0 completion:(id /* block */)a1;
- (void)presentProximityBroadcastUIWithCompletion:(id /* block */)a0;
- (void)presentProximityPairingUIWithVerificationCode:(id)a0 completion:(id /* block */)a1;
- (void)presentProximityPinCodeUIWithCompletion:(id /* block */)a0;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)showProximityErrorWithCompletion:(id /* block */)a0;
- (void)_assertValidPresentingViewController;
- (void)_contextDidEndPresentingSecondaryUI;
- (void)_contextWillBeginPresentingSecondaryUIWithCompletion:(id /* block */)a0;
- (void)_dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)_presentTooManyLoginAttemptsViewWithCompletion:(id /* block */)a0;
- (void)showCDPView:(id)a0 modalForWindow:(id)a1 withController:(id)a2;

@end
