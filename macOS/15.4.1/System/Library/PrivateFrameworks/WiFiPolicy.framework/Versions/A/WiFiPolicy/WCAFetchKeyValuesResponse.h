@class NSDictionary;

@interface WCAFetchKeyValuesResponse : WCAFetchResponse

@property (copy, nonatomic) NSDictionary *keyValues;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyValues:(id)a0;

@end
