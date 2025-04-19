@class NSArray, NSMutableArray, NSMutableDictionary;

@interface BMSQLDatabase : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_resourceAccessAssertions;
}

@property (readonly, copy, nonatomic) NSArray *privileges;
@property (readonly, nonatomic) BOOL isColumnAccessLoggingEnabled;
@property (readonly, nonatomic) NSMutableArray *accessedColumns;
@property (readonly, nonatomic) struct sqlite3 { } *db;
@property (readonly, nonatomic) NSArray *virtualTables;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)executeQuery:(id)a0;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (id)initWithUseCase:(id)a0;
- (id)SQLSchemaString;
- (BOOL)_attachDatabase:(id)a0 name:(id)a1 error:(id *)a2;
- (id)_executeQuery:(id)a0;
- (BOOL)attachDatabase:(id)a0 name:(id)a1 error:(id *)a2;
- (BOOL)attachDatabaseWithResourceIdentifier:(id)a0 useCase:(id)a1 error:(id *)a2;
- (id)initWithAdditionalVirtualTables:(id)a0 privileges:(id)a1 isColumnAccessLoggingEnabled:(BOOL)a2;
- (id)initWithAdditionalVirtualTables:(id)a0 privileges:(id)a1 isColumnAccessLoggingEnabled:(BOOL)a2 useCase:(id)a3;
- (id)initWithPrivileges:(id)a0 isColumnAccessLoggingEnabled:(BOOL)a1;
- (id)initWithStreams:(id)a0 library:(id)a1 privileges:(id)a2 isColumnAccessLoggingEnabled:(BOOL)a3 error:(id *)a4;
- (id)initWithVirtualTables:(id)a0 privileges:(id)a1 isColumnAccessLoggingEnabled:(BOOL)a2 enableAuthorizer:(BOOL)a3 error:(id *)a4;
- (void)logColumnAccess:(id)a0 tableName:(id)a1;
- (BOOL)registerFunctionWithName:(id)a0 numArgs:(int)a1 function:(id /* block */)a2 error:(id *)a3;
- (BOOL)registerFunctionWithName:(id)a0 numArgs:(int)a1 function:(id /* block */)a2 userData:(id)a3 error:(id *)a4;
- (void)resetColumnAccessLog;
- (id)virtualTableForName:(id)a0;

@end
