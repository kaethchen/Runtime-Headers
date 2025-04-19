@interface SSGestureEvent : SSMouseEvent

@property (readonly) long long subType;

+ (id)gestureEventWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 withEvent:(id)a2;

- (id)initWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 withEvent:(id)a2;

@end
