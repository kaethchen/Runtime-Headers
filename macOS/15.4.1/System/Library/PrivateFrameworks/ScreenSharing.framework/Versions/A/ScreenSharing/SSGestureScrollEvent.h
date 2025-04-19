@interface SSGestureScrollEvent : SSGestureEvent

@property (readonly) double deltaX;
@property (readonly) double deltaY;
@property (readonly) double deltaZ;
@property (readonly) BOOL isNaturalScrolling;
@property (readonly) long long gesturePhase;
@property (readonly) long long gestureMask;

+ (id)gestureScrollEventWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 deltaX:(double)a2 deltaY:(double)a3 deltaZ:(double)a4 naturalScrolling:(BOOL)a5 gesturePhase:(long long)a6 gestureMask:(long long)a7 withEvent:(id)a8;

- (id)initWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 deltaX:(double)a2 deltaY:(double)a3 deltaZ:(double)a4 naturalScrolling:(BOOL)a5 gesturePhase:(long long)a6 gestureMask:(long long)a7 withEvent:(id)a8;

@end
