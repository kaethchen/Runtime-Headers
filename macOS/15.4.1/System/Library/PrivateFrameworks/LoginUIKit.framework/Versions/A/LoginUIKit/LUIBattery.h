@class NSDictionary;

@interface LUIBattery : NSObject

@property (retain) NSDictionary *info;
@property (readonly) float currentCapacity;
@property (readonly) BOOL isCharged;
@property (readonly) BOOL isCharging;
@property (readonly) BOOL isHealthy;
@property (readonly) BOOL isInPoorCondition;
@property (readonly) BOOL isInternal;
@property (readonly) BOOL isPluggedIn;
@property (readonly) BOOL isPresent;
@property (readonly) float maxCapacity;
@property (readonly) float percentRemaining;
@property (readonly) float relativeCapacity;

+ (id)battery;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_updateBatteryState;
- (BOOL)_isBattery;

@end
