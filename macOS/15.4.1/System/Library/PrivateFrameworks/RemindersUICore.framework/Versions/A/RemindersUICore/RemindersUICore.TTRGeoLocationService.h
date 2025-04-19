@interface RemindersUICore.TTRGeoLocationService : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ locationAccuracyUpperBound;
    void /* unknown type, empty encoding */ maximumLocationUpdatingTime;
    void /* unknown type, empty encoding */ _addressToResolvedLocationCache;
    void /* unknown type, empty encoding */ _locationToResolvedLocationCache;
    void /* unknown type, empty encoding */ currentlyGeocodingLocation;
    void /* unknown type, empty encoding */ _lastKnownCurrentLocation;
    void /* unknown type, empty encoding */ pendingLocationsToResolve;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ authorizationTracker;
    void /* unknown type, empty encoding */ blockToPerformAfterRequestingInUseAuthorization;
}

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
