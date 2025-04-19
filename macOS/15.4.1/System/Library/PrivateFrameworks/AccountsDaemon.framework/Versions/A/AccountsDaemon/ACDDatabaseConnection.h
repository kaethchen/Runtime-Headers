@class NSCache, NSObject, NSPersistentStoreCoordinator, NSNumber, NSManagedObjectContext;
@protocol NSObject, OS_dispatch_source, ACDDatabaseConnectionDelegate;

@interface ACDDatabaseConnection : NSObject {
    id<NSObject> _managedObjectContextDidSaveObserver;
    NSCache *_cache;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak, nonatomic) id<ACDDatabaseConnectionDelegate> delegate;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSNumber *keychainVersion;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)rollback;
- (void)_managedObjectContextDidSave:(id)a0;
- (void)deleteObject:(id)a0;
- (BOOL)saveWithError:(id *)a0;
- (id)_managedObjectModel;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1;
- (id)initWithPersistentStoreCoordinator:(id)a0;
- (id)_accountPropertyWithKey:(id)a0 owner:(id)a1;
- (void)_beginObservingManagedObjectContextDidSaveNotifications;
- (void)_delegate_databaseConnectionEncounteredUnrecoverableError:(id)a0;
- (void)_endObservingManagedObjectContextDidSaveNotifications;
- (void)_handleManagedObjectContextError:(id)a0;
- (id)_managedObjectContextModificationDescription;
- (id)_managedObjectModificationDescription:(id)a0;
- (id)_persistentStore;
- (void)_setupManagedObjectContextWithPersistentStoreCoodinator:(id)a0;
- (void)_setupMemoryNotifications;
- (void)_teardownMemoryNotifications;
- (void)_traceDatabaseEvents;
- (unsigned long long)countOfEntityNamed:(id)a0 withPredicate:(id)a1;
- (void)deleteAccountPropertyWithKey:(id)a0 owner:(id)a1;
- (id)existingObjectWithURI:(id)a0;
- (id)fetchObjectsForEntityNamed:(id)a0;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2;
- (id)fetchObjectsForEntityNamed:(id)a0 withPredicate:(id)a1 sortDescriptor:(id)a2 prefetchKeypaths:(id)a3;
- (id)insertNewObjectForEntityForName:(id)a0;
- (id)managedObjectIDForURI:(id)a0;
- (id)objectForObjectURI:(id)a0;
- (BOOL)saveWithError:(id *)a0 rollbackOnFailure:(BOOL)a1;
- (void)setAccountPropertyWithKey:(id)a0 value:(id)a1 owner:(id)a2;

@end
