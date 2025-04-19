@class NSView;

@interface AVEventRedirectionView : NSView

@property (weak, nonatomic) NSView *contentView;
@property (weak, nonatomic) NSView *contentOverlayHostView;

- (void).cxx_destruct;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)scrollWheel:(id)a0;

@end
