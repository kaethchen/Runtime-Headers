@class NSData, CKShareMetadata, NSString;
@protocol CKInitiateParticipantVettingOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDInitiateParticipantVettingOperation : CKDOperation

@property (retain, nonatomic) CKShareMetadata *shareMetadata;
@property (retain, nonatomic) NSData *encryptedKey;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) id<CKInitiateParticipantVettingOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ participantVettingProgressBlock;

- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (void)_sendRequest:(BOOL)a0;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)a0 forShareWithURL:(id)a1 error:(id *)a2;
- (id)_encryptedKeyDataWithShareMetadata:(id)a0 error:(id *)a1;
- (void)_handleVettingInitiationProgress:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;

@end
