@interface SSGestureMagnifyEvent : SSGestureEvent

@property double magnification;
@property (readonly) long long gesturePhase;
@property (readonly) long long gestureMask;

+ (id)gestureMagnifyEventWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 magnification:(double)a2 gesturePhase:(long long)a3 gestureMask:(long long)a4 withEvent:(id)a5;

- (id)initWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 magnification:(double)a2 gesturePhase:(long long)a3 gestureMask:(long long)a4 withEvent:(id)a5;

@end
