@class NSArray, NSString, CKModifySubscriptionsOperationInfo, NSMutableDictionary, NSMutableArray;
@protocol CKModifySubscriptionsOperationCallbacks;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation <CKModifySubscriptionsOperationCallbacks> {
    NSMutableArray *_savedSubscriptions;
    NSMutableArray *_deletedSubscriptionIDs;
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;
    NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, nonatomic) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifySubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perSubscriptionSaveBlock_wrapper;
@property (copy, nonatomic) id /* block */ perSubscriptionDeleteBlock_wrapper;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock_wrapper;
@property (copy, nonatomic) NSArray *subscriptionsToSave;
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete;
@property (copy, nonatomic) id /* block */ perSubscriptionSaveBlock;
@property (copy, nonatomic) id /* block */ perSubscriptionDeleteBlock;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionsToSave:(id)a0 subscriptionIDsToDelete:(id)a1;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleSubscriptionDeleteForSubscriptionID:(id)a0 error:(id)a1;
- (void)handleSubscriptionSaveForSubscriptionID:(id)a0 error:(id)a1;
- (BOOL)hasCKOperationCallbacksSet;
- (void)setModifySubscriptionsCompletionBlockIVar:(id /* block */)a0;

@end
