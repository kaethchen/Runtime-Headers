@class NSString, NSURL, NSHashTable, NSObject;
@protocol OS_os_log;

@interface EFSQLConnection : NSObject <EFLoggable> {
    NSHashTable *_preparedStatements;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) struct sqlite3 { } *sqlDB;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSuccessResultCode:(int)a0 forStep:(BOOL)a1 error:(id *)a2;
+ (BOOL)setFileProtection:(id)a0 forDatabaseAtURL:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (BOOL)openWithError:(id *)a0;
- (void)flush;
- (id)initWithInMemoryDatabase;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (BOOL)_isSuccessResultCode:(int)a0 sqlDB:(struct sqlite3 { } *)a1 error:(id *)a2;
- (BOOL)beginTransaction:(long long)a0 error:(id *)a1;
- (BOOL)finalizeStatementsWithError:(id *)a0;
- (id)initWithSQLDB:(struct sqlite3 { } *)a0;
- (BOOL)openWithFlags:(int)a0 error:(id *)a1;
- (id)preparedStatementForQueryString:(id)a0 transactionLabel:(id)a1 queryLogger:(id)a2;
- (id)test_resultsForQueryString:(id)a0;

@end
