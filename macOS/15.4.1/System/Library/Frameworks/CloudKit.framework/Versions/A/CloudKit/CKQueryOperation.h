@class CKQueryCursor, NSArray, NSString, NSMutableDictionary, NSDictionary, CKRecordZoneID, CKQueryOperationInfo, CKQuery;
@protocol CKQueryOperationCallbacks;

@interface CKQueryOperation : CKDatabaseOperation <CKQueryOperationCallbacks> {
    unsigned long long _mergeableValueCount;
    unsigned long long _mergeableDeltaCount;
    unsigned long long _assetBackedMergeableDeltaCount;
}

@property (readonly, nonatomic) id<CKQueryOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKQueryOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ recordMatchedBlock_wrapper;
@property (copy, nonatomic) id /* block */ queryCompletionBlock_wrapper;
@property (copy, nonatomic) CKQueryCursor *resultsCursor;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (nonatomic) BOOL fetchAllResults;
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByKey;
@property (copy, nonatomic) id /* block */ queryCursorFetchedBlock;
@property (copy, nonatomic) CKQuery *query;
@property (copy, nonatomic) CKQueryCursor *cursor;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy, nonatomic) id /* block */ recordMatchedBlock;
@property (copy, nonatomic) id /* block */ queryCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonCallbackCompletionSelector;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithQuery:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (id)initWithCursor:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleOperationDidCompleteWithCursor:(id)a0 metrics:(id)a1 error:(id)a2;
- (void)handleQueryDidFetchCursor:(id)a0 reply:(id /* block */)a1;
- (void)handleQueryDidFetchForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;
- (void)setQueryCompletionBlockIVar:(id /* block */)a0;

@end
