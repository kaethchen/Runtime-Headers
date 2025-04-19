@interface SSGestureSwipeEvent : SSGestureEvent

@property long long motion;
@property long long swipeMask;
@property float progress;
@property float positionX;
@property float positionY;
@property float velocityX;
@property float velocityY;
@property float velocityZ;
@property long long flags;
@property long long flavor;

+ (id)gestureSwipeEventWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 motion:(long long)a2 swipeMask:(long long)a3 progress:(float)a4 positionX:(float)a5 positionY:(float)a6 velocityX:(float)a7 velocityY:(float)a8 velocityZ:(float)a9 flags:(long long)a10 flavor:(long long)a11 withEvent:(id)a12;

- (id)initWithCoordinates:(struct SSPoint { long long x0; long long x1; })a0 subType:(long long)a1 motion:(long long)a2 swipeMask:(long long)a3 progress:(float)a4 positionX:(float)a5 positionY:(float)a6 velocityX:(float)a7 velocityY:(float)a8 velocityZ:(float)a9 flags:(long long)a10 flavor:(long long)a11 withEvent:(id)a12;

@end
