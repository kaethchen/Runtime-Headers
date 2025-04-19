@interface MSBatteryPowerMonitor : NSObject

@property (readonly, nonatomic) BOOL isExternalPowerConnected;

+ (id)defaultMonitor;
+ (BOOL)isExternalPowerConnected:(double *)a0;

- (double)batteryPercentRemaining;

@end
