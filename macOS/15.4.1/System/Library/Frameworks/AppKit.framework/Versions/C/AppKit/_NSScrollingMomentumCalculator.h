@interface _NSScrollingMomentumCalculator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct CGPoint { double x; double y; } _initialOrigin;
    struct CGPoint { double x; double y; } _initialVelocity;
    struct CGPoint { double x; double y; } _destinationOrigin;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _documentFrame;
    struct CGPoint { double x; double y; } _constrainedClippingOrigin;
    struct CGSize { double width; double height; } _clippingSize;
    struct CGSize { double width; double height; } _tolerance;
    double _decelerationRate;
    struct { unsigned char shouldRoundCalculations : 1; unsigned int reserved : 31; } _flags;
}

@property BOOL shouldRoundCalculations;
@property struct CGSize { double x0; double x1; } tolerance;
@property struct CGPoint { double x0; double x1; } destinationOrigin;
@property (readonly) double durationUntilStop;
@property struct CGPoint { double x0; double x1; } initialOrigin;
@property struct CGPoint { double x0; double x1; } initialVelocity;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } documentFrame;
@property double decelerationRate;
@property double horizontalScrollDecelerationFactor;
@property double verticalScrollDecelerationFactor;
@property struct CGPoint { double x0; double x1; } constrainedClippingOrigin;
@property struct CGSize { double x0; double x1; } clippingSize;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)init;
- (void)calculateDestination;
- (void)calculateToReachDestination;
- (id)initWithInitialOrigin:(struct CGPoint { double x0; double x1; })a0 initialVelocity:(struct CGPoint { double x0; double x1; })a1 documentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 constrainedClippingOrigin:(struct CGPoint { double x0; double x1; })a3 clippingSize:(struct CGSize { double x0; double x1; })a4 tolerance:(struct CGSize { double x0; double x1; })a5 decelerationRate:(double)a6 shouldRoundCalculations:(BOOL)a7;
- (id)initWithInitialOrigin:(struct CGPoint { double x0; double x1; })a0 initialVelocity:(struct CGPoint { double x0; double x1; })a1 documentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 constrainedClippingOrigin:(struct CGPoint { double x0; double x1; })a3 clippingSize:(struct CGSize { double x0; double x1; })a4 tolerance:(struct CGSize { double x0; double x1; })a5 decelerationRate:(double)a6 shouldRoundCalculations:(BOOL)a7 destinationOrigin:(struct CGPoint { double x0; double x1; })a8;
- (id)initWithInitialOrigin:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 documentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 constrainedClippingOrigin:(struct CGPoint { double x0; double x1; })a3 clippingSize:(struct CGSize { double x0; double x1; })a4;
- (id)initWithInitialOrigin:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 documentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 constrainedClippingOrigin:(struct CGPoint { double x0; double x1; })a3 clippingSize:(struct CGSize { double x0; double x1; })a4 tolerance:(struct CGSize { double x0; double x1; })a5;
- (struct CGPoint { double x0; double x1; })positionAfterDuration:(double)a0;
- (double)velocityAfterDuration:(double)a0;

@end
