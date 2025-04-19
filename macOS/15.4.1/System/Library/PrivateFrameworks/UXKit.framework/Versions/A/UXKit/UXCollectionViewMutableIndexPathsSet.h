@interface UXCollectionViewMutableIndexPathsSet : UXCollectionViewIndexPathsSet

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addIndexPath:(id)a0;
- (void)removeSections:(id)a0;
- (void)_adjustForDeletionOfSection:(unsigned long long)a0;
- (void)_adjustForInsertionOfSection:(unsigned long long)a0;
- (void)addIndexPaths:(id)a0;
- (void)addIndexPathsSet:(id)a0;
- (void)addSection:(long long)a0 itemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)adjustForDeletionOfIndexPath:(id)a0;
- (void)adjustForDeletionOfItems:(id)a0 inSection:(unsigned long long)a1;
- (void)adjustForDeletionOfSection:(unsigned long long)a0;
- (void)adjustForDeletionOfSections:(id)a0;
- (void)adjustForInsertionOfIndexPath:(id)a0;
- (void)adjustForInsertionOfItems:(id)a0 inSection:(unsigned long long)a1;
- (void)adjustForInsertionOfSection:(unsigned long long)a0;
- (void)adjustForInsertionOfSections:(id)a0;
- (void)intersectIndexPathsSet:(id)a0;
- (void)removeAllIndexPaths;
- (void)removeIndexPath:(id)a0;
- (void)removeIndexPaths:(id)a0;
- (void)removeIndexPathsSet:(id)a0;
- (void)removeSection:(long long)a0;
- (void)removeSection:(long long)a0 itemsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
