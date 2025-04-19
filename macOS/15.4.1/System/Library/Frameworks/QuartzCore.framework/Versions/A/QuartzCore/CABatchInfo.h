@interface CABatchInfo : NSObject {
    unsigned long long _batch_name;
    unsigned int _port;
    struct SpinLock { struct { int x; } _l; } _lock;
    BOOL _invalidated;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)newBatchHandle;
- (id)newXPCBatchHandle;

@end
