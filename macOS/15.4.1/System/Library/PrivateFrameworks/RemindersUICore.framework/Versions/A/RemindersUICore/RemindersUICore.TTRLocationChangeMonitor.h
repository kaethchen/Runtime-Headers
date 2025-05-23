@interface RemindersUICore.TTRLocationChangeMonitor : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ locationChange;
    void /* unknown type, empty encoding */ lastResult;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ changeRadius;
    void /* unknown type, empty encoding */ timerInterval;
    void /* unknown type, empty encoding */ hasStarted;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ locationChangePassthroughSubject;
    void /* unknown type, empty encoding */ authorizationTracker;
    void /* unknown type, empty encoding */ timer;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
