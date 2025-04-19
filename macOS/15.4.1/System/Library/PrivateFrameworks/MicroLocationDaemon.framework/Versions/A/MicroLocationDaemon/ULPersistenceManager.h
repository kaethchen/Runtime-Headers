@class ULDataContainer, ULPersistenceStore, NSManagedObjectModel, NSPersistentStoreCoordinator, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface ULPersistenceManager : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (retain, nonatomic) ULPersistenceStore *persistenceStore;
@property (retain, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (retain, nonatomic) ULDataContainer *dataContainer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSURL *modelsDirectory;
@property (retain, nonatomic) NSURL *storesDirectory;
@property (nonatomic) BOOL useWal;

+ (id)defaultModelsDirectory;
+ (id)defaultLocalStoreFilename;

- (id)init;
- (void).cxx_destruct;
- (void)handleDatabaseError:(id)a0;
- (id)createManagedObjectContext;
- (void)_enableConcurrencyDebug;
- (id)_getDefaultStoresDirectory;
- (BOOL)_isStoreConnected;
- (BOOL)connectToStore;
- (BOOL)disconnectFromStore;
- (id)getLocalStoreURL;
- (BOOL)_isMainDatabase;
- (void)_deleteDatabaseFilesAtPath:(id)a0;
- (BOOL)_destroyStore;
- (BOOL)_disconnectFromStore;
- (BOOL)_excludeDirectoryFromTimeMachineBackup:(id)a0;
- (void)_exitProcessWithFailureCode;
- (id)_getDefaultStoresDirectoryPathForCurrentPlatform;
- (id)_getLocalStoreURL;
- (void)_handleCorruptedDatabase:(id)a0;
- (void)_handleDatabaseError:(id)a0;
- (BOOL)destroyStore;
- (id)initWithModelsDirectory:(id)a0 storesDirectory:(id)a1 managedObjectModel:(id)a2 useWal:(BOOL)a3;
- (id)initWithModelsDirectory:(id)a0 storesDirectory:(id)a1 useWal:(BOOL)a2;
- (BOOL)isMainDatabase;
- (BOOL)isStoreConnected;

@end
