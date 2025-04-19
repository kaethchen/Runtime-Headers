@class BrowserDataImportUIController, PasswordsExporter;

@interface _ASPasswordManagerMacFrameworksTrampoline : NSObject {
    PasswordsExporter *_passwordsExporter;
    BrowserDataImportUIController *_passwordsImporter;
}

+ (void)authenticateForSharingSavedAccountUsingAirDrop:(id)a0 withSheetFromWindow:(id)a1 completionHandler:(id /* block */)a2;

- (void).cxx_destruct;
- (id)_passwordsExporter;
- (id)_passwordsImporter;
- (void)cancelExportAuthorizationRequestIfNecessary;
- (void)cancelImportAuthorizationRequestIfNecessary;
- (void)chooseFileToImportPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)exportPasswordsAttachedToWindow:(id)a0;
- (void)exportPasswordsForAccounts:(id)a0 attachedToWindow:(id)a1;
- (void)importPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
