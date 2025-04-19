@class NSString;

@interface CRKFetchActiveRestrictionUUIDsRequest : CATTaskRequest

@property (copy, nonatomic) NSString *clientType;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
