@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSBlockCoalescer : NSObject {
    double _minimumTimeIntervalBeforeExecution;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (void)scheduleBlock:(id /* block */)a0;
- (void)_dispatchBlock;
- (id)initWithMinimumTimeIntervalBeforeExecution:(double)a0 queue:(id)a1;

@end
