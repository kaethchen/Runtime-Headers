@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *username;
@property (nonatomic) BOOL forceDeletion;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
