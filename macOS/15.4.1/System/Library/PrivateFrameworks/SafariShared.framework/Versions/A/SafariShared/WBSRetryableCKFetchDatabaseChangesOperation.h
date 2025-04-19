@class CKServerChangeToken;

@interface WBSRetryableCKFetchDatabaseChangesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
@property (copy, nonatomic) id /* block */ changeTokenUpdatedBlock;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;

- (void).cxx_destruct;
- (id)_makeOperation;
- (void)_setUpOperation:(id)a0;

@end
