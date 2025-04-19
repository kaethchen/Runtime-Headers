@class NSTimer;
@protocol OutlineViewPlusDelegate, OutlineViewPlusDataSource;

@interface OutlineViewPlus : NSOutlineView <FieldEditorDFRAccessoryDisabling> {
    BOOL _lockSelection;
    int _doubleClickTimerAction;
    NSTimer *_doubleClickTimer;
    long long _clickedRow;
    long long _clickedColumn;
}

@property (weak) id<OutlineViewPlusDelegate> delegate;
@property (weak) id<OutlineViewPlusDataSource> dataSource;
@property (nonatomic) BOOL hidesSideSeparators;
@property (nonatomic) BOOL acceptsFirstMouse;
@property (readonly, nonatomic) BOOL wantsDFRAccessoriesInFieldEditor;

- (void)dealloc;
- (void).cxx_destruct;
- (void)draggedImage:(id)a0 endedAt:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)_updateSeparatorPositions;
- (BOOL)_userCanEditTableColumn:(id)a0 row:(long long)a1;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityActionNames;
- (void)cancelOperation:(id)a0;
- (void)deselectRow:(long long)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)drawGridInClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfOutlineCellAtRow:(long long)a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)sizeToFit;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_performDoubleClickTimerAction:(id)a0;
- (void)_cancelDoubleClickTimerAction;
- (BOOL)selectionShouldChangeFromMouseDownInRow:(long long)a0 tableColumn:(id)a1;
- (BOOL)shouldEditOnDoubleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;
- (BOOL)shouldEditOnSingleClick:(id)a0 inRow:(long long)a1 tableColumn:(id)a2;

@end
