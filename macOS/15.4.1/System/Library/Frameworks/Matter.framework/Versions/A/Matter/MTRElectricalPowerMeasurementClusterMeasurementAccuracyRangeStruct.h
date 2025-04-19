@class NSNumber;

@interface MTRElectricalPowerMeasurementClusterMeasurementAccuracyRangeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *rangeMin;
@property (copy, nonatomic) NSNumber *rangeMax;
@property (copy, nonatomic) NSNumber *percentMax;
@property (copy, nonatomic) NSNumber *percentMin;
@property (copy, nonatomic) NSNumber *percentTypical;
@property (copy, nonatomic) NSNumber *fixedMax;
@property (copy, nonatomic) NSNumber *fixedMin;
@property (copy, nonatomic) NSNumber *fixedTypical;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
