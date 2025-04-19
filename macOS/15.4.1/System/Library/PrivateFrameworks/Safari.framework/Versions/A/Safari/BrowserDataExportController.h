@interface BrowserDataExportController : WBSBrowsingDataExportController

- (unsigned long long)_numberOfExtensionsToBeExported;
- (void)_exportBookmarksToFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_exportExtensionsToDirectoryWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_exportHistoryToDirectoryWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)_numberOfBookmarksToBeExported;
- (void)_numberOfHistorySitesToBeExportedWithCompletionHandler:(id /* block */)a0;
- (BOOL)_exportsContentOfBookmarkList:(id)a0 writer:(id)a1 error:(id *)a2;
- (unsigned long long)_numberOfDescendantsInBookmarkList:(id)a0;

@end
