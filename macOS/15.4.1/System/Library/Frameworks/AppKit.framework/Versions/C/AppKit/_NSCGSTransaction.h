@class NSMutableDictionary, NSPointerArray, CAFenceHandle, NSMutableSet, NSMutableArray;

@interface _NSCGSTransaction : NSObject {
    NSPointerArray *_preCommitActions[3];
    NSPointerArray *_postCommitActions;
    NSMutableDictionary *_objects;
    struct _SLSTransaction { } *_txn;
    CAFenceHandle *_entanglingHandle;
    NSMutableSet *_entangledContexts;
    NSMutableArray *_entangledFenceHandles;
    NSMutableArray *_entangledFencePorts;
    unsigned char _disallowFurtherEntangling : 1;
    unsigned char _detachedFromCA : 1;
    const void *_disableUpdatesToken;
    struct _SLSTransaction { } *_committedAsyncTxn;
}

+ (void)initialize;
+ (BOOL)isActive;
+ (void)setSynchronous:(BOOL)a0;
+ (id)currentTransaction;

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (void)disableUpdates;
- (void)addActionWithOrder:(long long)a0 usingBlock:(id /* block */)a1;
- (void)addPostCommitAction:(id /* block */)a0;
- (void)entangleContext:(id)a0;
- (void)entangleFenceHandle:(id)a0;
- (void)entangleFencePort:(struct _mach_right_send { unsigned int x0; })a0;
- (id)entanglingFenceHandle;
- (unsigned int)slsTransactionID;

@end
