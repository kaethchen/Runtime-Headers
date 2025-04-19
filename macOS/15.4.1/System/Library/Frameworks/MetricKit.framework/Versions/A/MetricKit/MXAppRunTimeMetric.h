@class NSMeasurement;

@interface MXAppRunTimeMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeForegroundTime;
@property (readonly) NSMeasurement *cumulativeBackgroundTime;
@property (readonly) NSMeasurement *cumulativeBackgroundAudioTime;
@property (readonly) NSMeasurement *cumulativeBackgroundLocationTime;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCumulativeForegroundTimeMeasurement:(id)a0 cumulativeBackgroundTimeMeasurement:(id)a1 cumulativeBackgroundAudioTimeMeasurement:(id)a2 cumulativeBackgroundLocationTimeMeasurement:(id)a3;

@end
