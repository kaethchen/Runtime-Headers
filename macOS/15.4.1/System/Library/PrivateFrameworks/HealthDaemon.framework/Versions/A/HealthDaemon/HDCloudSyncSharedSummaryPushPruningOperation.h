@class NSArray, HDCloudSyncSharedSummaryParticipantRecord, NSSet, NSDictionary;

@interface HDCloudSyncSharedSummaryPushPruningOperation : HDCloudSyncOperation {
    NSArray *_authorizationIdentifiers;
    HDCloudSyncSharedSummaryParticipantRecord *_participant;
    NSSet *_allRecordsToSave;
    NSSet *_participantZoneIDsWithNewTransactionsToPush;
    NSDictionary *_existingTransactionRecordsByZoneID;
}

- (void).cxx_destruct;
- (void)main;
- (id)_filterRecordsThatExistInTheCloud:(id)a0;
- (void)_findTransactionsToDelete:(id)a0 existingTransactionRecordsByZoneID:(id)a1 completion:(id /* block */)a2;
- (void)_modifyRecordsAndFinish:(id)a0 recordIDsToDelete:(id)a1;
- (id)_recordIDsForTransactions:(id)a0;
- (id)initWithConfiguration:(id)a0 allRecordsToSave:(id)a1 participantZoneIDsToPush:(id)a2 existingTransactionRecordsByZoneID:(id)a3;

@end
