@class _PFModelMap, NSArray, NSDictionary, NSManagedObjectModel, NSString, NSMutableArray, NSError;
@protocol NSPersistentStoreCoordinatorDelegate;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {
    _Atomic id _queueOwner;
    void *_dispatchQueue;
    struct _persistentStoreCoordinatorFlags { unsigned char _isRegistered : 1; unsigned char _canUseDirectDispatch : 1; unsigned char _qosClass : 8; unsigned char _isMigrating : 1; unsigned char _reservedFlags : 5; } _flags;
    _Atomic BOOL _queueUsage;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _miniLock;
    NSManagedObjectModel *_managedObjectModel;
    NSArray *_persistentStores;
    NSString *_queueLabel;
    NSMutableArray *_extendedStoreURLs;
    NSError *_lastOpenError;
    id _xpcBundleID;
    NSString *_xpcProcessName;
    _PFModelMap *_modelMap;
    id<NSPersistentStoreCoordinatorDelegate> _delegate;
    id _externalRecordsHelper;
}

@property (class, readonly) NSDictionary *registeredStoreTypes;

@property (readonly) NSManagedObjectModel *managedObjectModel;
@property (readonly) NSArray *persistentStores;
@property (copy) NSString *name;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)metadataForPersistentStoreOfType:(id)a0 URL:(id)a1 error:(id *)a2;
+ (BOOL)removePersistentHistoryFromPersistentStoreAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)ubiquityStoreURLForStoreURL:(id)a0 ubiquityIdentityToken:(id)a1 ubiquityName:(id)a2;
+ (void)_registerCoreDataStoreClass:(Class)a0 forStoreType:(id)a1;
+ (id)elementsDerivedFromExternalRecordURL:(id)a0;
+ (id)metadataForPersistentStoreOfType:(id)a0 URL:(id)a1 options:(id)a2 error:(id *)a3;
+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (void)registerStoreClass:(Class)a0 forStoreType:(id)a1;
+ (BOOL)removeUbiquitousContentAndPersistentStoreAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreOfType:(id)a1 URL:(id)a2 error:(id *)a3;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreOfType:(id)a1 URL:(id)a2 options:(id)a3 error:(id *)a4;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)lock;
- (void)setDelegate:(id)a0;
- (void)unlock;
- (BOOL)tryLock;
- (void)performBlock:(id /* block */)a0;
- (BOOL)_destroyPersistentStoreAtURL:(id)a0 withType:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_replacePersistentStoreAtURL:(id)a0 destinationOptions:(id)a1 withPersistentStoreFromURL:(id)a2 sourceOptions:(id)a3 storeType:(id)a4 error:(id *)a5;
- (id)addPersistentStoreWithType:(id)a0 configuration:(id)a1 URL:(id)a2 options:(id)a3 error:(id *)a4;
- (id)initWithManagedObjectModel:(id)a0;
- (id)migratePersistentStore:(id)a0 toURL:(id)a1 options:(id)a2 withType:(id)a3 error:(id *)a4;
- (id)persistentStoreCoordinator;
- (id)persistentStoreForURL:(id)a0;
- (BOOL)removePersistentStore:(id)a0 error:(id *)a1;
- (void)addPersistentStoreWithDescription:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)destroyPersistentStoreAtURL:(id)a0 withType:(id)a1 options:(id)a2 error:(id *)a3;
- (void)performBlockAndWait:(id /* block */)a0;
- (BOOL)_validateQueryGeneration:(id)a0 error:(id *)a1;
- (id)URLForPersistentStore:(id)a0;
- (void)setMetadata:(id)a0 forPersistentStore:(id)a1;
- (id)_allOrderKeysForDestination:(id)a0 inRelationship:(id)a1 error:(id *)a2;
- (BOOL)_destroyPersistentStoreAtURL:(id)a0 withType:(id)a1 error:(id *)a2;
- (id)_exceptionNoStoreSaveFailureForError:(id)a0 recommendedFrame:(int *)a1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (BOOL)_refreshTriggerValuesInStore:(id)a0 error:(id *)a1;
- (BOOL)_rekeyPersistentStoreAtURL:(id)a0 type:(id)a1 options:(id)a2 withKey:(id)a3 error:(id *)a4;
- (BOOL)_removeAllPersistentStores:(id *)a0;
- (id)_retainedCurrentQueryGeneration:(id)a0;
- (id)currentPersistentHistoryTokenFromStores:(id)a0;
- (id)currentQueryGenerationTokenFromStores:(id)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (BOOL)finishDeferredLightweightMigration:(id *)a0;
- (BOOL)finishDeferredLightweightMigrationTask:(id *)a0;
- (id)importStoreWithIdentifier:(id)a0 fromExternalRecordsDirectory:(id)a1 toURL:(id)a2 options:(id)a3 withType:(id)a4 error:(id *)a5;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (id)managedObjectIDForURIRepresentation:(id)a0;
- (id)managedObjectIDFromUTF8String:(const char *)a0 length:(unsigned long long)a1;
- (id)metadataForPersistentStore:(id)a0;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (BOOL)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (id)persistentStoreForIdentifier:(id)a0;
- (BOOL)replacePersistentStoreAtURL:(id)a0 destinationOptions:(id)a1 withPersistentStoreFromURL:(id)a2 sourceOptions:(id)a3 storeType:(id)a4 error:(id *)a5;
- (BOOL)setURL:(id)a0 forPersistentStore:(id)a1;

@end
