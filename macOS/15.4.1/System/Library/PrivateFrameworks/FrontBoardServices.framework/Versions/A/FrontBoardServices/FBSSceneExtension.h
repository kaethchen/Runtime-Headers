@interface FBSSceneExtension : NSObject

+ (id)alloc;
+ (id)description;
+ (void)initialize;
+ (BOOL)propagateToSceneWithDefinition:(id)a0;
+ (id)_frameworkNameLoadingIfNeeded:(BOOL)a0;
+ (id)clientComponents;
+ (id)clientSettingsExtensions;
+ (id)hostComponents;
+ (id)settingsExtensions;
+ (BOOL)softLinkExtensionFrameworkInClient;
+ (id)transitionContextExtensions;

@end
