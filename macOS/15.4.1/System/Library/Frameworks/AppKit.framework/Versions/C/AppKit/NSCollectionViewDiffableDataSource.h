@class NSString, __NSDiffableDataSource;

@interface NSCollectionViewDiffableDataSource : NSObject <NSCollectionViewDataSource>

@property (retain, nonatomic) __NSDiffableDataSource *impl;
@property (copy) id /* block */ supplementaryViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)snapshot;
- (void)_applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_isDiffableDataSource;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (id)collectionView;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)indexPathForItemIdentifier:(id)a0;
- (id)initWithCollectionView:(id)a0 itemProvider:(id /* block */)a1;
- (id)itemIdentifierForIndexPath:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
