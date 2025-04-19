@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {
    BOOL _deferredCancel;
}

@property (class, nonatomic) BOOL dontAutoRetry;

@property (nonatomic) BOOL highPriority;

- (void)cancel:(BOOL)a0;
- (id)taskIdentifier;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (id)enumerateScopesForTaskInTransaction:(id)a0;
- (id)newScopedTaskWithScope:(id)a0 session:(id)a1 transportScope:(id)a2 clientCacheIdentifier:(id)a3;
- (id)scopeFilterInTransaction:(id)a0;
- (BOOL)shouldSkipScopesWithMissingTransportScope;
- (void)taskDidFinishWithError:(id)a0;

@end
