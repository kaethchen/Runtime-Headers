@class _NSScrollingConcurrentEventMonitor, NSString, _NSScrollingConcurrentConstantData, _NSScrollingConcurrentMainThreadSynchronizer, _NSScrollingConcurrentVBLMonitor;

@interface NSScrollingBehaviorConcurrentVBL : NSScrollingBehavior <_NSScrollStateEventListener> {
    id _theCakeIsALie;
    BOOL *_timeOutCancelledPtr;
    unsigned long long _scrollingMode;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex;
    long long _state;
    _NSScrollingConcurrentConstantData *_constantData;
    _NSScrollingConcurrentVBLMonitor *_vblMonitor;
    _NSScrollingConcurrentEventMonitor *_eventMonitor;
    _NSScrollingConcurrentMainThreadSynchronizer *_mainThreadSynchronizer;
    long long _gestureAxis;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _screenDisabledMutex;
    unsigned long long _gestureToken;
    unsigned long long _screenDisabledToken;
    id /* block */ _completionHandler;
    struct { unsigned char isCursorInTarget : 1; unsigned char momentumAnimationMustAlign : 1; unsigned int reserved : 30; } _flags;
}

@property long long state;
@property unsigned long long gestureToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)_legacyBehavior;
- (void)automateLiveScrollOfScrollView:(id)a0;
- (void)noteUnexpectedScrollCompensated;
- (BOOL)_animateFreeMomentum;
- (void)_animateMomentum;
- (BOOL)_animateSwipePageAlignment;
- (BOOL)_asynchronouslyAllowDelegateToAdjustMomentum:(id)a0 withInitialOrigin:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2 synchronousTimeout:(unsigned long long)a3 gestureToken:(unsigned long long)a4;
- (BOOL)_asynchronouslyAllowDelegateToModifyProposedPageAlignedOrigin:(double *)a0 onAxis:(long long)a1 withInitialOrigin:(double)a2 velocity:(double)a3 synchronousTimeout:(unsigned long long)a4 gestureToken:(unsigned long long)a5;
- (void)_automateLiveScrollOfScrollView:(id)a0;
- (void)_beginPhysicalScroll;
- (BOOL)_isStretched;
- (void)_scrollView:(id)a0 discreteScrollWithEvent:(id)a1;
- (void)_scrollView:(id)a0 smoothScrollWithEvent:(id)a1;
- (void)_scrollView:(id)a0 trackGestureScrollWithEvent:(id)a1;
- (void)_scrollView:(id)a0 trackScrollMayBegin:(id)a1;
- (void)_startGestureScrollWithVBLFilter:(id)a0;
- (void)_stopGestureScrollTracking;
- (void)_updatePageReferenceNumber;
- (void)checkForGestureContinuance;
- (id)forwardableScrollEventResponderOfScrollView:(id)a0 phase:(unsigned long long)a1;
- (void)noteUnexpectedScrollDetected;
- (void)scrollStateEvent:(long long)a0 sender:(id)a1;
- (void)scrollView:(id)a0 boundsChangedForClipView:(id)a1;
- (void)scrollView:(id)a0 endScrollGestureDueToReason:(id)a1;
- (BOOL)scrollView:(id)a0 panGestureRecognizer:(id)a1 shouldReceiveTouch:(id)a2;
- (void)scrollView:(id)a0 panGestureRecognizerFailed:(id)a1;
- (void)scrollView:(id)a0 panWithGestureRecognizer:(id)a1;
- (id)scrollView:(id)a0 responderToForwardScrollEventBasedOnDelta:(id)a1;
- (void)scrollView:(id)a0 scrollWheelWithEvent:(id)a1;
- (BOOL)supportsConcurrentScrolling;
- (void)waitForEvent;

@end
