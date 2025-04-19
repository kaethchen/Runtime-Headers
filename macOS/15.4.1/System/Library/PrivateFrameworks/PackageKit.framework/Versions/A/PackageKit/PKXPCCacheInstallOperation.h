@class PKInstallTask;

@interface PKXPCCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

- (id)description;
- (int)installState;
- (void)cancel;
- (void)main;
- (id)_pathForTool:(id)a0;
- (BOOL)_rebuildXPCServiceCacheInSandboxReturningError:(id *)a0;
- (BOOL)_shouldRebuildXPCServiceCache;
- (BOOL)_triggerRebuildOfXPCServiceCacheOnNextRebootReturningError:(id *)a0;

@end
