@class NSObject;
@protocol OS_dispatch_queue;

@interface NumberAdder : NSObject {
    struct unique_ptr<CLConnection, CLConnectionDeleter> { struct __compressed_pair<CLConnection *, CLConnectionDeleter> { struct CLConnection *__value_; } __ptr_; } _connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)handleMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage *x0; struct __shared_weak_count *x1; })a0;
- (void)setup;
- (id)initWithConnection:(struct unique_ptr<CLConnection, CLConnectionDeleter> { struct __compressed_pair<CLConnection *, CLConnectionDeleter> { struct CLConnection *x0; } x0; })a0 onQueue:(id)a1;
- (void)numberOne:(int)a0 numberTwo:(int)a1 withCompletionHandler:(id /* block */)a2;

@end
