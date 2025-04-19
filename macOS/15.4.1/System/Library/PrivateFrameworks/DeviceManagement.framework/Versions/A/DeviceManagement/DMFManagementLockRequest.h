@class NSString;

@interface DMFManagementLockRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *lockedByLabel;
@property (copy, nonatomic) NSString *passcode;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
