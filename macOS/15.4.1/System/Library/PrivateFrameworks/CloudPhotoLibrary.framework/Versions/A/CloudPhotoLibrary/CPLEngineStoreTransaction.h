@class NSError, NSString, CPLTransaction, NSThread, NSMutableArray, CPLEngineWriteTransactionBlocker, CPLEngineStore;

@interface CPLEngineStoreTransaction : NSObject {
    NSThread *_currentThread;
    BOOL _forWrite;
    NSMutableArray *_cleanupBlocks;
    CPLTransaction *_dirty;
}

@property (class, readonly, nonatomic) CPLEngineStoreTransaction *currentTransaction;

@property (retain, nonatomic) CPLEngineWriteTransactionBlocker *blocker;
@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL isLibraryClosed;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CPLEngineStore *store;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)addCleanupBlock:(id /* block */)a0;
- (id)redactedDescription;
- (BOOL)canRead;
- (BOOL)canWrite;
- (BOOL)do:(id /* block */)a0;
- (BOOL)_forWrite;
- (void)_releaseDirty;
- (void)_transactionDidFinish;
- (void)_transactionWillBeginOnThread:(id)a0;
- (id)initForWrite:(BOOL)a0 store:(id)a1 identifier:(id)a2 description:(id)a3;

@end
