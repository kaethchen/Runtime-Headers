@class NSObject;
@protocol OS_dispatch_queue;

@interface CMPedestrianFenceManagerInternal : NSObject {
    void *fLocationdConnection;
    id /* block */ fFenceHandler;
    id /* block */ fStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (void)dealloc;
- (id)init;
- (void)_clearFence:(id)a0 force:(BOOL)a1;
- (void)_setFence:(id)a0 withRadius:(id)a1 wake:(BOOL)a2 delay:(id)a3 withCompletion:(id /* block */)a4;
- (void)_setInSession:(BOOL)a0 withStatusHandler:(id /* block */)a1;

@end
