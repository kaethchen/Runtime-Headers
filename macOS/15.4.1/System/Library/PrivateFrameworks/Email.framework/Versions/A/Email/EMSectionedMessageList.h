@class NSHashTable, NSString, EFOrderedDictionary, NSPredicate, NSSet, EFLocked, EFFuture;
@protocol EFScheduler;

@interface EMSectionedMessageList : NSObject <EMMessageListChangeObserver, EMMessageList> {
    EFOrderedDictionary *_sections;
    EFLocked *_sectionsAwaitingInitialLoad;
    EFLocked *_sectionsAwaitingRemoteSearch;
    NSHashTable *_changeObservers;
}

@property (retain, nonatomic) EMSectionedMessageList *unfilteredMessageList;
@property (readonly, nonatomic) id<EFScheduler> observerScheduler;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isThreaded;
@property (readonly, copy) NSSet *expandedThreadItemIDs;
@property (readonly, nonatomic) EFFuture *allItemIDs;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)stopObserving:(id)a0;
- (void)refresh;
- (void)beginObserving:(id)a0;
- (void)collapseThread:(id)a0;
- (void)collection:(id)a0 addedItemIDs:(id)a1 toThreadWithItemID:(id)a2 after:(id)a3 unreadItemIDs:(id)a4;
- (void)collectionDidFinishInitialLoad:(id)a0;
- (BOOL)containsItemID:(id)a0;
- (void)expandThreadsFromThreadItemIDs:(id)a0;
- (void)collection:(id)a0 addedItemIDs:(id)a1 before:(id)a2;
- (void)collection:(id)a0 movedItemIDs:(id)a1 before:(id)a2;
- (void)didFinishRecoveryForCollection:(id)a0;
- (id)_boxItemIDForItemID:(id)a0 inSection:(id)a1;
- (id)_boxItemIDsForItemIDs:(id)a0 inSection:(id)a1;
- (void)_collection:(id)a0 addedItemIDs:(id)a1 toThreadWithItemID:(id)a2 before:(BOOL)a3 existingItemID:(id)a4 notifyObserverBlock:(id /* block */)a5;
- (void)_collection:(id)a0 addedItemIDs:(id)a1 toThreadWithItemID:(id)a2 before:(BOOL)a3 existingItemID:(id)a4 unreadItemIDs:(id)a5;
- (void)_collection:(id)a0 movedItemIDs:(id)a1 before:(BOOL)a2 existingItemID:(id)a3;
- (id)_firstItemIDOfSectionAfterSection:(unsigned long long)a0;
- (id)_itemIDsGroupedBySection:(id)a0;
- (id)_lastItemIDOfSectionBeforeSection:(unsigned long long)a0;
- (unsigned long long)_sectionIndexForCollection:(id)a0;
- (id)_sectionedItemIDForItemID:(id)a0;
- (id)_sectionedMessageListItemForMessageListItem:(id)a0;
- (id)_sectionedObjectIDForObjectID:(id)a0;
- (BOOL)anyExpandedThreadContainsItemID:(id)a0;
- (void)clearRecentlyCollapsedThread;
- (void)collection:(id)a0 addedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 addedItemIDs:(id)a1 toThreadWithItemID:(id)a2 before:(id)a3 unreadItemIDs:(id)a4;
- (void)collection:(id)a0 changedItemIDs:(id)a1;
- (void)collection:(id)a0 changedItemIDs:(id)a1 itemIDsWithCountChanges:(id)a2;
- (void)collection:(id)a0 deletedItemIDs:(id)a1;
- (void)collection:(id)a0 didFinishInitialLoadForThreadWithItemID:(id)a1;
- (void)collection:(id)a0 movedItemIDs:(id)a1 after:(id)a2;
- (void)collection:(id)a0 oldestItemsUpdatedForMailboxes:(id)a1;
- (void)collection:(id)a0 replacedExistingItemID:(id)a1 withNewItemID:(id)a2;
- (void)collection:(id)a0 shouldHighlightSnippetHints:(id)a1;
- (void)didFinishRemoteSearchForCollection:(id)a0;
- (void)expandThread:(id)a0;
- (id)filteredMessageListWithPredicate:(id)a0 userFiltered:(BOOL)a1;
- (id)initWithMessageListSections:(id)a0;
- (void)invalidateCacheForItemIDs:(id)a0;
- (id)itemIDOfFirstMessageListItemMatchingPredicate:(id)a0;
- (id)itemIDOfMessageListItemWithDisplayMessage:(id)a0;
- (id)messageListItemForItemID:(id)a0;
- (id)messageListItemForItemID:(id)a0 ifAvailable:(BOOL)a1;
- (id)messageListItemsForItemIDs:(id)a0;
- (id)messageListItemsForItemIDs:(id)a0 ifAvailable:(BOOL)a1;
- (id)objectIDForItemID:(id)a0;
- (BOOL)recentlyCollapsedThreadContainsItemID:(id)a0;

@end
