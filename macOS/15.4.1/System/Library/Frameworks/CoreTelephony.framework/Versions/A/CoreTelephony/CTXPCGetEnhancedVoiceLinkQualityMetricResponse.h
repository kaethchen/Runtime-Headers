@class CTEnhancedLinkQualityMetric;

@interface CTXPCGetEnhancedVoiceLinkQualityMetricResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTEnhancedLinkQualityMetric *linkQuality;

+ (id)allowedClassesForArguments;

- (id)initWithEnhancedLinkQualityMetric:(id)a0;

@end
