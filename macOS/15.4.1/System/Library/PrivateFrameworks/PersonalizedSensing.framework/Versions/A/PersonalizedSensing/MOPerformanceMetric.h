@class NSString;

@interface MOPerformanceMetric : NSObject <NSCopying> {
    double _rawValue;
}

@property BOOL initializedWithValue;
@property (copy) NSString *displayName;
@property (copy) NSString *unit;
@property double denominator;
@property (readonly) double value;
@property double rawValue;
@property unsigned long long pcMetricID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDisplayName:(id)a0 pcMetricID:(unsigned long long)a1 unit:(id)a2 denominator:(double)a3;

@end
