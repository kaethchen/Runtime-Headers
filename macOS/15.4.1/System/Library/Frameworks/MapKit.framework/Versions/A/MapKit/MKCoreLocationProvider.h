@class NSDate, NSString, CLLocationManager, NSTimer, geo_isolater, NSBundle, CLLocation, NSObject;
@protocol OS_dispatch_queue, MKLocationProviderDelegate;

@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, MKLocationProvider> {
    CLLocationManager *_clLocationManager;
    int _authorizationStatus;
    long long _accuracyAuthorization;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    unsigned long long _authFetchStatus;
    NSDate *_beginWaitingTime;
    NSTimer *_waitingForAuthCheckinTimer;
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_coreLocationQueue;
    double _desiredAccuracy;
    double _distanceFilter;
    BOOL _hasExternallyProvidedLocationManager;
}

@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKLocationProviderDelegate> delegate;
@property (retain, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) BOOL fusionInfoEnabled;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) long long accuracyAuthorization;
@property (readonly, nonatomic) BOOL usesCLMapCorrection;
@property (readonly, nonatomic) BOOL shouldShiftIfNecessary;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) double timeScale;
@property (readonly, nonatomic) CLLocation *lastLocation;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (long long)activityType;
- (void)setActivityType:(long long)a0;
- (void)dismissHeadingCalibrationDisplay;
- (int)headingOrientation;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManager:(id)a0 didUpdateHeading:(id)a1;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (void)requestAlwaysAuthorization;
- (void)setHeadingOrientation:(int)a0;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (long long)_accuracyAuthorizationOnQueue;
- (void)_authStatusReceived;
- (int)_authorizationStatusOnQueue;
- (void)_beginWaitingForAuthCallback;
- (void)_createCLLocationManager;
- (void)_resetForNewEffectiveBundle;
- (void)_stopWaitingForAuthCallback;
- (void)_updateAccuracyAuthorizationOnQueue:(id)a0;
- (void)_updateAuthorizationStatus;
- (void)accuracyAuthorizationOnQueue:(id)a0 result:(id /* block */)a1;
- (void)authorizationStatusOnQueue:(id)a0 result:(id /* block */)a1;
- (id)initWithCLLocationManager:(id)a0;
- (void)stopWaitingForAuthCallback;

@end
