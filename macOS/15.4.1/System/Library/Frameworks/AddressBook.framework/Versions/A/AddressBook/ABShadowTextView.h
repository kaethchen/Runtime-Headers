@interface ABShadowTextView : NSTextView {
    BOOL _overrideAllowsSelection;
}

@property (nonatomic) BOOL allowsOnlyPastedInput;

- (BOOL)drawsBackground;
- (BOOL)autoscroll:(id)a0;
- (void)insertNewline:(id)a0;
- (void)insertNewlineIgnoringFieldEditor:(id)a0;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (void)paste:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)scrollRectToVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRangeForProposedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 granularity:(unsigned long long)a1;
- (void)setMarkedText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 affinity:(unsigned long long)a1 stillSelecting:(BOOL)a2;
- (BOOL)shouldDrawInsertionPoint;
- (id)textField;
- (void)unmarkText;
- (void)forcedSelectAll;
- (void)abShadowTextInsertNewline:(id)a0;
- (BOOL)allowsMultipleLines;
- (void)insertPastedText:(id)a0;
- (void)markedTextDidChange;
- (BOOL)needsCardViewBorderDrawing;
- (void)resumeAllowingSelection;

@end
