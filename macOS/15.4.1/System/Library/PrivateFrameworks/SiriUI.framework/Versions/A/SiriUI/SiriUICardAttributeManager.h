@class NSDictionary, NSMutableDictionary;

@interface SiriUICardAttributeManager : NSObject

@property (readonly) NSMutableDictionary *groupMap;
@property (readonly) NSMutableDictionary *iconMap;
@property (readonly) NSDictionary *socialIconMap;
@property (readonly) NSDictionary *appPluginMap;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)localizedIconPathForIdentifier:(id)a0;
- (id)appexIconRelativeToBundle:(id)a0 withIdentifier:(id)a1;
- (id)bundlePathForAppPluginIconWithIdentifier:(id)a0;
- (id)bundlePathForIdentifier:(id)a0;
- (id)bundlePathForSocialIconWithIdentifier:(id)a0;
- (id)localizedIconForIdentifier:(id)a0;
- (id)localizedNameForAceObject:(id)a0;
- (BOOL)shouldAllowSnippetStashingForAceObject:(id)a0;

@end
