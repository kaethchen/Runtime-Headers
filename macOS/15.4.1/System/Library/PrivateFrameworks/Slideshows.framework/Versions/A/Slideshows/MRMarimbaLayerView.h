@class NSSet, MRTouchSet, MRMarimbaLayer, NSValue;

@interface MRMarimbaLayerView : NSView {
    MRTouchSet *_touchSet;
    NSValue *_singleTapPositionAsValue;
    NSSet *_pendingBeginTouches;
}

@property (readonly) MRMarimbaLayer *marimbaLayer;

- (void)dealloc;
- (void)rightMouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToWindow;
- (void)viewWillStartLiveResize;
- (void)cancelMarimbaWasSingleTapped;
- (void)marimbaWasSingleTapped:(id)a0;

@end
