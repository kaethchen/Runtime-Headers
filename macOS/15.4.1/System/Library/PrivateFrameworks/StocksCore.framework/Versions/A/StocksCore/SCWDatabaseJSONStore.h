@class NSHashTable, NSString, SCWDatabaseSchema, NSFileCoordinator, NSSet, NSMutableDictionary, NSURL, NSOperationQueue, NSObject, NSDate, CKServerChangeToken;
@protocol SCWOperationThrottler, OS_dispatch_source, OS_dispatch_queue, SCWDatabaseStore;

@interface SCWDatabaseJSONStore : NSObject <SCWOperationThrottlerDelegate, NSFilePresenter, SCWDatabaseStoreCoordinator, SCWDatabaseStore>

@property (retain, nonatomic) NSFileCoordinator *fileCoordinator;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) SCWDatabaseSchema *databaseSchema;
@property (nonatomic) BOOL loadedFromDisk;
@property (nonatomic) unsigned int lastKnownStoreChangeTag;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableDictionary *zoneStoresByName;
@property (retain, nonatomic) NSMutableDictionary *foreignZoneDictsByName;
@property (nonatomic) BOOL havePendingChanges;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) id<SCWOperationThrottler> saveThrottler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *changeListenerSource;
@property (retain, nonatomic) NSSet *allowedCommandClasses;
@property (readonly, copy, nonatomic) NSURL *storeURL;
@property (readonly, nonatomic) unsigned long long diskReadCount;
@property (readonly, nonatomic) unsigned long long diskWriteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, nonatomic) id<SCWDatabaseStore> underlyingStore;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (copy, nonatomic) NSDate *lastDirtyDate;
@property (copy, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled;

+ (id)preferredFileURLForSchema:(id)a0 parentDirectoryURL:(id)a1;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)operationThrottlerPerformOperation:(id)a0;
- (void)readWithAccessor:(id /* block */)a0;
- (void)writeWithAccessor:(id /* block */)a0;
- (void)_saveToFileURL:(id)a0;
- (void)_applyCloudBackupEnabledPropertyToStoreURL;
- (id)_decodeCodableObjectOfClass:(Class)a0 from:(id)a1 error:(id *)a2;
- (id)_decodeCodableObjectOfClasses:(id)a0 from:(id)a1 error:(id *)a2;
- (id)_encodeCodableObject:(id)a0;
- (void)_listenForChangesToFileURL:(id)a0;
- (void)_loadFromFileURL:(id)a0;
- (BOOL)_reloadIfNeededFromFileURL:(id)a0;
- (void)_saveIfNeededToFileURL:(id)a0;
- (BOOL)flushToDiskWithTimeout:(double)a0;
- (id)initWithSchema:(id)a0 fileURL:(id)a1;
- (id)initWithSchema:(id)a0 parentDirectoryURL:(id)a1;
- (void)readZone:(id)a0 withAccessor:(id /* block */)a1;
- (void)reloadWithAccessor:(id /* block */)a0;
- (void)writeZone:(id)a0 withAccessor:(id /* block */)a1;
- (id)zoneStoreForSchema:(id)a0;
- (id)initWithSchema:(id)a0 fileURL:(id)a1 allowedCommandClasses:(id)a2;
- (id)initWithSchema:(id)a0 parentDirectoryURL:(id)a1 allowedCommandClasses:(id)a2;

@end
