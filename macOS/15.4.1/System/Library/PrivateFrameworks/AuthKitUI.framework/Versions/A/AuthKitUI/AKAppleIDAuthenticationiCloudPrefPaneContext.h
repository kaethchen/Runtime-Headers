@class AKAuthWebTabView, NSString, AKAppleIDAuthenticationPrefPaneLogoContainerViewController, AKAppleIDAuthenticationiCloudPrefPaneViewController, AKAppleIDAuthenticationiCloudPrefPaneSecondFactorViewController;

@interface AKAppleIDAuthenticationiCloudPrefPaneContext : AKAppleIDAuthenticationInAppContext <AuthWebViewDelegate>

@property (retain, nonatomic) AKAuthWebTabView *webviewController;
@property (retain, nonatomic) AKAppleIDAuthenticationPrefPaneLogoContainerViewController *logoContainerViewController;
@property (nonatomic) BOOL isCreateEnabled;
@property (retain, nonatomic) AKAppleIDAuthenticationiCloudPrefPaneViewController *prefPaneSignInViewController;
@property (retain, nonatomic) AKAppleIDAuthenticationiCloudPrefPaneSecondFactorViewController *prefPaneSignInViewSecondFactorController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)hostWindow;
- (BOOL)_shouldSkipInitialReachabilityCheck;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)dismissKeepUsingUIWithCompletion:(id /* block */)a0;
- (void)dismissSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)dismissServerProvidedUIWithCompletion:(id /* block */)a0;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)a0;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentKeepUsingUIForAppleID:(id)a0 completion:(id /* block */)a1;
- (void)presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)presentSecondFactorUIWithCompletion:(id /* block */)a0;
- (void)presentServerProvidedUIWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_presentLoginAlertWithError:(id)a0 title:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)_setupEscapeOffersWithCompletion:(id /* block */)a0;
- (void)_setupLoginActionWithCompletion:(id /* block */)a0;
- (void)closeWebViewAndCleanUp:(id)a0 andError:(id)a1;
- (void)endWebView:(id)a0;
- (void)loadFailed:(id)a0 withError:(id)a1;
- (void)presentServerUIErrorAlertWithTitle:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldShowInlineLogoContainerView;
- (BOOL)showInline:(id)a0;
- (void)sizeChangedFrom:(struct CGSize { double x0; double x1; })a0 toSize:(struct CGSize { double x0; double x1; })a1 webViewName:(id)a2 callback:(id)a3;
- (void)skipAndContinueSignIn;
- (void)switchToView:(id)a0;

@end
