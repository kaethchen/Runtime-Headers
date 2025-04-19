@class NSNumber;

@interface MTRThermostatClusterScheduleTypeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *systemMode;
@property (copy, nonatomic) NSNumber *numberOfSchedules;
@property (copy, nonatomic) NSNumber *scheduleTypeFeatures;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
