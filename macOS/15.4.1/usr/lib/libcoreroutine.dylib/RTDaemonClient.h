@class RTMapServiceManager, RTLocationManager, RTDaemonClientRegistrarScenarioTrigger, RTMetricManager, RTAccountManager, RTBackgroundInertialOdometryManager, RTLocationStore, RTDeviceLocationPredictor, RTScenarioTriggerManager, RTEventModelProvider, RTVehicleLocationProvider, NSXPCConnection, RTAuthorizationManager, RTLearnedLocationManager, RTDiagnostics, RTPurgeManager, RTTimerManager, RTDefaultsManager, RTLearnedLocationStore, RTVehicleStore, RTHealthKitManager, RTContactsManager, RTVisitManager, RTIntermittentGNSSManager, RTWiFiManager, RTPlaceInferenceOptions, RTMotionActivityManager, RTLocationContextManager, RTElevationManager, RTEventAgentManager, RTAssetManager, NSMutableDictionary, RTDaemonClientRegistrarVehicleEvent, RTTripSegmentManager, RTAuthorizedLocationManager, RTPlaceInferenceManager, NSObject, NSString, RTHintManager, RTEntitlementProvider, RTFingerprintManager, RTPeopleDiscoveryProvider;
@protocol OS_dispatch_queue, RTClientListenerProtocol;

@interface RTDaemonClient : NSObject <RTDaemonClientRegistrarVehicleEventProtocol, RTDaemonClientRegistrarScenarioTriggerProtocol, RTDaemonProtocol, NSXPCConnectionDelegate>

