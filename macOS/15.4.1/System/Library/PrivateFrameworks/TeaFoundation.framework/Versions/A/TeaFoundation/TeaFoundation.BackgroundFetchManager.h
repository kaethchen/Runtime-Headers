@interface TeaFoundation.BackgroundFetchManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ journal;
    void /* unknown type, empty encoding */ disposableWorkers;
    void /* unknown type, empty encoding */ configuredTriggers;
    void /* unknown type, empty encoding */ networkReachability;
    void /* unknown type, empty encoding */ backgroundTaskSchedulingQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_regionMonitor;
}

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)locationManager:(id)a0 monitoringDidFailForRegion:(id)a1 withError:(id)a2;

@end
