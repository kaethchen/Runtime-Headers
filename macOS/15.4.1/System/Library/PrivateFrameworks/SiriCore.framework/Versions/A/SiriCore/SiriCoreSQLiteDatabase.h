@class NSString, NSCache;

@interface SiriCoreSQLiteDatabase : NSObject {
    struct sqlite3 { } *_handle;
    NSCache *_cachedSQLiteStatementsByQueryString;
}

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) long long dataProtectionClass;
@property (readonly, nonatomic) long long options;

- (void).cxx_destruct;
- (BOOL)openWithError:(id *)a0;
- (BOOL)executeQuery:(id)a0 error:(id *)a1;
- (id)executeQuery:(id)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)vacuumWithError:(id *)a0;
- (BOOL)performIntegrityCheckWithError:(id *)a0;
- (BOOL)releaseSavepointWithName:(id)a0 error:(id *)a1;
- (BOOL)alterTableWithName:(id)a0 addColumn:(id)a1 error:(id *)a2;
- (BOOL)alterTableWithName:(id)a0 renameTo:(id)a1 error:(id *)a2;
- (BOOL)checkpointWriteAheadLogWithError:(id *)a0;
- (unsigned long long)countValuesInTableWithName:(id)a0 columnName:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 range:(id)a5 error:(id *)a6;
- (BOOL)createIndex:(id)a0 error:(id *)a1;
- (BOOL)createTable:(id)a0 error:(id *)a1;
- (BOOL)deleteFromTableWithName:(id)a0 indexedBy:(id)a1 criterion:(id)a2 error:(id *)a3;
- (BOOL)dropIndexWithName:(id)a0 error:(id *)a1;
- (BOOL)dropTableWithName:(id)a0 error:(id *)a1;
- (BOOL)executeQueryString:(id)a0 error:(id *)a1;
- (id)fetchTableNamesWithError:(id *)a0;
- (id)fetchTableWithName:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 dataProtectionClass:(long long)a1 options:(long long)a2;
- (BOOL)insertIntoTableWithName:(id)a0 record:(id)a1 error:(id *)a2;
- (BOOL)insertIntoTableWithName:(id)a0 valueMap:(id)a1 error:(id *)a2;
- (BOOL)performForeignKeyCheckWithError:(id *)a0;
- (BOOL)performQuickCheckWithError:(id *)a0;
- (BOOL)rollbackToSavepointWithName:(id)a0 error:(id *)a1;
- (BOOL)savepointWithName:(id)a0 error:(id *)a1;
- (id)selectRecordsFromTableWithName:(id)a0 columnNames:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 recordBuilder:(id)a7 error:(id *)a8;
- (id)selectValueMapsFromTableWithName:(id)a0 columnNames:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 error:(id *)a7;
- (id)selectValueTuplesFromTableWithName:(id)a0 columnNames:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 error:(id *)a7;
- (id)selectValuesFromTableWithName:(id)a0 columnName:(id)a1 behavior:(long long)a2 indexedBy:(id)a3 criterion:(id)a4 order:(id)a5 range:(id)a6 error:(id *)a7;
- (BOOL)updateTableWithName:(id)a0 columnName:(id)a1 columnValue:(id)a2 criterion:(id)a3 error:(id *)a4;
- (BOOL)updateTableWithName:(id)a0 valueMap:(id)a1 criterion:(id)a2 error:(id *)a3;

@end
