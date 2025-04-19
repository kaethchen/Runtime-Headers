@class NSBrowser, NSViewController, NSView, NSIndexSet, NSMenu, NSArray;

@interface NSBrowserColumnViewController : NSViewController

@property (retain, nonatomic) NSViewController *headerViewController;
@property (retain, nonatomic) NSView *columnView;
@property (retain) NSMenu *menu;
@property (nonatomic) long long columnIndex;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (nonatomic) BOOL allowsEmptySelection;
@property (nonatomic) BOOL drawsBackground;
@property (nonatomic) BOOL allowsTypeSelect;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (readonly, nonatomic) long long firstValidRowIndex;
@property (retain, nonatomic) NSIndexSet *selectionIndexes;
@property (nonatomic) NSBrowser *browser;
@property (readonly, nonatomic) long long selectedRow;
@property (readonly) NSArray *selectedItems;

- (void)dealloc;
- (id)description;
- (void)setView:(id)a0;
- (void)sizeToFitWidth:(double)a0;
- (id)childItemAtIndex:(long long)a0;
- (id)currentTypeSelectSearchString;
- (void)didChangeColumnSize;
- (void)didEndResizingColumn:(long long)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 withEvent:(id)a1 offset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)editRow:(long long)a0 withEvent:(id)a1 select:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfRow:(long long)a0;
- (BOOL)isExpandableRow:(long long)a0;
- (BOOL)isLeafItem:(id)a0;
- (BOOL)isLeafRow:(long long)a0;
- (long long)nextValidRowIndexAfterIndex:(long long)a0;
- (void)noteHeightOfRowsWithIndexesChanged:(id)a0;
- (long long)numberOfChildItems;
- (id)objectValueForItem:(id)a0;
- (id)preparedCellAtRow:(long long)a0;
- (void)reloadData;
- (void)reloadDataForRowIndexes:(id)a0;
- (long long)rowAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (double)rowHeight;
- (void)scrollRowToCenter:(long long)a0;
- (id)selectedItems;
- (void)setBackgroundColor:(id)a0;
- (void)setColumnView:(id)a0 forcingFlippedBehavior:(BOOL)a1;
- (void)setNeedsDisplayInRow:(long long)a0;
- (void)setRowHeight:(double)a0;
- (BOOL)shouldAddColumnForSelection;
- (id)titleOfSelectedRow;
- (double)widthThatFits;
- (void)willBeginResizingColumn:(long long)a0;

@end
