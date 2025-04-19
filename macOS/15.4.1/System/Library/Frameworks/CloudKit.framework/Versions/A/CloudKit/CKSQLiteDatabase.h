@class NSData, NSString, CKSQLiteDatabaseManagerTimer, CKSQLiteTOCTableGroup, NSObject, NSMutableArray, NSMutableSet, NSMapTable, CKSignpost;
@protocol OS_dispatch_group;

@interface CKSQLiteDatabase : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    struct { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; _Atomic unsigned long long accessThread; } _serializer;
    struct sqlite3 { } *_db;
    CKSQLiteTOCTableGroup *_tocTableGroup;
    unsigned long long _transactionNestCount;
    CKSignpost *_transactionSignpost;
    NSMutableArray *_transactionCompletionHandlers;
    NSMutableSet *_validatedTableGroups;
    NSObject<OS_dispatch_group> *_databaseGroup;
    CKSQLiteDatabase *_registryDatabase;
}

@property (readonly, nonatomic) NSData *uniquingKey;
@property (readonly, nonatomic) NSMapTable *tableGroupCache;
@property (nonatomic) BOOL isEmpty;
@property (retain, nonatomic) CKSQLiteDatabaseManagerTimer *databaseManagerTimer;
@property (retain, nonatomic) NSObject *databaseManagerData;
@property (readonly, copy, nonatomic) NSString *databaseDirectory;
@property (readonly, nonatomic) BOOL databaseWasCreated;
@property (nonatomic) BOOL removeWhenClosed;
@property (readonly, nonatomic) unsigned long long options;

+ (void)initialize;
+ (id)databaseArchiveWithObject:(id)a0 error:(id *)a1;
+ (BOOL)databaseDidDealloc:(id)a0 timeout:(double)a1;
+ (id)databaseFilePathInDirectory:(id)a0;
+ (id)databaseInDirectory:(id)a0 registryDatabase:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)newInMemoryDatabase:(id *)a0;
+ (void)removeLegacyDatabaseAtPath:(id)a0;
+ (void)resetValidatedDatabases;
+ (id)temporaryDatabaseDirectory;
+ (id)unarchivedObjectOfClass:(id)a0 fromDatabaseArchive:(id)a1 error:(id *)a2;
+ (id)uniquingKeyForDatabaseDirectory:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (long long)lastInsertRowID;
- (id)executeSQL:(id)a0;
- (id)keyValueCleaner;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (void)finalizeHandle:(void *)a0;
- (id)UUIDValueForKey:(id)a0 error:(id *)a1;
- (id)_executeSQL:(const char *)a0;
- (id)_pruneTables;
- (id)_validateVersionNumbers;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (id)allTableNames:(id *)a0;
- (void)assertInTransaction;
- (id)bootstrap;
- (void)closeDatabase;
- (id)createNewDatabase;
- (id)dataValueForKey:(id)a0 error:(id *)a1;
- (id)databaseFilePath;
- (id)databaseManager:(id *)a0;
- (id)dateValueForKey:(id)a0 error:(id *)a1;
- (id)deallocToken;
- (id)dropTable:(id)a0;
- (void)handleDatabaseBusy:(id)a0;
- (id)initWithDatabaseDirectory:(id)a0 registryDatabase:(id)a1 options:(unsigned long long)a2;
- (id)numberValueForKey:(id)a0 error:(id *)a1;
- (id)openExistingDatabase:(BOOL)a0;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)performInDatabaseTransaction:(id /* block */)a0;
- (id)removeDatabaseDirectory;
- (void)removeValidatedTableGroup:(id)a0;
- (id)setDataValue:(id)a0 forKey:(id)a1;
- (id)setDateValue:(id)a0 forKey:(id)a1;
- (id)setNumberValue:(id)a0 forKey:(id)a1;
- (id)setStringValue:(id)a0 forKey:(id)a1;
- (id)setUUIDValue:(id)a0 forKey:(id)a1;
- (void)setupDatabaseConnection;
- (id)sqlErrorWithMessage:(id)a0;
- (id)stringValueForKey:(id)a0 error:(id *)a1;
- (void)tableGroupPassedValidation:(id)a0;
- (BOOL)tableGroupWasPreviouslyValidated:(id)a0;
- (id)tocTableGroup;
- (void)traceSQL;
- (void)usingTableGroupCachePerformBlock:(id /* block */)a0;
- (id)validateOpenDatabase;

@end
