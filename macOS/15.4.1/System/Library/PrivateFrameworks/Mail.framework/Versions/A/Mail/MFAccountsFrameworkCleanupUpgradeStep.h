@class NSArray, NSDictionary;

@interface MFAccountsFrameworkCleanupUpgradeStep : MFRemoveMessagesUpgradeStep

@property (copy, nonatomic) NSArray *systemAccountURLs;
@property (copy, nonatomic) NSDictionary *systemAccountIdentifiersByV1V2PersistenceAccountUID;
@property (copy, nonatomic) NSDictionary *systemAccountsURLByV1V2PersistenceAccountURL;
@property (copy, nonatomic) NSDictionary *v1V2PersistenceAccountURLBySystemAccountURL;
@property (copy, nonatomic) NSDictionary *syncableSystemAccountURLBySyncableV1V2PersistenceAccountURL;
@property (copy, nonatomic) NSDictionary *connectionHostnameAccountURLBySystemAccountURL;
@property (copy, nonatomic) NSDictionary *systemAccountURLByConnectionHostnameAccountURL;
@property (copy, nonatomic) NSDictionary *syncableSystemAccountURLByConnectionHostnameAccountURL;
@property (copy, nonatomic) NSDictionary *mailboxFileSystemURLByDatabaseURL;

+ (unsigned long long)targetVersion;

- (void).cxx_destruct;
- (void)_cleanupEMLXFilesAndDatabaseForMailboxURLs:(id)a0;
- (id)_fixCriteria:(id)a0;
- (id)_fixCriteriaWithLegacyMailboxURLs:(id)a0;
- (id)_fixV1V2PersistenceAccountURL:(id)a0 syncable:(BOOL)a1;
- (void)_migrateAccountsPathsInMailboxesTable;
- (void)_migrateDefaults;
- (void)_migratePOPAccounts;
- (void)_migratePlistsContainingAccounts;
- (void)_updateMailboxURLsFromDatabase:(id)a0 systemAccountURL:(id)a1;
- (id)_updateRules:(id)a0;
- (id)_updateSignatures:(id)a0;
- (id)_updateSmartMailboxes:(id)a0;
- (id)initWithDatabaseConnection:(id)a0 accounts:(id)a1;
- (void)runWithRowIDsNeedingConversationRecalculation:(id)a0;

@end
