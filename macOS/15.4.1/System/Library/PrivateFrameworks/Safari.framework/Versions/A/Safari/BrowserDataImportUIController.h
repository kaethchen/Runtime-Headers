@class BrowserDataImportConflictsPanelController, NSXPCConnection, NSMenu, NSMenuItem, AuthorizationRequest;

@interface BrowserDataImportUIController : NSObject {
    NSMenu *_fileMenu;
    NSMenuItem *_importFromSeparatorMenuItem;
    NSMenuItem *_bookmarksHTMLFileMenuItem;
    BOOL _didGenerateBrowserMenuItems;
    BOOL _isCheckingForImportableData;
    BrowserDataImportConflictsPanelController *_importConflictsPanelController;
    NSMenuItem *_importFromBrowserMenuItem;
    AuthorizationRequest *_authorizationRequestImportBrowsingData;
    NSMenuItem *_passwordsCSVFileMenuItem;
    NSXPCConnection *_connectionToCredentialExtractionService;
    AuthorizationRequest *_authorizationRequest;
}

@property (readonly, nonatomic) NSMenuItem *importFromMenuItem;

+ (void)_displayAlertForFailedFileImportWithGenericFailureMessage:(BOOL)a0;
+ (void)_displayImportSuccessAlertAndAlertToDeleteBrowsingDataFiles:(id)a0 withImportedItems:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancelImportAuthorizationRequestIfNecessary;
- (void)chooseFileToImportPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)importPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_canCurrentlyImport;
- (void)_chooseFileToImportPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)_dataImportingDidUpdateNotification:(id)a0;
- (void)_didUpdateMenuItemsAfterDataDirectoryInspectionFromDataTypes:(unsigned long long)a0 withBrowserBundleURL:(id)a1;
- (void)_displayConflictResolutionAlertWithSuccessText:(id)a0 passwordsConflictData:(id)a1 extensionsConflictData:(id)a2;
- (void)_importBrowsingDataFromURLs:(id)a0;
- (void)_importFromFile:(id)a0;
- (void)_importFromFileURL:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (void)_importPasswordsFromCSV:(id)a0;
- (void)_importPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)_refreshBrowserMenuItems:(id)a0;
- (void)importFromBrowser:(id)a0;
- (void)importPasswordsFromCSV;
- (id)initWithImportFromMenuItem:(id)a0 fileMenu:(id)a1;
- (void)updateItemsInMenu:(id)a0;
- (BOOL)validate_importFromBrowser:(id)a0;

@end
