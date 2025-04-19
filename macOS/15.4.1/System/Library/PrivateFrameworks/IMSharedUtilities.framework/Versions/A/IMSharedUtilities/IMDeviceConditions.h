@interface IMDeviceConditions : NSObject

@property (readonly) BOOL isDeviceCharging;
@property (readonly) BOOL isDeviceOnWifi;
@property (readonly) BOOL isDeviceOnData;
@property (readonly) BOOL isOnLowBandwidthCellular;

+ (id)sharedInstance;

@end
