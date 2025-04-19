@class HKSPTask, HKSPLimitingScheduler;

@interface HKSPThrottler : NSObject {
    HKSPTask *_task;
    HKSPLimitingScheduler *_backingScheduler;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1 scheduler:(id)a2;
- (id)initWithInterval:(double)a0 executeBlock:(id /* block */)a1 scheduler:(id)a2 mutexGenerator:(id /* block */)a3;

@end
