@class NSObject;
@protocol OS_dispatch_source;

@interface KNAnimationDelayedCallback : NSObject {
    double _delay;
    double _startTime;
    id _target;
    SEL _selector;
    id _object;
    id /* block */ _block;
    NSObject<OS_dispatch_source> *_sourceTimer;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)run;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)cancel;
- (id)initWithBlock:(id /* block */)a0 delay:(double)a1;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2 delay:(double)a3;
- (void)p_performSelectorOnTarget;

@end
