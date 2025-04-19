@class NSMutableArray;

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *blocks;

- (void).cxx_destruct;
- (id)executionBlocks;
- (BOOL)isAsynchronous;
- (void)main;

@end
