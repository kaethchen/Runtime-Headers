@class NSArray, NSDate;

@interface BCSTimingMeasurement : BCSMeasurement

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (readonly, nonatomic) NSArray *realTimeMeasurementHandlers;
@property (readonly, nonatomic) long long timingMeasurementType;
@property (readonly, nonatomic) double duration;

+ (id)newTimingMeasurement:(long long)a0 withHandlers:(id)a1;

- (void).cxx_destruct;
- (void)end;
- (void)begin;
- (id)_initWithType:(long long)a0 handlers:(id)a1;

@end
