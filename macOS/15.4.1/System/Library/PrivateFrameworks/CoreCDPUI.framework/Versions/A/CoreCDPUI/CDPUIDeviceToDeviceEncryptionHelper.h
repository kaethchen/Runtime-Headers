@class CDPUIDeviceToDeviceEncryptionFlowContext, AKAppleIDAuthenticationController, NSImage, NSWindow;
@protocol CDPLocalSecretFollowUpProvider, CDPUIDeviceToDeviceEncryptionHelperDelegate;

@interface CDPUIDeviceToDeviceEncryptionHelper : NSObject {
    AKAppleIDAuthenticationController *_authenticationController;
}

@property (retain, nonatomic) id<CDPLocalSecretFollowUpProvider> followUpProvider;
@property (weak) NSWindow *hostWindow;
@property (weak) NSImage *displayImage;
@property (weak, nonatomic) id<CDPUIDeviceToDeviceEncryptionHelperDelegate> delegate;
@property (readonly, nonatomic) CDPUIDeviceToDeviceEncryptionFlowContext *context;

+ (id)_newLegacyFlowContext;
+ (id)_newLegacyFlowContextForAltDSID:(id)a0;
+ (id)_newLegacyFlowContextWithContext:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)initWithWindow:(id)a0;
- (id)_hostWindow;
- (void)performDeviceToDeviceEncryptionStateRepairWithCompletion:(id /* block */)a0;
- (void)performDeviceToDeviceEncryptionStateRepairForContext:(id)a0 withCompletion:(id /* block */)a1;
- (id)_authenticationController;
- (BOOL)_hasLocalSecret;
- (id)_authenticationContextForFlowContext:(id)a0;
- (void)_beginUpgradeFlowWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_cdpErrorWithUnderlyingError:(id)a0;
- (void)_configureNavigationController;
- (void)_configurePresentingViewControllerForModalPresentation;
- (void)_continueAuthenticatedUpgradeFlowWithContext:(id)a0 authenticationResults:(id)a1 completion:(id /* block */)a2;
- (void)_continueUpgradeFlowWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_createLocalSecretForContext:(id)a0 completion:(id /* block */)a1;
- (void)_determineEscrowRepairUpgradeEligibilityForContext:(id)a0 completion:(id /* block */)a1;
- (void)_determineManateeUpgradeEligibilityForContext:(id)a0 completion:(id /* block */)a1;
- (void)_determineSecurityUpgradeEligibilityForContext:(id)a0 completion:(id /* block */)a1;
- (void)_determineUpgradeEligibilityForContext:(id)a0 completion:(id /* block */)a1;
- (void)_dismissNavigationControllerWithCompletion:(id /* block */)a0;
- (id)_displayImage;
- (BOOL)_hasManatee;
- (id)_inAppAuthenticationContextForFlowContext:(id)a0;
- (BOOL)_inCircle;
- (void)_legacyRequestPermissionToContinueFlowWithCompletion:(id /* block */)a0;
- (id)_newUpgradeUIProvider;
- (void)_performAuthenticatedRepairFlowWithContext:(id)a0 stateController:(id)a1 completion:(id /* block */)a2;
- (void)_postBiometricFollowUp;
- (void)_presentIneligibilityAlertForFlowContext:(id)a0 completion:(id /* block */)a1;
- (void)_presentSpinnerViewControllerWithCompletion:(id /* block */)a0;
- (id)_repairContextForFlowContext:(id)a0 withAuthenticationResults:(id)a1;
- (void)_requestPermissionToCreatePasscodeForFlowContext:(id)a0 completion:(id /* block */)a1;
- (id)_stateControllerForFlowContext:(id)a0 withAuthenticationResults:(id)a1;
- (id)_stateControllerWithRepairContext:(id)a0;
- (void)_validateLocalSecretForContext:(id)a0 withStateController:(id)a1 completion:(id /* block */)a2;

@end
