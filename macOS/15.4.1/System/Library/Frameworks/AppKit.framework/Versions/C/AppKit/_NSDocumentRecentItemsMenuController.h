@interface _NSDocumentRecentItemsMenuController : _NSRecentItemsMenuController

- (void)_finishNotePendingRecentDocumentURLsForKey:(id)a0;
- (id)_recentDocumentRecordsKeyForMenuTag:(long long)a0;
- (void)_updateOpenRecentDocumentsWithNewEntries:(id)a0 documentsSnapshot:(id)a1;
- (void)clearRecentDocuments:(id)a0;
- (unsigned long long)maximumRecentDocumentCount;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
