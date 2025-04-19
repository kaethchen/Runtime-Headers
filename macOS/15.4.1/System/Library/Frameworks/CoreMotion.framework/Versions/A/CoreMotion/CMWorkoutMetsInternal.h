@class NSObject;
@protocol OS_dispatch_queue;

@interface CMWorkoutMetsInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)dealloc;
- (id)init;
- (void)_teardown;
- (void)_queryWorkoutMetsWithSessionId:(id)a0 handler:(id /* block */)a1;

@end
