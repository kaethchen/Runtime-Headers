@class NSString;

@interface CRKRenewAppleIDCredentialsRequest : CATTaskRequest

@property (nonatomic) BOOL force;
@property (copy, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
