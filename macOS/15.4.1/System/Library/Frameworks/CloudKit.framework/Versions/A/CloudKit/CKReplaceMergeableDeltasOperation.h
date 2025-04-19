@class NSArray, NSMutableDictionary, NSString, CKReplaceMergeableDeltasOperationInfo;
@protocol CKReplaceMergeableDeltasOperationCallbacks;

@interface CKReplaceMergeableDeltasOperation : CKDatabaseOperation <CKReplaceMergeableDeltasOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perValueErrors;
@property (readonly, nonatomic) id<CKReplaceMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKReplaceMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *replaceDeltasRequests;
@property (copy, nonatomic) id /* block */ perReplacementBlock;
@property (copy, nonatomic) id /* block */ replaceMergeableDeltasCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleCompletedReplaceDeltasRequest:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithReplaceDeltasRequests:(id)a0;

@end
