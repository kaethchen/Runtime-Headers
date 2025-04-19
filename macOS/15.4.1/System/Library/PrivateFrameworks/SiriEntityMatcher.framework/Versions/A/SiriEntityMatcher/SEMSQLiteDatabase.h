@class NSString, NSMutableDictionary;

@interface SEMSQLiteDatabase : NSObject <SEMDatabase> {
    struct sqlite3 { } *_handle;
    NSMutableDictionary *_cachedSQLiteStatements;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) long long accessPermission;
@property (readonly, nonatomic) long long threadingMode;
@property (readonly, nonatomic) int dataProtectionClass;
@property (readonly, nonatomic) long long databaseOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)openWithError:(id *)a0;
- (BOOL)closeWithError:(id *)a0;
- (BOOL)beginTransactionWithError:(id *)a0;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)cleanup:(id *)a0;
- (id)executeCommand:(id)a0 options:(unsigned long long)a1;
- (BOOL)executeCommand:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)executeCommandString:(id)a0 error:(id *)a1;
- (id)initWithPath:(id)a0 accessPermission:(long long)a1 threadingMode:(long long)a2 dataProtectionClass:(int)a3 databaseOptions:(long long)a4;
- (int)rowsModified:(id *)a0;

@end
