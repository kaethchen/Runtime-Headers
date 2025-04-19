@class NSColor;

@interface ILMediaBrowserOutlineView : NSOutlineView {
    NSColor *_ILMBCellHighlightColor;
    NSColor *_ILMBCellTriangleColor;
    BOOL _isInRestore;
    BOOL _isInReload;
}

- (void)dealloc;
- (void)_drawOutlineCell:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2;
- (id)_highlightColorForCell:(id)a0;
- (void)_highlightOutlineCell:(id)a0 highlight:(BOOL)a1 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 inView:(id)a3;
- (BOOL)_shouldAnimateExpandCollapse;
- (BOOL)_shouldUseSecondaryHighlightColor;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)copy:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)effectiveAppearanceDidChange;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (void)reloadData;
- (void)selectRowIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (id)_validateIndexes:(id)a0;
- (long long)clickedIndex;
- (id)expandedState;
- (BOOL)isInReload;
- (BOOL)isInRestore;
- (BOOL)restoreExpandedStateWithArray:(id)a0;
- (BOOL)restoreSelectedItemWithIdentifier:(id)a0;
- (void)selectNone:(id)a0;
- (void)setCustomHighlightColor:(id)a0;
- (void)setCustomTriangleColor:(id)a0;
- (void)setIsInReload:(BOOL)a0;

@end
