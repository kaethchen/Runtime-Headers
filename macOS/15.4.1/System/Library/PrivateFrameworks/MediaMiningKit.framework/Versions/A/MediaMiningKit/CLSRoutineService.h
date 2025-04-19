@class CLSLocationCache, NSDateInterval, NSMutableSet, CLSLocationOfInterestCache;

@interface CLSRoutineService : NSObject {
    NSDateInterval *_fetchDateInterval;
    CLSLocationOfInterestCache *_visitsCache;
    NSMutableSet *_pendingPinningVisitIdentifiers;
    CLSLocationCache *_locationCache;
}

@property (nonatomic) BOOL routineIsAvailable;
@property (readonly) struct CLSRoutineServiceStatisticsStruct { BOOL routineAvailable; unsigned long long numberOfLocationsOfInterest; unsigned long long numberOfVisits; unsigned long long numberOfTransitions; unsigned long long numberOfTimeMatches; unsigned long long numberOfCloseByLocationMatches; unsigned long long numberOfRemoteLocationMatches; unsigned long long numberOfMatchRequests; double pinningVisitsRatio; } statistics;

- (void).cxx_destruct;
- (void)_buildLocationsOfInterestCache;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (void)_pinPendingVisits;
- (BOOL)hasLocationsOfInterestInformation;
- (void)invalidateLocationsOfInterest;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)lastLocationOfInterestVisit;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationsOfInterestOfType:(long long)a0;
- (void)postProcessLocationsOfInterest;
- (id)visitsCache;
- (unsigned long long)_fetchFinerGranularityMapItemForVisitIdentifier:(id)a0 routineManager:(id)a1;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)a0;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)a0;
- (id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)a0 routineManager:(id)a1;
- (id)_placemarksFromLocationsOfInterest:(id)a0;
- (void)cacheLocationOfInterest:(id)a0;
- (unsigned long long)fetchFinerGranularityBusinessItemNumberForVisitIdentifier:(id)a0;
- (id)initWithFetchDateInterval:(id)a0 locationCache:(id)a1;
- (id)locationOfInterestVisitsInDateInterval:(id)a0;
- (id)placemarksOfInterestOfType:(long long)a0;
- (long long)predominantTransportationModeForDateInterval:(id)a0 confidence:(double *)a1;

@end
