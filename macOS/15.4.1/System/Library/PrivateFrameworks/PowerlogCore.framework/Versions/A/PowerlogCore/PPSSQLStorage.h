@class NSDictionary, NSMutableSet;

@interface PPSSQLStorage : PPSStorage

@property BOOL storageStarted;
@property (retain) NSDictionary *connectionByStorage;
@property (retain) NSMutableSet *entryKeysToSetup;

+ (id)trimConditionsForBGSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForCESQLWithTrimDate:(id)a0;
+ (id)trimConditionsForEPSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForEntryKey:(id)a0 trimDate:(double)a1 currDate:(double)a2;
+ (id)trimConditionsForPLSQLWithTrimDate:(id)a0;
+ (id)trimConditionsForStorage:(int)a0 trimDate:(id)a1;
+ (id)trimConditionsForXCSQLWithTrimDate:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)connectionForKey:(id)a0;
- (void)closeAllConnections;
- (id)BGSQLConnection;
- (id)CESQLConnection;
- (id)PreUnlockEPSQLConnection;
- (void)persistMetadata;
- (id)EPSQLConnection;
- (id)PLSQLConnection;
- (id)XCSQLConnection;
- (void)setupTableForEntryKey:(id)a0 withName:(id)a1;
- (void)createMetadataTable;
- (void)deleteOldMetadataStore;
- (void)handleMetadataVersionChange;
- (void)handleSchemaMismatchForTable:(id)a0;
- (id)metricsToAddForStorage:(id)a0 processedMetrics:(id)a1;
- (id)metricsToUpdateForStorage:(id)a0 processedMetrics:(id)a1;
- (void)setupArrayTableForEntryKey:(id)a0 withName:(id)a1 withConnection:(id)a2;
- (id)setupDBConnectionAtPath:(id)a0;
- (void)setupDBConnections;
- (void)setupDynamicTableForEntryKey:(id)a0 withName:(id)a1 withConnection:(id)a2;
- (void)setupFolders;
- (void)setupMetadataStorage;
- (void)setupStorageForEntryKey:(id)a0;
- (void)setupTableForEntryKey:(id)a0;
- (void)startStorage;
- (int)storageForConnection:(id)a0;
- (void)updateMetadata:(id)a0 updateMetrics:(id)a1 addMetrics:(id)a2;
- (BOOL)updateTable:(id)a0 transferDataForKeys:(id)a1;

@end