@property BOOL enabled;
@property (nonatomic) BOOL supported;
@property (nonatomic) BOOL monitorVisits;
@property (nonatomic) BOOL leechVisits;
@property (nonatomic) BOOL leechLowConfidenceVisits;
@property (nonatomic) BOOL monitorPlaceInferences;
@property (retain, nonatomic) RTPlaceInferenceOptions *placeInferenceOptions;
@property (retain, nonatomic) NSMutableDictionary *restorationData;
@property (retain, nonatomic) RTEntitlementProvider *entitlementProvider;
@property (retain, nonatomic) NSMutableDictionary *vendedClassesStoreManagerDict;
@property (retain, nonatomic) RTDaemonClientRegistrarVehicleEvent *vehicleEventRegistrar;
@property (retain, nonatomic) RTDaemonClientRegistrarScenarioTrigger *scenarioTriggerRegistrar;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTBackgroundInertialOdometryManager *backgroundInertialOdometryManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTElevationManager *elevationManager;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTAuthorizedLocationManager *authorizedLocationManager;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTIntermittentGNSSManager *intermittentGNSSManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationContextManager *locationContextManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPeopleDiscoveryProvider *peopleDiscoveryProvider;
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTTripSegmentManager *tripSegmentManager;
@property (retain, nonatomic) RTVehicleStore *vehicleStore;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *executablePath;
@property (copy, nonatomic) NSString *executableName;
@property (nonatomic) int processIdentifier;
@property (copy, nonatomic) NSString *signingIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) NSString *restorationIdentifier;
@property (weak, nonatomic) id<RTClientListenerProtocol> clientManagerDelegate;
@property (nonatomic) BOOL targetUserSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterVisits:(id)a0 executable:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)restore;
- (void)shutdown;
- (void)clearAllVehicleEventsWithReply:(id /* block */)a0;
- (void)fetchVehiclesWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)startMonitoringVisitsWithReply:(id /* block */)a0;
- (id)_clientIdentifier;
- (void)_fetchHindsightVisitsWithDateInterval:(id)a0 ascending:(BOOL)a1 handler:(id /* block */)a2;
- (void)_fetchRealtimeVisitsWithDateInterval:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_onLocationContextManagerNotification:(id)a0;
- (void)_onVisitManagerNotification:(id)a0;
- (void)_startMonitoringVehicleEvents;
- (void)addBackgroundInertialOdometrySamples:(id)a0 reply:(id /* block */)a1;
- (void)addElevations:(id)a0 handler:(id /* block */)a1;
- (void)addLocationOfInterestOfType:(long long)a0 mapItemStorage:(id)a1 customLabel:(id)a2 reply:(id /* block */)a3;
- (void)clearRoutineWithReply:(id /* block */)a0;
- (void)deleteTripSegmentWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)engageInVehicleEventWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)fetchAllLocationsOfInterestForSettingsWithReply:(id /* block */)a0;
- (void)fetchAuthorizedLocationStatus:(id /* block */)a0;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(id /* block */)a0;
- (void)fetchBackgroundInertialOdometrySamplesWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchCloudSyncAuthorizationStateWithReply:(id /* block */)a0;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)a0 lookingAhead:(double)a1 reply:(id /* block */)a2;
- (void)fetchDedupedLocationOfInterestIdentifiersWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchElevationsWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(id)a1 reply:(id /* block */)a2;
- (void)fetchEstimatedLocationAtDate:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)fetchFamiliarityIndexResultsWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchFinerGranularityInferredMapItemWithVisitIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchFormattedPostalAddressesFromMeCard:(id /* block */)a0;
- (void)fetchLastVehicleEventsWithReply:(id /* block */)a0;
- (void)fetchLocationOfInterestAtLocation:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationOfInterestForRegion:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationsCountForTripSegmentWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationsForTripSegmentWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationsOfInterestOfType:(long long)a0 reply:(id /* block */)a1;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1 reply:(id /* block */)a2;
- (void)fetchLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 reply:(id /* block */)a2;
- (void)fetchLookbackWindowStartDateWithLocation:(id)a0 reply:(id /* block */)a1;
- (void)fetchMonitoredScenarioTriggerTypesWithReply:(id /* block */)a0;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 reply:(id /* block */)a3;
- (void)fetchPathToDiagnosticFilesWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchPlaceInferencesWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 reply:(id /* block */)a2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)a0 location:(id)a1 calendarIdentifier:(id)a2 reply:(id /* block */)a3;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 reply:(id /* block */)a2;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)a0 reply:(id /* block */)a1;
- (void)fetchRemoteStatusWithReply:(id /* block */)a0;
- (void)fetchRoutineEnabledWithReply:(id /* block */)a0;
- (void)fetchRoutineModeFromLocation:(id)a0 reply:(id /* block */)a1;
- (void)fetchStoredLocationsWithContext:(id)a0 reply:(id /* block */)a1;
- (void)fetchStoredVisitsWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchTransitionsBetweenStartDate:(id)a0 endDate:(id)a1 reply:(id /* block */)a2;
- (void)fetchTripSegmentMetadataWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchTripSegmentsWithOptions:(id)a0 reply:(id /* block */)a1;
- (BOOL)hasReasonToOutliveClientConnection;
- (id)initWithQueue:(id)a0 restorationData:(id)a1 accountManager:(id)a2 assetManager:(id)a3 authorizationManager:(id)a4 backgroundInertialOdometryManager:(id)a5 contactsManager:(id)a6 defaultsManager:(id)a7 deviceLocationPredictor:(id)a8 diagnostics:(id)a9 elevationManager:(id)a10 eventAgentManager:(id)a11 eventModelProvider:(id)a12 authorizedLocationManager:(id)a13 fingerprintManager:(id)a14 healthKitManager:(id)a15 hintManager:(id)a16 intermittentGNSSManager:(id)a17 learnedLocationManager:(id)a18 learnedLocationStore:(id)a19 locationManager:(id)a20 locationContextManager:(id)a21 locationStore:(id)a22 mapServiceManager:(id)a23 metricManager:(id)a24 motionActivityManager:(id)a25 peopleDiscoveryProvider:(id)a26 placeInferenceManager:(id)a27 purgeManager:(id)a28 scenarioTriggerManager:(id)a29 timerManager:(id)a30 tripSegmentManager:(id)a31 vehicleLocationProvider:(id)a32 vehicleStore:(id)a33 visitManager:(id)a34 wifiManager:(id)a35;
- (void)launchClient;
- (void)onAuthorizationNotification:(id)a0;
- (void)onLocationContextManagerNotification:(id)a0;
- (void)onVisitManagerNotification:(id)a0;
- (void)performBluePOIQueryLookingBack:(double)a0 lookingAhead:(double)a1 reply:(id /* block */)a2;
- (void)processHindsightVisitsWithReply:(id /* block */)a0;
- (void)removeLocationOfInterestWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)removeVisitWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)scenarioTriggerRegistrar:(id)a0 didReceiveScenarioTriggers:(id)a1 error:(id)a2;
- (void)setHintForRegionState:(long long)a0 significantRegion:(id)a1 reply:(id /* block */)a2;
- (void)setRoutineEnabled:(BOOL)a0 reply:(id /* block */)a1;
- (void)startLeechingLowConfidenceVisitsWithReply:(id /* block */)a0;
- (void)startLeechingVisitsWithReply:(id /* block */)a0;
- (void)startMonitoringPlaceInferencesWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)startMonitoringVehicleEventsWithReply:(id /* block */)a0;
- (void)stopLeechingLowConfidenceVisitsWithReply:(id /* block */)a0;
- (void)stopLeechingVisitsWithReply:(id /* block */)a0;
- (void)stopMonitoringPlaceInferencesWithReply:(id /* block */)a0;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)stopMonitoringVehicleEventsWithReply:(id /* block */)a0;
- (void)stopMonitoringVisitsWithReply:(id /* block */)a0;
- (void)updateCloudSyncProvisionedForAccount:(BOOL)a0 reply:(id /* block */)a1;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 customLabel:(id)a1 reply:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 mapItemStorage:(id)a1 reply:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 customLabel:(id)a2 reply:(id /* block */)a3;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 mapItemStorage:(id)a2 customLabel:(id)a3 reply:(id /* block */)a4;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 reply:(id /* block */)a2;
- (void)updateVehicleEventWithIdentifier:(id)a0 geoMapItem:(id)a1 reply:(id /* block */)a2;
- (void)updateVehicleEventWithIdentifier:(id)a0 location:(id)a1 reply:(id /* block */)a2;
- (void)updateVehicleEventWithIdentifier:(id)a0 notes:(id)a1 reply:(id /* block */)a2;
- (void)updateVehicleEventWithIdentifier:(id)a0 photo:(id)a1 reply:(id /* block */)a2;
- (void)userInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1 feedback:(id)a2 geoMapItem:(id)a3 reply:(id /* block */)a4;
- (void)vehicleEventAtLocation:(id)a0 notes:(id)a1 reply:(id /* block */)a2;
- (void)vehicleEventRegistrar:(id)a0 didReceiveVehicleEvents:(id)a1 error:(id)a2;

@end
