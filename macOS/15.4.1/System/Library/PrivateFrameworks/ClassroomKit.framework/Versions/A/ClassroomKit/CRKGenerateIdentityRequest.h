@class NSString;

@interface CRKGenerateIdentityRequest : CATTaskRequest

@property (copy, nonatomic) NSString *commonName;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
