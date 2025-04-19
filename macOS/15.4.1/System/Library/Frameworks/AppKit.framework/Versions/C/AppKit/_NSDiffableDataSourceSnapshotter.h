@interface _NSDiffableDataSourceSnapshotter : _NSDiffableDataSource

- (id)snapshot;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (void)applySnapshot:(id)a0;
- (id)emptySnapshot;
- (void)reloadFromSnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;

@end
