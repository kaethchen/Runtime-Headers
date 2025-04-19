@class NSString, CPLPlatformObject;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (id)targetForRecordWithCloudScopedIdentifier:(id)a0 trustRecordChangeData:(BOOL)a1;
- (id)_invalidCloudCacheErrorWithInvalidRecord:(id)a0 method:(id)a1;
- (id)_otherScopedIdentifierForCloudScopedIdentifier:(id)a0 sharedScoped:(id)a1;
- (id)_targetWithRecord:(id)a0 cloudScopedIdentifier:(id)a1 trustRecordChangeData:(BOOL)a2;
- (id)_targetWithShareableRecord:(id)a0 cloudScopedIdentifier:(id)a1 otherScopedIdentifier:(id)a2 sharedScope:(id)a3 trustRecordChangeData:(BOOL)a4;
- (BOOL)ackownledgeRecordWithScopedIdentifier:(id)a0 error:(id *)a1;
- (BOOL)addRecord:(id)a0 isFinal:(BOOL)a1 error:(id *)a2;
- (id)allRecordsIsFinal:(BOOL)a0;
- (BOOL)applyBatch:(id)a0 isFinal:(BOOL)a1 direction:(unsigned long long)a2 withError:(id *)a3;
- (id)cloudChangeBatchFromBatch:(id)a0 usingMapping:(id)a1 isFinal:(BOOL)a2 withError:(id *)a3;
- (BOOL)commitStagedChangesForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)confirmAllRecordsWithError:(id *)a0;
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (BOOL)deleteRecordWithScopedIdentifier:(id)a0 isFinal:(BOOL)a1 error:(id *)a2;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)discardStagedChangesForScopeWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)discardStagedChangesWithScopeFilter:(id)a0 error:(id *)a1;
- (void)getCommittedRecord:(id *)a0 stagedRecord:(id *)a1 forScopedIdentifier:(id)a2;
- (BOOL)hasAnyRecordWithRelatedScopedIdentifier:(id)a0;
- (BOOL)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)a0;
- (BOOL)hasRecordWithScopedIdentifier:(id)a0;
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)a0;
- (id)recordWithScopedIdentifier:(id)a0 isConfirmed:(BOOL *)a1 isStaged:(BOOL *)a2;
- (id)recordWithScopedIdentifier:(id)a0 isFinal:(BOOL)a1;
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (id)recordsOfClass:(Class)a0 isFinal:(BOOL)a1;
- (id)recordsWithRelatedScopedIdentifier:(id)a0 class:(Class)a1 isFinal:(BOOL)a2;
- (id)recordsWithRelatedScopedIdentifier:(id)a0 isFinal:(BOOL)a1;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)a0 isFinal:(BOOL)a1;
- (BOOL)remapAllRecordsWithPreviousScopedIdentifier:(id)a0 newScopedIdentifier:(id)a1 error:(id *)a2;
- (id)resourceOfType:(unsigned long long)a0 forRecordWithScopedIdentifier:(id)a1 record:(id *)a2 target:(id *)a3 error:(id *)a4;
- (id)targetForRecordWithCloudScopedIdentifier:(id)a0;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)a0;
- (id)targetForRecordWithSharedCloudScopedIdentifier:(id)a0 trustRecordChangeData:(BOOL)a1;
- (BOOL)updateFinalRecord:(id)a0 confirmed:(BOOL)a1 error:(id *)a2;
- (BOOL)updateStagedRecord:(id)a0 error:(id *)a1;
- (void)updateStoredTargetsFromTargetMapping:(id)a0;

@end
