@interface _CFPasteboardClientConnectionContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct __CFArray { } *_cleanupBlocks;
}

- (void)dealloc;
- (id)init;
- (void)cleanup;
- (void)addCleanupBlock:(id /* block */)a0;

@end
