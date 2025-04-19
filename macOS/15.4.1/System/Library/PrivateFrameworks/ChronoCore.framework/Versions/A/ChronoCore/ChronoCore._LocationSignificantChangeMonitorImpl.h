@interface ChronoCore._LocationSignificantChangeMonitorImpl : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ _significantLocationDidChangePublisher;
    void /* unknown type, empty encoding */ significantLocationDidChangePublisher;
    void /* unknown type, empty encoding */ _didChangeHandler;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ lock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;

@end
