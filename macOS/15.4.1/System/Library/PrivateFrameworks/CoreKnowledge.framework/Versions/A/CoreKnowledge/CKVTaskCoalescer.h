@class NSString, NSMutableDictionary, NSObject, CKVTaskSettings;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface CKVTaskCoalescer : NSObject {
    NSString *_managerName;
    _Atomic unsigned int _eventIdCounter;
    NSMutableDictionary *_taskRegistry;
    unsigned int _transactionCounter;
    double _coalescenceInterval;
    double _coalescenceDelay;
    NSObject<OS_dispatch_queue> *_taskRegistryQueue;
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
    CKVTaskSettings *_settings;
}

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

- (id)init;
- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_endTransaction;
- (BOOL)_didIncomingTask:(id)a0 arriveInCoalescingWindowWithLastTask:(id)a1;
- (id)initWithManagerName:(id)a0 coalescenceInterval:(double)a1 coalescenceDelay:(double)a2 dispatchQoS:(unsigned int)a3 settings:(id)a4;
- (void)submitTaskWithId:(unsigned short)a0 taskBlock:(id /* block */)a1 completion:(id /* block */)a2;

@end
