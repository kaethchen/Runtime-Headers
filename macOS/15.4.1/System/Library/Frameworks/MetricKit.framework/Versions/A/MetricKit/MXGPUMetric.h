@class NSMeasurement;

@interface MXGPUMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeGPUTime;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCumulativeGPUTimeMeasurement:(id)a0;

@end
