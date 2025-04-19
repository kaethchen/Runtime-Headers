@class NSNumber;

@interface MTRElectricalPowerMeasurementClusterMeasurementRangeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *measurementType;
@property (copy, nonatomic) NSNumber *min;
@property (copy, nonatomic) NSNumber *max;
@property (copy, nonatomic) NSNumber *startTimestamp;
@property (copy, nonatomic) NSNumber *endTimestamp;
@property (copy, nonatomic) NSNumber *minTimestamp;
@property (copy, nonatomic) NSNumber *maxTimestamp;
@property (copy, nonatomic) NSNumber *startSystime;
@property (copy, nonatomic) NSNumber *endSystime;
@property (copy, nonatomic) NSNumber *minSystime;
@property (copy, nonatomic) NSNumber *maxSystime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
