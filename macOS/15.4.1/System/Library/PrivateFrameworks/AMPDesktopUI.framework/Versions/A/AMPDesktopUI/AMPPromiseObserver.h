@protocol AMPTaskScheduler;

@interface AMPPromiseObserver : NSObject {
    id /* block */ _resolveBlock;
    id /* block */ _rejectBlock;
    id<AMPTaskScheduler> _scheduler;
}

- (void).cxx_destruct;
- (void)notifyRejectedWithError:(id)a0;
- (id)initWithResolveBlock:(id /* block */)a0 rejectBlock:(id /* block */)a1 scheduler:(id)a2;
- (void)notifyResolvedWihValue:(id)a0;

@end
