@class MTRAsyncCallbackWorkQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MTRAsyncCallbackQueueWorkItem : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long retryCount;
@property (retain, nonatomic) MTRAsyncCallbackWorkQueue *workQueue;
@property (readonly, nonatomic) BOOL enqueued;
@property (copy, nonatomic) id /* block */ readyHandler;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void).cxx_destruct;
- (void)invalidate;
- (void)cancel;
- (void)_invalidate;
- (id)initWithQueue:(id)a0;
- (void)endWork;
- (void)callReadyHandlerWithContext:(id)a0;
- (void)markEnqueued;
- (void)retryWork;

@end
