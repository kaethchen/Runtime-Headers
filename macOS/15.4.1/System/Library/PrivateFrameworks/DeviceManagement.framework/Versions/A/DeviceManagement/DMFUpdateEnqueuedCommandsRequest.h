@class NSString, NSArray;

@interface DMFUpdateEnqueuedCommandsRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSArray *addCommands;
@property (copy, nonatomic) NSArray *removeCommands;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
