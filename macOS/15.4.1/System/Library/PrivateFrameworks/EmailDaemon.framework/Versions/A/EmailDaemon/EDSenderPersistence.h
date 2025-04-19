@class NSString, EMBlockedSenderManager, EFLazyCache, _EDSentToFilter, CNContactStore, EFSQLTableSchema, EDPersistenceHookRegistry, EDPersistenceDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface EDSenderPersistence : NSObject <EDMessageChangeHookResponder, EDProtectedDatabasePersistenceReconciliationMergeHandler, EFContentProtectionObserver, EDPersistenceDatabaseSchemaProvider> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _contactStoreLock;
}

@property (class, readonly, nonatomic) EFSQLTableSchema *sendersTableSchema;
@property (class, readonly, nonatomic) EFSQLTableSchema *senderAddressesTableSchema;
@property (class, readonly, copy, nonatomic) NSString *sendersTableName;
@property (class, readonly, copy, nonatomic) NSString *sendersBucketColumnName;
@property (class, readonly, copy, nonatomic) NSString *sendersCategoryColumnName;
@property (class, readonly, copy, nonatomic) NSString *senderAddressesTableName;
@property (class, readonly, copy, nonatomic) NSString *senderAddressesSenderColumnName;
@property (class, readonly, copy, nonatomic) NSString *senderAddressesAddressColumnName;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) EFLazyCache *emailAddressToBucketCache;
@property (readonly, nonatomic) EFLazyCache *databaseIDToEmailAddressCache;
@property (readonly, nonatomic) _EDSentToFilter *sentToAddressesFilter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sentToAddressesQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addJoinsForSenderBucketToSelectStatement:(id)a0 withSourceAddressColumn:(id)a1;
+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;

