@class GEOSQLiteDB;

@interface GEONavdCachePersistenceManager : NSObject {
    GEOSQLiteDB *_db;
}

- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (id)entryWithRowId:(long long)a0;
- (long long)numberOfEntries;
- (void)enumerateAllEntriesWithHandler:(id /* block */)a0;
- (void)deleteFromDiskWithKey:(id)a0;
- (long long)dumpToDiskWithKey:(id)a0 value:(id)a1;
- (void)enumerateAllForCacheEntriesWithHandler:(id /* block */)a0;
- (double)nextTimeStampForRefreshTimer;
- (id)readValueWithKey:(id)a0;
- (void)removeAllEntries;

@end
