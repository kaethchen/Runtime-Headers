@class CKSQLiteTOCTableGroup, NSMutableDictionary, CKSQLiteDatabaseManager, NSDictionary, NSError, NSObject, CKSQLiteDatabase;

@interface CKSQLiteTableGroup : CKSQLiteTableGroupEntry <CKSQLiteDatabaseKeyValueProperties> {
    BOOL _valid;
    NSMutableDictionary *_pendingTables;
    NSError *_addTableError;
    CKSQLiteDatabaseManager *_databaseManager;
    NSDictionary *_tablesByName;
    BOOL _deleteTablesOnDealloc;
}

@property (readonly, nonatomic) CKSQLiteTOCTableGroup *tocTableGroup;
@property (retain, nonatomic) NSObject *databaseManagerData;
@property (readonly, nonatomic) CKSQLiteDatabase *db;
@property (readonly, nonatomic) BOOL isNew;
@property (readonly, nonatomic) BOOL isFirstInstance;
@property (readonly, nonatomic) unsigned long long options;
@property (retain, nonatomic) CKSQLiteDatabase *activityPersistenceDatabase;

+ (void)enumerateGroupsInDatabase:(id)a0 block:(id /* block */)a1;
+ (void)expireGroup:(id)a0 reason:(id)a1 database:(id)a2;
+ (id)groupEntryInDatabase:(id)a0 withGroupName:(id)a1 error:(id *)a2;
+ (id)groupNameWithDomain:(int)a0 domainIdentifier:(id)a1 groupName:(id)a2;
+ (void)groupWillExpire:(id)a0;
+ (id)lookupTableGroupInstanceInCache:(id)a0 withName:(id)a1 options:(unsigned long long)a2;
+ (void)purgeGroup:(id)a0;
+ (void)purgeGroupWithName:(id)a0 inDatabase:(id)a1;
+ (BOOL)rebootShouldClearData;
+ (id)tableGroupInDatabase:(id)a0 withID:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
+ (id)tableGroupInDatabase:(id)a0 withName:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)tableGroupWithEntry:(id)a0 database:(id)a1 options:(unsigned long long)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)performTransaction:(id /* block */)a0;
- (id)_purge;
- (id)dbTableNameForLogicalTableName:(id)a0;
- (id)UUIDValueForKey:(id)a0 error:(id *)a1;
- (void)_addExtraTablesForTable:(id)a0;
- (void)_setupActivityEntry:(id)a0;
- (id)_tablesByNameInitializer;
- (void)activityTriggerWasRolledBack;
- (void)activityTriggered:(id)a0;
- (id)allTables;
- (id)createDBTable:(id)a0;
- (id)createTables:(id *)a0;
- (id)dataValueForKey:(id)a0 error:(id *)a1;
- (id)databaseManager:(id *)a0;
- (id)dateValueForKey:(id)a0 error:(id *)a1;
- (id)finishInitializing;
- (void)groupWillPurge;
- (id)initWithName:(id)a0 options:(unsigned long long)a1 database:(id)a2;
- (id)migrateDataFromGroup:(id)a0;
- (id)numberValueForKey:(id)a0 error:(id *)a1;
- (id)performDataMigration:(id)a0;
- (id)performInTransaction:(id /* block */)a0;
- (id)prepareExistingTables;
- (id)prepareNewTables;
- (id)prepareTables;
- (id)requestCallbackForTarget:(id)a0 withDate:(id)a1 coalescingInterval:(double)a2 minimumSeparation:(double)a3;
- (id)requestCallbackWithDate:(id)a0 coalescingInterval:(double)a1 minimumSeparation:(double)a2;
- (void)serialize:(id /* block */)a0;
- (id)setDataValue:(id)a0 forKey:(id)a1;
- (id)setDateValue:(id)a0 forKey:(id)a1;
- (id)setNumberValue:(id)a0 forKey:(id)a1;
- (id)setStringValue:(id)a0 forKey:(id)a1;
- (id)setUUIDValue:(id)a0 forKey:(id)a1;
- (id)stringValueForKey:(id)a0 error:(id *)a1;
- (id)tableWithName:(id)a0;
- (id)tocTable;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;
- (id)updateGroupData:(id)a0;
- (void)updateLastUsedDate;
- (long long)validateTableMatchesTOCEntry:(id)a0;

@end
