@class NSString, BrowserDataImportPasswordRequestPanelController;
@protocol BrowserCredentialImportEngine;

@interface BrowserCredentialImporter : BrowserDataImporter <BrowserCredentialImporterDelegate> {
    id<BrowserCredentialImportEngine> _importerProxy;
    BrowserDataImportPasswordRequestPanelController *_passwordRequestPanelController;
    BOOL _didRequestDecryptionKey;
    unsigned long long _numberOfSuccessfullyImportedCredentials;
    unsigned long long _numberOfConflictingCredentials;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_showKeychainPasswordRequest;
- (void)_showPasswordRequestPanelController;
- (void)importCredentialsUsingImporterProxy:(id)a0;
- (void)importerDidFailToImportCredentials;
- (void)importerDidFinishImportingCredentials;
- (void)importerDidImportCredential:(id)a0;
- (void)importerRequiresMasterPassword;
- (void)retryAfterObtainingDecryptionKey;

@end
