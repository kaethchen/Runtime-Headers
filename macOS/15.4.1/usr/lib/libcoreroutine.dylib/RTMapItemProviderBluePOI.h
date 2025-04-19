@class NSString, NSArray, RTFingerprintManager, RTPlatform, RTMapItemProviderBluePOIParameters, RTMotionActivityManager, RTPlaceInferenceQueryStore, RTInferredMapItemDeduper, RTLocationManager, RTMapServiceManager;

@interface RTMapItemProviderBluePOI : RTMapItemProviderBase <RTMapItemProvider>

@property (class, readonly, nonatomic) NSArray *preferredAOICategories;

@property (readonly, nonatomic) RTInferredMapItemDeduper *inferredMapItemDeduper;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTPlaceInferenceQueryStore *placeInferenceQueryStore;
@property (readonly, nonatomic) RTPlatform *platform;
@property (readonly, copy, nonatomic) RTMapItemProviderBluePOIParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)harvestTypeToPoiTriggerType:(unsigned long long)a0;
+ (id)harvestTypeToString:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_determineFingerprintFallbackDateIntervalFromStartDate:(id)a0 endDate:(id)a1;
- (id)locationsForAccessPoints:(id)a0 error:(id *)a1;
- (id)_adjustConfidencesOfTheSelectedResult:(id)a0 allQueryResults:(id)a1;
- (id)_bestAOIFromAOIs:(id)a0;
- (id)_bluePOIQueryFromFingerprint:(id)a0 fingerprintIdx:(unsigned long long)a1 referenceLocationArray:(id)a2 selected:(BOOL)a3 endDate:(id)a4 totalAPsCount:(unsigned long long *)a5 error:(id *)a6;
- (id)_computeEarlyStopQueryResultFromResults:(id)a0 originalMaxNumberOfQueries:(unsigned long long)a1 aoiConfidencePassThroughThreshold:(double)a2 poiConfidencePassThroughThreshold:(double)a3;
- (id)_confidenceCoefficientsForAOI:(id)a0 AOIOccurenceCount:(unsigned long long)a1 POIResults:(id)a2;
- (BOOL)_fallbackToLocationBasedLookupForVisitDuration:(double)a0;
- (id)_fetchAllFingerprintsBetweenStartDate:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)_filterByConfidence:(id)a0 aoiConfidencePassThroughThreshold:(double)a1 aoiConfidenceConsiderThreshold:(double)a2 poiConfidencePassThroughThreshold:(double)a3 poiConfidenceConsiderThreshold:(double)a4 error:(id *)a5;
- (id)_filterLessRelevantAOIsFromQueryResult:(id)a0;
- (id)_filterOutEmptyFingerprintsFromFingerprints:(id)a0 endDate:(id)a1;
- (BOOL)_hasMapItemInQueryResult:(id)a0 wifiFingerprintLabelType:(long long)a1;
- (id)_mapItemsFromBluePOIQuery:(id)a0 startDate:(id)a1 endDate:(id)a2 error:(id *)a3;
- (id)_mapItemsWithFidelityPolicy:(unsigned long long)a0 locations:(id)a1 accessPoints:(id)a2 referenceLocation:(id)a3 options:(id)a4 error:(id *)a5;
- (id)_mapItemsWithinDistance:(double)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 maxQueryAttemps:(unsigned long long)a4 error:(id *)a5;
- (id)_selectFingerprintsStartDate:(id)a0 endDate:(id)a1 maxQueryAttemps:(unsigned long long)a2 isTimeWindowFallback:(BOOL *)a3 fingerprintsTotalOut:(unsigned long long *)a4 fingerprintsNonZeroAPsTotalOut:(unsigned long long *)a5 error:(id *)a6;
- (void)_submitPerformanceMetricsForResults:(id)a0 noFingerprints:(BOOL)a1 originalMaxNumberOfQueries:(unsigned long long)a2 aoiConfidencePassThroughThreshold:(double)a3 poiConfidencePassThroughThreshold:(double)a4 fingerprintsCount:(unsigned long long)a5 zeroAccessPointsFingerprintsCount:(unsigned long long)a6 nonZeroAccessPointsFingerprintsCount:(unsigned long long)a7 queryCount:(unsigned long long)a8 firstResultQueryCount:(unsigned long long)a9 error:(id)a10 visitInterval:(double)a11 visitSource:(long long)a12;
- (id)accessPointsForFingerprint:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)bestQueryFromAggregatedQueries:(id)a0 error:(id *)a1;
- (id)bestQueryFromSortedQueryResults:(id)a0 bestAoiInferredMapItem:(id)a1 bestPoiInferredMapItem:(id)a2 error:(id *)a3;
- (id)bestQueryFromSortedQueryResults:(id)a0 bestInferredMapItem:(id)a1 error:(id *)a2;
- (BOOL)chooseBestAoiInferredMapItem:(id *)a0 PoiInferredMapItem:(id *)a1 fromSortedAveragedResults:(id)a2 error:(id *)a3;
- (id)collapseDedupedInferredMapItems:(id)a0 inferredMapItemDeduperState:(id)a1 error:(id *)a2;
- (id)dedupeQueryResults:(id)a0 error:(id *)a1;
- (id)filterByDistance:(id)a0 location:(id)a1 thresholdForUnknownLabel:(double)a2 error:(id *)a3;
- (id)fingerprintsBetweenStartDate:(id)a0 endDate:(id)a1 isTimeWindowFallback:(BOOL *)a2 settledState:(unsigned long long)a3 error:(id *)a4;
- (id)getAllBluePOIQuerriesForStartDate:(id)a0 endDate:(id)a1 location:(id)a2 error:(id *)a3;
- (BOOL)harvestVisits:(id)a0 mapItem:(id)a1 harvestType:(unsigned long long)a2 error:(id *)a3;
- (id)inferredMapItemsFromPlist:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 fingerprintManager:(id)a2 locationManager:(id)a3 mapServiceManager:(id)a4 motionActivityManager:(id)a5 parameters:(id)a6 placeInferenceQueryStore:(id)a7 platform:(id)a8;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 fingerprintManager:(id)a2 locationManager:(id)a3 mapServiceManager:(id)a4 motionActivityManager:(id)a5 placeInferenceQueryStore:(id)a6 platform:(id)a7;
- (id)locationsInDateInterval:(id)a0 error:(id *)a1;
- (id)mapItemFromPlistDictionary:(id)a0;
- (id)mapItemsFromLocations:(id)a0 accessPoints:(id)a1 startDate:(id)a2 endDate:(id)a3 options:(id)a4 error:(id *)a5;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)motionActivitesFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (unsigned long long)numberOfRealtimeQueriesForInterval:(id)a0;
- (id)poiHarvestForFingerprint:(id)a0 mapItem:(id)a1 referenceLocation:(id)a2 endDate:(id)a3 error:(id *)a4;
- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)sortQueryResults:(id)a0 error:(id *)a1;
- (id)sortedAveragedQueryResults:(id)a0 baseDuration:(double)a1 error:(id *)a2;
- (BOOL)sortedQueryResult:(id)a0 correspondsToAoi:(id)a1 poi:(id)a2;
- (BOOL)submitHarvest:(id)a0 error:(id *)a1;

@end
