@class NSString, _DKDataProtectionStateMonitor, NSURL, NSCloudKitMirroringDelegate, NSMutableDictionary, NSFileManager, NSManagedObjectModel, NSMapTable;
@protocol _DKCoreDataStorageDelegate;

@interface _DKCoreDataStorage : NSObject {
    NSManagedObjectModel *_managedObjectModel;
    NSMutableDictionary *_paths;
    NSMapTable *_managedObjectContexts;
    NSMutableDictionary *_persistentStoreCoordinators;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    NSFileManager *_fm;
    BOOL _isManagedDatabase;
    BOOL _isDatabaseManager;
    BOOL _maintenanceRunning;
}

@property (readonly) NSString *directory;
@property (readonly) BOOL readOnly;
@property (readonly) BOOL localOnly;
@property (readonly) BOOL sync;
@property (readonly) NSURL *modelURL;
@property (readonly) NSString *databaseName;
@property (weak) id<_DKCoreDataStorageDelegate> delegate;
@property (readonly) NSCloudKitMirroringDelegate *mirroringDelegate;
@property (readonly) NSString *containerIdentifier;
@property (nonatomic) BOOL requiresManualMigration;

+ (unsigned long long)anonymizeObjectStringsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 batchFetchLimit:(unsigned long long)a4 totalFetchLimit:(unsigned long long)a5 includeSubentities:(BOOL)a6 salt:(id)a7;
+ (unsigned long long)anonymizeStringAttributesOfManagedObject:(id)a0 withSalt:(id)a1;
+ (unsigned long long)countObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 includeSubentities:(BOOL)a3 includePendingChanges:(BOOL)a4;
+ (unsigned long long)deleteObjectsIfNeededToLimitTotal:(unsigned long long)a0 context:(id)a1 entityName:(id)a2 predicate:(id)a3 sortDescriptors:(id)a4 fetchLimit:(unsigned long long)a5 includeSubentities:(BOOL)a6 includePendingChanges:(BOOL)a7;
+ (unsigned long long)deleteObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 fetchLimit:(unsigned long long)a4 includeSubentities:(BOOL)a5 includePendingChanges:(BOOL)a6;
+ (unsigned long long)deleteObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 fetchOffset:(unsigned long long)a4 fetchLimit:(unsigned long long)a5 includeSubentities:(BOOL)a6 includePendingChanges:(BOOL)a7;
+ (unsigned long long)deleteOrphanedEntitiesInContext:(id)a0;
+ (unsigned long long)updateObjectsInContext:(id)a0 entityName:(id)a1 predicate:(id)a2 sortDescriptors:(id)a3 batchFetchLimit:(unsigned long long)a4 totalFetchLimit:(unsigned long long)a5 includeSubentities:(BOOL)a6 updateBlock:(id /* block */)a7;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
- (void)closeStorageForProtectionClass:(id)a0;
- (id)privateManagedObjectContextFor:(id)a0;
- (BOOL)confirmDatabaseConnectionFor:(id)a0;
- (id)copyStorageFor:(id)a0 toDirectory:(id)a1;
- (BOOL)deleteStorageFor:(id)a0;
- (id)initWithDirectory:(id)a0 databaseName:(id)a1 modelURL:(id)a2 readOnly:(BOOL)a3 localOnly:(BOOL)a4;
- (id)initWithDirectory:(id)a0 databaseName:(id)a1 modelURL:(id)a2 sync:(BOOL)a3;
- (BOOL)isManagedObjectContextFor:(id)a0 equalToManagedObjectContext:(id)a1;
- (BOOL)isManagedObjectModel:(id)a0 compatibleWithPersistentStoreAtURL:(id)a1 error:(id *)a2;
- (id)managedObjectContextFor:(id)a0;
- (id)managedObjectContextFor:(id)a0 identifier:(id)a1;
- (id)managedObjectModelForVersion:(unsigned long long)a0;
- (id)managedObjectModelURLForVersion:(unsigned long long)a0;
- (BOOL)migratePersistentStoreAtURL:(id)a0 toManagedObjectModel:(id)a1 protectionClass:(id)a2 error:(id *)a3;
- (long long)modelVersionForStoreAtURL:(id)a0 error:(id *)a1;
- (id)persistentStoreCoordinatorFor:(id)a0;
- (void)setManagedObjectModel:(id)a0;

@end
