@class NSURL, NSMutableDictionary, NSGenerationalRowCache, NSDictionary, NSSQLCoreDispatchManager, NSObject, NSSQLiteConnection, NSString, NSSet, _PFMutex, NSSQLModel, NSSQLiteAdapter, NSOperationQueue, NSData, _NSSQLCoreConnectionObserver;
@protocol OS_dispatch_source;

@interface NSSQLCore : NSPersistentStore <NSFilePresenter, NSSQLModelProvider> {
    NSSQLModel *_model;
    NSSQLiteAdapter *_adapter;
    NSSQLiteConnection *_schemaValidationConnection;
    NSSQLCoreDispatchManager *_dispatchManager;
    NSGenerationalRowCache *_generationalRowCache;
    _NSSQLCoreConnectionObserver *_observer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sqlCoreStateLock;
    NSMutableDictionary *_storeMetadata;
    _Atomic id _externalDataReferencesDirectory;
    _Atomic id _externalDataLinksDirectory;
    _Atomic id _fileBackedFuturesPath;
    _Atomic int _transactionInMemorySequence;
    _Atomic BOOL _metadataIsClean;
    struct _sqlCoreFlags { unsigned char useSyntaxColoredLogging : 1; unsigned char hasExternalDataReferences : 1; unsigned char fileProtectionType : 3; unsigned char notifyFOKChanges : 1; unsigned char initializationComplete : 1; unsigned char connectionsAreLocal : 1; unsigned char isXPCDelegate : 1; unsigned char queryGenerationInitializationFailed : 1; unsigned char persistentHistoryTracking : 1; unsigned char hasAncillaryModels : 1; unsigned char postRemoteNotify : 1; unsigned char hasFileBackedFutures : 1; unsigned char isInMemory : 1; unsigned char historyBatchUpdateModProperties : 1; unsigned char indexTracking : 1; unsigned char memoryObserverSuspended : 1; unsigned char _debugPlaceholders : 2; unsigned short _RESERVED : 12; } _sqlCoreFlags;
    _Atomic id _queryGenerationTrackingConnection;
    _PFMutex *_writerSerializationMutex;
    NSDictionary *_ancillarySQLModels;
    NSDictionary *_historyTrackingOptions;
    NSData *_dbKey;
    id _usedIndexes;
    BOOL _remoteStoresDidChange;
    int _remoteNotificationToken;
    NSObject<OS_dispatch_source> *_cache_event_source;
}

@property (readonly, nonatomic) NSSQLModel *model;
@property (readonly, nonatomic) NSDictionary *ancillaryModels;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)cachedModelForPersistentStoreWithURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)_destroyPersistentStoreAtURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)a0;
+ (BOOL)_rekeyPersistentStoreAtURL:(id)a0 options:(id)a1 withKey:(id)a2 error:(id *)a3;
+ (BOOL)_replacePersistentStoreAtURL:(id)a0 destinationOptions:(id)a1 withPersistentStoreFromURL:(id)a2 sourceOptions:(id)a3 error:(id *)a4;
+ (long long)bufferedAllocationsOverride;
+ (BOOL)coloredLoggingDefault;
+ (int)debugDefault;
+ (BOOL)dropPersistentHistoryforPersistentStoreWithURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (id)metadataForPersistentStoreWithURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (Class)migrationManagerClass;
+ (Class)rowCacheClass;
+ (void)setColoredLoggingDefault:(BOOL)a0;
+ (void)setDebugDefault:(int)a0;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 error:(id *)a2;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 options:(id)a2 error:(id *)a3;
+ (void)setTrackSQLiteDatabaseStatistics:(BOOL)a0;
+ (BOOL)trackSQLiteDatabaseStatistics;
+ (BOOL)useConcurrentFetching;

- (void)dealloc;
- (id)identifier;
- (id)type;
- (void)setURL:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (id)metadata;
- (void)setMetadata:(id)a0;
- (id)_storeInfoForEntityDescription:(id)a0;
- (id)_allOrderKeysForDestination:(id)a0 inRelationship:(id)a1 error:(id *)a2;
- (void)_setupObserver:(id)a0;
- (id)adapter;
- (id)externalDataReferencesDirectory;
- (BOOL)_hasActiveGenerations;
- (BOOL)_isCloudKitOptioned;
- (void)_mapsSyncDidUnregisterObjectsWithIDs_112229675:(id)a0;
- (id)_newObjectIDForEntity:(id)a0 referenceData64:(unsigned long long)a1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (Class)_objectIDClass;
- (BOOL)_prepareForExecuteRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (void)_rebuildIndiciesSynchronously:(BOOL)a0;
- (void)_setHasAncillaryModels:(BOOL)a0;
- (BOOL)_unload:(id *)a0;
- (id)ancillarySQLModels;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)a0;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (unsigned long long)entityIDForEntityDescription:(id)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)fileBackedFuturesDirectory;
- (BOOL)finishDeferredLightweightMigration:(BOOL)a0 withError:(id *)a1;
- (void)freeQueryGenerationWithIdentifier:(id)a0;
- (BOOL)hasAncillaryModels;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (BOOL)load:(id *)a0;
- (BOOL)loadMetadata:(id *)a0;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (id)newObjectIDForEntity:(id)a0 pk:(long long)a1;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (Class)objectIDFactoryForEntity:(id)a0;
- (Class)objectIDFactoryForPersistentHistoryEntity:(id)a0;
- (Class)objectIDFactoryForSQLEntity:(id)a0;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (id)propertyNamesInHistoryChangeDataForEntityDescription:(id)a0;
- (id)reopenQueryGenerationWithIdentifier:(id)a0 error:(id *)a1;
- (void)setAncillaryModels:(id)a0;
- (void)setAncillarySQLModels:(id)a0;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (BOOL)supportsConcurrentRequestHandling;
- (BOOL)supportsGenerationalQuerying;
- (void)willRemoveFromPersistentStoreCoordinator:(id)a0;

@end
