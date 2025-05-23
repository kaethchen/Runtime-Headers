@class NSObject, PFDispatchQueue;
@protocol OS_os_transaction;

@interface PFDispatchQueueOSTransactionExtension : PFDispatchQueueExtension {
    PFDispatchQueue *_queue;
    NSObject<OS_os_transaction> *_currentTransaction;
    unsigned long long _transactionUseCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)_blockCompleted;
- (void)installOnQueue:(id)a0;
- (void)dispatchTransactionName:(id)a0 async:(id /* block */)a1;
- (void)dispatchTransactionName:(id)a0 asyncWithCurrentQOS:(id /* block */)a1;
- (void)dispatchTransactionName:(id)a0 qos:(unsigned int)a1 async:(id /* block */)a2;
- (id)newBlockInfo;
- (void)queue:(id)a0 didExecute:(id)a1;
- (void)queue:(id)a0 skippedExecuting:(id)a1;

@end
