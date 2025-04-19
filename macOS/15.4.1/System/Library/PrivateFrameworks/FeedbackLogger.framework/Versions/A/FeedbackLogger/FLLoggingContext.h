@class NSUserDefaults, NSString, NSFileManager, FLAutoBugCapture, NSMutableDictionary, FLContainerStorePathManager, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface FLLoggingContext : NSObject <FLLoggingContext> {
    BOOL _deviceUnlockedSinceBoot;
}

@property (copy, nonatomic) NSString *timestampReferenceIdentifier;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain, nonatomic) FLContainerStorePathManager *containerStorePathManager;
@property (retain, nonatomic) FLAutoBugCapture *autoBugCapture;
@property (copy, nonatomic) NSMutableDictionary *storeIdToUserCachesDirectoryPathMap;
@property (nonatomic) unsigned long long persistenceConfiguration;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) unsigned long long now;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic) BOOL deviceUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInternalBuild;
+ (unsigned long long)inferredPersistenceConfiguration;
+ (BOOL)isRunningInExtension;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFileManager:(id)a0;
- (id)initWithFileManager:(id)a0 persistenceConfiguration:(unsigned long long)a1;
- (id)initWithFileManager:(id)a0 persistenceConfiguration:(unsigned long long)a1 userDefaults:(id)a2 autoBugCapture:(id)a3 containerStorePathManager:(id)a4;
- (id)initWithFileManager:(id)a0 userDefaults:(id)a1 autoBugCapture:(id)a2;
- (id)initWithFileManager:(id)a0 userDefaults:(id)a1 autoBugCapture:(id)a2 containerStorePathManager:(id)a3;
- (id)pathForStore:(id)a0;
- (void)reportTelemetry:(id)a0 payload:(id)a1;
- (id)userCachesDirectoryPathForStore:(id)a0;

@end
