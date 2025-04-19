@class CKShareAccessRequestOperationInfo, NSArray, NSMutableDictionary, NSString;
@protocol CKShareAccessRequestOperationCallbacks;

@interface CKShareAccessRequestOperation : CKOperation <CKShareAccessRequestOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (readonly, nonatomic) id<CKShareAccessRequestOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKShareAccessRequestOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareURLs;
@property (copy, nonatomic) id /* block */ perShareAccessRequestCompletionBlock;
@property (copy, nonatomic) id /* block */ shareAccessRequestCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithShareURLs:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleShareAccessRequestForURL:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (void)setShareAccessRequestCompletionBlockIVar:(id /* block */)a0;

@end
