@class ASNavigationController, NSString, ASCAuthorizationPresentationContext, SFWirelessSettingsController, NSObject;
@protocol ASCredentialPickerViewControllerProtocol, OS_os_activity, ASAuthorizationViewControllerDelegate;

@interface PMAuthorizationViewController : NSViewController <ASCredentialRequestPaneViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate> {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASNavigationController *_navigationController;
    NSObject<OS_os_activity> *_authorizationActivity;
    SFWirelessSettingsController *_wirelessSettingsController;
    BOOL _biometricsEnabled;
    BOOL _includePasskeySymbolInTitleView;
    BOOL _hasInternalAndExternalPasskeyLoginChoices;
    id<ASCredentialPickerViewControllerProtocol> _conditionalRegistrationViewController;
}

@property (weak, nonatomic) id<ASAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)a0;
- (id)navigationController;
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (id)initWithPresentationContext:(id)a0 activity:(id)a1;
- (void)passwordAuthenticationViewController:(id)a0 completedWithUserEnteredPIN:(id)a1;
- (void)presentNewPINEntryInterface;
- (void)presentPINEntryInterface;
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)a0 overrideUserVisibleErrorMessage:(id)a1;
- (void)requestPaneViewController:(id)a0 didRequestCredentialForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestPaneViewController:(id)a0 dismissWithCredential:(id)a1 error:(id)a2;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (id)_cableClientViewControllerWithLoginChoice:(id)a0;
- (void)_enableBluetoothAndShowCABLEClientViewControllerWithLoginChoice:(id)a0;
- (id)_initialViewControllerForPresentationContext:(id)a0;
- (void)_presentNewPINEntryInterface;
- (void)_pushCABLEAuthenticatingViewController;
- (void)_pushCABLEConnectingViewController;
- (void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)a0 overrideTitle:(id)a1;
- (id)_securityKeyRequestViewController;
- (void)_setNavigationControllerTitleView;
- (id)_setUpInitialViewController;
- (void)_showEnableBluetoothViewControllerForCABLEClientWithLoginChoice:(id)a0;
- (void)_startCABLEClientWithLoginChoice:(id)a0;
- (id)_initialViewControllerForPresentationContext:(id)a0 expandingOtherLoginChoices:(BOOL)a1;
- (void)_presentManualPasswordEntryInterface;
- (void)_presentPINEntryInterface;
- (void)_pushActivateSecurityKeyAgainViewController;
- (void)_pushCABLEClientViewControllerForCABLELoginChoice:(id)a0;
- (void)_pushSecurityKeyViewController;
- (void)_replaceRequestPaneViewControllerWithExpandedLoginChoiceList:(BOOL)a0;
- (id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)a0 overrideTitle:(id)a1;
- (id)_setUpContainerViewControllerWithCredentialRequestViewController:(id)a0;
- (BOOL)_shouldPresentCABLEAsInitialViewControllerForRequestTypes:(unsigned long long)a0 shouldAllowSecurityKeysFromCABLEView:(BOOL)a1;
- (void)_startCABLEClientForSingleLoginChoiceIfNeeded;
- (void)_updateOrPushPlatformKeyViewControllerWithSubtitle:(id)a0;
- (void)passwordAuthenticationViewController:(id)a0 completedWithManuallyEnteredPasswordCredential:(id)a1;
- (void)performConditionalRegistrationIfPossible;
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)a0;
- (void)requestPaneViewControllerNeedsReload:(id)a0;
- (void)requestPaneViewControllerPresentExpandedLoginChoiceInterface:(id)a0;
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(id)a0;
- (void)requestPaneViewControllerRequiresNewPINEntryInterface:(id)a0;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(id)a0;

@end
