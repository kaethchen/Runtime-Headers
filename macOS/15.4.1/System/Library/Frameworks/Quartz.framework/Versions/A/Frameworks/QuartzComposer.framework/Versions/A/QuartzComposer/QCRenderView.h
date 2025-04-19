@class QCView;

@interface QCRenderView : NSView {
    QCView *_view;
}

- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)swipeWithEvent:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)beginGestureWithEvent:(id)a0;
- (void)copy:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endGestureWithEvent:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)selectAll:(id)a0;
- (void)tabletPoint:(id)a0;
- (void)tabletProximity:(id)a0;
- (id)_QCView;
- (void)_setQCView:(id)a0;

@end
