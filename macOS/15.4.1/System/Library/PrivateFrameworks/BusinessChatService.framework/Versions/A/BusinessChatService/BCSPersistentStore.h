@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BCSPersistentStore : NSObject <BCSBatchable>

@property (nonatomic) long long batchCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) struct sqlite3 { } *openedDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const char *)debugQueueName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginTransaction;
- (void)endTransaction;
- (id)databasePath;
- (const char *)schema;
- (long long)schemaVersion;
- (BOOL)_setDatabaseSchemaVersion:(long long)a0 forDatabase:(struct sqlite3 { } *)a1;
- (void)endBatch;
- (struct sqlite3 { } *)_createDatabaseFileAtPath:(id)a0;
- (long long)_databaseSchemaVersionForDatabase:(struct sqlite3 { } *)a0;
- (BOOL)_generateTableWithDatabase:(struct sqlite3 { } *)a0;
- (void)beginBatch;
- (BOOL)deleteDatabaseFile;
- (void)queue_closeDatabase;
- (void)queue_openDatabaseIfNecessary;
- (void)schemaVersionDidChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;
- (void)schemaVersionWillChangeForDatabase:(struct sqlite3 { } *)a0 fromSchemaVersion:(long long)a1 toSchemaVersion:(long long)a2;

@end
