@class NSString, _ASCredentialAuthenticationViewController;

@interface _ASConditionalRegistrationRequester : NSObject <_ASCredentialAuthenticationViewControllerDelegate, WBSConditionalRegistrationRequester> {
    id /* block */ _registrationHandler;
    _ASCredentialAuthenticationViewController *_credentialProviderViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)credentialAuthenticationViewController:(id)a0 didFinishWithPasskeyRegistrationCredential:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)a0;
- (void)requestAutomaticPasskeyUpgradeWithLoginChoice:(id)a0 completionHandler:(id /* block */)a1;

@end
