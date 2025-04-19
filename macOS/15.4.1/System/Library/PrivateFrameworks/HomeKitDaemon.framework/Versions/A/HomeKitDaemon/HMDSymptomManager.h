@class NSMapTable, NSArray, NSNotificationCenter, HMFWiFiManager, NSObject, NSString;
@protocol HMDCompanionLinkClient, HMDSymptomManagerDataSource, OS_dispatch_queue, HMDSharingDeviceDiscovery;

@interface HMDSymptomManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _deviceProblemNotificationToken;
}

@property (readonly, nonatomic) id<HMDSharingDeviceDiscovery> deviceDiscovery;
@property (readonly, nonatomic) id<HMDCompanionLinkClient> companionLinkClient;
@property (readonly, nonatomic) HMFWiFiManager *wifiManager;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) BOOL supportsCurrentDeviceSymptoms;
@property (readonly, nonatomic) NSMapTable *symptomContainerByRegisteredAccessory;
@property (readonly, nonatomic) NSMapTable *nearbySFDevices;
@property (readonly, nonatomic) NSMapTable *networkReachableRPCompanionLinkDevices;
@property (nonatomic) unsigned long long deviceDiscoveryFlags;
@property unsigned long long currentDeviceProblemFlags;
@property (readonly) id /* block */ sharingClientFactory;
@property (retain, nonatomic) id discoveryAssertion;
@property (nonatomic) BOOL supportsRegisteringAccessories;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak, nonatomic) id<HMDSymptomManagerDataSource> dataSource;
@property (copy, nonatomic) NSArray *nearbyAccessoryUUIDsNotOnCurrentNetwork;
@property (copy, nonatomic) NSArray *nearbyAccessoryUUIDsNotConnectToPrimaryResident;
@property (copy, nonatomic) NSArray *nearbyAccessoryUUIDsReportingDiagnostic;
@property (readonly) unsigned long long currentDeviceRawProblemFlags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_symptomsForProblemFlags:(unsigned long long)a0;
+ (BOOL)accessoryIsConfiguring:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)_start;
- (void)_stop;
- (void)_initiateFixForAccessory:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isNearbyDiscoveryActive;
- (void)_registerForCurrentDeviceSymptoms;
- (id)_registeredAccessoryWithIDSIdentifier:(id)a0;
- (void)_rpDeviceChangedHandler:(id)a0;
- (void)_rpDeviceFoundHandler:(id)a0;
- (void)_rpDeviceLostHandler:(id)a0;
- (void)_sfDeviceChangedHandler:(id)a0;
- (void)_sfDeviceFoundHandler:(id)a0;
- (void)_sfDeviceLostHandler:(id)a0;
- (void)_startCompanionLinkClient;
- (void)_startDeviceDiscovery;
- (void)_stopCompanionLinkClient;
- (void)_stopDeviceDiscovery;
- (id)_symptomsForRegisteredAccessory:(id)a0;
- (void)_updateSymptomsForAllRegisteredAccessories;
- (void)_updateSymptomsForRegisteredAccessory:(id)a0;
- (void)_updateSymptomsForRegisteredAccessoryWithIDSIdentifier:(id)a0;
- (void)deregisterAccessory:(id)a0;
- (void)handleAccessoryRemovedNotification:(id)a0;
- (void)handleAccessoryWiFiNetworkInfoUpdatedNotification:(id)a0;
- (void)handleCurrentNetworkDidChangeNotification:(id)a0;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 supportsRegistering:(BOOL)a2 supportsCurrentDeviceSymptoms:(BOOL)a3 deviceDiscovery:(id)a4 companionLinkClient:(id)a5 wifiManager:(id)a6 notificationCenter:(id)a7 sharingClientFactory:(id /* block */)a8;
- (void)initiateFixForAccessory:(id)a0 completion:(id /* block */)a1;
- (id)obtainDiscoveryAssertion;
- (void)registerAccessory:(id)a0 delegate:(id)a1;
- (void)releaseDiscoveryAssertionWithAssertionHandle:(id)a0;
- (void)startDiscoveringSymptomsRequiringNearbyInfo;
- (void)stopDiscoveringSymptomsRequiringNearbyInfo;
- (void)updateNetworkMismatchInfoWithCompletionHandler:(void (^)(void))a0;

@end
