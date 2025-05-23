@class RTContactsManager, NSString, RTDistanceCalculator, RTLearnedLocationEngine, RTLearnedLocationStore, RTLearnedPlaceTypeInferenceStore, RTMapServiceManager;

@interface RTLearnedLocationManager : RTService <RTLearnedLocationEngineProtocol, RTPurgable, RTStoreManager, RTDiagnosticProvider>

@property (readonly, nonatomic) RTContactsManager *contactsManager;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationEngine *learnedLocationEngine;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTLearnedPlaceTypeInferenceStore *learnedPlaceTypeInferenceStore;
@property (readonly, nonatomic) RTMapServiceManager *mapServiceManager;
@property (nonatomic) BOOL available;
@property (readonly, nonatomic) BOOL migrationComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)distanceThresholdFromUncertainty:(double)a0 otherUncertainty:(double)a1;
+ (double)maxDistanceFromInterval:(double)a0 velocity:(double)a1;
+ (id)migrateLegacyMapItemWithGeoMapItem:(id)a0 geoMapItemHandle:(id)a1 source:(unsigned long long)a2 mapServiceManager:(id)a3 error:(id *)a4;
+ (id)modeToString:(long long)a0;
+ (long long)periodicPurgePolicy;
+ (id)vendedClasses;

