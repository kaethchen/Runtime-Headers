@interface EWSPermissionType : EWSBasePermissionType

@property (nonatomic) long long ReadItems;
@property (nonatomic) long long PermissionLevel;

+ (id)definition;

- (id)description;

@end
