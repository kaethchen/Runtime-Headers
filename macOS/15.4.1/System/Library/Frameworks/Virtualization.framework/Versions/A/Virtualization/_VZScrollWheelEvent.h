@interface _VZScrollWheelEvent : NSObject

@property (readonly) double scrollingDeltaX;
@property (readonly) double scrollingDeltaY;
@property (readonly) double acceleratedScrollingDeltaX;
@property (readonly) double acceleratedScrollingDeltaY;
@property (readonly) unsigned long long scrollPhase;
@property (readonly) unsigned long long momentumPhase;

- (id)initWithEvent:(id)a0;
- (id)initWithScrollingDeltaX:(double)a0 scrollingDeltaY:(double)a1 acceleratedScrollingDeltaX:(double)a2 acceleratedScrollingDeltaY:(double)a3 scrollPhase:(unsigned long long)a4 momentumPhase:(unsigned long long)a5;

@end
