@class NSRecursiveLock, NSString, NSPersistentStore, NSManagedObjectContext;

@interface ISDFastCDSyncHelper : NSObject {
    NSPersistentStore *_persistentStore;
    NSString *_storagePath;
    NSManagedObjectContext *_syncContext;
    struct sqlite3 { } *_db;
    BOOL _isUpdater;
    struct sqlite3_stmt { } *_updateChangeStatement;
    struct sqlite3_stmt { } *_nextChangesStatement;
    struct sqlite3_stmt { } *_nextChangesForEntityStatement;
    struct sqlite3_stmt { } *_changeWithIdentifierStatement;
    struct sqlite3_stmt { } *_removeChangeStatement;
    struct sqlite3_stmt { } *_deleteAllChangesStatement;
    struct sqlite3_stmt { } *_deleteAllChangesForEntityStatement;
    struct sqlite3_stmt { } *_setObjectForKeyStatement;
    struct sqlite3_stmt { } *_objectForKeyStatement;
    struct sqlite3_stmt { } *_removeObjectForKeyStatement;
    NSRecursiveLock *_lock;
}

- (void)dealloc;
- (id)_objectForKey:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (BOOL)_beginTransaction;
- (BOOL)_prepareStatements;
- (BOOL)isUpToDate;
- (id)storagePath;
- (id)modifiedObjects;
- (BOOL)_commitTransaction;
- (void)setSyncContext:(id)a0;
- (void)_deleteAllChangesForEntity:(id)a0;
- (id)_changeForIdentifier:(id)a0;
- (void)setStoragePath:(id)a0;
- (void)_finishStatements;
- (id)_modificationDateForPath:(id)a0;
- (id)_nextChangesForEntityName:(id)a0;
- (void)_openFastSyncStorage;
- (void)_removeChangeWithIdentifier:(id)a0;
- (void)_storeFastSyncInfos:(id)a0;
- (void)_tryOpeningFastSyncStorage;
- (void)_updateChangeWithIdentifier:(id)a0 withEntityName:(id)a1 asState:(int)a2;
- (void)_updateStorageStateWithModifications:(BOOL)a0;
- (void)clearAllFastSyncInfos;
- (void)clearFastSyncInfosForEntityName:(id)a0;
- (id)initForSyncingWithFastSyncStorageURL:(id)a0;
- (id)initForUpdatingWithPersistentStore:(id)a0 fastSyncStorageURL:(id)a1;
- (id)modifiedObjectsForEntityName:(id)a0;
- (void)removeChange:(id)a0;
- (void)resetFastSyncInfos;
- (void)syncContextDidPushChanges;

@end
