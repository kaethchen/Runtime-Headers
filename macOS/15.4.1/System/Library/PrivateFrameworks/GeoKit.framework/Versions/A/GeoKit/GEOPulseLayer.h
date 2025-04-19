@class NSTimer;

@interface GEOPulseLayer : CALayer {
    NSTimer *animationTimer;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startingFrame;
    struct CGSize { double width; double height; } originalSize;
    float animationProgress;
}

+ (struct CGImage { } *)_copyImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;

- (id)init;
- (void)_animate;
- (void)startAnimation;
- (void)stopAnimation;
- (void)_setAnimationWithProgress:(float)a0;
- (void)_startAnimationTimer;
- (void)_stopAnimationTimer;
- (void)resetForReuse;

@end
