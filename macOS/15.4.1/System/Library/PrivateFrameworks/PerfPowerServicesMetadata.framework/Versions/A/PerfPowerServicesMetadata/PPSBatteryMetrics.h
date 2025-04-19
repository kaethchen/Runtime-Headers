@class NSString;

@interface PPSBatteryMetrics : NSObject <PPSMetricDeclProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subsystem;
+ (id)allDeclMetrics;
+ (id)batteryConfigMetrics;
+ (id)batteryLoggingCadence;
+ (id)batteryMetrics;
+ (id)batteryShutdownMetrics;
+ (id)smartChargingMetrics;


@end
