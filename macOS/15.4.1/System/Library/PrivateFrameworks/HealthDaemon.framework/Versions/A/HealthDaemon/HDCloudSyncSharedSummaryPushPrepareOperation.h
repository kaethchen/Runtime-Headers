@class NSArray, NSDictionary, HDCloudSyncCachedZone;

@interface HDCloudSyncSharedSummaryPushPrepareOperation : HDCloudSyncOperation

@property (readonly, copy, nonatomic) NSArray *allTransactions;
@property (readonly, copy, nonatomic) NSArray *pendingAndAcceptedParticipants;
@property (readonly, copy, nonatomic) NSDictionary *authorizationIdentifiersByContactIdentifier;
@property (readonly, copy, nonatomic) HDCloudSyncCachedZone *privateMetadataZone;

- (void).cxx_destruct;
- (void)main;
- (void)_fetchAllTransactionsWithCompletion:(id /* block */)a0;
- (void)_fetchAuthorizationIdentifiersByContactIdentifierForParticipants:(id)a0 completion:(id /* block */)a1;
- (void)_pendingAndAcceptedParticipantRecordsInZone:(id)a0 completion:(id /* block */)a1;

@end
