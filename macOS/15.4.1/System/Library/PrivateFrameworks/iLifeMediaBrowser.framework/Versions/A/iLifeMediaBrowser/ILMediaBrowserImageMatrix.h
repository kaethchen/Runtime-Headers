@class NSString, NSMutableArray;

@interface ILMediaBrowserImageMatrix : NSMatrix {
    NSMutableArray *selectedCells;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRect;
    BOOL mAllowMultipleSelection;
    BOOL mDisplaysToolTips;
    BOOL mDrawTitles;
    struct CGSize { double width; double height; } mImageCellSize;
    NSMutableArray *_contents;
    NSMutableArray *_contentImages;
    NSMutableArray *_contentTitles;
    id _observedObjectForContent;
    NSString *_observedKeyPathForContent;
    id _observedObjectForContentImages;
    NSString *_observedKeyPathForContentImages;
    id _observedObjectForContentTitles;
    NSString *_observedKeyPathForContentTitles;
}

+ (void)initialize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)exposedBindings;
- (void)unbind:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)allowsMultipleSelection;
- (BOOL)becomeFirstResponder;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)cellAtIndex:(unsigned long long)a0;
- (void)copy:(id)a0;
- (void)deselectAll:(id)a0;
- (void)deselectAllCells;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mode:(long long)a1 cellClass:(Class)a2 numberOfRows:(long long)a3 numberOfColumns:(long long)a4;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseMoved:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)reloadData;
- (void)resetCursorRects;
- (BOOL)resignFirstResponder;
- (void)selectAll:(id)a0;
- (void)selectCell:(id)a0;
- (void)selectCellAtRow:(long long)a0 column:(long long)a1;
- (id)selectedCell;
- (id)selectedCells;
- (id)selectionIndexes;
- (void)setAllowsMultipleSelection:(BOOL)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)viewDidMoveToWindow;
- (void)setCellsHaveTitle:(BOOL)a0;
- (id)_dragImageForCell:(id)a0 withBadgeCount:(long long)a1;
- (long long)numberOfColumnsForCurrentBounds;
- (void)_dragSelectionWithEvent:(id)a0;
- (void)setDrawsTitles:(BOOL)a0;
- (void)_selectCell:(id)a0;
- (id)_sortedSelectedCells;
- (id)cellsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)clickedIndex;
- (void)deselectCell:(id)a0;
- (BOOL)displaysToolTips;
- (BOOL)drawsTitles;
- (struct CGSize { double x0; double x1; })imageCellSize;
- (long long)indexOfCell:(id)a0;
- (id)realCells;
- (void)refreshCellsToContent;
- (void)selectNone:(id)a0;
- (void)setDisplaysToolTips:(BOOL)a0;
- (void)setImageCellSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayoutUsingMaxWidth:(long long)a0;
- (void)viewBoundsDidChange:(id)a0;
- (BOOL)wantsFlagsChangedEventsForSkimming;
- (BOOL)wantsMouseMovedEventsForSkimming;

@end
