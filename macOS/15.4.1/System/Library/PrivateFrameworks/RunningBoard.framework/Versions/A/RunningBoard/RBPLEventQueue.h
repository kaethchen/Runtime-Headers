@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RBPLEventQueue : NSObject {
    NSMutableArray *_eventQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _scheduled;
}

- (id)init;
- (void).cxx_destruct;
- (void)enqueueEvent:(id)a0;
- (id)dequeueEvent;
- (void)scheduleWork;

@end
