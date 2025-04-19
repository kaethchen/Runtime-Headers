@class NSManagedObjectContext, NSManagedObjectModel, NSMutableDictionary;

@interface NSPersistentDocument : NSDocument {
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    id _store;
    unsigned long long _pDocFlags;
    NSMutableDictionary *_relatedRequestURLs;
}

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (readonly) NSManagedObjectModel *managedObjectModel;

+ (BOOL)_hasOverrideForSelector:(SEL)a0 fromBaseClass:(Class)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (BOOL)_finishWritingToURL:(id)a0 byMovingItemAtURL:(id)a1 addingAttributes:(id)a2 error:(id *)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setFileURL:(id)a0;
- (void)_discardEditing;
- (id)persistentStoreTypeForFileType:(id)a0;
- (void)setUndoManager:(id)a0;
- (void)_commitEditingThenContinue:(id /* block */)a0;
- (BOOL)_configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)_documentEditor:(id)a0 didCommit:(BOOL)a1 withContext:(void *)a2;
- (BOOL)_isAtomicPersistentStoreType:(id)a0;
- (BOOL)_isBeingEdited;
- (BOOL)_movePersistentStore:(id)a0 fromURL:(id)a1 toURL:(id)a2 attributes:(id)a3 error:(id *)a4;
- (id)_persistentStoreCoordinator;
- (void)_releaseRelatedItemsForURL:(id)a0;
- (id)_requestRelatedItemForURL:(id)a0 withLastComponent:(id)a1;
- (void)_requestSQLiteRelatedItemsForURL:(id)a0 attributes:(id)a1;
- (BOOL)_revertToVersion:(id)a0 preservingFirst:(BOOL)a1 error:(id *)a2;
- (BOOL)_unlockAndReturnError:(id *)a0;
- (id)backupFileURL;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)a0 ofType:(id)a1 modelConfiguration:(id)a2 storeOptions:(id)a3 error:(id *)a4;
- (BOOL)hasUndoManager;
- (BOOL)isEntireFileLoaded;
- (void)moveToURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)readFromURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (BOOL)revertToContentsOfURL:(id)a0 ofType:(id)a1 error:(id *)a2;
- (void)setHasUndoManager:(BOOL)a0;
- (BOOL)writeSafelyToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 error:(id *)a3;
- (BOOL)writeToURL:(id)a0 ofType:(id)a1 forSaveOperation:(unsigned long long)a2 originalContentsURL:(id)a3 error:(id *)a4;

@end
