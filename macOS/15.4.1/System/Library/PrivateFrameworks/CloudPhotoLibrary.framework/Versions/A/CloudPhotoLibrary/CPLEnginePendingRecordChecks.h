@class NSString, CPLPlatformObject;

@interface CPLEnginePendingRecordChecks : CPLEngineStorage <CPLAbstractObject>

@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)scopeType;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)dequeueCloudScopedIdentifiersToCheck:(id)a0 error:(id *)a1;
- (BOOL)enqueueCloudScopedIdentifiersToCheck:(id)a0 error:(id *)a1;
- (BOOL)hasRecordsToCheckWithScopeIdentifier:(id)a0;
- (id)nextBatchOfRecordsToCheckWithScopeIdentifier:(id)a0;

@end
