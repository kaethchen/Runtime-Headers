@class NSString, RTRoutineManager, ULTimer, CLLocationManager, CLMonitor, NSObject, CLMonitorConfiguration;
@protocol OS_dispatch_queue;

@interface CLMicroLocationLoiBridge : NSObject <CLLocationManagerDelegate, CLMicroLocationLoiBridgeProtocol> {
    struct CLMicroLocationLoiClient { void /* function */ **x0; } *_microlocationLoiClient;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CLLocationManager *clLocationManager;
@property (retain, nonatomic) RTRoutineManager *routineManager;
@property (retain, nonatomic) CLMonitor *regionMonitor;
@property (retain, nonatomic) CLMonitorConfiguration *regionMonitorConfiguration;
@property (retain, nonatomic) ULTimer *fetchPlaceInferenceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didVisit:(id)a1;
- (void)getCurrentLocation;
- (void)generateGeofenceUpdateToClient:(id)a0;
- (void)regionMonitor:(id)a0 didGenerateEvent:(id)a1;
- (unsigned long long)convertMonitoringEventToGeofenceState:(id)a0;
- (void)fetchLocationOfInterestAtLocation:(id)a0;
- (void)fetchPlaceInferenceAtCurrentLocationWithPolicy:(unsigned long long)a0;
- (void)fetchRelatedLoisForLoi:(id)a0;
- (id)generateLocationManagerNotAvailableError;
- (id)generateRegionMonitorNotAvailableError;
- (void)getAllActiveGeofences;
- (void)invalidateFetchPlaceInferenceTimer;
- (struct CLMicroLocationLoiClient { void /* function */ **x0; } *)microLocationLoiClient;
- (void)removeGeofenceWithRegionId:(id)a0;
- (void)removeGeofencesNearLocationWithLatitude:(double)a0 andLongitude:(double)a1;
- (void)requestBootstrapWithLastGeofenceStates;
- (id)retrieveAllActiveGeofences;
- (void)setGeofenceAtLocation:(id)a0;
- (void)setMicroLocationLoiClient:(struct CLMicroLocationLoiClient { void /* function */ **x0; } *)a0;
- (void)setupFetchPlaceInferenceTimer;
- (void)setupRegionMonitoring;
- (void)startLeechingLocationUpdates;
- (void)startVisitMonitoring;
- (void)stopLeechingLocationUpdates;

@end
