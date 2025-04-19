@class NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol BCCloudDataSourceDelegate;

@interface BCCloudDataSource : NSObject <BDSCloudKitSupportSignOutDeleteWithoutInstance>

@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (weak, nonatomic) id<BCCloudDataSourceDelegate> delegate;

+ (id)_documentsDirectoryURL;
+ (id)_sharedLegacyRootDirectoryURL;
+ (id)_sharedRootDirectoryURL;
+ (void)deleteCloudDataWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithManagedObjectModel:(id)a0;
- (BOOL)_addStoreAtURL:(id)a0;
- (void)_createDirectoryForStoreAtURL:(id)a0;
- (BOOL)_deleteDirectoryForStoreAtURL:(id)a0;
- (BOOL)_directoryExistsForStoreAtURL:(id)a0;
- (void)_logIf:(BOOL)a0 error:(id)a1 operation:(id)a2;
- (void)_migrateAndDestroyStoreAtLegacyURL:(id)a0 toModernURL:(id)a1;
- (id)_persistentStoreOptions;
- (void)_setupManagedObjectContext;
- (BOOL)_setupPersistentStoreWithRootDirectoryURL:(id)a0 legacyRootDirectoryURL:(id)a1 nameOnDisk:(id)a2;
- (id)initWithManagedObjectModel:(id)a0 nameOnDisk:(id)a1;
- (id)initWithManagedObjectModel:(id)a0 nameOnDisk:(id)a1 delegate:(id)a2;
- (id)initWithManagedObjectModel:(id)a0 rootDirectoryURL:(id)a1 legacyRootDirectoryURL:(id)a2 nameOnDisk:(id)a3;
- (id)initWithManagedObjectModel:(id)a0 rootDirectoryURL:(id)a1 legacyRootDirectoryURL:(id)a2 nameOnDisk:(id)a3 delegate:(id)a4;

@end
