@class RTMapServiceManager, RTLocationManager, RTMetricManager, RTAccountManager, RTBackgroundInertialOdometryManager, RTLocationStore, RTDeviceLocationPredictor, RTScenarioTriggerManager, RTEventModelProvider, RTVehicleLocationProvider, RTAuthorizationManager, RTLearnedLocationManager, RTDiagnostics, RTPurgeManager, RTTimerManager, RTDefaultsManager, RTVehicleStore, RTLearnedLocationStore, RTVisitManager, RTWiFiManager, RTContactsManager, RTHealthKitManager, RTIntermittentGNSSManager, RTLocationContextManager, RTMotionActivityManager, RTElevationManager, RTEventAgentManager, RTAssetManager, NSMutableDictionary, RTTripSegmentManager, RTAuthorizedLocationManager, RTPlaceInferenceManager, NSString, RTHintManager, RTFingerprintManager, RTPeopleDiscoveryProvider, NSXPCInterface;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) NSMutableDictionary *persistedClients;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVehicleStore *vehicleStore;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTAuthorizedLocationManager *authorizedLocationManager;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTTripSegmentManager *tripSegmentManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationContextManager *locationContextManager;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTPeopleDiscoveryProvider *peopleDiscoveryProvider;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTElevationManager *elevationManager;
@property (retain, nonatomic) RTBackgroundInertialOdometryManager *backgroundInertialOdometryManager;
@property (retain, nonatomic) RTIntermittentGNSSManager *intermittentGNSSManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistedClientsPath;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setup;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (id)handleClientConnection:(id)a0;
- (void)handleDisconnectionForDaemonClient:(id)a0;
- (id)handleRestorationForDaemonClient:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 backgroundInertialOdometryManager:(id)a3 contactsManager:(id)a4 defaultsManager:(id)a5 deviceLocationPredictor:(id)a6 diagnostics:(id)a7 elevationManager:(id)a8 eventAgentManager:(id)a9 eventModelProvider:(id)a10 authorizedLocationManager:(id)a11 fingerprintManager:(id)a12 healthKitManager:(id)a13 hintManager:(id)a14 intermittentGNSSManager:(id)a15 learnedLocationManager:(id)a16 learnedLocationStore:(id)a17 locationManager:(id)a18 locationContextManager:(id)a19 locationStore:(id)a20 mapServiceManager:(id)a21 metricManager:(id)a22 motionActivityManager:(id)a23 peopleDiscoveryProvider:(id)a24 placeInferenceManager:(id)a25 purgeManager:(id)a26 scenarioTriggerManager:(id)a27 timerManager:(id)a28 tripSegmentManager:(id)a29 vehicleLocationProvider:(id)a30 vehicleStore:(id)a31 visitManager:(id)a32 wifiManager:(id)a33;
- (void)saveDaemonClient:(id)a0;

@end
