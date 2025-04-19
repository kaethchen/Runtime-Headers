@class NSDate, SGLongRunningTaskManager;

@interface SGLongRunningTask : NSObject {
    SGLongRunningTaskManager *_manager;
    NSDate *_deadline;
    _Atomic BOOL _deferRequested;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldDefer;
- (id)initWithDeadline:(id)a0 manager:(id)a1;
- (void)markFinished;
- (void)requestDefer;

@end
