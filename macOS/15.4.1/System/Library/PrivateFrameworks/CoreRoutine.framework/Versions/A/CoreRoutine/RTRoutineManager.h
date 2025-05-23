@class NSXPCConnection, NSString, RTRoutineManagerRegistrantAction, RTPlaceInferenceOptions, RTRoutineManagerRegistrantPeopleDiscovery, RTEventAgentHelper, NSObject, RTRoutineManagerRegistrantScenarioTrigger, RTTokenBucket;
@protocol OS_dispatch_queue;

@interface RTRoutineManager : NSObject <RTFrameworkProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) id /* block */ visitHandler;
@property (copy, nonatomic) id /* block */ leechedVisitHandler;
@property (copy, nonatomic) id /* block */ leechedLowConfidenceVisitHandler;
@property (retain, nonatomic) RTPlaceInferenceOptions *placeInferenceOptions;
@property (copy, nonatomic) id /* block */ placeInferencesHandler;
@property (copy, nonatomic) id /* block */ vehicleEventsHandler;
@property (copy, nonatomic) id /* block */ peopleDiscoveryErrorHandler;
@property (retain, nonatomic) NSString *restorationIdentifier;
@property (retain, nonatomic) RTEventAgentHelper *eventAgentHelper;
@property (nonatomic) BOOL targetUserSession;
@property (retain, nonatomic) RTTokenBucket *clientThrottle;
@property (retain, nonatomic) RTRoutineManagerRegistrantAction *actionRegistrant;
@property (retain, nonatomic) RTRoutineManagerRegistrantPeopleDiscovery *peopleDiscoveryRegistrant;
@property (retain, nonatomic) RTRoutineManagerRegistrantScenarioTrigger *scenarioTriggerRegistrant;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (id)modeOfTransportationToString:(long long)a0;
+ (id)routineModeToString:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateObjectsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (void)createConnection;
- (void)stopMonitoringVisits;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchRoutineEnabledWithHandler:(id /* block */)a0;
- (id)_proxyForServicingSelector:(SEL)a0 withErrorHandler:(id /* block */)a1;
- (void)addBackgroundInertialOdometrySamples:(id)a0 handler:(id /* block */)a1;
- (void)addElevations:(id)a0 handler:(id /* block */)a1;
- (void)clearAllVehicleEvents;
- (void)clearRoutineWithHandler:(id /* block */)a0;
- (void)deleteTripSegmentWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)engageInVehicleEventWithIdentifier:(id)a0;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)a0 handler:(id /* block */)a1;
- (void)fetchAuthorizedLocationStatus:(id /* block */)a0;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id /* block */)a0;
- (void)fetchBackgroundInertialOdometrySamplesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchCloudSyncAuthorizationState:(id /* block */)a0;
- (void)fetchDedupedLocationOfInterestIdentifiersWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchElevationsWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchEstimatedLocationAtDate:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)fetchFamiliarityIndexResultsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFinerGranularityInferredMapItemWithVisitIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchFormattedPostalAddressesFromMeCard:(id /* block */)a0;
- (void)fetchLastVehicleEventsWithHandler:(id /* block */)a0;
- (void)fetchLocationsCountForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationsForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLookbackWindowStartDateWithLocation:(id)a0 handler:(id /* block */)a1;
- (void)fetchPathToDiagnosticFilesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)a0 location:(id)a1 calendarIdentifier:(id)a2 withHandler:(id /* block */)a3;
- (void)fetchRemoteStatusWithHandler:(id /* block */)a0;
- (void)fetchStoredVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchTransitionsBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchTripSegmentMetadataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripSegmentsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchVehiclesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)onLeechedLowConfidenceVisit:(id)a0 withError:(id)a1;
- (void)onLeechedVisit:(id)a0 withError:(id)a1;
- (void)onPlaceInferences:(id)a0 error:(id)a1;
- (void)onScenarioTrigger:(id)a0 withError:(id)a1;
- (void)onVehicleEvents:(id)a0 error:(id)a1;
- (void)onVisit:(id)a0 withError:(id)a1;
- (void)performBluePOIQueryLookingBack:(double)a0 lookingAhead:(double)a1 handler:(id /* block */)a2;
- (void)removeLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)removeVisitWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)setRoutineEnabled:(BOOL)a0;
- (void)setRoutineEnabled:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)stopMonitoringVehicleEvents;
- (void)updateCloudSyncProvisionedForAccount:(BOOL)a0 handler:(id /* block */)a1;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 customLabel:(id)a1 handler:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 customLabel:(id)a2 handler:(id /* block */)a3;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 handler:(id /* block */)a2;
- (void)updateVehicleEventWithIdentifier:(id)a0 location:(id)a1;
- (void)updateVehicleEventWithIdentifier:(id)a0 notes:(id)a1;
- (void)updateVehicleEventWithIdentifier:(id)a0 photo:(id)a1;
- (void)vehicleEventAtLocation:(id)a0 notes:(id)a1 handler:(id /* block */)a2;
- (void)_createConnection;
- (void)userInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1 feedback:(id)a2;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 withHandler:(id /* block */)a2;
- (void)fetchLocationsOfInterestOfType:(long long)a0 withHandler:(id /* block */)a1;
- (void)startLeechingVisitsWithHandler:(id /* block */)a0;
- (void)stopLeechingLowConfidenceVisits;
- (void)_enumerateStoredLocationsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (void)_launchTaskWithSelector:(SEL)a0 remainingAttempts:(unsigned long long)a1 proxyErrorHandler:(id /* block */)a2 taskBlock:(id /* block */)a3;
- (id)_proxyForServicingSelector:(SEL)a0 asynchronous:(BOOL)a1 withErrorHandler:(id /* block */)a2;
- (void)addLocationOfInterestOfType:(long long)a0 mapItem:(id)a1 customLabel:(id)a2 handler:(id /* block */)a3;
- (void)clearAllVehicleEvents:(id /* block */)a0;
- (void)clearAllVehicleEventsWithHandler:(id /* block */)a0;
- (void)enumerateStoredLocationsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (void)extendLifetimeOfVisitWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchAllLocationsOfInterestForSettingsWithHandler:(id /* block */)a0;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)a0 lookingAhead:(double)a1 handler:(id /* block */)a2;
- (void)fetchEstimatedLocationAtDate:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationOfInterestAtLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationOfInterestForRegion:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchLookbackWindowStartDateWithHandler:(id /* block */)a0;
- (void)fetchMonitoredScenarioTriggerTypesWithHandler:(id /* block */)a0;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 withHandler:(id /* block */)a3;
- (void)fetchNextPredictedLocationsOfInterestWithHandler:(id /* block */)a0;
- (void)fetchPlaceInferencesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchRoutineModeFromLocation:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchRoutineStateWithHandler:(id /* block */)a0;
- (void)handleDaemonStart;
- (id)initWithRestorationIdentifier:(id)a0;
- (id)initWithRestorationIdentifier:(id)a0 targertUserSession:(BOOL)a1;
- (id)initWithTargetUserSession:(BOOL)a0;
- (void)launchTaskWithSelector:(SEL)a0 remainingAttempts:(unsigned long long)a1 proxyErrorHandler:(id /* block */)a2 taskBlock:(id /* block */)a3;
- (void)processHindsightVisitsWithHandler:(id /* block */)a0;
- (BOOL)selectorIsAllowed:(SEL)a0;
- (void)setHintForRegionState:(long long)a0 significantRegion:(id)a1 withHandler:(id /* block */)a2;
- (void)startLeechingLowConfidenceVisitsWithHandler:(id /* block */)a0;
- (void)startMonitoringPlaceInferencesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)a0 withHandler:(id /* block */)a1;
- (void)startMonitoringVehicleEventsWithHandler:(id /* block */)a0;
- (void)startMonitoringVisitsWithHandler:(id /* block */)a0;
- (void)stopLeechingVisits;
- (void)stopMonitoringNextPredictedLocationsOfInterest;
- (void)stopMonitoringPlaceInferences;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)a0;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 mapItem:(id)a1 handler:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 mapItem:(id)a2 customLabel:(id)a3 handler:(id /* block */)a4;
- (void)updateVehicleEventWithIdentifier:(id)a0 geoMapItem:(id)a1;
- (void)userInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1 feedback:(id)a2 geoMapItem:(id)a3 handler:(id /* block */)a4;
- (void)vehicleEventAtLocation:(id)a0 notes:(id)a1;

@end
