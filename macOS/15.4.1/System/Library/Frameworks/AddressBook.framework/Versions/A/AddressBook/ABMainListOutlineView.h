@interface ABMainListOutlineView : NSOutlineView

@property BOOL drawGrid;

- (void)awakeFromNib;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfOutlineCellAtRow:(long long)a0;
- (double)indentationPerLevel;
- (BOOL)shouldCollapseAutoExpandedItemsForDeposited:(BOOL)a0;
- (long long)abIndexOfTopLevelParentOfIndex:(long long)a0;
- (long long)abTopLevelIndexOfItem:(id)a0;
- (id)abTopLevelRowsForRows:(id)a0;
- (void)printDescription:(id)a0;

@end
