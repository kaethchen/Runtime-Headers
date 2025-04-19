@class NSString, FilteredCollectionHelper, NSMutableArray, SidebarContentFilter;

@interface ReadingListContentProvider : NSObject <SidebarContentFilterDelegate, ReadingListTableViewContentProvider> {
    FilteredCollectionHelper *_filteredCollectionHelper;
    NSMutableArray *_cachedUnreadItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) SidebarContentFilter *contentFilter;
@property (nonatomic) BOOL showsOnlyUnreadItems;
@property (nonatomic) unsigned long long maximumNumberOfItems;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)displayedItems;
- (void)filterWithSearchString:(id)a0;
- (void)_addCachedUnreadItemsInArray:(id)a0;
- (id)_allReadingListItemsRespectingUnreadState;
- (id)_filteredCollectionHelper;
- (void)_readingListDataStoreItemsDidChange:(id)a0;
- (void)_rebuildCachedUnreadItems;
- (void)_updateCachedUnreadItems:(id)a0;
- (id)allReadingListItems;
- (BOOL)animateDataSourceChanges;
- (id)displayedItemFollowingItem:(id)a0;
- (id)displayedItemPrecedingItem:(id)a0;
- (BOOL)itemsAreRemovable;
- (id)itemsChangedNotificationName;
- (id)itemsChangedNotificationObject;
- (void)sidebarContentFilterDidCompleteFilterOperation:(id)a0;
- (Class)tableCellViewClass;
- (void)updateCachedUnreadItemsAfterUpdatingItemReadState:(id)a0;

@end
