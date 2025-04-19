@class NSMutableArray;

@interface NSClickGestureRecognizer : NSGestureRecognizer <NSCoding> {
    long long _flags;
    struct CGPoint { double x; double y; } _location;
    unsigned long long _buttonMask;
    long long _currentButtonCount;
    long long _activeButtonCount;
    long long _currentClickCount;
    double _allowableMovement;
    long long _behavior;
    long long _stage;
    double _pressure;
    double _stageTransition;
    long long _activeTouchCount;
    NSMutableArray *_trackingTouchIdentities;
}

@property double allowableMovement;
@property long long behavior;
@property (readonly) long long stage;
@property (readonly) double pressure;
@property (readonly) double stageTransition;
@property unsigned long long buttonMask;
@property long long numberOfClicksRequired;
@property long long numberOfTouchesRequired;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)reset;
- (void)_setHasCustomAllowableMovement:(BOOL)a0;
- (void)clearClickTimer;
- (void)otherMouseDown:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)rightMouseDown:(id)a0;
- (unsigned long long)_acceptedEventMask;
- (void)_appendSubclassDescription:(id)a0;
- (void)_beginMouseInteraction;
- (void)_beginTouchInteraction;
- (id)_desiredPressureBehavior;
- (void)_failRecognition;
- (BOOL)_hasCustomAllowableMovement;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)startClickTimer:(double)a0;
- (void)tooSlow:(id)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end
