@class NSArray, CKFetchMergeableDeltasOperationInfo, NSString;
@protocol CKFetchMergeableDeltasOperationCallbacks;

@interface CKFetchMergeableDeltasOperation : CKDatabaseOperation <CKFetchMergeableDeltasOperationCallbacks>

@property (copy, nonatomic) NSArray *mergeableValueIDs;
@property (readonly, nonatomic) id<CKFetchMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;
@property (copy, nonatomic) id /* block */ fetchMergeableDeltasCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleFetchForMergeableValueID:(id)a0 fetchedDeltas:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithMergeableValueIDs:(id)a0;

@end
