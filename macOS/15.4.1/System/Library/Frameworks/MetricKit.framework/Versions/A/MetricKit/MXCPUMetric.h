@class NSMeasurement;

@interface MXCPUMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeCPUTime;
@property (readonly) NSMeasurement *cumulativeCPUInstructions;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCumulativeCPUTimeMeasurement:(id)a0;
- (id)initWithCumulativeCPUTimeMeasurement:(id)a0 withCumulativeCPUInstructions:(id)a1;
- (id)initWithCumulativeCPUTimeMeasurement:(id)a0 withCumulativeCPUInstructions:(id)a1 withCumulativeForegroundCPUTimeMeasurement:(id)a2 withCumulativeBackgroundCPUTimeMeasurement:(id)a3;

@end
