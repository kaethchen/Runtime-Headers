@class NSObject;
@protocol OS_dispatch_queue;

@interface CMHealthTrackerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_queue> *fAppQueue;
}

- (void)dealloc;
- (id)init;
- (void)_teardown;
- (void)_queryMetMinutesFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)_queryVO2MaxInputsFromRecord:(id)a0 handler:(id /* block */)a1;

@end
