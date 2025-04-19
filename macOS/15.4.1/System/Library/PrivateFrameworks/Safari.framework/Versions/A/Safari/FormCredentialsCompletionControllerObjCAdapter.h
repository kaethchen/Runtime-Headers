@class WBSAuthenticationServicesAgentProxy, NSString, AutoFillLocalAuthenticationManager, _ASCredentialAuthenticationViewController, WBSGlobalFrameIdentifier, _ASConditionalRegistrationRequester, _ASCredentialListViewController;

@interface FormCredentialsCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter <SFCredentialProviderExtensionManagerObserver, _ASCredentialListViewControllerDelegate, _ASCredentialAuthenticationViewControllerDelegate> {
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
    _ASCredentialListViewController *_credentialListViewController;
    _ASCredentialAuthenticationViewController *_externalCredentialViewController;
    id /* block */ _externalCredentialCompletionHandler;
    BOOL _didPresentExternalCredentialViewController;
    BOOL _hasCredentialProviderExtension;
    WBSAuthenticationServicesAgentProxy *_authenticationServicesAgentProxy;
    WBSGlobalFrameIdentifier *_webFrameIdentifier;
    _ASConditionalRegistrationRequester *_conditionalRegistrationRequester;
}

@property (readonly, nonatomic) BOOL abortCompletionBlocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (id)_mainFrameURL;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialListViewController:(id)a0 didFinishWithCredential:(id)a1 completion:(id /* block */)a2;
- (void)credentialListViewController:(id)a0 didFinishWithPasskeyAssertionCredential:(id)a1 completion:(id /* block */)a2;
- (void)credentialListViewControllerDidPrepareInterface:(id)a0;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (BOOL)_disambiguateBetweenPasswordsAndPasskeys;
- (id)_firstExistingCellViewPassingTest:(id /* block */)a0;
- (void *)_formCredentialsCompletionController;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const void *)a0;
- (void)_registerCredentialAutoFillTableViewCellClasses;
- (void)completionWindowDidHide;
- (void)didRefreshCompletionListItems:(const void *)a0;
- (id)initWithCompletionController:(void *)a0;
- (void)newAutoFillablePasskeysAvailable:(id)a0;
- (void)performPasskeyAssertionUsingCredentialIdentity:(id)a0 requestParameters:(id)a1;
- (void)resolveCredentialIdentityMatch:(id)a0 completionHandler:(id /* block */)a1;
- (void)showCredentialListForExtension:(id)a0 completionHandler:(id /* block */)a1;
- (double)widthOfCellForItem:(void *)a0;

@end
