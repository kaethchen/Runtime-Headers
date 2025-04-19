@interface SSMouseEvent : SSInputEvent

@property struct SSPoint { long long x; long long y; } coordinates;
@property struct CGPoint { double x; double y; } mV2Coordinates;

+ (id)mouseEventWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 withEvent:(id)a1;

- (id)initWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 withEvent:(id)a1;

@end
