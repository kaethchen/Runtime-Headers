@interface NUDebugRenderView : NURenderView {
    BOOL draggedDuringThisClick;
    struct CGPoint { double x; double y; } dragStart;
    double angleX;
    double angleY;
    double deltaX;
    double deltaY;
    BOOL _debugMode;
}

- (BOOL)debugMode;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)setDebugMode:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_prepareForDrag;
- (void)_orientWithX:(double)a0 andY:(double)a1;
- (void)_resetOrientation:(id)a0;

@end
