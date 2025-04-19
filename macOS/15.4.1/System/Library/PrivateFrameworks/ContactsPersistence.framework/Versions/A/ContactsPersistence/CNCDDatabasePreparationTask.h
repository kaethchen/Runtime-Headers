@class NSString, NSPersistentStoreCoordinator, NSURL, CNPersistentStoreDescription, NSPersistentStore, NSError;
@protocol CNCDIOSLegacyIdentifierRegistration;

@interface CNCDDatabasePreparationTask : CNTask

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL shouldCreateEmptyDatabase;
@property (readonly, nonatomic) NSString *path;
@property (getter=isPristineDatabase) BOOL pristineDatabase;
@property BOOL shouldCachePSC;
@property BOOL didMigrate;
@property BOOL shouldAddAsReadOnly;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nonatomic) CNPersistentStoreDescription *storeDescription;
@property (retain) NSPersistentStore *store;
@property (readonly, nonatomic) id<CNCDIOSLegacyIdentifierRegistration> legacyIdentifierRegistrar;
@property (copy) NSError *error;
@property (copy, nonatomic) NSURL *addedStoreURL;

+ (id)defaultDatabaseDirectory;
+ (void)configureLegacyIdentifierDefaultsInManagedObjectModel:(id)a0;
+ (id)coordinatorWithUnconstrainedModel;
+ (id)inProcessPreparationTaskWithRequest:(id)a0;
+ (id)outOfProcessPreparationTaskWithRequest:(id)a0;
+ (id)preparationTaskWithRequest:(id)a0;
+ (BOOL)shouldCreateEmptyDatabaseGivenURL:(id)a0;
+ (BOOL)shouldTryAutomaticMigrationAfterError:(id)a0;
+ (BOOL)wouldLikeToHandleRequestInProcess:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
- (id)initWithRequest:(id)a0;
- (id)run:(id *)a0;
- (BOOL)databaseConstraintCleanupNeeded;
- (void)moveAsideDatabaseAtPath:(id)a0 reason:(id)a1;
- (void)removeDotNewPathForDatabasePath;
- (void)_coreDataR10319914Hack:(id)a0;
- (void)addSqlitePersistentStoreWithURL:(id)a0;
- (void)adoptRecordsIntoContainers;
- (void)cleanUpDuplicateInfoObjects;
- (void)consolidateDuplicateContainersInContext:(id)a0 store:(id)a1;
- (BOOL)databaseMigrationNeeded;
- (BOOL)didAddStore;
- (void)emptySaveIfNeeded;
- (void)importMeCard;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 legacyIdentifierRegistrar:(id)a2;
- (void)logFailureMessage;
- (void)migrateCardDAVLegacyCustomProperties;
- (void)migrateContactIndex;
- (void)migrateCustomPropertiesInContext:(id)a0 store:(id)a1;
- (void)migrateLabels;
- (void)migrateOrphanProperties;
- (void)migratePhoneNumbers;
- (void)migrateToUnconstrainedDatabaseAndRepairConstraintViolations;
- (void)moveAsideDatabaseIfNeeded;
- (void)moveAsideDatabaseWithReason:(id)a0 message:(id)a1;
- (void)moveFilesystemPhotosIntoCoreData;
- (id)optionsWithMigrationForStoreAtUrl:(id)a0;
- (id)optionsWithoutMigrationForStoreAtUrl:(id)a0;
- (void)preflightDatabaseFile;
- (id)prepareReturnValue;
- (void)promotePreviouslyUnknownPropertiesToKnownProperties;
- (void)rebuildIOSLegacyIdentifiersIfNeeded;
- (void)setUpInitialState;
- (BOOL)shouldUpdateMetadata;
- (unsigned long long)storeOptionsWithMigrateIfNecessary:(BOOL)a0;
- (void)tryToAddPersistentStore;
- (void)updateMetdata;
- (void)updateMetdataIfNeeded;
- (id)urlByCopyingToTemporaryUrl:(id)a0;

@end
