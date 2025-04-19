@interface TKContentView : NSView {
    id _savedSubviews;
    BOOL _subviewsSetAside;
}

- (void)_drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 clip:(BOOL)a1;
- (void)delete:(id)a0;
- (BOOL)_drawRectIfEmpty;
- (void)_recursiveDisplayAllDirtyWithLockFocus:(BOOL)a0 visRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_recursiveDisplayRectIfNeededIgnoringOpacity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isVisibleRect:(BOOL)a1 rectIsVisibleRectForView:(id)a2 topView:(BOOL)a3;
- (BOOL)acceptsFirstResponder;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)keyDown:(id)a0;
- (void)paste:(id)a0;
- (void)redo:(id)a0;
- (void)undo:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (BOOL)wantsDefaultClipping;
- (void)_recursive:(BOOL)a0 displayRectIgnoringOpacity:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(id)a2 topView:(BOOL)a3;
- (void)_restoreSubviews;
- (void)_setAsideSubviews;
- (void)_lightWeightRecursiveDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)generateExposeEvents:(struct __HIShape { } *)a0;
- (void)tkToolbarButton:(id)a0;

@end
