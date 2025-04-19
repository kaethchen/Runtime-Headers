@class CKAcceptSharesOperationInfo, NSMutableDictionary, NSArray, NSString;
@protocol CKAcceptSharesOperationCallbacks;

@interface CKAcceptSharesOperation : CKOperation <CKAcceptSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (readonly, nonatomic) id<CKAcceptSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKAcceptSharesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock_wrapper;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ acceptSharesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithShareMetadatas:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleShareAcceptanceForURL:(id)a0 share:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;
- (void)setAcceptSharesCompletionBlockIVar:(id /* block */)a0;

@end
