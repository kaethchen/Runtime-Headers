@class NSString, CKShareMetadata, NSData, NSURL, CKCompleteParticipantVettingOperationInfo;
@protocol CKCompleteParticipantVettingOperationCallbacks;

@interface CKCompleteParticipantVettingOperation : CKOperation <CKCompleteParticipantVettingOperationCallbacks>

@property (copy, nonatomic) NSString *vettingToken;
@property (copy, nonatomic) NSString *vettingEmail;
@property (copy, nonatomic) NSString *vettingPhone;
@property (copy, nonatomic) NSString *routingKey;
@property (copy, nonatomic) NSData *encryptedKey;
@property (copy, nonatomic) NSString *baseToken;
@property (copy, nonatomic) NSString *displayedHostname;
@property (copy, nonatomic) NSURL *reconstructedShareURL;
@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (readonly, nonatomic) id<CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKCompleteParticipantVettingOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ completeParticipantVettingCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleFetchedShareMetadata:(id)a0;
- (void)handleReconstructedShareURL:(id)a0;
- (id)initWithVettingToken:(id)a0 vettingRecord:(id)a1 displayedHostname:(id)a2;

@end
