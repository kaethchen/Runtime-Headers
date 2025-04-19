@class NSColor, NSMutableArray;

@interface ILMediaBrowserTableView : NSTableView {
    NSMutableArray *_ILMBAlternatingRowBackgroundColorsArray;
    NSColor *_ILMBCellHighlightColor;
    Class _tableHeaderCellClass;
}

- (void)dealloc;
- (id)_alternatingRowBackgroundColors;
- (id)_highlightColorForCell:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)arrayWithIndexes:(id)a0;
- (void)copy:(id)a0;
- (id)dragImageForRowsWithIndexes:(id)a0 tableColumns:(id)a1 event:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)clickedIndex;
- (void)selectNone:(id)a0;
- (void)setAlternatingRowBackgroundColorsArray:(id)a0;
- (void)setCustomHighlightColor:(id)a0;
- (void)setTableHeaderCellClass:(Class)a0;

@end
