@class HKSPThrottler, NSMutableSet;
@protocol NAScheduler;

@interface HKSPAccumulator : NSObject {
    HKSPThrottler *_throttler;
    id<NAScheduler> _scheduler;
    NSMutableSet *_accumulatedValues;
}

- (void).cxx_destruct;
- (void)accumulateValue:(id)a0;
- (void)accumulateValues:(id)a0;
- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1;
- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1 scheduler:(id)a2;
- (id)initWithInterval:(double)a0 updateBlock:(id /* block */)a1 scheduler:(id)a2 mutexGenerator:(id /* block */)a3;

@end
