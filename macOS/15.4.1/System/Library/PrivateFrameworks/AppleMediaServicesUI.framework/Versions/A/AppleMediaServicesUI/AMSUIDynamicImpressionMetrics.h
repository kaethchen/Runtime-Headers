@class NSDictionary, AMSUIDynamicImpressionMetricsIdentifier;

@interface AMSUIDynamicImpressionMetrics : NSObject

@property (retain) NSDictionary *custom;
@property (retain) NSDictionary *fields;
@property (retain) AMSUIDynamicImpressionMetricsIdentifier *identifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 fields:(id)a1 custom:(id)a2;

@end
