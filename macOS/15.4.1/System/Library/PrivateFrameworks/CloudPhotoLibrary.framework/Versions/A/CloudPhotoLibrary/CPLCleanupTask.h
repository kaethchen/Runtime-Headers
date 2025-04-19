@interface CPLCleanupTask : CPLEngineSyncTask

- (void)launch;
- (id)taskIdentifier;
- (void)_doOneIteration;
- (void)_cleanupSharingFlags;
- (void)taskDidFinishWithError:(id)a0;

@end
