@class NSObject;
@protocol OS_dispatch_queue, OS_nw_listener, OS_dispatch_semaphore;

@interface NWListener : NSObject {
    NSObject<OS_dispatch_queue> *listenerQueue;
    NSObject<OS_dispatch_queue> *transportQueue;
    NSObject<OS_dispatch_semaphore> *readySemaphore;
    NSObject<OS_nw_listener> *listener;
    int listenerState;
    void *layer;
}

- (void).cxx_destruct;
- (void)setListener:(id)a0;
- (id)initWithLayer:(void *)a0;
- (void)stopListening;
- (void)waitForReady;

@end
