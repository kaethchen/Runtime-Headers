@class NSTimer, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface W5ActivityManager : NSObject {
    NSTimer *_eagerExitTimeout;
    NSTimer *_periodicActiveListTimer;
    NSMutableArray *_active_transactions;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property unsigned long long transactionsStarted;
@property (retain) NSDate *dateFirstTransaction;
@property unsigned long long transactionsCompleted;
@property (copy, nonatomic) id /* block */ alternateExecutionBlockForCleanExit;

+ (id)sharedActivityManager;

- (id)init;
- (void).cxx_destruct;
- (void)_executeTimerBlock;
- (void)debugTimer;
- (BOOL)debugTimerEnabled;
- (void)osTransactionComplete:(id)a0;
- (void)osTransactionCreate:(const char *)a0 transaction:(id)a1;
- (unsigned long long)osTransactionsActive;

@end
