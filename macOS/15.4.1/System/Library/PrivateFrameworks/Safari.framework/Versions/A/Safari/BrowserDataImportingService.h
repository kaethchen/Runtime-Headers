@class NSString;

@interface BrowserDataImportingService : WBSBrowsingDataImportService <BrowserDataImportingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exit;
- (void)_createImporterWithBrowserDataDirectories:(id)a0 importEngineClass:(Class)a1 replyBlock:(id /* block */)a2;
- (void)createBookmarkImporterWithBrowserDataDirectories:(id)a0 reply:(id /* block */)a1;
- (void)createCredentialImporterWithBrowserDataDirectories:(id)a0 reply:(id /* block */)a1;
- (void)createHistoryImporterWithBrowserDataDirectories:(id)a0 reply:(id /* block */)a1;

@end
