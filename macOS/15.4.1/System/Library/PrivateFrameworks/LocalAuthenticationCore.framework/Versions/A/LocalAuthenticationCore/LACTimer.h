@class NSObject;
@protocol OS_dispatch_source;

@interface LACTimer : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
}

@property (readonly, nonatomic) BOOL isRunning;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)dispatchAfter:(double)a0 inQueue:(id)a1 block:(id /* block */)a2;
- (void)_dispatchAfter:(double)a0 inQueue:(id)a1 repeat:(BOOL)a2 block:(id /* block */)a3;
- (void)dispatchAfter:(double)a0 inQueue:(id)a1 repeat:(BOOL)a2 block:(id /* block */)a3;

@end
