@class NSString, NSArray;

@interface TVRCMediaInfoRoleCategory : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *roleDescription;
@property (readonly, nonatomic) NSArray *roles;

+ (id)roleCategoryWithRoleDescription:(id)a0 roles:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRoleDescription:(id)a0 roles:(id)a1;

@end
