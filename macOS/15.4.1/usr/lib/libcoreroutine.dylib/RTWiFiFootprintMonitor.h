@class RTWiFiManager, NSMutableArray, RTPersistentTimer;

@interface RTWiFiFootprintMonitor : RTService

@property (nonatomic) long long footprintState;
@property (retain, nonatomic) RTPersistentTimer *scanTimer;
@property (retain, nonatomic) NSMutableArray *scanResults;
@property (retain, nonatomic) RTWiFiManager *wifiManager;

+ (id)footprintStateToString:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_start;
- (void)_stop;
- (void)_checkFootprint;
- (long long)_footprintStateForScanResults:(id)a0;
- (void)_handlePowerStatusChanged:(unsigned long long)a0;
- (void)_processScanResults:(id)a0;
- (void)_pruneScanResults;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)fetchConstantFootprintStatusForScanResults:(id)a0 withHandler:(id /* block */)a1;
- (id)initWithWiFiManager:(id)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)onWiFiManagerNotificationPowerStatusChanged:(id)a0;
- (void)onWiFiManagerNotificationScanResults:(id)a0;

@end
