@interface SiriNotebook.LocationManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ _authorizationStatus;
    void /* unknown type, empty encoding */ locationQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
