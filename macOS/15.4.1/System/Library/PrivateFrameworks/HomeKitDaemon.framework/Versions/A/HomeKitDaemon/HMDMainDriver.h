@class HMDSymptomManager, HMDNetworkInfoController, NSString, HMDHomeManager, HMDDeviceSetupConfiguringController, HMDAppleMediaAccessoryDiagnosticInfoController, HMDCoreData, NSObject, HMDMetricsManager, HMDAccessoryBrowser, HMDCurrentAccessorySetupMetricDispatcher;
@protocol OS_dispatch_queue, OS_os_log;

@interface HMDMainDriver : NSObject <HMFLogging, HMDSymptomManagerDataSource, HMDCoreDataCloudTransformDelegate, HMDRelaunchHandling> {
    NSObject<OS_os_log> *_logger;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser;
@property (retain, nonatomic) HMDMetricsManager *metricsManager;
@property (retain, nonatomic) HMDAppleMediaAccessoryDiagnosticInfoController *appleMediaAccessoryDiagnosticInfoController;
@property (retain, nonatomic) HMDCoreData *coreData;
@property (retain, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) HMDDeviceSetupConfiguringController *configuringStateController;
@property (retain, nonatomic) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property (retain, nonatomic) HMDSymptomManager *symptomManager;
@property (retain, nonatomic) HMDNetworkInfoController *networkInfoController;
@property (retain, nonatomic) id discoveryController;
@property (retain, nonatomic) HMDCoreData *coreData;
@property (retain, nonatomic) HMDHomeManager *homeManager;
@property (retain, nonatomic) HMDDeviceSetupConfiguringController *configuringStateController;
@property (retain, nonatomic) HMDCurrentAccessorySetupMetricDispatcher *currentAccessorySetupMetricDispatcher;
@property (retain, nonatomic) HMDSymptomManager *symptomManager;
@property (retain, nonatomic) HMDNetworkInfoController *networkInfoController;
@property (retain, nonatomic) id discoveryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)driver;
+ (id)logCategory;
+ (id)getLocalStoreFrom:(id)a0;
+ (id)loadHomeDataFromLocalStore:(id *)a0 decryptionFailed:(BOOL *)a1;
+ (id)loadHomeDataFromLocalStore:(id *)a0 fromLocation:(id)a1 decryptionFailed:(BOOL *)a2 forHH2Migration:(BOOL)a3;
+ (id)loadSQLArchiveWithDecryptionFail:(BOOL *)a0 fromLocation:(id)a1 forHH2Migration:(BOOL)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (BOOL)cloudTransform:(id)a0 isPermittedForHomeWithModelID:(id)a1 isImport:(BOOL)a2;
- (id)currentWiFiNetworkInfo;
- (id)currentWiFiNetworkRSSI;
- (void)detectNearbyAccessoriesOnMismatchNetworkWithCompletionHandler:(id /* block */)a0;
- (void)localeChanged;
- (void)relaunch;
- (void)relaunchAfterDelay:(double)a0;
- (void)relaunchHomed;
- (void)removeCurrentAccessorySetupMetricDispatcherIfNeeded;

@end
