@class CKDeclineSharesOperationInfo, NSArray, NSMutableDictionary, NSString;
@protocol CKDeclineSharesOperationCallbacks;

@interface CKDeclineSharesOperation : CKOperation <CKDeclineSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (readonly, nonatomic) id<CKDeclineSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDeclineSharesOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ declineSharesCompletionBlock;
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
- (void)handleShareDeclineForURL:(id)a0 error:(id)a1;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)setDeclineSharesCompletionBlockIVar:(id /* block */)a0;

@end
