@class NSArray;

@interface EWSGetDelegateType : EWSBaseDelegateType

@property (nonatomic) BOOL IncludePermissions;
@property (copy, nonatomic) NSArray *UserIds;

+ (id)definition;

- (void).cxx_destruct;

@end
