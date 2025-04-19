@class NSString, ULDarwinNotificationHelper, CLLocationManager;

@interface ULPrivacyMonitor : ULEventMonitor <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) ULDarwinNotificationHelper *notificationHelper;
@property (nonatomic) BOOL locationServicesEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)startMonitoring:(id)a0;
- (id)initWithNotificationHelper:(id)a0;
- (void)stopMonitoring:(id)a0;
- (BOOL)_checkLocationServicesEnabledForAuthorizationStatus:(int)a0;
- (id)_locationAuthorizationStatusToString:(int)a0;
- (id)latestEventAfterAddingObserverForEventName:(id)a0;

@end
