@class HMFTimer, NSString;

@interface HMDEventRouterTimer : NSObject <HMETimer, HMFTimerDelegate>

@property (readonly) id /* block */ timerFireHandler;
@property (readonly) HMFTimer *timer;
@property (readonly, nonatomic) double timeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)timerDidFire:(id)a0;
- (id)initWithQueue:(id)a0 interval:(double)a1 timerFireHandler:(id /* block */)a2;

@end
