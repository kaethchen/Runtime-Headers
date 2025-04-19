@class NSString, NSSet, MMWebKitViewController, ACAccount;

@interface MMTermsOfServiceController : NSObject <MMWebKitViewControllerDelegate> {
    ACAccount *_account;
    id /* block */ _completion;
    BOOL _didRenewCredentials;
    NSSet *_requestedTermsEntries;
    NSString *_deviceOSVersion;
}

@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_setTermsInProgress:(BOOL)a0;

- (void).cxx_destruct;
- (id)_authContextForRenewCredentials;
- (BOOL)_isServerAuthenticationError:(id)a0;
- (void)_renewCredentialsWithCompletion:(id /* block */)a0;
- (void)closeTermsOfServiceDialog;
- (id)initWithAccount:(id)a0 password:(id)a1 authenticationResults:(id)a2;
- (id)initWithAccount:(id)a0 password:(id)a1 authenticationResults:(id)a2 termsEntries:(id)a3 deviceOSVersion:(id)a4;
- (void)mmWebKitViewControllerAgreedToTerms:(id)a0 termsInfo:(id)a1;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)showTermsOfServiceDialogForWindow:(id)a0 completion:(id /* block */)a1;

@end
