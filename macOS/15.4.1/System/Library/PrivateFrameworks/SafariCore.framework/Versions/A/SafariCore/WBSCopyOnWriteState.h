@interface WBSCopyOnWriteState : NSObject {
    unsigned long long _count;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void)incrementCount;
- (void)decrementCount;
- (id)forkIfNeededWithHandler:(id /* block */)a0;

@end
