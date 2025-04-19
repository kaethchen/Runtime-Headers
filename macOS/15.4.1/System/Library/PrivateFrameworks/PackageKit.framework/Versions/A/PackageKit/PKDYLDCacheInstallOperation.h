@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation {
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

- (id)description;
- (int)installState;
- (void)cancel;
- (void)main;
- (id)_pathForTool:(id)a0;
- (BOOL)_shouldUpdateDYLDSharedCache;
- (BOOL)_updateDYLDSharedCacheInSandboxReturningError:(id *)a0;

@end
