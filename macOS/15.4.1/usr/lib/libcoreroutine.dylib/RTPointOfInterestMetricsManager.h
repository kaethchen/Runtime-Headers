@class RTScenarioTriggerManager, RTPlaceInferenceQueryStore, RTMapServiceManager, RTNavigationManager, RTDefaultsManager, NSMutableArray, RTTimerManager, RTBatteryManager, RTLearnedLocationStore, RTMapItem, RTLocationManager, RTTimer, RTDistanceCalculator, RTVisitManager, RTPointOfInterestSampler;

@interface RTPointOfInterestMetricsManager : RTService

@property (readonly, nonatomic) RTBatteryManager *batteryManager;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, nonatomic) RTNavigationManager *navigationManager;
@property (readonly, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (readonly, nonatomic) RTPointOfInterestSampler *pointOfInterestSampler;
@property (readonly, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (readonly, nonatomic) RTTimerManager *timerManager;
@property (readonly, nonatomic) RTVisitManager *visitManager;
@property (readonly, nonatomic) NSMutableArray *locationDenyList;
@property (nonatomic) BOOL samplingPointOfInterest;
@property (nonatomic) unsigned long long settledState;
@property (retain, nonatomic) RTTimer *samplingTimer;
@property (nonatomic) int currentSignalEnvironmentType;
@property (retain, nonatomic) RTMapItem *navigationDestination;

- (id)init;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_setup;
- (void)_shutdown;
- (void)_onLeechedLocationNotification:(id)a0;
- (void)_onLearnedLocationStoreNotification:(id)a0;
- (void)_onNavigationNotification:(id)a0;
- (void)_onVisitManagerVisitIncidentNotification:(id)a0;
- (BOOL)_shouldCollectQueriesForMapItem:(id)a0;
- (void)_unRegisterForNotifications;
- (void)_updateLocationDenyList;
- (id)collectMetricsWithError:(id *)a0;
- (unsigned long long)getTruthPointOfInterestIdentifier;
- (id)initWithBatteryManager:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 learnedLocationStore:(id)a3 locationManager:(id)a4 mapServiceManager:(id)a5 navigationManager:(id)a6 placeInferenceQueryStore:(id)a7 pointOfInterestSampler:(id)a8 scenarioTriggerManager:(id)a9 timerManager:(id)a10 visitManager:(id)a11;
- (void)onLearnedLocationStoreNotification:(id)a0;
- (void)onLeechedLocationNotification:(id)a0;
- (void)onNavigationNotification:(id)a0;
- (void)onSettledNotification:(id)a0;
- (void)onUnsettledNotification:(id)a0;
- (void)onVisitManagerVisitIncidentNotification:(id)a0;
- (id)processQueries:(id)a0 visitEntryDate:(id)a1 poiIdentifier:(unsigned long long)a2;
- (void)shutdownWithHandler:(id /* block */)a0;
- (BOOL)submitMetricsWithError:(id *)a0;

@end
