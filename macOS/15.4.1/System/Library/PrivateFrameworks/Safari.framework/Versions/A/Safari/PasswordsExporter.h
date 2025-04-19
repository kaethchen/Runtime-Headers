@class AuthorizationRequest;

@interface PasswordsExporter : NSObject {
    AuthorizationRequest *_authorizationRequest;
}

- (void).cxx_destruct;
- (void)cancelExportAuthorizationRequestIfNecessary;
- (void)exportPasswordsAttachedToWindow:(id)a0;
- (void)exportPasswordsForAccounts:(id)a0 attachedToWindow:(id)a1;
- (void)exportPasswords;
- (void)_authenticateAndExportSavedAccounts:(id)a0 fromSavePanel:(id)a1;
- (void)_showSavePanel;
- (void)_showSavePanelForSavedAccounts:(id)a0 attachedToWindow:(id)a1;

@end
