@interface NSScrollingBehavior : NSObject

- (void)automateLiveScrollOfScrollView:(id)a0;
- (long long)axisForSwipeTrackingGivenScrollWheelEvent:(id)a0;
- (id)forwardableScrollEventResponderOfScrollView:(id)a0 phase:(unsigned long long)a1;
- (void)scrollView:(id)a0 boundsChangedForClipView:(id)a1;
- (void)scrollView:(id)a0 endScrollGestureDueToReason:(id)a1;
- (BOOL)scrollView:(id)a0 panGestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (void)scrollView:(id)a0 panGestureRecognizerFailed:(id)a1;
- (void)scrollView:(id)a0 panWithGestureRecognizer:(id)a1;
- (id)scrollView:(id)a0 responderToForwardScrollEventBasedOnDelta:(id)a1;
- (void)scrollView:(id)a0 scrollWheelWithEvent:(id)a1;
- (void)snapRubberBandOfScrollView:(id)a0;
- (BOOL)supportsConcurrentScrolling;

@end
