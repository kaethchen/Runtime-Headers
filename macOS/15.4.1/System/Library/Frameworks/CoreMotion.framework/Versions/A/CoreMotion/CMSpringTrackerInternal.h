@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSpringTrackerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    BOOL fTrackingStarted;
    id /* block */ fHandler;
}

- (void)dealloc;
- (id)init;
- (void)_teardown;
- (BOOL)_isTracking;
- (void)_handleStartStopResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0 handler:(id /* block */)a1;
- (void)_querySpringDataFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)_startWithHandler:(id /* block */)a0;
- (void)_stopWithHandler:(id /* block */)a0;

@end
