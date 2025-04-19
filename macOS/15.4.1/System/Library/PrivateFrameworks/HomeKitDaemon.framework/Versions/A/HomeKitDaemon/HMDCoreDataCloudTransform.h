@class NSMutableSet, NSString, NSManagedObjectContext, NSMapTable, NSMutableDictionary, NSObject, HMDCoreData, HMDCoreDataCloudTransformMergePolicy, NSUserDefaults;
@protocol OS_os_log, HMMLogEventSubmitting, HMDCoreDataCloudTransformDelegate;

@interface HMDCoreDataCloudTransform : HMFObject <HMDCoreDataCloudTransformDelegate, HMFLogging, HMDCoreDataNotificationListener> {
    NSObject<OS_os_log> *_logger;
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    unsigned long long _importSignpostID;
    HMDCoreDataCloudTransformMergePolicy *_mergePolicy;
    BOOL _fakeRecordsEnabled;
    NSManagedObjectContext *_lazyManagedObjectContext;
    NSMutableSet *_pendingChangedStoreIdentifiers;
    NSMutableSet *_cloudImportInProgressStoreIdentifiers;
    id<HMMLogEventSubmitting> _logEventSubmitter;
    NSMutableDictionary *_historyTokensByStoreIdentifier;
    NSMapTable *_cloudChangeListeners;
}

@property (class, readonly, nonatomic) HMDCoreDataCloudTransform *sharedInstance;

@property (readonly, nonatomic) HMDCoreData *coreData;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (weak, nonatomic) id<HMDCoreDataCloudTransformDelegate> delegate;
@property (readonly) BOOL badCDPState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)logCategory;
+ (void)wipeCoreDataStorageDueToPCSIdentityLossAndRelaunchHomeKitDaemon;
+ (Class)exportTransformableClassFromEntity:(id)a0;
+ (id)exportTransformableEntityFromEntity:(id)a0;
+ (Class)importTransformableClassFromEntity:(id)a0;
+ (id)localTransformableEntityFromEntity:(id)a0;
+ (BOOL)transactionIsCloudStoreReset:(id)a0 context:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectContext;
- (void)_processHistoryForStore:(id)a0 context:(id)a1;
- (BOOL)cloudTransform:(id)a0 isPermittedForHomeWithModelID:(id)a1 isImport:(BOOL)a2;
- (void)coreData:(id)a0 cloudKitExportFinishedForStoreWithIdentifier:(id)a1 duration:(double)a2 error:(id)a3;
- (void)coreData:(id)a0 cloudKitExportStartedForStoreWithIdentifier:(id)a1;
- (void)coreData:(id)a0 cloudKitImportFinishedForStoreWithIdentifier:(id)a1 duration:(double)a2 error:(id)a3;
- (void)coreData:(id)a0 cloudKitImportStartedForStoreWithIdentifier:(id)a1;
- (void)coreData:(id)a0 persistentStoreWithIdentifierDidChange:(id)a1;
- (void)countResidentsInHomeWithUUID:(id)a0 completion:(id /* block */)a1;
- (id)initWithCoreData:(id)a0 fakeRecordsEnabled:(BOOL)a1 logEventSubmitter:(id)a2 userDefaults:(id)a3;
- (id)initWithCoreData:(id)a0 logEventSubmitter:(id)a1;
- (id)newCloudMirrorExportStatusMonitor;
- (void)registerCloudChangeListener:(id)a0 forEntities:(id)a1;
- (void)runCompleteMergeTransformForHomeWithModelID:(id)a0 completion:(id /* block */)a1;
- (void)runTransformWithCompletion:(id /* block */)a0;
- (BOOL)runTransformWithError:(id *)a0;

@end
