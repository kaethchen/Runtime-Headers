@class NSImage, NSTimer, NSBezierPath;

@interface ISyncAnimatedDataMoveView : NSView {
    NSImage *_sourceImageCache;
    NSImage *_destinationImageCache;
    NSImage *_arrowImage;
    NSImage *_leftArrowImage;
    NSImage *_rightArrowImage;
    NSImage *_animationMaskImage;
    NSTimer *_animationTimer;
    double _initialPosition;
    double _leftEndpoint;
    double _rightEndpoint;
    struct CGPoint { double x; double y; } _maskOrigin;
    struct CGPoint { double x; double y; } _arrowOrigin;
    BOOL _animating;
    BOOL _initialized;
    BOOL _finishAnimation;
    double _animationStartTime;
    unsigned long long _animationDirection;
    unsigned long long _animationSpeed;
    long long _animationVelocity;
    NSBezierPath *_borderPath;
}

+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cornerRadius:(double)a1;
+ (id)_interpolatedImage:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1 usingImageInterpolation:(unsigned long long)a2;

- (void)dealloc;
- (void)startAnimation:(id)a0;
- (void)_commonInit;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)finishAnimation:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimation:(id)a0;
- (void)_animate:(id)a0;
- (void)setSourceImage:(id)a0;
- (unsigned long long)animationSpeed;
- (void)setAnimationSpeed:(unsigned long long)a0;
- (void)_stopTimer;
- (void)setDestinationImage:(id)a0;
- (unsigned long long)animationDirection;
- (void)setAnimationDirection:(unsigned long long)a0;
- (void)_drawOutline;
- (void)_drawSourceAndDestination;
- (void)drawArrow;

@end
