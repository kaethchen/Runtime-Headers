@class NSNumber, NSArray;

@interface MTRElectricalMeasurementClusterGetMeasurementProfileResponseCommandParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *profileIntervalPeriod;
@property (copy, nonatomic) NSNumber *numberOfIntervalsDelivered;
@property (copy, nonatomic) NSNumber *attributeId;
@property (copy, nonatomic) NSArray *intervals;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithResponseValue:(id)a0 error:(id *)a1;

@end
