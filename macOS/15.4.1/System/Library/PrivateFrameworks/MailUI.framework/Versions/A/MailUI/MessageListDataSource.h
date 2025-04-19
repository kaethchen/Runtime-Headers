@class NSSet, MUIMessageListDiffableDataSource, MUIMessageListCollectionView, NSString, NSObject, EFLocked;
@protocol MessageListDataSourceDelegate, OS_os_log, OS_dispatch_queue, MessageListDataSourceProvider;

@interface MessageListDataSource : NSObject <MessageListSectionDataSourceProvider, EFLoggable, MessageListCellDisclosureDelegate> {
    _Atomic unsigned int _updateIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateQueueLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (weak, nonatomic) MUIMessageListCollectionView *collectionView;
@property (retain, nonatomic) MUIMessageListDiffableDataSource *dataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue;
@property long long updateQueueSuspensionCount;
@property (retain, nonatomic) EFLocked *visibleSections;
@property (retain, nonatomic) EFLocked *objectIdentifiersForSection;
@property (retain, nonatomic) EFLocked *dataSourcesForObjectIdentifier;
@property (nonatomic) BOOL hasAdditionalSections;
@property (retain, nonatomic) EFLocked *pendingSectionsToClear;
@property (retain, nonatomic) NSSet *messagesSections;
@property (weak, nonatomic) id<MessageListDataSourceProvider> provider;
@property (weak, nonatomic) id<MessageListDataSourceDelegate> delegate;
@property (readonly, nonatomic) MUIMessageListDiffableDataSource *collectionViewDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfItems;
- (id)itemIdentifiers;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)initWithCollectionView:(id)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)numberOfSections;
- (void)refresh;
- (id)sectionAtIndex:(long long)a0;
- (void)resumeUpdates;
- (void)suspendUpdates;
- (BOOL)anyExpandedThreadContainsItemID:(id)a0;
- (id)messageListItemForItemID:(id)a0;
- (id)messageListItemsForItemIDs:(id)a0;
- (id)objectIDForItemID:(id)a0;
- (long long)numberOfItemsInMessagesSections;
- (void)applyFilterPredicate:(id)a0 userFiltered:(BOOL)a1 ignoreMessagesPredicate:(id)a2 section:(id)a3;
- (void)applyMessageListDataSourceUpdate:(id)a0;
- (void)deleteItemsWithIDs:(id)a0 animated:(BOOL)a1 immediateCompletion:(BOOL)a2 completion:(id /* block */)a3;
- (void)didScheduleReadInteractionForItemID:(id)a0;
- (void)didSelectDisclosureButtonForMessageListItem:(id)a0 disclosureEnabled:(BOOL)a1;
- (BOOL)isExpandedThread:(id)a0;
- (BOOL)isMessagesSection:(id)a0;
- (BOOL)isMessagesSectionAtIndex:(long long)a0;
- (BOOL)isSection:(id)a0 atIndex:(long long)a1;
- (BOOL)isSection:(id)a0 atRow:(long long)a1;
- (BOOL)isSectionHeaderAtRow:(long long)a0;
- (id)itemIDsInExpandedThread:(id)a0;
- (id)messageListAtSectionIndex:(long long)a0;
- (id)messageListForMessageListItemWithIdentifier:(id)a0;
- (id)messageListForSection:(id)a0;
- (id)messageListItemAtIndexPath:(id)a0;
- (id)messageListItemAtRow:(long long)a0;
- (id)messageListItemForItemID:(id)a0 section:(id)a1;
- (id)messageListItemsForItemIDs:(id)a0 section:(id)a1;
- (id)messageListItemsInSection:(id)a0 limit:(unsigned long long)a1;
- (id)messageListSectionDataSource:(id)a0 indexPathForItemIdentifier:(id)a1;
- (id)messageListSectionDataSource:(id)a0 indexPathsForItemIdentifiers:(id)a1;
- (id)messageListSectionDataSource:(id)a0 itemIdentifierForIndexPath:(id)a1;
- (id)messageListSectionDataSource:(id)a0 itemIdentifiersForIndexPaths:(id)a1;
- (void)messageListSectionDataSource:(id)a0 performUpdateAnimated:(BOOL)a1 cleanSnapshot:(BOOL)a2 prepare:(id /* block */)a3 update:(id /* block */)a4 completion:(id /* block */)a5;
- (BOOL)messageListSectionIsVisible:(id)a0;
- (id)messagesInMessageListItem:(id)a0;
- (long long)numberOfItemsAtSectionIndex:(long long)a0;
- (void)reconfigureVisibleCells;
- (id)relatedItemIDsForSelectedItemID:(id)a0 atIndexPath:(id)a1;
- (void)reloadItemsWithItemIDs:(id)a0;
- (void)reloadVisibleCellsInvalidatingCache:(BOOL)a0;
- (void)removeMessageListSection:(id)a0 animated:(BOOL)a1;
- (long long)sectionIndexForSection:(id)a0;
- (BOOL)shouldDisplaySupplementaryKind:(id)a0 forSectionAtIndex:(long long)a1;
- (BOOL)shouldReloadMessageListSectionDataSource:(id)a0;
- (void)showMessageListSection:(id)a0 animated:(BOOL)a1;
- (id)snapshotForMessageListSectionDataSource:(id)a0;
- (id)threadItemIDForItemInExpandedThread:(id)a0;
- (id)viewModelForSupplementaryViewKind:(id)a0 sectionAtIndex:(long long)a1;
- (id)visibleMessageListSections;

@end
