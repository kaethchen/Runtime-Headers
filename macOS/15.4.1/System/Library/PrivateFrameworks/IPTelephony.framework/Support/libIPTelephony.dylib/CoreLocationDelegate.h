@class NSString, NSObject, CLLocationManager;
@protocol OS_dispatch_queue;

@interface CoreLocationDelegate : NSObject <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
    struct atomic<CLAuthorizationStatus> { struct __cxx_atomic_impl<CLAuthorizationStatus, std::__cxx_atomic_base_impl<CLAuthorizationStatus>> { _Atomic int __a_value; } __a_; } _authStatus;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithQueue:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (BOOL)isLocationAuthorized;

@end
