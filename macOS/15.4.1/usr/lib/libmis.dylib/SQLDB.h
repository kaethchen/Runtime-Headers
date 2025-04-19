@class NSURL, NSObject;
@protocol OS_dispatch_semaphore;

@interface SQLDB : NSObject {
    BOOL _readonly;
    NSObject<OS_dispatch_semaphore> *_transactionSem;
    struct sqlite3 { } *_db;
}

@property (readonly, nonatomic) NSURL *dbURL;
@property (readonly, nonatomic) NSURL *walURL;
@property (readonly, nonatomic) NSURL *shmURL;
@property (readonly, nonatomic) double totalSizeMB;

+ (id)databaseWithURL:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)lastInsertRowID;
- (int)checkpoint;
- (id)initWithDatabaseURL:(id)a0;
- (id)initWithDatabaseURL:(id)a0 asReadOnly:(BOOL)a1;
- (void)deleteSetting:(id)a0;
- (int)executeQuery:(id)a0 withBind:(id /* block */)a1 withCancellableResults:(id /* block */)a2;
- (int)executeQuery:(id)a0 withBind:(id /* block */)a1 withResults:(id /* block */)a2;
- (id)readSetting:(id)a0;
- (void)setSetting:(id)a0 toValue:(id)a1;
- (void)setupPermissions;
- (BOOL)setupSchema;
- (unsigned long long)tableRowCount:(id)a0;
- (int)transaction:(id /* block */)a0;
- (int)transaction:(id /* block */)a0 immediate:(BOOL)a1;

@end
