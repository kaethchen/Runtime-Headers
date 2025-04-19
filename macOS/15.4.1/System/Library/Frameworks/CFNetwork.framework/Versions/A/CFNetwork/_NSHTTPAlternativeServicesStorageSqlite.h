@class NSURL, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface _NSHTTPAlternativeServicesStorageSqlite : NSObject {
    NSURL *_path;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _garbageCollectionDispatched;
    BOOL _dbInitialized;
    BOOL _isMemoryStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSMutableSet *memoryEntries;
    NSMutableSet *clearEntries;
    struct sqlite3 { } *dbConnection;
    struct sqlite3_stmt { } *selectAllEntriesStmt;
    struct sqlite3_stmt { } *selectAllValidEntriesStmt;
    struct sqlite3_stmt { } *selectEntriesStmt;
    struct sqlite3_stmt { } *selectEntriesWithRegistrableDomainStmt;
    struct sqlite3_stmt { } *insertEntriesStmt;
    struct sqlite3_stmt { } *deleteWithTimeStmt;
    struct sqlite3_stmt { } *deleteWithHostAndPortStmt;
    struct sqlite3_stmt { } *deleteWithRegistrableDomainStmt;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
