@class NSMutableDictionary, CLSLocationCache, NSMutableSet, NSDate, CLSLocationOfInterestVisit;

@interface CLSLocationOfInterestCache : NSObject {
    CLSLocationCache *_locationCache;
}

@property (retain, nonatomic) NSMutableDictionary *visitsCache;
@property (retain, nonatomic) NSMutableSet *allLocationsOfInterest;
@property (retain, nonatomic) NSMutableSet *homeLocations;
@property (retain, nonatomic) NSMutableSet *workLocations;
@property (retain, nonatomic) NSMutableDictionary *transitionsCache;
@property (retain, nonatomic) NSMutableSet *allLocationsOfInterestTransitionIdentifiers;
@property (readonly) unsigned long long numberOfLocationsOfInterest;
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;
@property (readonly) NSDate *earliestVisitStartDate;
@property (readonly) CLSLocationOfInterestVisit *lastLocationOfInterestVisit;

- (void).cxx_destruct;
- (void)addLocationOfInterest:(id)a0;
- (id)closestLocationOfInterestVisitToLocation:(id)a0 withinDistance:(double)a1 inDateInterval:(id)a2;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)locationsOfInterestOfType:(long long)a0;
- (id)locationsOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationsOfInterestVisitsInDateInterval:(id)a0;
- (void)addLocationOfInterestTransition:(id)a0;
- (id)initWithLocationCache:(id)a0;
- (id)locationsOfInterestTransitionInDateInterval:(id)a0;
- (id)mergeHighConfidenceVisits:(id)a0 withLowConfidenceVisits:(id)a1;

@end
