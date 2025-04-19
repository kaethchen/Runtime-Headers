@class NSString, CPLPlatformObject, CPLBatchExtractionStrategy, NSMutableDictionary, NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject> {
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    double _lastApproximativeUploadRate;
    NSMutableDictionary *_pushObservers;
}

@property (retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)status;
- (unsigned long long)scopeType;
- (void)addPushObserver:(id /* block */)a0 withIdentifier:(id)a1;
- (id)_outgoingResources;
- (id)_timingStatisticStatuses;
- (BOOL)acknowledgeContributorsUpdates:(id)a0 error:(id *)a1;
- (id)allChangesWithClass:(Class)a0 relatedScopedIdentifier:(id)a1;
- (id)allChangesWithScopeIdentifier:(id)a0;
- (id)changeWithScopedIdentifier:(id)a0;
- (BOOL)checkInBatchStorage:(id)a0 error:(id *)a1;
- (id)checkOutBatchStorageWithPriority:(unsigned long long)a0 error:(id *)a1;
- (id)contributorsUpdatesForScopeWithIdentifier:(id)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)a0;
- (id)countPerFlagsForScopeWithIdentifier:(id)a0;
- (BOOL)deleteAllChangesWithError:(id *)a0;
- (BOOL)deleteRecordsForScopeIndex:(long long)a0 maxCount:(long long)a1 deletedCount:(long long *)a2 error:(id *)a3;
- (BOOL)deleteSharingFlagsWithMaxCount:(unsigned long long)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)discardChangeWithScopedIdentifier:(id)a0 error:(id *)a1;
- (BOOL)getRelatedScopedIdentifier:(id *)a0 forRecordWithScopedIdentifier:(id)a1;
- (BOOL)hasAnyChangeWithRelatedScopedIdentifier:(id)a0;
- (BOOL)hasChangesInScopeWithIdentifier:(id)a0;
- (BOOL)hasChangesWithPriorityGreaterThanPriority:(unsigned long long)a0 inScopeWithIdentifier:(id)a1;
- (BOOL)hasChangesWithPriorityLowerThanPriority:(unsigned long long)a0 inScopeWithIdentifier:(id)a1;
- (BOOL)hasChangesWithRelatedScopedIdentifier:(id)a0 class:(Class)a1;
- (BOOL)hasChangesWithScopeFilter:(id)a0;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)a0;
- (id)initWithEngineStore:(id)a0 name:(id)a1;
- (unsigned long long)maximumResourceSizePerBatchForRemainingTime:(double)a0;
- (unsigned long long)minimumPriorityForChangesInScopeWithIdentifier:(id)a0;
- (void)notePushRepositoryStoredSomeChanges;
- (BOOL)reinjectChange:(id)a0 dequeueOrder:(long long)a1 overwrittenRecord:(BOOL *)a2 error:(id *)a3;
- (BOOL)reinjectChange:(id)a0 priority:(unsigned long long)a1 error:(id *)a2;
- (BOOL)reinjectExtractedBatch:(id)a0 overwrittenRecordIdentifiers:(id *)a1 error:(id *)a2;
- (void)removePushObserverWithIdentifier:(id)a0;
- (BOOL)resetPriorityForScopeWithIdentifier:(id)a0 maxCount:(unsigned long long)a1 hasMore:(BOOL *)a2 error:(id *)a3;
- (id)scopedIdentifiersForChangesWithFlag:(long long)a0 forScopeWithIdentifier:(id)a1;
- (BOOL)storeChange:(id)a0 pushContext:(id)a1 error:(id *)a2;
- (BOOL)storeExtractedBatch:(id)a0 error:(id *)a1;
- (id)storedExtractedBatch;
- (void)updateApproximativeUploadRate:(double)a0;
- (void)updateTimingStatisticForKey:(id)a0 duration:(double)a1 recordCount:(unsigned long long)a2 error:(BOOL)a3 cancelled:(BOOL)a4;

@end
