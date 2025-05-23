@class NSMutableDictionary;

@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification

@property (readonly, copy, nonatomic) NSMutableDictionary *metricsByFamily;
@property (readonly, copy, nonatomic) NSMutableDictionary *alternatesByFamily;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMetricsByFamily:(id)a0 alternates:(id)a1;
- (void)setAlternateMetrics:(id)a0 forFamily:(long long)a1;
- (void)setMetrics:(id)a0 forFamily:(long long)a1;

@end
