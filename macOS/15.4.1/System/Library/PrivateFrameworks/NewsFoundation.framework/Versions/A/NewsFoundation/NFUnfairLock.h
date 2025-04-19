@interface NFUnfairLock : NSObject <NFLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    unsigned int _unfairLockOptions;
}

- (id)init;
- (void)lock;
- (void)unlock;
- (id)initWithOptions:(long long)a0;
- (void)assertLocked;
- (void)performWithLockSync:(id /* block */)a0;
- (void)assertNotLocked;

@end
