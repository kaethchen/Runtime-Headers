@class PFCloudKitStoreMonitorProvider, NSObject, PFCloudKitMetricsClient, CKScheduler, PFCloudKitContainerProvider, NSString, CKContainerOptions, CKNotificationListener, PFCloudKitMetadataPurger, CKOperationConfiguration, NSArray, PFCloudKitArchivingUtilities, NSNumber;
@protocol NSCloudKitMirroringDelegateProgressProvider;

@interface NSCloudKitMirroringDelegateOptions : NSObject <NSCopying> {
    BOOL _skipCloudKitSetup;
    BOOL _useDaemon;
    BOOL _useTestDaemon;
    BOOL _bypassSchedulerActivityForInitialImport;
    BOOL _bypassDasdRateLimiting;
    BOOL _test_useLegacySavePolicy;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    PFCloudKitMetricsClient *_metricsClient;
    PFCloudKitContainerProvider *_containerProvider;
    PFCloudKitStoreMonitorProvider *_storeMonitorProvider;
    PFCloudKitMetadataPurger *_metadataPurger;
    PFCloudKitArchivingUtilities *_archivingUtilities;
}

@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider;
@property (retain, nonatomic) CKOperationConfiguration *defaultOperationConfiguration;
@property (retain, nonatomic) NSString *containerIdentifier;
@property (retain, nonatomic) NSNumber *ckAssetThresholdBytes;
@property (nonatomic) BOOL initializeSchema;
@property (retain, nonatomic) CKContainerOptions *containerOptions;
@property (nonatomic) BOOL useEncryptedStorage;
@property (nonatomic) BOOL useDeviceToDeviceEncryption;
@property (retain, nonatomic) NSNumber *operationMemoryThresholdBytes;
@property (nonatomic) BOOL automaticallyDownloadFileBackedFutures;
@property (nonatomic) BOOL automaticallyScheduleImportAndExportOperations;
@property (nonatomic) BOOL preserveLegacyRecordMetadataBehavior;
@property (retain, nonatomic) NSString *apsConnectionMachServiceName;
@property (nonatomic) long long databaseScope;
@property (retain, nonatomic) NSArray *activityVouchers;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCloudKitContainerOptions:(id)a0;
- (id)initWithContainerIdentifier:(id)a0;

@end
