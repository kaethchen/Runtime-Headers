@class NSCollectionView;
@protocol _NSDataSourceSnapshotTranslating, _NSCollectionViewUpdateItemApplying;

@interface _NSDiffableDataSourceViewUpdater : NSObject

@property (weak, nonatomic) id<_NSCollectionViewUpdateItemApplying> updatesSink;
@property (weak, nonatomic) NSCollectionView *nsCollectionView;
@property (nonatomic) long long sinkKind;
@property (retain, nonatomic) id<_NSDataSourceSnapshotTranslating> dataSourceSnapshot;
@property (nonatomic) BOOL hasPerformedInitialUpdate;

- (void).cxx_destruct;
- (void)_deleteAllItems;
- (void)_performDeleteUpdate:(id)a0 onNSCollectionView:(id)a1;
- (void)_performInsertUpdate:(id)a0 onNSCollectionView:(id)a1;
- (void)_performMoveUpdate:(id)a0 onNSCollectionView:(id)a1;
- (void)_performReloadUpdate:(id)a0 onNSCollectionView:(id)a1;
- (void)_performUpdateWithCollectionViewUpdateItems:(id)a0 dataSourceSnapshot:(id)a1 updateHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_performViewUpdates:(id)a0;
- (void)_reloadData;
- (void)_willPerformDiff:(BOOL)a0;
- (id)initWithCollectionViewUpdatesSink:(id)a0;
- (id)initWithNSCollectionView:(id)a0;
- (id)initWithUpdatesSink:(id)a0 nsCollectionView:(id)a1 nsTableView:(id)a2 uiCollectionView:(id)a3 uiTableView:(id)a4;
- (id)targetView;

@end
