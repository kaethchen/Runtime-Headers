@class _NSScrollingPerfLogger, NSScrollView, NSTimer, _NSScrollingPredominantAxisFilter, NSDisplayLink1, _NSScrollingRubberbandFilter, _NSScrollingMomentumCalculator;

@interface NSScrollingBehaviorLegacy : NSScrollingBehavior {
    struct { unsigned char inScrollGesture : 1; unsigned char momentumScrollInProgress : 1; unsigned char ignoreMomentumScrolls : 1; unsigned char momentumScrollPreventsForwarding : 1; unsigned char processingScrollMayBegin : 1; unsigned char acceleratedScrollPreventsForwarding : 1; unsigned char scrollIsDueToSelf : 1; unsigned char ongoingSnapBackAnimation : 1; unsigned int  : 24; } _flags;
    struct CGSize { double width; double height; } _overflowScrollDelta;
    struct CGSize { double width; double height; } _stretchScrollForce;
    struct CGSize { double width; double height; } _momentumVelocity;
    double _lastMomentumScrollTimeStamp;
    id _mouseDownMonitor;
    NSTimer *_momentumTimer;
    NSDisplayLink1 *_snapBackAnimator;
    _NSScrollingPredominantAxisFilter *_predominantAxisFilter;
    _NSScrollingRubberbandFilter *_rubberbandFilter;
    _NSScrollingMomentumCalculator *_momentumCalculator;
    struct CGPoint { double x; double y; } _lastPanVelocity;
    NSTimer *_panAnimationTimer;
    _NSScrollingPerfLogger *_perfLogger;
}

@property id endGestureMonitor;
@property (retain) NSScrollView *scrollViewRefForCarbonApps;

- (void)dealloc;
- (void)automateLiveScrollOfScrollView:(id)a0;
- (BOOL)_cancelAnyOutstandingPanAnimation;
- (void)_endSnapBackAnimationIfNeededForScrollView:(id)a0;
- (void)_latchAcceleratedScrollEventsToScrollView:(id)a0;
- (void)_latchMomentumScrollEventsToScrollView:(id)a0;
- (void)_momentumAnimationTimerFire:(id)a0;
- (void)_scrollView:(id)a0 discreteScrollWithEvent:(id)a1;
- (void)_scrollView:(id)a0 smoothScrollWithEvent:(id)a1;
- (void)_snapRubberBandWhenMouseReleasedFromTrackingLoopOfScrollView:(id)a0;
- (void)_startSnapBackAnimationForScrollView:(id)a0 velocity:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isInScrollGesture;
- (void)scrollView:(id)a0 boundsChangedForClipView:(id)a1;
- (void)scrollView:(id)a0 endScrollGestureDueToReason:(id)a1;
- (BOOL)scrollView:(id)a0 panGestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (void)scrollView:(id)a0 panGestureRecognizerEndedOrFailed:(id)a1;
- (void)scrollView:(id)a0 panGestureRecognizerFailed:(id)a1;
- (void)scrollView:(id)a0 panWithGestureRecognizer:(id)a1;
- (id)scrollView:(id)a0 responderToForwardScrollEventBasedOnDelta:(id)a1;
- (void)scrollView:(id)a0 scrollWheelWithEvent:(id)a1;
- (void)snapRubberBandOfScrollView:(id)a0;

@end
