@interface SSMouseScrollEvent : SSMouseEvent

@property (readonly) short deltaX;
@property (readonly) short deltaY;
@property (readonly) short deltaZ;
@property (readonly) int fixedDeltaX;
@property (readonly) int fixedDeltaY;
@property (readonly) int fixedDeltaZ;
@property (readonly) int pointDeltaX;
@property (readonly) int pointDeltaY;
@property (readonly) int pointDeltaZ;
@property (readonly) unsigned int scrollPhase;
@property (readonly) unsigned int momentumPhase;
@property (readonly) int scrollCount;
@property (readonly) unsigned int flags;

+ (id)mouseScrollEventWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 withDeltaX:(short)a1 withDeltaY:(short)a2 withDeltaZ:(short)a3 withFixedDeltaX:(int)a4 withFixedDeltaY:(int)a5 withFixedDeltaZ:(int)a6 withPointDeltaX:(int)a7 withPointDeltaY:(int)a8 withPointDeltaZ:(int)a9 withScrollPhase:(unsigned int)a10 withMomentumPhase:(unsigned int)a11 withScrollCount:(int)a12 withFlags:(unsigned int)a13 withEvent:(id)a14;

- (id)initWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 withDeltaX:(short)a1 withDeltaY:(short)a2 withDeltaZ:(short)a3 withFixedDeltaX:(int)a4 withFixedDeltaY:(int)a5 withFixedDeltaZ:(int)a6 withPointDeltaX:(int)a7 withPointDeltaY:(int)a8 withPointDeltaZ:(int)a9 withScrollPhase:(unsigned int)a10 withMomentumPhase:(unsigned int)a11 withScrollCount:(int)a12 withFlags:(unsigned int)a13 withEvent:(id)a14;

@end
