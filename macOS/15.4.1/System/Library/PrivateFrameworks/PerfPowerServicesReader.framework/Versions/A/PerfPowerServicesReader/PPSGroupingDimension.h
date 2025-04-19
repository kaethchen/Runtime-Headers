@class NSString;

@interface PPSGroupingDimension : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *metricName;
@property (readonly, copy) NSString *groupBy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithGroupBy:(id)a0;
- (id)initWithMetricName:(id)a0 groupBy:(id)a1;

@end
