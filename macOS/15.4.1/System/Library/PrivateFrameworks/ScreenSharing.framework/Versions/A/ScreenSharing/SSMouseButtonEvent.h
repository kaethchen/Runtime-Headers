@interface SSMouseButtonEvent : SSMouseEvent

@property (readonly) long long button;
@property (readonly) int state;
@property (readonly) long long clickCount;

+ (id)mouseButtonEventWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 withButton:(long long)a1 withState:(int)a2 withClickCount:(long long)a3 withEvent:(id)a4;

- (id)initWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 withButton:(long long)a1 withState:(int)a2 withClickCount:(long long)a3 withEvent:(id)a4;

@end
