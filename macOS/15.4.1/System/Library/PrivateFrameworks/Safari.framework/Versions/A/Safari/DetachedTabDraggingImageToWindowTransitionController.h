@class NSScreen, NSWindow;

@interface DetachedTabDraggingImageToWindowTransitionController : NSObject {
    id /* block */ _completionHandler;
    NSWindow *_sourceMiniWindow;
    NSWindow *_destinationWindow;
    struct CGPoint { double x; double y; } _dropLocation;
    NSScreen *_destinationScreen;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowAnimationStartFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowAnimationEndFrame;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _windowAnimationEndTransform;
    BOOL _destinationWindowWillMoveToFullScreen;
    BOOL _animationCancelled;
}

+ (id)animateDestinationWindow:(id)a0 fromDetachedTabAtPointOnScreen:(struct CGPoint { double x0; double x1; })a1 withDraggedMiniWindow:(id)a2 ofWidth:(double)a3 completionHandler:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)_setUpWindow;
- (void)_setUpWindowAnimationEndFrame;
- (void)_setUpWindowAnimationStartFrameWithMiniWindowWidth:(double)a0;
- (void)_updateAnimationWithProgress:(float)a0;
- (BOOL)_willDestinationWindowMoveToFullScreen;
- (id)_initWithDestinationWindow:(id)a0 miniWindow:(id)a1 ofWidth:(double)a2 dropLocation:(struct CGPoint { double x0; double x1; })a3 completionHandler:(id /* block */)a4;
- (void)_scheduleAnimation;
- (void)cancelAnimationIfPending;

@end
