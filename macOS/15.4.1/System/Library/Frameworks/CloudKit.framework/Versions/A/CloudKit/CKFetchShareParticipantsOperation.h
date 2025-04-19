@class NSMutableDictionary, NSArray, NSMutableSet, NSString, CKFetchShareParticipantsOperationInfo;
@protocol CKFetchShareParticipantsOperationCallbacks;

@interface CKFetchShareParticipantsOperation : CKOperation <CKFetchShareParticipantsOperationCallbacks>

@property (retain, nonatomic) NSMutableSet *discoveredUserIdentities;
@property (retain, nonatomic) NSMutableDictionary *lookupErrors;
@property (readonly, nonatomic) id<CKFetchShareParticipantsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchShareParticipantsOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perShareParticipantCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchShareParticipantsCompletionBlock_wrapper;
@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) id /* block */ shareParticipantFetchedBlock;
@property (copy, nonatomic) id /* block */ perShareParticipantCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchShareParticipantsCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserIdentityLookupInfos:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleShareParticipantFetchForLookupInfo:(id)a0 shareParticipant:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;
- (void)setFetchShareParticipantsCompletionBlockIVar:(id /* block */)a0;

@end
