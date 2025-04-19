@class NSTimer;

@interface SCRSimpleTimer : NSObject

@property (retain, nonatomic) NSTimer *_timer;
@property (weak, nonatomic) id _target;
@property (nonatomic) SEL _selector;

- (void).cxx_destruct;
- (void)cancel;
- (void)_fire;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)dispatchAfterDelay:(double)a0;

@end
