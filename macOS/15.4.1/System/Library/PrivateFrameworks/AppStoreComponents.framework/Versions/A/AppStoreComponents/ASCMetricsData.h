@class NSString, NSDictionary, NSSet;

@interface ASCMetricsData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL shouldFlush;
@property (readonly, copy, nonatomic) NSDictionary *fields;
@property (readonly, copy, nonatomic) NSSet *includingFields;
@property (readonly, copy, nonatomic) NSSet *excludingFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTopic:(id)a0 shouldFlush:(BOOL)a1 fields:(id)a2 includingFields:(id)a3 excludingFields:(id)a4;
- (id)metricsDataByMergingFields:(id)a0 uniquingFieldsWithBlock:(id /* block */)a1;

@end
