@class NSString, CKUploadMergeableDeltasOperationInfo, NSArray, NSMutableDictionary;
@protocol CKUploadMergeableDeltasOperationCallbacks;

@interface CKUploadMergeableDeltasOperation : CKDatabaseOperation <CKUploadMergeableDeltasOperationCallbacks> {
    NSArray *_deltas;
    NSArray *_replacementRequests;
    NSMutableDictionary *_perItemErrors;
}

@property (readonly, nonatomic) id<CKUploadMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKUploadMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perDeltaCompletionBlock;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;
@property (copy, nonatomic) id /* block */ uploadDeltasCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (void)handleReplacementRequest:(id)a0 error:(id)a1;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleUploadForDeltaIdentifier:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithDeltas:(id)a0 replacementRequests:(id)a1;

@end
