@class NSMutableDictionary, NSDictionary, NSMutableSet, CKFetchRecordZoneChangesOperationInfo, NSArray, NSString;
@protocol CKFetchRecordZoneChangesOperationCallbacks;

@interface CKFetchRecordZoneChangesOperation : CKDatabaseOperation <CKFetchRecordZoneChangesOperationCallbacks> {
    unsigned long long _mergeableValueCount;
    unsigned long long _mergeableDeltaCount;
    unsigned long long _assetBackedMergeableDeltaCount;
}

@property (copy, nonatomic) NSDictionary *optionsByRecordZoneID;
@property (retain, nonatomic) NSMutableDictionary *statusByZoneID;
@property (retain, nonatomic) NSMutableSet *zoneIDsWithPendingArchivedRecords;
@property (retain, nonatomic) NSMutableSet *zoneIDsWithSyncObligations;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (copy, nonatomic) NSDictionary *supplementalChangeTokenByZoneID;
@property (copy, nonatomic) id /* block */ perRecordChangeCompletionBlock;
@property (nonatomic) BOOL shouldReportAllPerItemFailures;
@property (readonly, nonatomic) id<CKFetchRecordZoneChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ recordWasChangedBlock_wrapper;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock_wrapper;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ zoneAttributesChangedBlock_wrapper;
@property (nonatomic) long long errorReportingStyle;
@property (copy, nonatomic) id /* block */ zoneAttributesChangedBlock;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWasChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecordZoneIDs:(id)a0 optionsByRecordZoneID:(id)a1;
- (id)initWithRecordZoneIDs:(id)a0 configurationsByRecordZoneID:(id)a1;
- (id)recordZoneChangesStatusByZoneID;
- (id)relevantZoneIDs;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)handleAttributesChangedForZone:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (long long)changeTypesFromSetCallbacks;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleChangeForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (void)handleChangeSetCompletionForRecordZoneID:(id)a0 serverChangeToken:(id)a1 clientChangeTokenData:(id)a2 recordChangesStatus:(long long)a3 hasPendingArchivedRecords:(BOOL)a4 syncObligationZoneIDs:(id)a5 error:(id)a6 reply:(id /* block */)a7;
- (void)handleDeleteForRecordID:(id)a0 recordType:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)partialFailureForItemsInZone:(id)a0;
- (void)performCKOperation;
- (id)recordZoneIDsWithPendingArchivedRecords;
- (id)recordZoneIDsWithSyncObligations;
- (void)setRecordZoneFetchCompletionBlockIVar:(id /* block */)a0;

@end
