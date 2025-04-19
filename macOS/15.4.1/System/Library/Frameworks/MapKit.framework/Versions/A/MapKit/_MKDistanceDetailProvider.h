@class NSString, MKMapItem;

@interface _MKDistanceDetailProvider : NSObject <MKLocationManagerObserver> {
    NSString *_distanceToPlace;
    BOOL _useMetric;
    BOOL _useYardsForShortDistances;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)infoAvailable;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endUpdates;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)_handleLocaleChangeNotification:(id)a0;
- (void)_updateDistanceToPlace;
- (void)beginUpdateWithHandler:(id /* block */)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)locationManagerDidReset:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;

@end
