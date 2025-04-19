@class NSString, NSSQLCore, NSXPCStoreNotificationObserver, NSGenerationalRowCache, NSDictionary, NSXPCStoreConnectionManager, NSObject, NSSQLModel;
@protocol OS_dispatch_semaphore;

@interface NSXPCStore : NSIncrementalStore <NSSQLModelProvider, NSCoreDataKeyedArchivingDelegate> {
    NSDictionary *_metadata;
    NSGenerationalRowCache *_cache;
    NSString *_fileBackedFuturesDirectory;
    NSXPCStoreConnectionManager *_connectionManager;
    NSSQLModel *_model;
    NSSQLCore *_core;
    NSString *_sanityCheckToken;
    NSXPCStoreNotificationObserver *_observer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    NSDictionary *_ancillaryModels;
    NSDictionary *_ancillarySQLModels;
    int _outstandingRequests;
    NSObject<OS_dispatch_semaphore> *_requestTerminationSem;
}

@property (readonly, copy) NSString *remoteStoreChangedNotificationName;

+ (void)initialize;
+ (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
+ (id)archiver:(id)a0 willEncodeObject:(id)a1;
+ (BOOL)_allowCoreDataFutures;
+ (BOOL)_isOnExtendedTimeout;
+ (int)debugDefault;
+ (void)setDebugDefault:(int)a0;

- (void)dealloc;
- (id)type;
- (void)setURL:(id)a0;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (void)setIdentifier:(id)a0;
- (id)metadata;
- (id)model;
- (void)setMetadata:(id)a0;
- (id)_storeInfoForEntityDescription:(id)a0;
- (void)_setMetadata:(id)a0 includeVersioning:(BOOL)a1;
- (id)ancillaryModels;
- (id)sqlCore;
- (BOOL)_allowCoreDataFutures;
- (BOOL)_hasActiveGenerations;
- (id)_newObjectIDForEntityDescription:(id)a0 pk:(long long)a1;
- (Class)_objectIDClass;
- (void)_prepareStoreForRemovalFromCoordinator:(id)a0;
- (id)_rawMetadata__;
- (id)ancillarySQLModels;
- (id)connectionManager;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (id)entityForEntityDescription:(id)a0;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)fileBackedFuturesDirectory;
- (void)freeQueryGenerationWithIdentifier:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (BOOL)load:(id *)a0;
- (BOOL)loadMetadata:(id *)a0;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0 generation:(id)a1;
- (id)newForeignKeyID:(long long)a0 entity:(id)a1;
- (id)newObjectIDForEntity:(id)a0 pk:(long long)a1;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)objectIDFactoryForEntity:(id)a0;
- (Class)objectIDFactoryForSQLEntity:(id)a0;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (id)reopenQueryGenerationWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)supportsConcurrentRequestHandling;
- (BOOL)supportsGenerationalQuerying;
- (void)willRemoveFromPersistentStoreCoordinator:(id)a0;

@end