- (void).cxx_destruct;
- (void)_invalidateCaches;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (BOOL)_addNewSendersForEmailAddresses:(id)a0 toBucket:(long long)a1 connection:(id)a2 newSenders:(id *)a3;
- (BOOL)_addAddressesWithDatabaseIDs:(id)a0 toSenderWithDatabaseID:(id)a1 connection:(id)a2 error:(id *)a3;
- (BOOL)_addNewSender:(id)a0 toCategoryType:(unsigned long long)a1 connection:(id)a2;
- (BOOL)_addNewSenderWithAddressIDs:(id)a0 contactIdentifier:(id)a1 toBucket:(long long)a2 categoryType:(unsigned long long)a3 connection:(id)a4 senderDatabaseID:(long long *)a5;
- (BOOL)_addNewSenderWithAddressIDs:(id)a0 contactIdentifier:(id)a1 toBucket:(long long)a2 connection:(id)a3 senderDatabaseID:(long long *)a4;
- (BOOL)_addNewSendersForEmailAddresses:(id)a0 toBucket:(long long)a1 categoryType:(unsigned long long)a2 connection:(id)a3 newSenders:(id *)a4;
- (id)_addressIDsForAddresses:(id)a0 connection:(id)a1;
- (id)_addressIDsGroupedByContactsForAddressesByContact:(id)a0 withConnection:(id)a1 addressesByID:(id *)a2;
- (id)_addressesGroupedByContactForAddresses:(id)a0 unmatchedAddresses:(id *)a1 otherAddressesByContact:(id *)a2;
- (id)_addressesGroupedBySimpleAddressForAddresses:(id)a0;
- (id)_addressesToDatabaseIDsForSelect:(id)a0 addressColumns:(id)a1 connection:(id)a2 error:(id *)a3;
- (id)_addressesToDatabaseIDsForSimpleAddresses:(id)a0 connection:(id)a1;
- (BOOL)_blockOrUnblockSendersForAddresses:(id)a0 block:(BOOL)a1 blockedAddressDatabaseIDs:(id)a2 connection:(id)a3 addressesToUpdate:(id *)a4;
- (void)_blockedSendersDidChange:(id)a0;
- (id)_bucketForSenderAddress:(id)a0;
- (long long)_bucketForSenderWithDatabaseID:(long long)a0 connection:(id)a1;
- (id)_combineDictionary:(id)a0 withDictionary:(id)a1;
- (id)_contactIdentifierForSenderWithDatabaseID:(long long)a0 connection:(id)a1;
- (id)_emailAddressForDatabaseID:(id)a0 connection:(id)a1;
- (void)_invalidateCachesForAddresses:(id)a0;
- (void)_loadSentToFilterFromDisk;
- (void)_moveAddressesFromSentMessagesToPrimaryForMessages:(id)a0;
- (BOOL)_moveSenderWithDatabaseID:(long long)a0 toBucket:(long long)a1 connection:(id)a2;
- (BOOL)_moveSenderWithDatabaseID:(long long)a0 toCategoryType:(unsigned long long)a1 connection:(id)a2;
- (void)_moveSenderWithEmailAddresses:(id)a0 toBucket:(long long)a1 sync:(BOOL)a2 userInitiated:(BOOL)a3;
- (id)_moveSenderWithSimpleEmailAddresses:(id)a0 toBucket:(long long)a1 sync:(BOOL)a2 userInitiated:(BOOL)a3 transactionGeneration:(long long *)a4;
- (id)_moveSendersWithSimpleEmailAddresses:(id)a0 toCategoryType:(unsigned long long)a1 sync:(BOOL)a2 userInitiated:(BOOL)a3 transactionGeneration:(long long *)a4;
- (id)_newlyBlockedAddressesForBlockedAddressDatabaseIDs:(id)a0 connection:(id)a1;
- (id)_newlyUnblockedAddressesForBlockedAddressDatabaseIDs:(id)a0 connection:(id)a1;
- (void)_persistenceDidAddMessages:(id)a0;
- (void)_reloadBlockedSendersWithAddresses:(id)a0;
- (void)_setIsBlocked:(BOOL)a0 forAddresses:(id)a1;
- (id)_simpleAddressesForAddresses:(id)a0;
- (id)_simpleAddressesInBucket:(long long)a0 connection:(id)a1;
- (id)_simpleAddressesNotInBucket:(long long)a0 withMessagesNewerThan:(id)a1 connection:(id)a2;
- (void)_updateBlockedSendersWithBlockedSenderAddresses:(id)a0 newlyBlockedAddresses:(id /* block */)a1 newlyUnblockedAddresses:(id /* block */)a2;
- (void)_updateSentToFilter;
- (void)addAddresses:(id)a0 toSender:(id)a1;
- (BOOL)bucketForSenderAddress:(id)a0 bucket:(long long *)a1;
- (BOOL)bucketsForSenderAddresses:(id)a0 buckets:(id *)a1;
- (unsigned long long)handleReconciliationMergeErrorForTable:(id)a0 columnName:(id)a1 statement:(id)a2 journalRowID:(id)a3 protectedRowID:(id)a4 connection:(id)a5 rowsUpdated:(unsigned long long *)a6 error:(id *)a7;
- (id)initWithDatabase:(id)a0 blockedSenderManager:(id)a1 hookRegistry:(id)a2 contactStore:(id)a3;
- (void)moveSender:(id)a0 toCategory:(unsigned long long)a1;
- (void)moveSenderWithEmailAddresses:(id)a0 toBucket:(long long)a1;
- (void)moveSendersWithEmailAddresses:(id)a0 toCategoryType:(unsigned long long)a1;
- (void)persistenceDidAddMessages:(id)a0 generationWindow:(id)a1;
- (void)persistenceDidReconcileJournaledMessages:(id)a0 generationWindow:(id)a1;
- (id)relevantSendersForSearch;
- (void)removeAddresses:(id)a0 fromSender:(id)a1;
- (void)scheduleRecurringActivity;
- (void)test_tearDown;
- (unsigned long long)userHasSentToSenderAddress:(id)a0;

@end
