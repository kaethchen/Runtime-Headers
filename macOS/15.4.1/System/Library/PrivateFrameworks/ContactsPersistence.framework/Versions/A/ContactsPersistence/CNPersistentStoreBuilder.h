@class NSPersistentStore, NSError, NSString, NSURL, CNResult, NSDictionary, NSPersistentStoreCoordinator, CNPersistentStoreDescription;

@interface CNPersistentStoreBuilder : NSObject <CNPersistentStoreBuilder> {
    CNPersistentStoreDescription *_storeDescription;
    BOOL _readOnly;
    NSDictionary *_storeOptions;
    NSDictionary *_storeOptionsWithoutMigration;
    NSURL *_databaseURL;
    BOOL _pristineDatabase;
    BOOL _cachePsc;
    BOOL _didMigrate;
    BOOL _addAsReadOnly;
}

@property (readonly) CNResult *preparationResult;
@property (retain) NSPersistentStore *store;
@property (copy) NSError *error;
@property (readonly) NSPersistentStoreCoordinator *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)migration_os_log;
+ (id)unconstrainedModel;

- (void).cxx_destruct;
- (void)_coreDataR10319914Hack:(id)a0;
- (void)addInMemoryPersistentStore;
- (void)addInProcessStoreWithURL:(id)a0 options:(id)a1;
- (id)addPersistentStoreAtURL:(id)a0;
- (id)addPersistentStoreWithDescription:(id)a0;
- (void)addPreparedStore;
- (void)addRemoteStoreWithURL:(id)a0 options:(id)a1;
- (void)addStoreWithURL:(id)a0 options:(id)a1;
- (void)fallBackToInMemory;
- (void)fallBackToInMemoryIfNeeded;
- (void)fallBackToUnpreparedStoreIfNeeded;
- (id)initWithStoreDescription:(id)a0 readOnly:(BOOL)a1;
- (id)initWithStoreDescription:(id)a0 readOnly:(BOOL)a1 coordinator:(id)a2;
- (void)logFailureMessage;
- (void)prepareDatabaseFileWithURL:(id)a0;
- (void)removePersistentStoreAtURL:(id)a0;

@end
