@class NSMutableArray;

@interface AMSPromiseSerialQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_items;
    BOOL _processing;
}

- (id)init;
- (void).cxx_destruct;
- (void)processQueue;
- (id)runBinaryPromiseBlock:(id /* block */)a0;
- (id)runPromiseBlock:(id /* block */)a0;

@end
