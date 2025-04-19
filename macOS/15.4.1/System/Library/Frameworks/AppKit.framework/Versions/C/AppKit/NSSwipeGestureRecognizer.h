@class NSTimer, NSMutableArray, NSMutableDictionary;

@interface NSSwipeGestureRecognizer : NSGestureRecognizer <NSCoding> {
    unsigned long long _buttonMask;
    unsigned long long _buttonCount;
    unsigned long long _numberOfTouchesRequired;
    NSMutableArray *_touches;
    unsigned long long _activeTouchOrButtonCount;
    struct CGPoint { double x; double y; } _startLocation;
    NSMutableDictionary *_startLocations;
    double _startTime;
    NSTimer *_invalidationTimer;
    long long _flags;
}

@property double maximumDuration;
@property double minimumPrimaryMovement;
@property double maximumPrimaryMovement;
@property double minimumSecondaryMovement;
@property double maximumSecondaryMovement;
@property double rateOfMinimumMovementDecay;
@property double rateOfMaximumMovementDecay;
@property double allowedPrimaryMovementSlop;
@property (readonly) struct CGPoint { double x0; double x1; } startPoint;
@property unsigned long long buttonMask;
@property unsigned long long direction;
@property unsigned long long numberOfTouchesRequired;

+ (id)touchBarMiniSwipeRecognizerWithTarget:(id)a0 action:(SEL)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)otherMouseDown:(id)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)rightMouseDown:(id)a0;
- (unsigned long long)_acceptedEventMask;
- (void)_appendSubclassDescription:(id)a0;
- (BOOL)_checkForSwipeWithDelta:(struct CGPoint { double x0; double x1; })a0 time:(double)a1;
- (void)_resetGestureRecognizer;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (BOOL)recognizesAfterEndPhase;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)setRecognizesAfterEndPhase:(BOOL)a0;
- (void)touchesBeganWithEvent:(id)a0;
- (void)touchesCancelledWithEvent:(id)a0;
- (void)touchesEndedWithEvent:(id)a0;
- (void)touchesMovedWithEvent:(id)a0;

@end
