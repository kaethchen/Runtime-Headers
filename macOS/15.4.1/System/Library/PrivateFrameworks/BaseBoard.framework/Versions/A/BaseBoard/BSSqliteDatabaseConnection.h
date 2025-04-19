@class NSCache, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface BSSqliteDatabaseConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct sqlite3 { } *_queue_dbConnection;
    NSCache *_queue_queryCache;
    NSHashTable *_queue_observers;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (BOOL)truncateDatabaseAndReturnError:(out id *)a0;
- (id)initWithFileURL:(id)a0 dataProtectionClass:(unsigned long long)a1;
- (id)initWithInMemoryDatabase;
- (id)prepareStatement:(id)a0;

@end
