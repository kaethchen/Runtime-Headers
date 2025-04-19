@class NSEvent, NSMutableArray;

@interface _NSGestureRecognizerDelayedEvent : NSObject {
    long long _delayCount;
}

@property (retain) NSEvent *event;
@property BOOL cloneForSecondDelivery;
@property (readonly) double timestampForDelivery;
@property (readonly, copy) NSMutableArray *gestureRecognizers;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)addGestureRecognizer:(id)a0;
- (long long)decrementDelayCount;
- (long long)delayCount;
- (void)incrementDelayCount;

@end
