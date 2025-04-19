@class NSEvent, NSView;

@interface NSMouseTracker : NSObject {
    struct CGPoint { double x; double y; } _initialPoint;
    struct CGPoint { double x; double y; } _previousPoint;
    struct CGPoint { double x; double y; } _currentPoint;
    NSEvent *_initialEvent;
    NSEvent *_previousEvent;
    NSEvent *_currentEvent;
    NSView *_view;
    id _delegate;
    double _delay;
    double _interval;
    int _eventMask;
    unsigned long long _trackingConstraint;
    unsigned int _trackingConstraintKeyMask;
    struct __NSMouseTrackerDelegateRespondTo { unsigned char startTracking : 1; unsigned char continueTracking : 1; unsigned char stopTracking : 1; unsigned char constrainPoint : 1; unsigned char handlePeriodicEvents : 1; unsigned int reserved : 27; } _delegateRespondTo;
}

- (id)init;
- (void)_setDelegate:(id)a0;
- (id)delegate;
- (id)view;
- (double)delay;
- (double)interval;
- (struct CGPoint { double x0; double x1; })_getLocalPoint:(id)a0;
- (struct CGPoint { double x0; double x1; })_constrainPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_releaseEvents;
- (BOOL)continueTrackingWithEvent:(id)a0;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (long long)eventMask;
- (id)initialEvent;
- (struct CGPoint { double x0; double x1; })initialPoint;
- (id)nextEventForWindow:(id)a0;
- (id)previousEvent;
- (struct CGPoint { double x0; double x1; })previousPoint;
- (void)setEventMask:(long long)a0;
- (void)setPeriodicDelay:(double)a0 interval:(double)a1;
- (void)setTrackingConstraint:(unsigned long long)a0;
- (void)setTrackingConstraintKeyMask:(unsigned long long)a0;
- (BOOL)startTrackingWithEvent:(id)a0 inView:(id)a1 withDelegate:(id)a2;
- (BOOL)stopTrackingWithEvent:(id)a0;
- (BOOL)trackWithEvent:(id)a0 inView:(id)a1 withDelegate:(id)a2;
- (unsigned long long)trackingConstraint;
- (unsigned long long)trackingConstraintKeyMask;

@end
