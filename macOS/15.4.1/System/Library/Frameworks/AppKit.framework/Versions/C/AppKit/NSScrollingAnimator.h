@class NSTimer, _NSScrollingPredominantAxisFilter, NSDate, _NSScrollingRubberbandFilter, _NSScrollingMomentumCalculator;
@protocol NSScrollingAnimatorDelegate;

@interface NSScrollingAnimator : NSObject {
    long long _state;
    id<NSScrollingAnimatorDelegate> _delegate;
    _NSScrollingPredominantAxisFilter *_predominantAxisFilter;
    _NSScrollingRubberbandFilter *_rubberbandFilter;
    NSDate *_trackingBeganDate;
    double _momentumStartTimestamp;
    _NSScrollingMomentumCalculator *_momentumCalculator;
    struct CGPoint { double x; double y; } _unusedDelta;
    struct CGPoint { double x; double y; } _lastEventVelocity;
    struct CGPoint { double x; double y; } _lastFilteredVelocity;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastKnownContentFrame;
    struct CGPoint { double x; double y; } _lastKnownScrollOffset;
    double _lastKnownMomentumTimestamp;
    NSTimer *_timer;
    struct _delegateMethods { unsigned char trackingMayBegin : 1; unsigned char trackingCancelled : 1; unsigned char trackingBegan : 1; unsigned char trackingEnded : 1; unsigned char trackingMomentumTarget : 1; unsigned char pauseConsumption : 1; unsigned char continueConsumption : 1; unsigned char velocityHasSlowed : 1; } _delegateMethods;
    BOOL _cursorWasOriginallyInContent;
    BOOL _hasNotifiedOfSlowVelocity;
}

@property (weak) id<NSScrollingAnimatorDelegate> delegate;
@property long long axisFilterMode;
@property BOOL allowsHorizontalStretching;
@property BOOL allowsVerticalStretching;

- (id)init;
- (void).cxx_destruct;
- (void)_reset;
- (void)_continueTrackingDiscreteScroll;
- (void)_cacheMomentumAnimationIvars;
- (void)_cancelTrackingDiscreteScroll;
- (void)_cancelTrackingGestureScroll;
- (void)_commonStartTrackingScroll;
- (void)_continueConsumption;
- (void)_delegateContinueConsumption;
- (void)_delegatePauseConsumption;
- (void)_delegateTrackingBegan;
- (void)_delegateTrackingCancelled;
- (void)_delegateTrackingEnded;
- (void)_delegateTrackingMayBegin;
- (void)_delegateVelocityHasSlowed:(BOOL)a0;
- (void)_discreteScrollTimeout:(id)a0;
- (void)_endTrackingDiscreteScroll;
- (void)_endTrackingGestureScroll;
- (id)_momentumCalulatorWithOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)_pauseConsumption;
- (void)_startMomentumAnimation;
- (void)_startTrackingDiscreteScroll;
- (void)_startTrackingGestureScroll;
- (void)_stopAnimating;
- (BOOL)_stopAnimatingIfAllowed;
- (void)_trackMayBegin;
- (void)_updateStateWithEvent:(long long)a0;
- (void)_updateWithPhase:(unsigned long long)a0 delta:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (void)cancelScrollTracking;
- (void)consumeUnusedDeltaForTimestamp:(double)a0 handler:(id /* block */)a1;
- (void)scrollWithDelta:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 phase:(unsigned long long)a2 momentumPhase:(unsigned long long)a3;
- (void)scrollWithEvent:(id)a0;
- (void)updateFilters;

@end
