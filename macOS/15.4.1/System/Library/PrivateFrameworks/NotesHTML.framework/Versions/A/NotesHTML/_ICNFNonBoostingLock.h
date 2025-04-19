@interface _ICNFNonBoostingLock : NSObject <NSLocking> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;

@end
