@class NSNumber, NSData;

@interface MTRThermostatClusterScheduleTransitionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dayOfWeek;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSData *presetHandle;
@property (copy, nonatomic) NSNumber *systemMode;
@property (copy, nonatomic) NSNumber *coolingSetpoint;
@property (copy, nonatomic) NSNumber *heatingSetpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
