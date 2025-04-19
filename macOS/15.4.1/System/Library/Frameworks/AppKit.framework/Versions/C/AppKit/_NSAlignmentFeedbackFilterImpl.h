@class NSTimer, NSAlignmentFeedbackFilter;

@interface _NSAlignmentFeedbackFilterImpl : NSObject {
    NSAlignmentFeedbackFilter *_filter;
    long long _flags;
    id _velocityFilter;
    double _currentTimestamp;
    double _lastMovementTimestamp;
    struct CGPoint { double x; double y; } _currentLocation;
    unsigned long long _currentModifierFlags;
    NSTimer *_periodicUpdateTimer;
    double _lastAcceptVelocityTime;
    double _snapDistance;
}

+ (unsigned long long)inputEventMask;

- (void)dealloc;
- (void)_reset;
- (id /* block */)_actuationBlock;
- (id)initWithFilter:(id)a0;
- (void)_clearPeriodicTimer;
- (BOOL)_isHorizontalVelocityAlignable;
- (BOOL)_isVerticalVelocityAlignable;
- (BOOL)_modifierFlagsAllowAlignment;
- (void)_requestPeriodicUpdate;
- (void)_schedulePeriodicUpdateWithRecognizer:(id)a0;
- (void)_setActuationBlock:(id /* block */)a0 coalesce:(BOOL)a1;
- (void)_setSnapDistance:(double)a0;
- (void)_updateDragOnLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 modifierFlags:(unsigned long long)a2 recognizer:(id)a3;
- (id)alignmentFeedbackTokenForHorizontalMovementInView:(id)a0 previousX:(double)a1 alignedX:(double)a2 defaultX:(double)a3;
- (id)alignmentFeedbackTokenForMovementInView:(id)a0 previousPoint:(struct CGPoint { double x0; double x1; })a1 alignedPoint:(struct CGPoint { double x0; double x1; })a2 defaultPoint:(struct CGPoint { double x0; double x1; })a3;
- (id)alignmentFeedbackTokenForVerticalMovementInView:(id)a0 previousY:(double)a1 alignedY:(double)a2 defaultY:(double)a3;
- (void)performFeedback:(id)a0 performanceTime:(unsigned long long)a1;
- (void)updateWithEvent:(id)a0;
- (void)updateWithPanRecognizer:(id)a0;

@end
