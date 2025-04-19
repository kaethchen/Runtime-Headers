@class NSObject;
@protocol OS_os_transaction;

@interface BWDeferredTransactionBroker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct _recursiveTransaction { NSObject<OS_os_transaction> *transaction; unsigned int opens; } _openTransactions[5];
}

+ (id)sharedInstance;

- (void)exitImmediately;
- (void)closeTransaction:(int)a0;
- (void)openTransaction:(int)a0;
- (void)openTransaction:(int)a0 name:(id)a1;
- (void)openTransaction:(int)a0 pid:(int)a1;

@end
