@class NSMutableDictionary, PQLConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface EXSGlobalDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (retain, nonatomic) PQLConnection *databaseConnection;
@property BOOL dbConnectionOpen;
@property (retain, nonatomic) NSMutableArray *accountMetadataCache;
@property (retain, nonatomic) NSMutableArray *auditCache;
@property (retain, nonatomic) NSMutableDictionary *changeTrackingCache;
@property (nonatomic) unsigned long long stateToken;

+ (id)sharedInstance;
+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (void)startup;
- (id)_createAccountMetadataForACAccount:(id)a0;
- (id)_createDelegateMetadataForACAccount:(id)a0 delegateKey:(id)a1 email:(id)a2 fullname:(id)a3 readOnly:(BOOL)a4;
- (id)_loadAccountsMetadataFromDatabase;
- (id)_updateAccountMetadataForACAccount:(id)a0;
- (BOOL)_updateDelegateMetadataForDelegateKey:(id)a0 enabledClasses:(unsigned long long)a1;
- (BOOL)_updateDelegateMetadataForDelegateKey:(id)a0 sourceIdentifier:(id)a1;
- (void)auditChangeSource:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)auditChangeSourceAdded:(id)a0;
- (void)auditChangeSourceRemoved:(id)a0;
- (void)auditLogInsertError:(id)a0 description:(id)a1 forAccountID:(long long)a2 changeSourceID:(id)a3 itemID:(long long)a4;
- (void)auditLogInsertMaintenanceActivityMarker;
- (void)auditLogInsertResyncFolderHierarchyForAccountID:(long long)a0 initiatedBy:(id)a1 result:(id)a2;
- (void)auditLogInsertResyncFolderItemsForAccountID:(long long)a0 folderID:(long long)a1 initiatedBy:(id)a2 result:(id)a3;
- (void)auditLogInsertSyncFolderHierarchyForAccountID:(long long)a0 initiatedBy:(id)a1 result:(id)a2;
- (void)auditLogInsertSyncFolderItemsForAccountID:(long long)a0 folderID:(long long)a1 initiatedBy:(id)a2 result:(id)a3;
- (void)cleanupStaleData;
- (id)createAccountMetadataForACAccount:(id)a0;
- (id)createDelegateMetadataForACAccount:(id)a0 delegateKey:(id)a1 email:(id)a2 fullname:(id)a3 readOnly:(BOOL)a4;
- (id)exchangeSyncDirectory;
- (void)fillAuditCacheFromDBUsingConnection:(id)a0;
- (id)loadAccountsMetadataFromDatabase;
- (BOOL)metadataExistsForACAccount:(id)a0;
- (void)migrateToPerAccountDatabases;
- (BOOL)persistAuditLogItemOfType:(long long)a0 timestamp:(id)a1 initiatedBy:(id)a2 description:(id)a3 result:(id)a4 accountID:(long long)a5 changeSourceID:(id)a6 itemID:(long long)a7 usingDBConnection:(id)a8;
- (void)removeAccountMetadata:(id)a0;
- (void)removeAccountMetadataByACAccountID:(id)a0;
- (void)removeAllRecordsForAccountID:(long long)a0;
- (BOOL)removeDatabaseFiles;
- (id)updateAccountMetadataForACAccount:(id)a0;
- (BOOL)updateDelegateMetadataForDelegateKey:(id)a0 enabledClasses:(unsigned long long)a1;
- (BOOL)updateDelegateMetadataForDelegateKey:(id)a0 sourceIdentifier:(id)a1;
- (void)validateDatabaseTableStructure;

@end
