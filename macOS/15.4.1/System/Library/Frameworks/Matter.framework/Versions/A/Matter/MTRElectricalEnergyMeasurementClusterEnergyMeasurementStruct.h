@class NSNumber;

@interface MTRElectricalEnergyMeasurementClusterEnergyMeasurementStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *energy;
@property (copy, nonatomic) NSNumber *startTimestamp;
@property (copy, nonatomic) NSNumber *endTimestamp;
@property (copy, nonatomic) NSNumber *startSystime;
@property (copy, nonatomic) NSNumber *endSystime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
