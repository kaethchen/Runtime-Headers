@class NSString, NSDate, NSObject, _PASLock;
@protocol ATXLocationManagerGPS, ATXLocationManagerStateStore, ATXLocationParameters, ATXLocationManagerRoutine, OS_dispatch_queue;

@interface ATXLocationManager : NSObject <ATXLocationManagerGPSDelegate, ATXLocationManagerProtocol, ATXPredictedLocationsManagerProtocol, ATXLocationOfInterestManagerProtocol> {
    id<ATXLocationManagerGPS> _gps;
    id<ATXLocationManagerRoutine> _routine;
    id<ATXLocationManagerStateStore> _stateStore;
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_loiUpdateQueue;
    id<ATXLocationParameters> _modeGlobals;
}

@property (retain, nonatomic) NSDate *now;
@property (nonatomic) double predictedNextLOITimeout;
@property (nonatomic) double predictedExitDateTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForLOIType:(long long)a0;
+ (id)debugDescriptionForCLLocation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isTourist;
- (BOOL)preciseLocationEnabled;
- (id)getCurrentLocation;
- (BOOL)locationEnabled;
- (void)fetchLOILocationOfType:(long long)a0 reply:(id /* block */)a1;
- (id)locationOfInterestAtCurrentLocation;
- (void)beginMonitoringRegion:(id)a0;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (void)fetchAllLocationsOfInterest:(id /* block */)a0;
- (void)fetchLocationsOfInterestVisitedDuring:(id)a0 handler:(id /* block */)a1;
- (id)getCurrentPreciseLocation;
- (id)getPredictedExitTimesFromLOIName:(id)a0 startDate:(id)a1;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)a0 startDate:(id)a1;
- (id)initWithGPS:(id)a0 routine:(id)a1 stateStore:(id)a2 now:(id)a3 modeGlobals:(id)a4;
- (BOOL)isAvailableLocationOfInterestType:(long long)a0;
- (BOOL)isLocationNearKnownTypeLocationOfInterest:(id)a0;
- (BOOL)isNearFrequentLocationOfInterest;
- (id)predictedExitTimes;
- (id)predictedLocationsOfInterest;
- (id)previousLOIAndCurrentLOI;
- (void)stopMonitoringRegionWithIdentifier:(id)a0;
- (void)updateCurrentLocationOfInterestIfTimeElapsed;
- (double)_distanceOfCurrentLocationFrom:(id)a0;
- (id)initWithStateStore:(id)a0 modeGlobals:(id)a1;
- (void)updateCurrentLocationOfInterest;
- (id)_currentLocationAndNeedsUpdate_RequestPreciseLocation:(BOOL)a0;
- (void)_fetchLocationOfInterest:(long long)a0 inGroup:(id)a1;
- (void)_gotLocation:(id)a0 forLocationOfInterest:(long long)a1;
- (void)_handleRoutineError:(id)a0 forThing:(id)a1;
- (void)_updateCurrentLocationOfInterestIfTimeElapsedWithCompletionHandler:(id /* block */)a0;
- (id)_updateLocationsOfInterestWithCurrentLocation:(id)a0;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (id)cachedLocationOfInterestAtCurrentLocation;
- (void)clearLocationOfInterest;
- (void)didChangeLocationEnabled:(BOOL)a0;
- (void)didChangePreciseLocationEnabled:(BOOL)a0;
- (void)getCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (id)getCurrentLocation_RequestPreciseLocation:(BOOL)a0;
- (unsigned long long)getCurrentRoutineModeWithCurrentDate:(id)a0;
- (void)gotState:(id)a0;
- (void)invalidateLocationOfInterestCache;
- (BOOL)isNearKnownTypeLocationOfInterest;
- (BOOL)isNearKnownTypeOrFrequentLocationOfInterest;
- (BOOL)isTouristWithCurrentDate:(id)a0;
- (void)locationManagerGPS:(id)a0 didEnterRegionWithIdentifier:(id)a1;
- (void)locationManagerGPS:(id)a0 didExitRegionWithIdentifier:(id)a1;
- (void)locationOfInterestAtCurrentLocationWithCompletionHandler:(id /* block */)a0;
- (long long)stateForRegion:(id)a0 withTimeout:(double)a1;
- (void)updateCurrentLocationOfInterestWithCompletionHandler:(id /* block */)a0;
- (void)updatePredictedExitTimes;
- (void)updatePredictedLocationsOfInterest;

@end
