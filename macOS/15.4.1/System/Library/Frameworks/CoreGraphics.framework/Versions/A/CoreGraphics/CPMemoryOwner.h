@interface CPMemoryOwner : NSObject <CPDisposable> {
    void *memory;
}

- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initWithAllocatedMemory:(void *)a0;

@end
