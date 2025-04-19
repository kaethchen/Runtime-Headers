@class NSArray, NSString, _UIDiffableDataSourceState, NSMutableArray;

@interface __UIDiffableDataSourceSnapshot : NSObject <NSCopying, _UICollectionIdentifierBasedDataSource> {
    _UIDiffableDataSourceState *_state;
    NSMutableArray *_pendingSnapshotUpdates;
}

@property (readonly, nonatomic) _UIDiffableDataSourceState *state;
@property (readonly, nonatomic) NSArray *pendingSnapshotUpdates;
@property (readonly, nonatomic) NSArray *reloadedSectionIdentifiers;
@property (readonly, nonatomic) NSArray *reloadedItemIdentifiers;
@property (readonly, nonatomic) NSArray *reconfiguredItemIdentifiers;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_commitUpdateAtomic:(id)a0;
- (id)_identifiersForSectionsOrItems:(BOOL)a0 reconfiguredOrReloaded:(BOOL)a1;
- (void)_validateReloadUpdateThrowingIfNeeded:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (void)appendSectionWithIdentifier:(id)a0;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (long long)indexForSectionIdentifier:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (long long)indexOfSectionIdentifier:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)initWithState:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)insertSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)insertSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (id)itemIdentifierForIndexPath:(id)a0;
- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (long long)numberOfItemsInSection:(id)a0;
- (void)reconfigureItemsWithIdentifiers:(id)a0;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (void)_prepareForApplyToDataSource;
- (BOOL)containsItemIdentifier:(id)a0;
- (BOOL)containsSectionIdentifier:(id)a0;

@end
