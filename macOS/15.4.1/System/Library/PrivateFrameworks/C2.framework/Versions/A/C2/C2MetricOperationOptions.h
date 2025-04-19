@class NSString, C2MetricOperationGroupOptions;

@interface C2MetricOperationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) C2MetricOperationGroupOptions *operationGroup;
@property (copy, nonatomic) NSString *operationId;
@property (copy, nonatomic) NSString *operationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
