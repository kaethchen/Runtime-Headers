@interface ATXDeviceStateMonitor : NSObject <ATXDeviceStateMonitorProtocol>

+ (id)SSID;
+ (void)setSSID:(id)a0;
+ (BOOL)airplaneMode;
+ (void)setAirplaneMode:(BOOL)a0;
+ (BOOL)onWifi;
+ (void)startMockingSystem;
+ (void)stopMockingSystem;

@end
