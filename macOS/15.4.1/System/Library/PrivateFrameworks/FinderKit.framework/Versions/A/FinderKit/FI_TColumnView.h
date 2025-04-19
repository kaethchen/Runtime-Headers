@class NSObject;
@protocol TColumnViewDelegate;

@interface FI_TColumnView : NSBrowser {
    long long _targetColumn;
    long long _targetRow;
    unsigned long long _targetDropOperation;
    unsigned long long _dragOperation;
}

@property (weak) NSObject<TColumnViewDelegate> *delegate;
@property (nonatomic) BOOL shouldIgnoreNextDoClick;
@property (nonatomic) BOOL shouldPerformDoClickOnMouseUp;
@property (nonatomic) struct optional<long> { union { char __null_state_; long long __val_; } ; BOOL __engaged_; } currentResizingColumnIndex;

+ (Class)browserColumnViewClass;
+ (Class)browserTableViewClass;
+ (Class)tableColumnViewControllerClass;
+ (void)setGlobalGroupingForAllColumns:(BOOL)a0;

- (id).cxx_construct;
- (void)draggingExited:(id)a0;
- (void)_collapseAutoExpandedItems;
- (void)_drawDropHighlight;
- (void)_ensureValidSelection;
- (void)_setDropTargetColumn:(long long)a0 targetRow:(long long)a1 targetDropOperation:(unsigned long long)a2 dragOperation:(unsigned long long)a3;
- (BOOL)acceptsFirstResponder;
- (void)addColumn;
- (void)addColumnForItem:(id)a0;
- (id)controller;
- (void)doClick:(id)a0;
- (void)doDoubleClick:(id)a0;
- (void)draggingEnded:(id)a0;
- (unsigned long long)draggingEntered:(id)a0;
- (void)loadColumnZero;
- (void)reloadColumn:(long long)a0;
- (void)selectRowIndexes:(id)a0 inColumn:(long long)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLastColumn:(long long)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)updateDraggingItemsForDrag:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)wantsUpdateLayer;
- (id)browserTableViewAtIndex:(long long)a0;
- (void)cancelDropFeedback;
- (long long)indexForBrowserTableView:(id)a0;
- (BOOL)isDropCandidateAtRow:(long long)a0 column:(long long)a1;
- (void)setFocusOnColumn:(long long)a0;

@end
