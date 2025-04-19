@class NSXPCConnection, NSString, BrowserHistoryImporter, NSURL, NSArray, BrowserCredentialImporter, NSCountedSet, NSMutableSet, BrowserBookmarkImporter, NSObject, NSBundle;
@protocol OS_dispatch_queue;

@interface BrowserDataImporterController : WBSBrowsingDataImportController <BrowserBookmarkImporterDelegate, WBSExtensionsImporterDelegate> {
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    unsigned long long _dataTypesBeingImported;
    unsigned long long _dataTypesThatSucceeded;
    unsigned long long _dataTypesThatFailed;
    BOOL _importHasBeenCanceled;
    unsigned long long _numberOfResumptionAttempts;
    NSBundle *_sourceBrowserBundle;
    unsigned long long _numberOfBookmarksImported;
    unsigned long long _numberOfCredentialsImported;
    unsigned long long _extensionsFilesBeingImported;
    NSMutableSet *_enabledExtensionsComposedIdentifiers;
    NSCountedSet *_availableAppsWithExtensions;
}

@property (class, readonly, nonatomic) BrowserDataImporterController *sharedController;

@property (retain, nonatomic) NSXPCConnection *browserDataImporterServiceConnection;
@property (retain, nonatomic) BrowserBookmarkImporter *bookmarkImporter;
@property (retain, nonatomic) BrowserHistoryImporter *historyImporter;
@property (retain, nonatomic) BrowserCredentialImporter *credentialImporter;
@property (readonly, nonatomic) BOOL canImportFromChrome;
@property (readonly, nonatomic) BOOL canImportFromFirefox;
@property (readonly, nonatomic) NSURL *chromeBundleURL;
@property (readonly, nonatomic) NSArray *firefoxBundleURLs;
@property (readonly, nonatomic) NSArray *browserBundleURLs;
@property (readonly, nonatomic) BOOL canResumeInterruptedImport;
@property (readonly, nonatomic) BOOL isImporting;
@property (retain, nonatomic) NSMutableSet *composedIdentifiersForLockupViewExtensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_resetState;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (void)_importBookmarksFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importChromeExtensionsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importChromeHistoryFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importCreditCardsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importExtensionsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importHistoryFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_scanImportURLs:(id)a0 sandboxExtensions:(id)a1 completionHandler:(id /* block */)a2;
- (void)enableExtensionWithComposedIdentifier:(id)a0 adamIdentifier:(id)a1 alternatePlatformAppBundleIdentifier:(id)a2 alternatePlatformExtensionBundleIdentifier:(id)a3;
- (id)_chromeApplicationBundle;
- (unsigned long long)_dataTypesRemainingToBeImportedOnAccessQueue;
- (void)_didCompleteImportingDataTypes:(unsigned long long)a0 success:(BOOL)a1 numberOfImportedItems:(long long)a2;
- (id)_existingBrowserDataImporterServiceConnection;
- (id)_failureLocalizedStringChrome;
- (id)_failureLocalizedStringFirefox;
- (void)_generateLockupViewsForAvailableAppsWithCompletionHandler:(id /* block */)a0;
- (void)_importBookmarksFromPlistAtURL:(id)a0 folderName:(id)a1 completionHandler:(id /* block */)a2;
- (void)_importDataTypes:(unsigned long long)a0 forBrowserDataDirectories:(id)a1;
- (BOOL)_importHasBeenCanceled;
- (BOOL)_importHasBeenCanceledOnAccessQueue;
- (void)_importHistoryFromURL:(id)a0 forChrome:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_invalidateBrowserDataImporterServiceConnectionIfPossible;
- (BOOL)_isImportingOnAccessQueue;
- (BOOL)_isStoredStateValid;
- (id)_localizedFailureMessage;
- (id)_localizedSuccessMessage;
- (void)_postCompletionNotificationsAndResetState;
- (void)_recomputeFrequentlyVisitedSites;
- (void)_resumeInterruptedImport;
- (id)_sourceBrowserBundleInImportState:(id)a0;
- (id)_sourceBrowserDataDirectoriesInImportState:(id)a0;
- (id)_storedState;
- (id)_successLocalizedStringChrome;
- (id)_successLocalizedStringFirefox;
- (id)_uniqueImportedBookmarksFolderNameWithSuggestedName:(id)a0;
- (void)_updateStoredState;
- (void)abandonInterruptedImport;
- (void)cancelImport;
- (void)getImportableDataTypesForBrowserDataDirectories:(id)a0 completionHandler:(id /* block */)a1;
- (void)importDataTypes:(unsigned long long)a0 forBrowserDataDirectories:(id)a1;
- (void)resumeInterruptedImport;
- (id)undoControllerForBookmarkImporter:(id)a0;

@end
