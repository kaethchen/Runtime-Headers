@interface PLSQLiteDatabase : NSObject {
    struct sqlite3 { } *_database;
}

+ (int)dataProtectionOpenFlagForPath:(id)a0;
+ (id)openDatabaseAtPath:(id)a0 capabilities:(id)a1;
+ (int)setLockProxyFileForDatabase:(struct sqlite3 { } *)a0 lockFilePath:(id)a1;
+ (struct sqlite3 { } *)_openSQLiteDatabaseAtPath:(const char *)a0 capabilities:(id)a1;
+ (int)dataProtectionOpenFlagForCapabilities:(id)a0;

- (BOOL)close;
- (BOOL)commitTransaction;
- (BOOL)rollbackTransaction;
- (BOOL)beginExclusiveTransaction;
- (BOOL)_execute:(id)a0;
- (BOOL)prepareStatement:(id)a0 andStepThroughResultsWithBlock:(id /* block */)a1;
- (BOOL)beginDeferredTransaction;
- (struct sqlite3_stmt { } *)_prepareStatement:(id)a0;
- (id)initWithOpenedSQLite3Database:(struct sqlite3 { } *)a0;
- (BOOL)prepareAndEvaluateStatement:(id)a0;

@end
