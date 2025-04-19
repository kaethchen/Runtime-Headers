@class NSViewController;

@interface _NSBrowserPreviewColumnViewController : NSBrowserColumnViewController

@property (retain, nonatomic) NSViewController *previewViewController;

- (void)dealloc;
- (void)setRepresentedObject:(id)a0;
- (BOOL)drawsBackground;
- (BOOL)allowsEmptySelection;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsTypeSelect;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)editRow:(long long)a0 withEvent:(id)a1 select:(BOOL)a2;
- (long long)firstValidRowIndex;
- (void)loadView;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (unsigned long long)numberOfRows;
- (id)preparedCellAtRow:(long long)a0;
- (void)reloadData;
- (double)rowHeight;
- (void)scrollRowToCenter:(long long)a0;
- (id)selectionIndexes;
- (void)setAllowsEmptySelection:(BOOL)a0;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (void)setAllowsTypeSelect:(BOOL)a0;
- (void)setBackgroundColor:(id)a0;
- (void)setDrawsBackground:(BOOL)a0;
- (void)setMenu:(id)a0;
- (void)setNeedsDisplayInRow:(long long)a0;
- (void)setRowHeight:(double)a0;
- (void)setSelectionIndexes:(id)a0;
- (id)titleOfSelectedRow;
- (double)widthThatFits;

@end
