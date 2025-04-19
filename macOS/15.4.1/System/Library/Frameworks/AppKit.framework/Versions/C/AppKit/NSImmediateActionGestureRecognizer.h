@class NSEvent, NSForceClickMonitor;

@interface NSImmediateActionGestureRecognizer : NSGestureRecognizer {
    long long _flags;
    struct CGPoint { double x; double y; } _location;
    struct CGPoint { double x; double y; } _startLocation;
    long long _style;
    NSEvent *_startEvent;
    NSForceClickMonitor *_forceClickMonitor;
    id _animationController;
}

- (void)dealloc;
- (id)_delegate;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (long long)style;
- (void)reset;
- (void)setStyle:(long long)a0;
- (void)_didSendActions;
- (void)otherMouseDown:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)rightMouseDown:(id)a0;
- (unsigned long long)_acceptedEventMask;
- (BOOL)_delegateShouldAttemptToRecognizeWithEvent:(id)a0;
- (id)_desiredPressureBehavior;
- (id)_forceClickMonitor;
- (BOOL)_shouldSendActionWhenPossibleConcurrentlyWithRecognizer:(id)a0;
- (id)_startEvent;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)animationController;
- (double)animationProgress;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (void)setAnimationController:(id)a0;
- (BOOL)shouldBeArchived;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;

@end
