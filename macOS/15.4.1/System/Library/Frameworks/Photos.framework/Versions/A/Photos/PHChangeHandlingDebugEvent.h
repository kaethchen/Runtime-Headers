@interface PHChangeHandlingDebugEvent : PFAbstractStateCaptureEvent

@property unsigned long long kind;
@property BOOL isAuthorizedForChanges;
@property double throttleChangesTimestamp;
@property double waitTimeInterval;
@property double publishTimestamp;
@property unsigned long long publishThreadID;
@property unsigned long long internalObserversCount;
@property unsigned long long externalObserversCount;
@property double distributeInternalTimestamp;
@property double distributeExternalTimestamp;
@property unsigned long long insertedCount;
@property unsigned long long updatedCount;
@property unsigned long long deletedCount;
@property BOOL unknownMergeEvent;
@property unsigned long long fetchResultCount;
@property double preloadTimestamp;
@property unsigned long long fetchResultsToRefetchCount;
@property unsigned long long fetchResultsToClearCount;
@property unsigned long long lastTransactionNumber;
@property long long transactionCount;
@property long long changeCount;
@property BOOL cloudSyncEnabled;
@property double lastSyncTimestamp;
@property double firstSyncTimestamp;

- (id)description;
- (void)reset;
- (void)end;
- (id)eventDescription;
- (void)startProcessPendingChanges;
- (void)startPublishCloudStatus;

@end
