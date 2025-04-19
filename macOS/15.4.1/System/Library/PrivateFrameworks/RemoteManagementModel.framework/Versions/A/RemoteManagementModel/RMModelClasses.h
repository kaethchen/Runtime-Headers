@interface RMModelClasses : NSObject

+ (id)allAssetClasses;
+ (void)addClass:(Class)a0 declarationType:(id)a1;
+ (id)allActivationClasses;
+ (id)allConfigurationClasses;
+ (id)allManagementClasses;
+ (id)allStatusItemClasses;
+ (Class)classForCommandType:(id)a0;
+ (Class)classForDeclarationType:(id)a0;
+ (Class)classForStatusItemType:(id)a0;
+ (void)ensureClassForDeclarations:(id)a0;
+ (void)ensureClassForStatusItems:(id)a0;
+ (void)hideDeclarationsWithTypes:(id)a0;

@end
