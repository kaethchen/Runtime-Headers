@class NSMeasurement, MXAverage;

@interface MXMemoryMetric : MXMetric

@property (readonly) NSMeasurement *peakMemoryUsage;
@property (readonly) MXAverage *averageSuspendedMemory;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithPeakMemoryUsageMeasurement:(id)a0 averageMemoryUsageMeasurement:(id)a1;

@end
