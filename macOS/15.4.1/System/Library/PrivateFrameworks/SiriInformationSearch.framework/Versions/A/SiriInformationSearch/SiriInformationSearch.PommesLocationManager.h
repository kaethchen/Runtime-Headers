@interface SiriInformationSearch.PommesLocationManager : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationShifter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_locationShiftQueue;
    void /* unknown type, empty encoding */ statusQueue;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ statusPassthrough;
    void /* unknown type, empty encoding */ $__lazy_storage_$_statusPublisher;
    void /* unknown type, empty encoding */ locationRequestDebounceWait;
    void /* unknown type, empty encoding */ $__lazy_storage_$_manager;
}

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;

@end