- (id)init;
- (void).cxx_destruct;
- (void)_setup;
- (void)_classifyPlaceTypesWithHandler:(id /* block */)a0;
- (id)_getLocationOfInterestAtLocation:(id)a0 fromLocationsOfInterest:(id)a1 error:(id *)a2;
- (void)_queryProvider:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_addLocationOfInterest:(id)a0 handler:(id /* block */)a1;
- (id)_getLearnedVisits:(id)a0 dateInterval:(id)a1;
- (void)fetchHindsightVisitsBetweenStartDate:(id)a0 endDate:(id)a1 ascending:(BOOL)a2 handler:(id /* block */)a3;
- (void)_addLocationOfInterestWithType:(unsigned long long)a0 mapItem:(id)a1 customLabel:(id)a2 handler:(id /* block */)a3;
- (void)_addVisit:(id)a0 finerGranularityInferredMapItem:(id)a1 locationOfInterest:(id)a2 handler:(id /* block */)a3;
- (id)_checkFamiliarityIndexResultsForErrors:(id)a0;
- (id)_combineFamiliarityIndexRetrieveError:(id)a0 resultsError:(id)a1;
- (void)_computeFamiliarityIndexResultsForLearnedLocationsWithVisits:(id)a0 options:(id)a1 familiarPlaces:(id)a2 error:(id)a3 handler:(id /* block */)a4;
- (double)_estimateFamiliarityIndexForAreaWithGeohash:(id)a0 familiarPlaces:(id)a1 visitedLearnedLOI:(id)a2 statsVisits:(id)a3;
- (double)_estimateFamiliarityIndexForLearnedLOI:(id)a0 statsLOIVisits:(id)a1;
- (double)_estimateFamiliarityIndexReferenceLocationSummary:(id)a0 dwellTimePerAreas:(id)a1;
- (void)_extendLifetimeOfVisitsWithIdentifiers:(id)a0 handler:(id /* block */)a1;
- (void)_fetchAllLocationsOfInterestWithHandler:(id /* block */)a0;
- (void)_fetchDedupedLocationOfInterestIdentifiersWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_fetchFamiliarityIndexResultsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchFinerGranularityInferredMapItemWithVisitIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_fetchFusionCandidatesForVisitIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_fetchHindsightVisitsBetweenStartDate:(id)a0 endDate:(id)a1 ascending:(BOOL)a2 handler:(id /* block */)a3;
- (void)_fetchInferredMapItemForVisitIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationOfInterestAtLocation:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationOfInterestForRegion:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_fetchLocationsOfInterestVisitedSinceDate:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationsOfInterestWithPlaceType:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)_fetchLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 handler:(id /* block */)a2;
- (void)_fetchModeAtLocation:(id)a0 handler:(id /* block */)a1;
- (void)_fetchRecentLocationsOfInterestWithHandler:(id /* block */)a0;
- (void)_fetchTransitionsBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_fetchVisitIdentifiersIn:(id)a0 handler:(id /* block */)a1;
- (void)_forceRelabeling:(id /* block */)a0;
- (id)_getAreasGeohashesFamiliarPlacesWithGranularity:(unsigned long long)a0 outError:(id *)a1;
- (id)_getDateOnlyFromLearnedVisitDate:(id)a0;
- (id)_getFamiliarityIndexResultAreaLevelForLearnedVisit:(id)a0 learnedLOI:(id)a1 geohash:(id)a2 familiarPlaces:(id)a3 statsVisits:(id)a4;
- (id)_getFamiliarityIndexResultForLearnedVisit:(id)a0 learnedLOI:(id)a1 statsLOIVisits:(id)a2;
- (id)_getFamiliarityIndexResultsAreaLevelForLearnedLOIs:(id)a0 options:(id)a1 familiarPlaces:(id)a2 outError:(id *)a3;
- (id)_getFamiliarityIndexResultsLOILevelForLOIs:(id)a0 options:(id)a1 outError:(id *)a2;
- (unsigned long long)_getGeohashLengthForSpatialGranularity:(unsigned long long)a0;
- (id)_getLocationOfInterestAtLocation:(id)a0 fromLocationsOfInterest:(id)a1 minCircleOverlapThreshold:(double)a2 dwellTimePercentageThreshold:(double)a3 error:(id *)a4;
- (id)_getLocationsOfInterestVisitedBeforeDate:(id)a0 fromLocationsOfInterest:(id)a1 error:(id *)a2;
- (id)_getLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 fromLocationsOfInterest:(id)a2 error:(id *)a3;
- (id)_getMatchingLocationsOfIntrestWithLocation:(id)a0 locationsOfInterest:(id)a1 minCircleOverlapThreshold:(double)a2;
- (unsigned long long)_getTotalVisitCountForPreviousDatesFromDictGeohashToDates:(id)a0 referenceDate:(id)a1;
- (unsigned long long)_getTotalVisitsCountForLOI:(id)a0 dateInterval:(id)a1 outError:(id *)a2;
- (id)_latitudeLongitudeToGeohashHelperForLatitude:(double)a0 longitude:(double)a1 hashLength:(unsigned long long)a2;
- (void)_logLearnedState;
- (BOOL)_matchLocation:(id)a0 locationOfInterest:(id)a1 minCircleOverlapThreshold:(double)a2 error:(id *)a3;
- (void)_migrateLegacyMapItems:(id /* block */)a0;
- (void)_migrateStateModelLegacy:(id /* block */)a0;
- (void)_onLearnedLocationStoreNotification:(id)a0;
- (void)_performLegacyMigrations:(id /* block */)a0;
- (void)_reconcileLearnedLocationsWithHandler:(id /* block */)a0;
- (void)_reconstructTransitionsWithHandler:(id /* block */)a0;
- (void)_removeAllLocationsOfInterestWithHandler:(id /* block */)a0;
- (void)_removeLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)_removeVisitWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (id)_selectLocationOfInterestWithLargestDwellTimeFromLocationsOfInterest:(id)a0 dwellTimePercentageThreshold:(double)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_trainForReason:(unsigned long long)a0 mode:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_trainLocationsOfInterestModelWithHandler:(id /* block */)a0;
- (id)_updateContactsWithLearnedPlace:(id)a0 originalLearnedPlace:(id)a1 error:(id *)a2;
- (void)_updateLocationOfInterestWithIdentifier:(id)a0 customLabel:(id)a1 handler:(id /* block */)a2;
- (void)_updateLocationOfInterestWithIdentifier:(id)a0 mapItem:(id)a1 mapItemSource:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)_updateLocationOfInterestWithIdentifier:(id)a0 type:(unsigned long long)a1 customLabel:(id)a2 handler:(id /* block */)a3;
- (void)_updateLocationOfInterestWithIdentifier:(id)a0 type:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_updateLocationOfInterestWithIdentifier:(id)a0 type:(unsigned long long)a1 mapItem:(id)a2 mapItemSource:(unsigned long long)a3 customLabel:(id)a4 handler:(id /* block */)a5;
- (void)_visitFromLearnedVisit:(id)a0 learnedLOI:(id)a1 handler:(id /* block */)a2;
- (double)_weeksInLearnedLocationsOfInterestModel;
- (void)addLocationOfInterest:(id)a0 handler:(id /* block */)a1;
- (void)addLocationOfInterestWithType:(unsigned long long)a0 mapItem:(id)a1 customLabel:(id)a2 handler:(id /* block */)a3;
- (void)addVisit:(id)a0 finerGranularityInferredMapItem:(id)a1 locationOfInterest:(id)a2 handler:(id /* block */)a3;
- (void)classifyPlaceTypesWithHandler:(id /* block */)a0;
- (id)createAndStoreNewPlaceWithMapItem:(id)a0 customLabel:(id)a1 mapItemSource:(unsigned long long)a2 outError:(id *)a3;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)a0 handler:(id /* block */)a1;
- (void)fetchAllLocationsOfInterestWithHandler:(id /* block */)a0;
- (void)fetchDedupedLocationOfInterestIdentifiersWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)fetchFamiliarityIndexResultsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchFinerGranularityInferredMapItemWithVisitIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchFusionCandidatesForVisitIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchInferredMapItemForVisitIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationOfInterestAtLocation:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationOfInterestForRegion:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchLocationsOfInterestVisitedSinceDate:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationsOfInterestWithPlaceType:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)fetchLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 handler:(id /* block */)a2;
- (void)fetchModeAtLocation:(id)a0 handler:(id /* block */)a1;
- (void)fetchRecentLocationsOfInterestWithHandler:(id /* block */)a0;
- (void)fetchTransitionsBetweenStartDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchVisitIdentifiersIn:(id)a0 handler:(id /* block */)a1;
- (void)flushToCacheWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)forceRelabeling:(id /* block */)a0;
- (id)initWithQueue:(id)a0 contactsManager:(id)a1 distanceCalculator:(id)a2 learnedLocationStore:(id)a3 learnedPlaceTypeInferenceStore:(id)a4 mapServiceManager:(id)a5;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)learnedLocationEngineDidClear:(id)a0;
- (void)learnedLocationEngineDidFinishTraining:(id)a0;
- (void)learnedLocationEngineDidUpdate:(id)a0 intervalSinceLastUpdate:(double)a1;
- (void)learnedLocationEngineWillBeginTraining:(id)a0;
- (void)logDatabasesWithHandler:(id /* block */)a0;
- (void)onLearnedLocationStoreNotification:(id)a0;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)queryProvider:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)reconcileLearnedLocationsWithHandler:(id /* block */)a0;
- (void)reconstructTransitionsWithHandler:(id /* block */)a0;
- (void)removeAllLocationsOfInterestWithHandler:(id /* block */)a0;
- (void)removeLocationOfInterestWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)removeVisitWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)trainForReason:(unsigned long long)a0 mode:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)trainLocationsOfInterestModelWithHandler:(id /* block */)a0;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 customLabel:(id)a1 handler:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 mapItem:(id)a1 mapItemSource:(unsigned long long)a2 handler:(id /* block */)a3;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(unsigned long long)a1 customLabel:(id)a2 handler:(id /* block */)a3;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(unsigned long long)a1 mapItem:(id)a2 mapItemSource:(unsigned long long)a3 customLabel:(id)a4 handler:(id /* block */)a5;
- (void)updateTransitionWithIdentifier:(id)a0 motionActivityType:(unsigned long long)a1 handler:(id /* block */)a2;
- (BOOL)validateUpdatedMapItem:(id)a0 locationOfInterest:(id)a1 error:(id *)a2;

@end
