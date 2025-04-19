@class NSMutableArray;

@interface CLSNSOperationsManager : NSObject {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    NSMutableArray *_operations;
}

- (id)init;
- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (unsigned long long)count;
- (void)lock;
- (void)unlock;
- (void)performOperation:(id)a0 onOperationQueue:(id)a1 withTimeOut:(double)a2;
- (void)removeOperation:(id)a0;

@end
