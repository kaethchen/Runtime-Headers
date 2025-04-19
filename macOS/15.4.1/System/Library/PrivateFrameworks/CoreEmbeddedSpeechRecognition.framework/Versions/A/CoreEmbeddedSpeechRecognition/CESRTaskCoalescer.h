@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface CESRTaskCoalescer : NSObject {
    NSString *_managerName;
    _Atomic unsigned int _eventIdCounter;
    NSMutableDictionary *_taskRegistry;
    unsigned int _transactionCounter;
    double _coalescenceInterval;
    double _coalescenceDelay;
    NSObject<OS_dispatch_queue> *_taskRegistryQueue;
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
}

@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;

+ (BOOL)isTaskCoalescenceDisabled;
+ (void)setTaskCoalescenceDisabled:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)wait;
- (void)_beginTransaction;
- (void)_endTransaction;
- (BOOL)_didIncomingTask:(id)a0 arriveInCoalescingWindowWithLastTask:(id)a1;
- (void)submitTaskWithId:(unsigned short)a0 taskBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)initWithManagerName:(id)a0 coalescenceInterval:(double)a1 coalescenceDelay:(double)a2 executionQueue:(id)a3;

@end
