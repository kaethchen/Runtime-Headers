@interface AXKChildrenNavigationMapper : NSObject

+ (void)_insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 intoArray:(id)a1 atIndex:(unsigned long long)a2;
+ (unsigned long long)navigationHash:(id)a0;
+ (void)_addElement:(id)a0 atRowIndex:(unsigned long long)a1 inRows:(id)a2 atColumnIndex:(unsigned long long)a3 inColumns:(id)a4 withRowCount:(unsigned long long *)a5;
+ (void)_addElement:(id)a0 atRowIndex:(unsigned long long)a1 inRows:(id)a2 atColumnIndex:(unsigned long long)a3 inColumns:(id)a4 withRowCount:(unsigned long long *)a5 forceSplit:(BOOL)a6 addToTopRow:(BOOL)a7;
+ (void)_constrainRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 atIndex:(unsigned long long)a1 inRanges:(id)a2;
+ (id)_insertEmptyColumnToColumns:(id)a0 atIndex:(unsigned long long)a1;
+ (void)_insertEmptyRowIntoColumns:(id)a0 atIndex:(unsigned long long)a1;
+ (id)_mapIntoListsWithColumns:(id)a0 columnRanges:(id)a1 rowRanges:(id)a2;
+ (id)_navigationMapForElement:(id)a0;
+ (unsigned long long)_navigationMapHashForElement:(id)a0;
+ (id)_orderingFromMapping:(id)a0 originalChildren:(id)a1;
+ (void)_rebuildColumnAtIndex:(unsigned long long)a0 inColumns:(id)a1 inRanges:(id)a2;
+ (BOOL)_shouldElementBeIgnoredInNavigationMap:(id)a0;
+ (id)orderingForChildrenInBothDirections:(id)a0;
+ (BOOL)shouldElementBeIgnoredInNavigationMap:(id)a0;

@end
