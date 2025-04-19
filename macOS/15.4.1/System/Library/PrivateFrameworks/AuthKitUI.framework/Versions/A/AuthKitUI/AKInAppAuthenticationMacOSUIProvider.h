@class AKAuthenticationPromptController, NSString, ASWebAuthenticationSession, AKAppleIDAuthenticationInAppContext;

@interface AKInAppAuthenticationMacOSUIProvider : NSObject <ASWebAuthenticationPresentationContextProviding, AKIDPHandlerDelegate, AKInAppAuthenticationUIProvider> {
    AKAppleIDAuthenticationInAppContext *_context;
    AKAppleIDAuthenticationInAppContext *_largePromptSheetContext;
    AKAuthenticationPromptController *_authenticationPrompt;
    int _numberOfAttempts;
    ASWebAuthenticationSession *_webAuthenticationSession;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)activateProximitySession:(id)a0 completion:(id /* block */)a1;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)a0;
- (void)dismissNativeRecoveryUIWithCompletion:(id /* block */)a0;
- (void)dismissProximityPairingUIWithCompletion:(id /* block */)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
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
- (id)IDPHandler:(id)a0 sanitizeError:(id)a1;
- (void)_setupAuthenticationPromptControllerAtMode:(long long)a0;
- (void)_updateButtonActionForSignInPrompt:(id)a0 withLoginCompletion:(id /* block */)a1;
- (void)_updateUI:(id /* block */)a0;
- (void)dismissCDPUI;
- (void)presentCDPView:(id)a0 withContext:(id)a1 modalForWindow:(id)a2 withController:(id)a3;
- (void)presentIDPProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)presentTooManyLoginAttemptsViewWithCompletion:(id /* block */)a0;
- (id)presentationAnchorForWebAuthenticationSession:(id)a0;

@end
