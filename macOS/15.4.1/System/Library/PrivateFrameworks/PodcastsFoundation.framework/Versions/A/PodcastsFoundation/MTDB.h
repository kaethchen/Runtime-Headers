@class NSString, MTCoreDataContainer;
@protocol MTCoreDataContainerConfigProvider;

@interface MTDB : NSObject <NSManagedObjectContextProvider>

@property (retain, nonatomic) MTCoreDataContainer *coreDataContainer;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)libraryPath;
+ (void)setCorrupt:(BOOL)a0;
+ (BOOL)isCorrupt;
+ (void)setSharedInstance:(id)a0;
+ (id)fetchManagedObjectModelFromDisk;
+ (long long)coreDataVersion;
+ (BOOL)canExtensionOpenDatabase;
+ (BOOL)createDatabaseIfNeeded;
+ (void)isPodcastsAppCheck;
+ (long long)libraryDataVersion;
+ (id)libraryShmPath;
+ (id)libraryWalPath;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (BOOL)needsMigrationToDeltaFeedUpdates;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (BOOL)serpentIdMigrationComplete;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
- (id)loggingContext;
- (id)contextForName:(id)a0;
- (id)playbackContext;
- (void)addChangeNotifier:(id)a0;
- (id)carPlayContext;
- (id)importContext;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)managedObjectIDForURI:(id)a0 error:(id *)a1;
- (id)persistentStoreUuid;
- (id)privateQueueContext;
- (void)removeChangeNotifier:(id)a0;
- (id)resetableImportContext;
- (id)storeContext;

@end
