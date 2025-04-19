@class HDSQLiteDatabase, HDDatabase, NSDictionary, NSMutableArray, HDHFDataStore, HDDatabaseTransactionContext, HDOntologyDatabase;
@protocol HDSQLiteDatabaseProvider;

@interface HDDatabaseTransaction : NSObject {
    HDDatabase *_database;
    id<HDSQLiteDatabaseProvider> _databaseProvider;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    BOOL _isActive;
    BOOL _isOutermostTransactionUnprotected;
    BOOL _isHandlingTransactionEnd;
}

@property (readonly, nonatomic) HDOntologyDatabase *ontologyDatabase;
@property (readonly, copy, nonatomic) HDDatabaseTransactionContext *rootContext;
@property (nonatomic) BOOL performingMigration;
@property (readonly, copy, nonatomic) NSDictionary *protectedResources;
@property (readonly, nonatomic) HDDatabase *database;
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (readonly, nonatomic) HDHFDataStore *highFrequencyDataStore;
@property (readonly, nonatomic) long long cacheScope;
@property (readonly, nonatomic) BOOL isWriteTransaction;

- (void)dealloc;
- (void).cxx_destruct;
- (void)requireRollback;
- (id)databaseForEntity:(id)a0;
- (id)databaseForEntityClass:(Class)a0;
- (id)databaseForEntityProtectionClass:(long long)a0;
- (id)initWithDatabase:(id)a0 provider:(id)a1 rootContext:(id)a2;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;
- (BOOL)performWithContext:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
- (void)requestTransactionInterruption;
- (void)transactionDidEndWithError:(id)a0;

@end
