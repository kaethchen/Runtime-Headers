@class NSArray, CHSWidgetMetricsSpecification, NSSet;

@interface CHSMutableWidgetConfiguration : CHSWidgetConfiguration

@property (copy, nonatomic) NSArray *containerDescriptors;
@property (copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;
@property (copy, nonatomic) NSSet *rateLimitPolicies;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setContainerDescriptors:(id)a0;
- (void)setMetricsSpecification:(id)a0;
- (void)setRateLimitPolicies:(id)a0;

@end
