@class RTPlaceInferenceDailyMetrics, NSDictionary, RTVisitStore, NSDate, RTDefaultsManager, NSMutableArray, RTMetricManager, RTMapServiceManager, RTLearnedLocationStore, RTPlaceInferenceQueryStore, NSString, RTLocationManager, RTDistanceCalculator, RTVisitManager, RTInferredMapItemFuser;

@interface RTPlaceInferenceManager : RTService <RTPurgable>

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTInferredMapItemFuser *inferredMapItemFuser;
@property (readonly, nonatomic) RTMetricManager *metricManager;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (readonly, nonatomic) RTVisitStore *visitStore;
@property (readonly, nonatomic) NSDictionary *mapItemProviders;
@property (nonatomic) unsigned long long placeInferencesLimit;
@property (readonly, nonatomic) NSMutableArray *cachedLocations;
@property (readonly, nonatomic) unsigned long long cachedLocationIndex;
@property (retain, nonatomic) RTPlaceInferenceDailyMetrics *dailyMetrics;
@property (retain, nonatomic) NSDate *visitEntryTime;
@property (nonatomic) unsigned long long clientMappingIndex;
@property (readonly, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)learnedPlaceTypeFromLocationOfInterestType:(long long)a0;
+ (unsigned long long)learnedPlaceTypeFromUserSpecificPlaceType:(unsigned long long)a0;
+ (unsigned long long)learnedPlaceTypeSourceFromLocationOfInterestTypeSource:(unsigned long long)a0;
+ (unsigned long long)learnedPlaceTypeSourceFromUserSpecificPlaceTypeSource:(unsigned long long)a0;
+ (long long)periodicPurgePolicy;
+ (void)sanityCheckMapItemProviders:(id)a0;
+ (unsigned long long)userSpecificPlaceTypeFromLearnedPlaceType:(unsigned long long)a0;
+ (unsigned long long)userSpecificPlaceTypeFromLocationOfInterestType:(long long)a0;
+ (unsigned long long)userSpecificPlaceTypeSourceFromLearnedPlaceTypeSource:(unsigned long long)a0;
+ (unsigned long long)userSpecificPlaceTypeSourceFromLocationOfInterestTypeSource:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)_addMapItemProviderFromArray:(id)a0 toSet:(id)a1;
- (id)_closestCachedLocationForLocation:(id)a0;
- (id)_estimatedLocationFromSortedLocations:(id)a0;
- (id)_getFallbackMapItemProviderForOptions:(id)a0;
- (unsigned long long)_getMappingIndexForClientIdentifier:(id)a0;
- (BOOL)_inferUserSpecificPlaceTypeForInferredMapItem:(id)a0 userSpecificPlaceType:(unsigned long long *)a1 userSpecificPlaceTypeSource:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)_learnedPlaceTypeForInferredMapItem:(id)a0 placeType:(unsigned long long *)a1 placeTypeSource:(unsigned long long *)a2 error:(id *)a3;
- (id)_loiIdentifierForInferredMapItem:(id)a0;
- (void)_onDailyMetricsNotification:(id)a0;
- (void)_onPointOfInterestVisitNotification:(id)a0;
- (void)_onVisitManagerVisitIncidentNotification:(id)a0;
- (void)_performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (id)_placeInferenceFromInferredMapItem:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)_placeInferencesForOptions:(id)a0 error:(id *)a1;
- (void)_registerForDailyMetricsNotifications;
- (BOOL)_savePlaceInferenceQueriesFromInferredMapItems:(id)a0 inferenceErrorCode:(long long)a1 referenceLocation:(id)a2 options:(id)a3 outError:(id *)a4;
- (id)_selectBestCandidateAndUpdateReferenceLocation:(id)a0;
- (id)_selectLastLocationFromLocations:(id)a0 maxHorizontalUncertainty:(double)a1;
- (id)_selectMapItemProvidersForOptions:(id)a0;
- (id)_selectMapItemProvidersForOptions:(id)a0 targetProvider:(unsigned long long)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_unRegisterForDailyMetricsNotifications;
- (void)_updateCachedLocationsWithLocation:(id)a0;
- (id)createAllMapItemProvidersWithDefaultManager:(id)a0 distanceCalculator:(id)a1 eventManager:(id)a2 fingerprintManager:(id)a3 learnedLocationStore:(id)a4 locationManager:(id)a5 mapServiceManager:(id)a6 mapsSupportManager:(id)a7 motionActivityManager:(id)a8 platform:(id)a9 portraitManager:(id)a10 visitStore:(id)a11;
- (void)fetchPlaceInferencesForOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 eventManager:(id)a3 fingerprintManager:(id)a4 inferredMapItemFuser:(id)a5 learnedLocationStore:(id)a6 locationManager:(id)a7 mapServiceManager:(id)a8 mapsSupportManager:(id)a9 metricManager:(id)a10 motionActivityManager:(id)a11 placeInferenceQueryStore:(id)a12 platform:(id)a13 portraitManager:(id)a14 visitStore:(id)a15;
- (void)onDailyMetricsNotification:(id)a0;
- (void)onPointOfInterestVisitNotification:(id)a0;
- (void)onVisitManagerVisitIncidentNotification:(id)a0;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)sendPlaceInferenceMetrics:(id)a0 inferredMapItems:(id)a1 fusedMapItems:(id)a2 fallbackInferredMapItems:(id)a3 finalPlaceInferences:(id)a4 referenceLocation:(id)a5;

@end
