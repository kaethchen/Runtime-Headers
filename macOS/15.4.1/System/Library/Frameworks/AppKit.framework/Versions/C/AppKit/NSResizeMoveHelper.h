@class NSWindow;

@interface NSResizeMoveHelper : NSMoveHelper {
    NSWindow *_window;
    double _totalTime;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameDelta;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _startFrame;
    double _percent;
    BOOL _contentPreservationNeedsRestoration;
}

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)_configureFinalState;
- (void)animateResizeToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)animateStep:(double)a0;
- (double)animationDuration;
- (void)cleanUpAnimation;
- (id)screen;
- (void)setUpAnimation;
- (BOOL)shouldSkipAnimation;

@end
