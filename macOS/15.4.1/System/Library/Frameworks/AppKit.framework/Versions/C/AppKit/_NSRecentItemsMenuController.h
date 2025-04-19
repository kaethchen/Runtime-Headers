@class NSOperationQueue, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _NSRecentItemsMenuController : NSObject {
    NSMutableDictionary *_recents;
    int _recentsLimit;
    NSMutableDictionary *_orderedPendingRecentDocumentURLsPerKey;
    NSObject<OS_dispatch_queue> *_pendingRecentsQueue;
    NSOperationQueue *_backgroundRecentDocumentResolutionQueue;
    NSMutableDictionary *_cachedRecentDocumentInfoPerKey;
}

@property (retain) NSOperationQueue *recentDocumentAccessQueue;

+ (id)_recentMenuItemTitlesFromLocationComponentChains:(id)a0 includingIcons:(BOOL)a1;
+ (id)_recentMenuItemTitlesFromRecentDocumentInfos:(id)a0 includingIcons:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (void)__noteNewRecentDocumentURL:(id)a0 forKey:(id)a1;
- (id)_addClearMenuItemToMenu:(id)a0 withTitle:(id)a1;
- (void)_clearRecentDocuments:(id)a0;
- (id)_createOpenRecentMenuItem;
- (void)_depopulateOpenRecentMenu:(id)a0;
- (void)_finishNotePendingRecentDocumentURLsForKey:(id)a0;
- (void)_finishRestoreForMenus:(id)a0;
- (void)_handleOpenRecentItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)_insertItemInMenu:(id)a0 atIndex:(long long)a1;
- (void)_invalidateRecentDocumentInfosForVolumeURL:(id)a0;
- (void)_invalidateUnresolvedRecentDocumentInfos;
- (id)_menuName;
- (void)_mountedVolumesDidChange:(id)a0;
- (void)_notePendingRecentDocumentURLsForKey:(id)a0 documentsSnapshot:(id)a1;
- (void)_noteRecentDocumentInfoRemoved:(id)a0 forKey:(id)a1;
- (struct OpaqueLSSharedFileListRef { } *)_perAppRecentDocumentFileList;
- (void)_populateOpenRecentMenu:(id)a0 includingIcons:(BOOL)a1;
- (unsigned long long)_preferredRecentsLimit;
- (void)_readRecentDocumentDefaultsForKey:(id)a0;
- (id)_recentDocumentInfoForKey:(id)a0;
- (id)_recentDocumentRecordsKeyForMenu:(id)a0;
- (id)_recentDocumentRecordsKeyForMenuTag:(long long)a0;
- (id)_recentDocumentRecordsKeyForUserInterfaceItem:(id)a0;
- (id)_recentDocumentURLsForKey:(id)a0;
- (id)_resolveRecentDocumentsForKey:(id)a0 asynchronousUpdater:(id /* block */)a1;
- (SEL)_selectorForClearRecentItems;
- (void)_setOpenRecentMenu:(id)a0;
- (void)_startResolvingRecentDocumentURLsForKey:(id)a0 includingResolved:(BOOL)a1 preliminaryResultsHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)_updateMenu:(id)a0 withRecentDocumentInfos:(id)a1 includingIcons:(BOOL)a2;
- (void)_updateOpenRecentDocumentsWithNewEntries:(id)a0 documentsSnapshot:(id)a1;
- (BOOL)_validateClearRecentItems:(id)a0;
- (void)_writeRecentDocumentDefaultsForKey:(id)a0;
- (unsigned long long)maximumRecentDocumentCount;
- (void)noteNewRecentDocumentURL:(id)a0;
- (id)recordsKey;
- (BOOL)validateUserInterfaceItem:(id)a0;

@end
