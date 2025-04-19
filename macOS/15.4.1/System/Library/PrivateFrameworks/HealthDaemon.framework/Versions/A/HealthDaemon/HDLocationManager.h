@class HKObserverSet, NSString, HDAssertionManager, CLLocationManager;
@protocol HDLocationManagerUnitTestDelegate;

@interface HDLocationManager : NSObject <HDAssertionObserver, CLLocationManagerDelegate> {
    HDAssertionManager *_assertionManager;
    CLLocationManager *_locationManager;
    HKObserverSet *_observers;
    id /* block */ _locationManagerConfiguration;
}

@property (weak, nonatomic) id<HDLocationManagerUnitTestDelegate> unitTestDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)requestWhenInUseAuthorization;
- (id)_mainQueue_newLocationManagerWithEffectiveBundlePath:(id)a0;
- (void)_mainQueue_releaseLocationUpdatingAssertion;
- (void)_mainQueue_takeLocationUpdatingAssertionWithAccuracy:(double)a0;
- (void)_mainQueue_updateLocationManager;
- (void)_unitTest_didInvalidateAssertion:(id)a0;
- (void)_unitTest_didTakeAssertion:(id)a0;
- (id)_unitTest_locationManager;
- (void)_unitTest_setLocationManagerConfiguration:(id /* block */)a0;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)a0 desiredAccuracy:(double)a1;

@end
