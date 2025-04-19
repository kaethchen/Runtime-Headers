@interface CSBatteryMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (unsigned char)batteryState;

@end
