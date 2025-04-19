@interface NSFontPanelTableView : NSTableView {
    BOOL _itemIsRemovable;
}

- (BOOL)_shouldSlideBackAfterDragFailed;
- (void)_accessibilitySelectRowsFromAccessibilityRows:(id)a0;
- (BOOL)_wantsUserCancelledOperation;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)draggingSession:(id)a0 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;

@end
