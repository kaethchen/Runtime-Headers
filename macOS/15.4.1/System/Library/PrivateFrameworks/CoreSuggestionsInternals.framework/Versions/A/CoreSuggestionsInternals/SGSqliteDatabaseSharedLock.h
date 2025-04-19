@interface SGSqliteDatabaseSharedLock : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (readonly, nonatomic) long long writeTransactionDepth;

- (void)dealloc;
- (id)init;
- (void)runWithLockAcquired:(id /* block */)a0;

@end
