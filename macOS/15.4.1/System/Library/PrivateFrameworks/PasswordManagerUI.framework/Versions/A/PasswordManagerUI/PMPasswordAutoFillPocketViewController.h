@class LAContext, _TtC17PasswordManagerUI39_PMPasswordAutoFillPocketViewController;

@interface PMPasswordAutoFillPocketViewController : NSViewController {
    _TtC17PasswordManagerUI39_PMPasswordAutoFillPocketViewController *_controller;
}

@property (retain, nonatomic) LAContext *authenticatedContext;

- (void).cxx_destruct;
- (void)loadView;
- (id)initWithPersona:(long long)a0 appID:(id)a1 credentialTypes:(long long)a2 serviceNameHintStrings:(id)a3 domainNameHintStrings:(id)a4 bypassLockoutPolicy:(BOOL)a5 savedAccountStore:(id)a6 autoFillQuirksManager:(id)a7 shouldShowAutoFillPasskeys:(BOOL)a8 currentWebFrameIdentifierForAutoFillPasskeys:(id)a9 connectedAppAuditToken:(struct { unsigned int x0[8]; })a10 isConnectedAppAWebBrowser:(BOOL)a11 initialSearchQuery:(id)a12 shouldAllowAddingNewPasswords:(BOOL)a13 suggestedDomainForNewAccount:(id)a14 suggestedLabelForNewAccount:(id)a15 bundleIDForFallbackIconForNewAccount:(id)a16 authenticatedContext:(id)a17 savedAccountContext:(id)a18 didSelectAccountHandler:(id /* block */)a19 didSelectTextToInsertHandler:(id /* block */)a20;
- (void)updateHintStringsWithServiceNameHintStrings:(id)a0 domainNameHintStrings:(id)a1 suggestedDomainForNewAccount:(id)a2;

@end
