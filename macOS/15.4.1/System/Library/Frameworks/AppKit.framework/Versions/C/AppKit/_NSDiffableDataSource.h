@class NSArray, __NSDiffableDataSource;

@interface _NSDiffableDataSource : NSObject {
    __NSDiffableDataSource *_dsImpl;
}

@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;
@property (readonly, nonatomic) NSArray *itemIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id)snapshot;
- (id)_impl;
- (void)appendItemsWithIdentifiers:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (void)appendSectionWithIdentifier:(id)a0;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)applySnapshot:(id)a0;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (id)dsImpl;
- (id)emptySnapshot;
- (long long)indexOfItemIdentifier:(id)a0;
- (long long)indexOfSectionIdentifier:(id)a0;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)initWithDiffableDataSource:(id)a0;
- (id)initWithNSCollectionView:(id)a0 itemProvider:(id /* block */)a1;
- (id)initWithViewUpdatesSink:(id)a0;
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
- (void)reloadFromSnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;

@end
