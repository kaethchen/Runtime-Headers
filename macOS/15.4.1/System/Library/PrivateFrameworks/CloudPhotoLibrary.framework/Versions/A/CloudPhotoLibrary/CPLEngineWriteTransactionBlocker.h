@interface CPLEngineWriteTransactionBlocker : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _unblock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)unblock;
- (id)initWithUnblockBlock:(id /* block */)a0;

@end
