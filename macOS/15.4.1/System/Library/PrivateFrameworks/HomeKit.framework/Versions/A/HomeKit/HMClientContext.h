@class NSString;

@interface HMClientContext : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSString *metricIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMetricIdentifier:(id)a0;

@end
