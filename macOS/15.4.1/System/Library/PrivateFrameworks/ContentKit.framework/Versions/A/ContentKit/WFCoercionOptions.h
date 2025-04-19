@class NSDictionary;
@protocol WFContentPermissionRequestor;

@interface WFCoercionOptions : NSObject <NSCopying>

@property (readonly, nonatomic) id<WFContentPermissionRequestor> permissionRequestor;
@property (readonly, nonatomic) BOOL shouldContinueLoadingWebContentIfExternalResourcesAreDenied;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (id)new;
+ (id)optionsWithDictionary:(id)a0;
+ (void)registerDefaultDisallowedCoercionPath:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)preferredTypes;
- (BOOL)coercionPathIsDisallowed:(id)a0;
- (id)itemClassPrioritizationType;
- (id)optionsByAddingContentsOfOptions:(id)a0;

@end
