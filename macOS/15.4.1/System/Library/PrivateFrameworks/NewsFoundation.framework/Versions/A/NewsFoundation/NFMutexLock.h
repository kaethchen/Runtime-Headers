@interface NFMutexLock : NSObject <NFLocking> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;
- (id)initWithOptions:(unsigned long long)a0;
- (void)performWithLockSync:(id /* block */)a0;

@end
