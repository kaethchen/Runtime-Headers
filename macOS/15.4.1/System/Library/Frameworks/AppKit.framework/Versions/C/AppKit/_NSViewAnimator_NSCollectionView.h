@interface _NSViewAnimator_NSCollectionView : _NSViewAnimator

- (void)deleteSections:(id)a0;
- (void)insertSections:(id)a0;
- (void)reloadSections:(id)a0;
- (void)deleteItemsAtIndexPaths:(id)a0;
- (void)deleteItemsAtIndexes:(id)a0 inSectionObject:(id)a1;
- (void)insertItemsAtIndexPaths:(id)a0;
- (void)insertItemsAtIndexes:(id)a0 inSectionObject:(id)a1;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;
- (void)moveSection:(long long)a0 toSection:(long long)a1;
- (void)performBatchUpdates:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)reloadItemsAtIndexPaths:(id)a0;
- (void)reloadItemsAtIndexes:(id)a0 inSectionObject:(id)a1;
- (void)setCollectionViewLayout:(id)a0;
- (void)setSelectionIndexPaths:(id)a0;

@end
