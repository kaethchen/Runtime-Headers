@class CTVoiceLinkQualityMetric;

@interface CTXPCGetVoiceLinkQualityMetricResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTVoiceLinkQualityMetric *linkQuality;

+ (id)allowedClassesForArguments;

- (id)initWithVoiceLinkQualityMetric:(id)a0;

@end
