@class RTNavigationManager, RTHintStore, RTMetricManager, RTDarwinNotificationHelper, RTBatteryManager, NSString, RTReachabilityManager, RTPersistenceManager, RTWalletManager, RTLearnedLocationManager, RTCameraManager, RTLocationManager, RTBluetoothManager;

@interface RTHintManager : RTService <RTPurgable, RTStoreManager>

@property (retain, nonatomic) RTBatteryManager *batteryManager;
@property (retain, nonatomic) RTBluetoothManager *bluetoothManager;
@property (retain, nonatomic) RTCameraManager *cameraManager;
@property (retain, nonatomic) RTDarwinNotificationHelper *notificationHelper;
@property (retain, nonatomic) RTHintStore *hintStore;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTNavigationManager *navigationManager;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTReachabilityManager *reachabilityManager;
@property (retain, nonatomic) RTWalletManager *walletManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)periodicPurgePolicy;
+ (id)vendedClasses;

- (id)init;
- (void).cxx_destruct;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)_onLearnedLocationNotification:(id)a0;
- (void)_onBatteryNotification:(id)a0;
- (void)_onBluetoothNotification:(id)a0;
- (void)_onCameraNotification:(id)a0;
- (void)_onNavigationNotification:(id)a0;
- (void)_onReachabilityChange:(id)a0;
- (void)_onWalletNotification:(id)a0;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_storeHintSignificantRegion:(id)a0 hintSource:(long long)a1 handler:(id /* block */)a2;
- (void)_storeHints:(id)a0 handler:(id /* block */)a1;
- (void)_submitHintFromSource:(long long)a0;
- (void)_submitHintFromSource:(long long)a0 location:(id)a1 handler:(id /* block */)a2;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (id)initWithBatteryManager:(id)a0 bluetoothManager:(id)a1 cameraManager:(id)a2 hintStore:(id)a3 learnedLocationManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 navigationManager:(id)a7 reachabilityManager:(id)a8 walletManager:(id)a9;
- (void)onBatteryNotification:(id)a0;
- (void)onBluetoothNotification:(id)a0;
- (void)onCameraNotification:(id)a0;
- (void)onLearnedLocationNotification:(id)a0;
- (void)onNavigationNotification:(id)a0;
- (void)onReachabilityChange:(id)a0;
- (void)onWalletNotification:(id)a0;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)storeHintSignificantRegion:(id)a0 hintSource:(long long)a1 handler:(id /* block */)a2;
- (void)storeHints:(id)a0 handler:(id /* block */)a1;
- (void)submitHintFromSource:(long long)a0 location:(id)a1;
- (void)submitHintFromSource:(long long)a0 location:(id)a1 handler:(id /* block */)a2;

@end
