@interface CNUnfairLock : NSObject <NSLocking> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _os_unfair_lock;
}

- (id)description;
- (id)init;
- (void)lock;
- (void)unlock;
- (BOOL)tryLock;
- (void)assertCurrentThreadIsNotOwner;
- (void)assertCurrentThreadIsOwner;

@end
