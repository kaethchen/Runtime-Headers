@class NSArray, NSSet, NSDictionary, NSString;

@interface ReadingListDataStore : NSObject {
    NSDictionary *_itemsByUUID;
    NSDictionary *_itemsByURLString;
    NSString *_storedTitle;
    BOOL _shouldSuppressChangeNotifications;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) NSSet *itemUUIDs;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeItem:(id)a0;
- (unsigned long long)indexOfItem:(id)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)clearAllItems;
- (id)itemForURLString:(id)a0;
- (void)_readingListModelDataDidChange:(id)a0;
- (void)loadItemsWithCompletionHandler:(id /* block */)a0;
- (void)_didLoad;
- (void)_fetchExistingReadingListFolderWithCompletionHandler:(id /* block */)a0;
- (void)_fetchReadingListFolderWithCompletionHandler:(id /* block */)a0;
- (void)_postReadingListChangedNotificationWithAddedItems:(id)a0 removedItems:(id)a1 modifiedItems:(id)a2 forceRebuildUnreadItems:(BOOL)a3;
- (void)_readingListModelDataWasReloaded:(id)a0;
- (void)_updateItemsFromReadingListFolderAndForceRebuildUnreadItems:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithStoredTitle:(id)a0;
- (void)insertItemWithUndo:(id)a0 atIndex:(unsigned long long)a1 didCheckIfBookmarkEditingIsPermitted:(BOOL)a2;
- (id)itemForUUID:(id)a0;
- (void)itemsWereAdded:(id)a0 removed:(id)a1 modified:(id)a2 forceRebuildUnreadItems:(BOOL)a3;
- (void)loadItems;
- (void)removeItemWithUndo:(id)a0;

@end
