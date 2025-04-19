@class NSURL, NSError, NSObject, NSPersistentContainer;
@protocol OS_os_log;

@interface CNContactMetadataPersistentStoreManager : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (readonly, nonatomic) NSURL *storeLocation;
@property (readonly, nonatomic) NSPersistentContainer *container;
@property (retain, nonatomic) NSError *loadPersistentStoresError;

+ (id)createModel;
+ (id)currentManagedObjectModel;
+ (id)defaultStoreLocation;
+ (BOOL)performLightweightMigrationIfNeededError:(id *)a0;
+ (id)sharedPersistentContainerForModel:(id)a0 storeLocation:(id)a1;
+ (id)sharedPersistentContainerForStoreLocation:(id)a0;
+ (id)storeFileURLForLocation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)persistentStoreCoordinator;
- (id)createManagedObjectContext;
- (id)storeDescription;
- (BOOL)createStoreDirectoryIfNeeded:(id *)a0;
- (id)initWithStoreLocation:(id)a0;
- (id)initWithStoreLocation:(id)a0 container:(id)a1;
- (BOOL)performWorkWithManagedObjectContext:(id /* block */)a0 error:(id *)a1;
- (void)setupIfNeeded;

@end
