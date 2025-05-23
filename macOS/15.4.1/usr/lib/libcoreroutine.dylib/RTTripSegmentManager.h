@class NSDate, NSString, RTElevationAdjuster, RTSynthesizedLocationStore, RTDefaultsManager, RTTripSegmentStore, RTDistanceCalculator, RTLearnedLocationStore, RTTripSegment;

@interface RTTripSegmentManager : RTService <RTPurgable>

@property (retain, nonatomic) RTTripSegmentStore *tripSegmentStore;
@property (retain, nonatomic) RTSynthesizedLocationStore *locationStore;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTElevationAdjuster *elevationAdjuster;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTTripSegment *tripSegmentUnderConstruction;
@property (retain, nonatomic) NSDate *tripSegmentUnderConstructionLastLocationTimestamp;
@property (nonatomic) BOOL tripSegmentUnderConstructionFavorNewerLocationsOverOlderLocations;
@property BOOL isTripSegmentGenerationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidSynthesizedLocation:(id)a0;
+ (long long)periodicPurgePolicy;
+ (long long)translateModeOfTransport:(long long)a0;
+ (long long)tripSegmentUUIDTypeFromUUID:(id)a0;
+ (id)uuidForTripSegmentOfType:(long long)a0;

- (void).cxx_destruct;
- (void)_setup;
- (void)_addTripSegmentDataWithIdentifier:(id)a0 dateInterval:(id)a1 tripDistance:(double)a2 tripDistanceUncertainty:(double)a3 modeOfTransportation:(long long)a4 locations:(id)a5 isEndOfSegment:(BOOL)a6 handler:(id /* block */)a7;
- (BOOL)_applyElevationAdjustmentToReconstructedRoute;
- (BOOL)_checkIsTripSegmentGenerationEnabled;
- (void)_deleteTripSegmentWithUUID:(id)a0 handler:(id /* block */)a1;
- (BOOL)_favorNewerLocationsOverOlderLocationsForTripSegmentUnderConstruction;
- (void)_fetchLocationsCountForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchLocationsForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripSegmentMetadataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripSegmentsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)_getPurgePolicyOverrideDaysToPersistTripSegmentData:(id)a0;
- (void)_purgeTripSegmentsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_sanitizeTripSegmentDatabaseSinceDate:(id)a0 handler:(id /* block */)a1;
- (void)_tripSegmentExistsForDateInterval:(id)a0 ignoreTemporary:(BOOL)a1 handler:(id /* block */)a2;
- (void)addLocationsToStore:(id)a0 handler:(id /* block */)a1;
- (void)addTripSegmentData:(id)a0 isEndOfSegment:(BOOL)a1 handler:(id /* block */)a2;
- (void)addTripSegmentDataWithIdentifier:(id)a0 dateInterval:(id)a1 tripDistance:(double)a2 tripDistanceUncertainty:(double)a3 modeOfTransportation:(long long)a4 locations:(id)a5 isEndOfSegment:(BOOL)a6 handler:(id /* block */)a7;
- (void)deleteTripSegmentWithUUID:(id)a0 handler:(id /* block */)a1;
- (id)fetchDownsamplingLevelAnnotationForLocations:(id)a0;
- (void)fetchLocationsCountForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchLocationsForTripSegmentWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripSegmentMetadataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripSegmentsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)getPreferredNameForLocation:(id)a0 isStartOfTripSegment:(BOOL)a1;
- (id)initWithTripSegmentStore:(id)a0 synthesizedLocationStore:(id)a1 defaultsManager:(id)a2 elevationAdjuster:(id)a3 learnedLocationStore:(id)a4 distanceCalculator:(id)a5;
- (BOOL)isSpeedValidityCheckingEnabled;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)purgeTripSegmentsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)purgeTripSegmentsPredating:(id)a0 handler:(id /* block */)a1;
- (void)sanitizeTripSegmentDatabaseSinceDate:(id)a0 handler:(id /* block */)a1;
- (void)tripSegmentExistsForDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)tripSegmentExistsForDateInterval:(id)a0 ignoreTemporary:(BOOL)a1 handler:(id /* block */)a2;
- (BOOL)tryPrepareForAddTripSegmentdata:(id)a0;

@end
