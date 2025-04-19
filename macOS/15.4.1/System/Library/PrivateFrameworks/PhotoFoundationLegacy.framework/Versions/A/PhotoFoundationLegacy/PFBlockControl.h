@class NSString, NSObject, PFDispatchQueue;
@protocol OS_dispatch_group;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution> {
    PFDispatchQueue *_queue;
    id /* block */ _block;
    NSObject<OS_dispatch_group> *_workGroup;
    _Atomic unsigned long long _status;
}

@property BOOL executeOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)enqueue;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)cancelBlock;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)invoke:(unsigned long long)a0;
- (BOOL)dequeue;
- (BOOL)executeBlock;
- (void)_execute;
- (BOOL)blockHasStarted;
- (unsigned long long)_shouldEnqueue;
- (BOOL)blockHasFinished;
- (BOOL)blockWasCanceled;
- (BOOL)enqueueWithDelay:(unsigned long long)a0;
- (BOOL)groupNotify:(id)a0;
- (void)notifyOnQueue:(id)a0 whenFinished:(id /* block */)a1;
- (BOOL)tryCancelBlock;
- (void)waitForBlock;

@end
