@class NSObject;
@protocol OS_dispatch_queue;

@interface _PASQueueLock : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id _guardedData;
}

- (void).cxx_destruct;
- (void)runWithLockAcquired:(id /* block */)a0;
- (id)guardedDataAssertingLockContext;
- (id)initWithGuardedData:(id)a0 serialQueue:(id)a1;
- (void)runAsyncWithLockAcquired:(id /* block */)a0;
- (unsigned char)runWithLockAcquired:(id /* block */)a0 shouldContinueBlock:(id /* block */)a1;
- (id)unsafeGuardedData;

@end
