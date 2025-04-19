@interface IMHeaderView : NSView

@property BOOL mouseDownMovesWindow;

- (BOOL)acceptsFirstMouse:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)_mouseInContent:(id)a0;

@end
