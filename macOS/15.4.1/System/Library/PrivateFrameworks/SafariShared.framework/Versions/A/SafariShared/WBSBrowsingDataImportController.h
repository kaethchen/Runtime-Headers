@class NSString, NSArray;

@interface WBSBrowsingDataImportController : NSObject

@property (class, readonly, copy, nonatomic) NSString *suggestedImportedBookmarksFolderName;
@property (class, readonly, copy, nonatomic) NSArray *allowedImportContentTypes;

@property (readonly, copy, nonatomic) NSString *importErrorAlertTitle;
@property (retain, nonatomic) NSString *selectedProfileIdentifierToImportInto;

+ (long long)importedDataClassificationFromImportedItems:(id)a0;
+ (id)localizedDescriptionOfTheNumberOfItems:(unsigned long long)a0 exportType:(id)a1;
+ (id)localizedStringForExtensionsConflictViewWithNumberOfFailedExtensionsFailedToImport:(unsigned long long)a0 appsCount:(unsigned long long)a1;
+ (id)localizedStringForNumberOfItemsToBeImported:(id)a0;
+ (id)localizedStringForPasswordsConflictViewWithNumberOfPasswordsFailedToImport:(unsigned long long)a0;
+ (id)localizedSuccessStringForImportedItems:(id)a0;
+ (id)uniqueImportedBookmarksFolderNameWithSuggestedName:(id)a0 existingFolderNames:(id)a1;

- (void).cxx_destruct;
- (void)_computeNumberOfBookmarksToBeImportedFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_computeNumberOfChromeExtensionsToBeImportedFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_computeNumberOfChromeHistorySitesToBeImportedFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_computeNumberOfCreditCardsToBeImportedFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_computeNumberOfExtensionsToBeImportedFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_computeNumberOfHistorySitesToBeImportedFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importBookmarksFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importChromeExtensionsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importChromeHistoryFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importCreditCardsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importExtensionsFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importHistoryFromURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_removeTemporaryUnzippedDirectoryURLs:(id)a0 sandboxExtensionHandles:(id)a1;
- (void)_scanImportURLs:(id)a0 sandboxExtensions:(id)a1 completionHandler:(id /* block */)a2;
- (void)computeNumberOfItemsToBeImportedFromFiles:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)importBrowsingDataFromFiles:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)importErrorAlertMessageForFailureReason:(long long)a0 filename:(id)a1;
- (void)scanImportURLs:(id)a0 completionHandler:(id /* block */)a1;

@end
