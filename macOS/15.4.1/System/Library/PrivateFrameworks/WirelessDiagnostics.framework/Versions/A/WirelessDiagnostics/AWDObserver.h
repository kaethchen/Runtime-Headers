@protocol AWDObserverDelegate;

@interface AWDObserver : NSObject {
    struct shared_ptr<AWDObserverConnection> { struct AWDObserverConnection *__ptr_; struct __shared_weak_count *__cntrl_; } observerConnection;
}

@property (weak, nonatomic) id<AWDObserverDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setConfiguration:(id)a0 callback:(id /* block */)a1;
- (void)setDelegate:(id)a0 queue:(struct dispatch_queue_s { } *)a1;

@end
