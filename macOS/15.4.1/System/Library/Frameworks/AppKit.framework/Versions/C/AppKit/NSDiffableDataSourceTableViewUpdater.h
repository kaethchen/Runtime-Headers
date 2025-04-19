@class NSTableViewDiffableDataSourceImpl, NSTableViewDataSourceUpdatesController;

@interface NSDiffableDataSourceTableViewUpdater : _NSDiffableDataSourceViewUpdater {
    NSTableViewDataSourceUpdatesController *_tableViewUpdates;
}

@property (nonatomic) NSTableViewDiffableDataSourceImpl *dataSource;

- (void)dealloc;
- (void)_deleteAllItems;
- (void)_performTargetViewDeleteUpdate:(id)a0 withPreviousDataSourceSnapshot:(id)a1;
- (void)_performTargetViewInsertUpdate:(id)a0 withPreviousDataSourceSnapshot:(id)a1;
- (void)_performTargetViewMoveUpdate:(id)a0 withPreviousDataSourceSnapshot:(id)a1;
- (void)_performTargetViewReloadUpdate:(id)a0 withPreviousDataSourceSnapshot:(id)a1;
- (void)_performUpdateWithCollectionViewUpdateItems:(id)a0 dataSourceSnapshot:(id)a1 updateHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (void)_performViewUpdates:(id)a0 withPreviousDataSourceSnapshot:(id)a1;
- (void)_reloadData;
- (id)initWithTableView:(id)a0;
- (id)targetView;

@end
