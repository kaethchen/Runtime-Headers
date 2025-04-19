@class NSNumber;

@interface MTRDemandResponseLoadControlClusterTemperatureControlStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *coolingTempOffset;
@property (copy, nonatomic) NSNumber *heatingtTempOffset;
@property (copy, nonatomic) NSNumber *coolingTempSetpoint;
@property (copy, nonatomic) NSNumber *heatingTempSetpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
