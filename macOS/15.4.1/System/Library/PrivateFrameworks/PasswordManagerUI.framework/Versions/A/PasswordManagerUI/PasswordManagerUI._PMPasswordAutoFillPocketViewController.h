@interface PasswordManagerUI._PMPasswordAutoFillPocketViewController : NSViewController {
    void /* unknown type, empty encoding */ persona;
    void /* unknown type, empty encoding */ bypassLockoutPolicy;
    void /* unknown type, empty encoding */ savedAccountStore;
    void /* unknown type, empty encoding */ autoFillQuirksManager;
    void /* unknown type, empty encoding */ didSelectAccountHandler;
    void /* unknown type, empty encoding */ didSelectTextToInsertHandler;
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ pickerModel;
    void /* unknown type, empty encoding */ model;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (id)authenticatedContext;
- (void)setAuthenticatedContext:(id)a0;
- (void)updateHintStringsWithServiceNameHintStrings:(id)a0 domainNameHintStrings:(id)a1 suggestedDomainForNewAccount:(id)a2;
- (id)initWithPersona:(long long)a0 appID:(id)a1 credentialTypes:(long long)a2 serviceNameHintStrings:(id)a3 domainNameHintStrings:(id)a4 savedAccountStore:(id)a5 suggestedDomainForNewAccount:(id)a6 suggestedLabelForNewAccount:(id)a7 bundleIDForFallbackIconForNewAccount:(id)a8 autoFillQuirksManager:(id)a9 shouldShowAutoFillPasskeys:(BOOL)a10 currentWebFrameIdentifierForAutoFillPasskeys:(id)a11 connectedAppAuditToken:(struct { unsigned int x0[8]; })a12 isConnectedAppAWebBrowser:(BOOL)a13 initialSearchQuery:(id)a14 shouldAllowAddingNewPasswords:(BOOL)a15 bypassLockoutPolicy:(BOOL)a16 authenticatedContext:(id)a17 savedAccountContext:(id)a18 didSelectAccountHandler:(id /* block */)a19 didSelectTextToInsertHandler:(id /* block */)a20;

@end
