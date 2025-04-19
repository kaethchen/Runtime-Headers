@class NSMutableArray, NSMapTable;

@interface NSGridView : NSView {
    double _rowSpacing;
    double _colSpacing;
    NSMutableArray *_columns;
    NSMutableArray *_rows;
    NSMapTable *_cellTable;
    long long _currentConstraintGeneration;
    struct { unsigned char isDecoding : 1; unsigned int _unused : 31; } _flags;
}

@property (readonly) long long numberOfRows;
@property (readonly) long long numberOfColumns;
@property long long xPlacement;
@property long long yPlacement;
@property long long rowAlignment;
@property double rowSpacing;
@property double columnSpacing;

+ (BOOL)clipsToBounds;
+ (id)gridViewWithNumberOfColumns:(long long)a0 rows:(long long)a1;
+ (id)gridViewWithViews:(id)a0;
+ (BOOL)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_commonPostInit;
- (id)_insertColumnAtIndex:(long long)a0 withViews:(id)a1;
- (BOOL)_cellTableContainsCell:(id)a0;
- (void)_commonPreInit;
- (struct CGSize { double x0; double x1; })_defaultContentCompressionResistancePriorities;
- (struct CGSize { double x0; double x1; })_defaultContentHuggingPriorities;
- (BOOL)_expandMergeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 ifNeededForCell:(id)a1;
- (BOOL)_expandMergeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 ifNeededForColumnAtIndex:(long long)a1;
- (BOOL)_expandMergeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 ifNeededForRow:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_expandMergeBoundsIfNeeded:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_findVisibleThingNear:(id)a0 after:(BOOL)a1 searchRows:(BOOL)a2;
- (BOOL)_hasBaselineOffsetsAtSize;
- (void)_insertColumnCells:(id)a0 atIndex:(long long)a1;
- (id)_insertRowAtIndex:(long long)a0 withViews:(id)a1;
- (void)_mergeCellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_rawCellAtColumnIndex:(long long)a0 rowIndex:(long long)a1 allocatingIfNeeded:(BOOL)a2;
- (id)_removeColumnCellsAtIndex:(long long)a0;
- (BOOL)_safeHasSubview:(id)a0;
- (void)_sanityCheck;
- (void)_setCell:(id)a0 forContentView:(id)a1;
- (void)_unmergeCellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_verifyInsertionOfColumnAtIndex:(long long)a0;
- (BOOL)_verifyInsertionOfRowAtIndex:(long long)a0;
- (void)_verifyMergedRegionWithHead:(id)a0;
- (BOOL)_verifyRemovalOfRowColumn:(id)a0;
- (id)_viewForFirstBaselineLayout;
- (id)_viewForLastBaselineLayout;
- (id)addColumnWithViews:(id)a0;
- (id)addRowWithViews:(id)a0;
- (id)cellAtColumnIndex:(long long)a0 rowIndex:(long long)a1;
- (id)cellForView:(id)a0;
- (id)columnAtIndex:(long long)a0;
- (id)declaredLayoutConstraints;
- (void)deleteColumn:(id)a0;
- (void)deleteRow:(id)a0;
- (long long)indexOfColumn:(id)a0;
- (long long)indexOfRow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)insertColumnAtIndex:(long long)a0 withViews:(id)a1;
- (id)insertRowAtIndex:(long long)a0 withViews:(id)a1;
- (void)mergeCellsInHorizontalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 verticalRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)moveColumnAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)moveRowAtIndex:(long long)a0 toIndex:(long long)a1;
- (void)removeColumnAtIndex:(long long)a0;
- (void)removeRowAtIndex:(long long)a0;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (id)rowAtIndex:(long long)a0;
- (void)willRemoveSubview:(id)a0;

@end
