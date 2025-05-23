@class NSSet, NSDateInterval, NSMutableSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (readonly, nonatomic) NSSet *allLocationsOfInterest;
@property (readonly, nonatomic) NSSet *homeLocations;
@property (readonly, nonatomic) NSSet *workLocations;
@property (readonly, nonatomic) BOOL routineIsAvailable;

- (void).cxx_destruct;
- (void)_buildLocationsOfInterestCache;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)a0;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)a0 routineManager:(id)a1;
- (void)_invalidateLocationsOfInterest;
- (void)_pinPendingVisits;
- (void)fetchLocationsOfInterestIfNeeded;
- (BOOL)hasLocationsOfInterestInformation;
- (id)initWithFetchDateInterval:(id)a0;
- (void)invalidateLocationsOfInterest;
- (BOOL)isRemoteLocation:(id)a0 inDateInterval:(id)a1;
- (id)lastLocationOfInterestVisit;
- (id)locationOfInterestAtLocation:(id)a0;
- (id)locationOfInterestCloseToLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationOfInterestVisitsAtLocation:(id)a0 inDateInterval:(id)a1;
- (id)locationsOfInterestOfType:(long long)a0;
- (void)postProcessLocationsOfInterest;

@end
