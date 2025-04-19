@class NSString, HDProfile, HKSynchronousObserverSet;

@interface HDSharedSummaryManager : NSObject <HDCloudSyncSharedSummaryManager> {
    HDProfile *_profile;
    NSString *_deviceIdentifier;
    HKSynchronousObserverSet *_observers;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (BOOL)deleteAllTransactionsWithError:(id *)a0;
- (BOOL)discardTransactionEntity:(id)a0 error:(id *)a1;
- (BOOL)addMetadata:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (BOOL)addOrReuseReceivedSharedSummaries:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (BOOL)addSharedSummaries:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (id)commitTransactionEntity:(id)a0 error:(id *)a1;
- (id)createNewTransactionWithUUID:(id)a0 error:(id *)a1;
- (id)createReceivedTransactionWithUUID:(id)a0 sourceDeviceIdentifier:(id)a1 metadata:(id)a2 error:(id *)a3;
- (BOOL)deleteTransactions:(id)a0 error:(id *)a1;
- (id)deviceIdentifierWithError:(id *)a0;
- (BOOL)enumerateCommittedTransactionsWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)enumerateNonCommittedTransactionsWithError:(id *)a0 handler:(id /* block */)a1;
- (BOOL)enumerateSummariesInTransaction:(id)a0 package:(id)a1 names:(id)a2 includedObjectTypes:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
- (BOOL)enumerateSummariesInTransactionEntity:(id)a0 package:(id)a1 names:(id)a2 error:(id *)a3 handler:(id /* block */)a4;
- (id)fetchAllTransactionsWithError:(id *)a0;
- (id)fetchCommittedTransactionsWithError:(id *)a0;
- (id)mostRecentTransactionCreationDateWithError:(id *)a0;
- (BOOL)prepareAndCommitTransactionWithUUID:(id)a0 sourceDeviceIdentifier:(id)a1 metadata:(id)a2 sharedSummaries:(id)a3 error:(id *)a4;
- (BOOL)removeSummariesWithPackage:(id)a0 names:(id)a1 transactionEntity:(id)a2 error:(id *)a3;
- (BOOL)removeSummariesWithUUIDs:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (BOOL)reuseSharedSummariesWithPackage:(id)a0 names:(id)a1 transactionEntity:(id)a2 error:(id *)a3;
- (BOOL)reuseSharedSummariesWithUUIDs:(id)a0 transactionEntity:(id)a1 error:(id *)a2;
- (id)transactionWithUUID:(id)a0 requireUncommitted:(BOOL)a1 error:(id *)a2;
- (id)unitTest_transactionForEntity:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;

@end
