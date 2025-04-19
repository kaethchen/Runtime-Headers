@interface OSIPurgeSnapshotsElement : OSIInstallQueueElement

- (id)initWithOptions:(id)a0;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (BOOL)_purgeSnapshotsOnVolume:(id)a0 preserveLastSnapshot:(BOOL)a1 deleteAllSnapshotTypes:(BOOL)a2 withError:(id *)a3;
- (double)estimatedTimeToComplete;
- (BOOL)isSkippableSnapshot:(id)a0 deleteAllSnapshotTypes:(BOOL)a1;
- (BOOL)okayToSkip;

@end
