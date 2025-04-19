@class NSString, UNCKeyedObservable, CLLocationManager, NSObject;
@protocol OS_dispatch_queue;

@interface UNCLocationMonitor : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    UNCKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didEnterRegion:(id)a1;
- (void)locationManager:(id)a0 didExitRegion:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didStartMonitoringForRegion:(id)a1;
- (void)markAsHavingReceivedLocation;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_triggerDidFireForRegion:(id)a0;
- (id)initWithQueue:(id)a0 locationManager:(id)a1;
- (id)initWithQueue:(id)a0 locationManager:(id)a1 observable:(id)a2;
- (BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)a0;
- (void)setMonitoredRegions:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
