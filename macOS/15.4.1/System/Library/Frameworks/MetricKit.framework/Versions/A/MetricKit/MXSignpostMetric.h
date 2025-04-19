@class NSString, MXSignpostIntervalData;

@interface MXSignpostMetric : MXMetric

@property (readonly) NSString *signpostName;
@property (readonly) NSString *signpostCategory;
@property (readonly) MXSignpostIntervalData *signpostIntervalData;
@property (readonly) unsigned long long totalCount;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithSignpostName:(id)a0 withSignpostCategory:(id)a1 withTotalCount:(unsigned long long)a2 withSignpostIntervalData:(id)a3;

@end
