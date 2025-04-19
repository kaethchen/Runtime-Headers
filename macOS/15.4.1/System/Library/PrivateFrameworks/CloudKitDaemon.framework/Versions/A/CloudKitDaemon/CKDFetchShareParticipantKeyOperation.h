@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol CKFetchShareParticipantKeyOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *shareIDs;
@property (retain, nonatomic) NSDictionary *baseTokensByShareID;
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID;
@property (nonatomic) BOOL hasAttemptedShareUpdate;
@property (retain, nonatomic) id<CKFetchShareParticipantKeyOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ shareParticipantKeyFetchedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)relevantZoneIDs;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)_handleFetchedShare:(id)a0 withID:(id)a1 error:(id)a2;
- (void)_participantKeyFromShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performCallbackForShareID:(id)a0 withParticipantKey:(id)a1 error:(id)a2;
- (void)_sendErrorForFailedShares;
- (void)fetchSharesFromServer;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;
- (void)updateShares;

@end
