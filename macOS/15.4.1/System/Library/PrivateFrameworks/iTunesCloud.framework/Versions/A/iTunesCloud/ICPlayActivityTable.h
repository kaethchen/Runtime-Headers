@class NSString, NSObject, ICSQLiteConnection;
@protocol OS_dispatch_queue;

@interface ICPlayActivityTable : NSObject {
    ICSQLiteConnection *_databaseConnection;
    NSString *_databasePath;
    NSObject<OS_dispatch_queue> *_serialAccessQueue;
}

+ (BOOL)_setupDatabase:(id)a0;
+ (id)_defaultDatabasePath;
+ (id)_eventsDatabaseTableName;
+ (void)_migrateDatabaseFiles;
+ (id)_propertiesDatabaseTableName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabasePath:(id)a0;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (BOOL)_removeDatabaseReturningError:(id *)a0;
- (BOOL)_setValue:(id)a0 forDatabasePropertyKey:(id)a1;
- (id)_valueForDatabasePropertyKey:(id)a0;
- (id)eventsRevisionVersionToken;
- (BOOL)getPlayActivityEvents:(id *)a0 storeAccountID:(long long)a1 limit:(unsigned long long)a2 returningError:(id *)a3;
- (BOOL)getStoreAccounts:(id *)a0 returningError:(id *)a1;
- (BOOL)hasPendingPlayActivityEvents:(BOOL *)a0 returningError:(id *)a1;
- (BOOL)insertPlayActivityEvent:(id)a0 returningError:(id *)a1;
- (BOOL)removePlayActivityEvents:(id)a0 returningError:(id *)a1;

@end
