@class MXHistogram;

@interface MXCellularConditionMetric : MXMetric

@property (readonly) MXHistogram *histogrammedCellularConditionTime;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCellularConditionTime:(id)a0;

@end
