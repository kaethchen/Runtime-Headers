@class NSString;

@interface MPModelPerson : MPModelObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasSocialPosts;

+ (void)__MPModelPropertyPersonHasSocialPosts__MAPPING_MISSING__;
+ (void)__MPModelPropertyPersonName__MAPPING_MISSING__;
+ (id)__hasSocialPosts_KEY;
+ (id)__name_KEY;

@end
