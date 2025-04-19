@class NSArray;
@protocol CKFetchMergeableDeltasOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKFetchMergeableDeltasOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (void)fetchMergeableDeltas;
- (void)fetchMergeableDeltasRecursivelyForValueIDs:(id)a0 continuationTokens:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleMergeableDeltasFetchedForValueID:(id)a0 fetchedDeltas:(id)a1 result:(id)a2;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (BOOL)supportsClearAssetEncryption;

@end
