@class NSTimer, NSDate;

@interface SCRThrottler : NSObject

@property (nonatomic) double _minimumInterval;
@property (retain, nonatomic) NSDate *_lastFireTime;
@property (nonatomic) SEL _selector;
@property (weak, nonatomic) id _target;
@property (retain, nonatomic) id _selectorArgument;
@property (retain, nonatomic) NSTimer *_queuedSelectorTimer;

+ (id)throttlerWithMinimumInterval:(double)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_performQueuedBlock:(id)a0;
- (void)performSelector:(SEL)a0 onTarget:(id)a1 withObject:(id)a2;

@end
