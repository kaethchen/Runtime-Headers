@class NSString, WebBookmarksXPCConnection;
@protocol WBSExtensionsImporterDelegate, WBSCreditCardImporterDelegate;

@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate> {
    WebBookmarksXPCConnection *_connection;
}

@property (weak, nonatomic) id<WBSCreditCardImporterDelegate> creditCardImporterDelegate;
@property (weak, nonatomic) id<WBSExtensionsImporterDelegate> extensionsImporterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_setupConnection;
- (void)scanImportURLs:(id)a0 sandboxExtensions:(id)a1 completionHandler:(id /* block */)a2;
- (void)connection:(id)a0 didCloseWithError:(id)a1;
- (void)_enableExtensionWithMessage:(id)a0 connection:(id)a1;
- (void)_finishedImportingCreditCardsWithMessage:(id)a0 connection:(id)a1;
- (void)_finishedImportingExtensionsWithMessage:(id)a0 connection:(id)a1;
- (void)_saveCreditCardWithMessage:(id)a0 connection:(id)a1;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 profileIdentifiers:(id)a2 options:(long long)a3 clearAllSpotlightHistoryForProfile:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)computeNumberOfItemsToBeImportedFromURL:(id)a0 exportMetadataDataType:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteAllSafariSecurityOriginsForProfileWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteSafariPersistentURLCacheStorageWithCompletionHandler:(id /* block */)a0;
- (void)deleteSafariWebsiteDataRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)exportBookmarksToURL:(id)a0 sandboxExtension:(id)a1 completionHandler:(id /* block */)a2;
- (void)exportSafariHistoryToURL:(id)a0 sandboxExtension:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getSafariDataUsageByteCountWithCompletionHandler:(id /* block */)a0;
- (void)getSafariWebDataUsageWithCompletion:(id /* block */)a0;
- (void)importBookmarksFromURL:(id)a0 inFolderWithSuggestedName:(id)a1 completionHandler:(id /* block */)a2;
- (void)importChromeExtensionsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)importChromeHistoryFromURL:(id)a0 ageLimit:(double)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)importCreditCardsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)importExtensionsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)importSafariHistoryFromURL:(id)a0 ageLimit:(double)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)numberOfHistorySitesToBeExportedWithProfileIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)scheduleBookmarksDatabaseMaintenance;
- (void)scheduleBookmarksDatabaseMigrationTask;
- (void)scheduleHSTSSuperCookieCleanup;
- (void)schedulePasswordIconsCleanup;

@end
