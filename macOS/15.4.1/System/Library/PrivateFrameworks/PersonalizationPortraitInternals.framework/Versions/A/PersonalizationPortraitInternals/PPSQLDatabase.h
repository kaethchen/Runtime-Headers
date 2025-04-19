@class NSRecursiveLock, NSString, NSCondition, PPSQLDatabaseHandlePool;

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSRecursiveLock *_writeLock;
    PPSQLDatabaseHandlePool *_handlePool;
    NSCondition *_handlePoolCond;
    NSString *_path;
    NSString *_parentDirectory;
    unsigned char _migrationCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)createTempTableContainingRowsFromQuery:(id)a0 descriptiveTableName:(id)a1 txnWitness:(id)a2 bind:(id /* block */)a3;
+ (id)createTempViewContainingRowsFromQuery:(id)a0 descriptiveTableName:(id)a1 txnWitness:(id)a2;
+ (void)dropTableWithName:(id)a0 txnWitness:(id)a1;
+ (void)dropViewWithName:(id)a0 txnWitness:(id)a1;
+ (id)nonMigratingToolsInstance;
+ (id)nonMigratingToolsInstanceWithParentDirectory:(id)a0;
+ (id)tableNameForTable:(unsigned char)a0;

- (id)init;
- (void).cxx_destruct;
- (id)stats;
- (id)databaseHandle;
- (BOOL)isInMemory;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (BOOL)_removeCorruptionMarker;
- (BOOL)migrateToVersion:(unsigned int)a0;
- (id)parentDirectory;
- (id)checkWithError:(id *)a0;
- (id)_acquireReadOnlyHandleWithClient:(unsigned char)a0;
- (id)_allTables;
- (void)_disableQueryLoggingForHandle:(id)a0;
- (void)_enableQueryLoggingForHandle:(id)a0;
- (BOOL)_handleCorruption;
- (id)_initInStandardParentDirectoryWithPerformMigrations:(BOOL)a0;
- (id)_initWithPath:(id)a0 performMigrations:(BOOL)a1;
- (BOOL)_isCorruptionMarkerPresent;
- (id)_nullableHandleWithClient:(unsigned char)a0;
- (id)_openFreshHandleForClient:(unsigned char)a0;
- (BOOL)_prepareDatabaseHandleForMigration;
- (void)_releaseReadOnlyHandle:(id)a0 client:(unsigned char)a1;
- (id)handleWithClient:(unsigned char)a0;
- (id)initWithParentDirectory:(id)a0 performMigrations:(BOOL)a1;
- (id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(BOOL)a0;
- (unsigned long long)maxSchemaVersion;
- (unsigned char)migration_ConvertLocationDescriptionsToLowercase;
- (BOOL)optimizeDatabaseWithShouldContinueBlock:(id /* block */)a0;
- (void)readTransactionWithClient:(unsigned char)a0 block:(id /* block */)a1;
- (id)sourceStats:(unsigned long long)a0;
- (id)sourceStats:(unsigned long long)a0 forTableWithName:(id)a1 txnWitness:(id)a2;
- (BOOL)unmigrate;
- (BOOL)vacuumDatabaseWithShouldContinueBlock:(id /* block */)a0;
- (void)writeTransactionWithClient:(unsigned char)a0 block:(id /* block */)a1;
- (BOOL)writeTransactionWithClient:(unsigned char)a0 timeoutInSeconds:(double)a1 block:(id /* block */)a2;

@end
