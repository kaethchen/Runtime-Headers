@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest

@property (nonatomic) BOOL managedOnly;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
