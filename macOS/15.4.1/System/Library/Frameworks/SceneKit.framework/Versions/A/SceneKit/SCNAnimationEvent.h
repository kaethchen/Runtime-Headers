@interface SCNAnimationEvent : NSObject {
    double _eventTime;
    id /* block */ _eventBlock;
}

+ (id)animationEventWithKeyTime:(double)a0 block:(id /* block */)a1;

- (void)dealloc;
- (id)init;
- (void)setTime:(double)a0;
- (double)time;
- (id /* block */)eventBlock;
- (void)setEventBlock:(id /* block */)a0;

@end
