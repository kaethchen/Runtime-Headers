@interface NoOpErrorAnalyzer : NSObject <SyncErrorAnalyzing>

- (long long)responseForError:(id)a0 attempt:(long long)a1 retryInterval:(id *)a2;
- (BOOL)wasUnknownItem:(id)a0;
- (BOOL)wasMissingKeys:(id)a0;
- (id)errorsFromPartialFailure:(id)a0;
- (BOOL)isCKErrorPartialFailure:(id)a0;
- (BOOL)wasAssetNotAvailable:(id)a0;
- (BOOL)wasBatchFailure:(id)a0;
- (BOOL)wasBatchSizeFailure:(id)a0;
- (BOOL)wasDuplicateRecordFound:(id)a0;
- (BOOL)wasOutOfSyncConditionsInError:(id)a0;
- (BOOL)wasQuotaExceededInError:(id)a0;
- (BOOL)wasRecordAlreadyChanged:(id)a0;
- (BOOL)wasRecordArchived:(id)a0;
- (BOOL)wasRecordSizeFailure:(id)a0;
- (BOOL)wasTokenExpired:(id)a0;
- (BOOL)wasZoneDeletedByUserInError:(id)a0;
- (BOOL)wasZoneNotCreated:(id)a0;
- (BOOL)wasZoneNotFound:(id)a0;

@end
