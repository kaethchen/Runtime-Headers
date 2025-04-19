@class NSCollectionView;

@interface _NSCollectionViewDiffableDataSource : _NSDiffableDataSourceSnapshotter

@property (copy) id /* block */ supplementaryViewProvider;
@property (readonly, weak) NSCollectionView *collectionView;
@property (copy, nonatomic) id /* block */ supplementaryReuseIdentifierProvider;
@property (copy, nonatomic) id /* block */ supplementaryConfigurationHandler;

- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0 itemProvider:(id /* block */)a1;

@end
