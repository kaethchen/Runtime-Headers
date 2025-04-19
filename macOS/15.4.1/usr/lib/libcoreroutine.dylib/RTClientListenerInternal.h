@class RTPersistenceManager, RTEventAgentManager, RTDeviceLocationPredictor, RTLocationStore, RTMapServiceManager, RTFingerprintManager, RTAssetManager, RTLocationManager, RTAuthorizationManager, RTLearnedLocationManager, RTAccountManager, RTVisitManager, RTHintManager, RTWiFiManager, RTAuthorizedLocationManager, RTPlatform, RTScenarioTriggerManager, NSString, RTBuildingPolygonManager, RTWorkoutRouteManager, RTPlaceInferenceQueryStore, RTWorkoutScheduler, RTDiagnostics, RTPeopleDiscoveryProvider, RTIntermittentGNSSManager, RTMotionActivityManager, RTPointOfInterestSampler, RTEventModelProvider, RTVehicleLocationProvider, RTPurgeManager, RTLearnedLocationStore, SMSafetyCacheStore;

@interface RTClientListenerInternal : RTXPCListener <NSXPCListenerDelegate>

@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTBuildingPolygonManager *buildingPolygonManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTAuthorizedLocationManager *authorizedLocationManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTIntermittentGNSSManager *intermittentGNSSManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTPeopleDiscoveryProvider *peopleDiscoveryProvider;
@property (retain, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (retain, nonatomic) RTPointOfInterestSampler *pointOfInterestSampler;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTWorkoutRouteManager *workoutRouteManager;
@property (retain, nonatomic) RTWorkoutScheduler *workoutScheduler;
@property (retain, nonatomic) SMSafetyCacheStore *safetyCacheStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)handleClientConnection:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 buildingPolygonManager:(id)a3 deviceLocationPredictor:(id)a4 diagnostics:(id)a5 eventAgentManager:(id)a6 eventModelProvider:(id)a7 authorizedLocationManager:(id)a8 fingerprintManager:(id)a9 hintManager:(id)a10 intermittentGNSSManager:(id)a11 learnedLocationManager:(id)a12 learnedLocationStore:(id)a13 locationManager:(id)a14 locationStore:(id)a15 mapServiceManager:(id)a16 motionActivityManager:(id)a17 peopleDiscoveryProvider:(id)a18 persistenceManager:(id)a19 placeInferenceQueryStore:(id)a20 platform:(id)a21 pointOfInterestSampler:(id)a22 purgeManager:(id)a23 safetyCacheStore:(id)a24 scenarioTriggerManager:(id)a25 vehicleLocationProvider:(id)a26 visitManager:(id)a27 workoutRouteManager:(id)a28 workoutScheduler:(id)a29;

@end
