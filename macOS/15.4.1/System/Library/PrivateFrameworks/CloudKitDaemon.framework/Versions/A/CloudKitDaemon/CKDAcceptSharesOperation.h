@class NSMutableDictionary, NSMutableArray;
@protocol CKDOperationCallbackProxy, CKAcceptSharesOperationCallbacks;

@interface CKDAcceptSharesOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (retain, nonatomic) NSMutableArray *shareURLsToAccept;
@property (retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL;
@property (nonatomic) unsigned long long numShareAcceptAttempts;
@property (nonatomic) BOOL canSynchronizeUserKeyRegistry;
@property (retain, nonatomic) NSMutableDictionary *URLsWaitingKRSByServiceType;
@property (retain, nonatomic) NSMutableDictionary *anonymousShareTuplesAcceptAttempted;
@property (retain, nonatomic) NSMutableArray *anonymousShareTuplesAccepted;
@property (retain, nonatomic) id<CKAcceptSharesOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ acceptCompletionBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (int)operationType;
- (BOOL)_acceptShares;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)a0 serviceType:(unsigned long long)a1 forShareWithURL:(id)a2 error:(id *)a3;
- (BOOL)_callingParticipantOONForShareMetadata:(id)a0;
- (void)_decryptShareMetadata;
- (void)_fetchAcceptedShares;
- (void)_fetchMetadataForShares;
- (void)_handleShareURLAccepted:(id)a0 forShare:(id)a1 responseCode:(id)a2;
- (id)_keySwapForOONParticipant:(id)a0;
- (void)_performCallbackForURL:(id)a0 withShare:(id)a1 error:(id)a2;
- (void)_prepareShareMetadata;
- (void)_processAnonymousShares;
- (void)_synchronizeUserKeyRegistryIfNeeded;
- (void)_validateInvitedPCSCanBeDecryptedForShare:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (unsigned long long)sharingServiceTypeForShareMetadata:(id)a0;

@end
