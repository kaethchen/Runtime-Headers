@class NSScrollingAnimator, NSString, NSScrollView, NSDisplayLink1, _NSScrollingPerfLogger;

@interface NSScrollingBehaviorSingleThreadedVBL : NSScrollingBehavior <NSScrollingAnimatorDelegate> {
    id _theCakeIsALie;
    NSScrollView *_scrollView;
    id _mouseDownEventMonitor;
    _NSScrollingPerfLogger *_perfLogger;
    NSScrollingAnimator *_scrollingAnimator;
    double _refTimestamp;
    NSDisplayLink1 *_displayLink;
    BOOL _isInTracking;
}

@property (readonly) struct CGPoint { double x0; double x1; } scrollOffset;
@property (readonly) struct CGSize { double x0; double x1; } clippingSize;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scrollableFrame;
@property (readonly, getter=isContentOriginUpperLeft) BOOL contentOriginUpperLeft;
@property (readonly) double pointsPerPixel;
@property (readonly) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } affineTransformOfContent;
@property (readonly) double horizontalLineScroll;
@property (readonly) double verticalLineScroll;
@property (readonly, getter=isCursorWithinContent) BOOL cursorWithinContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_legacyBehavior;
- (void)scrollingAnimatorTrackingBegan:(id)a0;
- (void)automateLiveScrollOfScrollView:(id)a0;
- (void)scrollingAnimatorTrackingEnded:(id)a0;
- (void)_advanceTimeWithDisplayLink:(id)a0;
- (void)_automateLiveScrollOfScrollView:(id)a0;
- (id)forwardableScrollEventResponderOfScrollView:(id)a0 phase:(unsigned long long)a1;
- (void)scrollView:(id)a0 endScrollGestureDueToReason:(id)a1;
- (BOOL)scrollView:(id)a0 panGestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (void)scrollView:(id)a0 panGestureRecognizerFailed:(id)a1;
- (void)scrollView:(id)a0 panWithGestureRecognizer:(id)a1;
- (id)scrollView:(id)a0 responderToForwardScrollEventBasedOnDelta:(id)a1;
- (void)scrollView:(id)a0 scrollWheelWithEvent:(id)a1;
- (struct CGPoint { double x0; double x1; })scrollingAnimator:(id)a0 beginMomentumWithVelocity:(struct CGPoint { double x0; double x1; })a1 target:(struct CGPoint { double x0; double x1; })a2;
- (void)scrollingAnimator:(id)a0 velocityHasSlowed:(BOOL)a1;
- (void)scrollingAnimatorContinueConsumption:(id)a0;
- (void)scrollingAnimatorPauseConsumption:(id)a0;
- (void)scrollingAnimatorTrackingCancelled:(id)a0;
- (void)scrollingAnimatorTrackingMayBegin:(id)a0;
- (BOOL)supportsConcurrentScrolling;

@end
