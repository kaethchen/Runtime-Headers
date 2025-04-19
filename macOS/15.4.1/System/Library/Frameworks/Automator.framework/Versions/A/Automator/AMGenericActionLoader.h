@interface AMGenericActionLoader : NSObject

@property (class, readonly) AMGenericActionLoader *sharedGenericActionLoader;

- (id)actionIconForDefinition:(id)a0 large:(BOOL)a1;
- (id)actionsFromApplicationDefinition:(id)a0;
- (id)actionsFromLeopardApplicationDefinition:(id)a0;
- (id)actionsFromTigerApplicationDefinition:(id)a0;
- (id)cachingDictionaryForDefinedActionWithGenericActionBundleIdentifier:(id)a0 applicationDefinition:(id)a1;
- (id)definedActionWithGenericActionBundle:(id)a0 applicationDefinition:(id)a1;
- (id)definedActionWithGenericActionBundle:(id)a0 leopardApplicationDefinition:(id)a1;
- (id)definedActionWithGenericActionBundle:(id)a0 tigerApplicationDefinition:(id)a1;
- (id)genericActionBundleIdentiferForLeopardKey:(id)a0;
- (id)genericActionBundleIdentiferForTigerKey:(id)a0;
- (id)keywordsForDefinedActionWithGenericActionBundleIdentifier:(id)a0 leopardApplicationDefinition:(id)a1;
- (id)keywordsForDefinedActionWithGenericActionBundleIdentifier:(id)a0 tigerApplicationDefinition:(id)a1;
- (id)localizedApplicationNamesForValue:(id)a0 fromBundle:(id)a1;
- (id)nameForDefinedActionWithGenericActionBundleIdentifier:(id)a0 applicationDefinition:(id)a1;
- (BOOL)optionalKeyValueForGenericActionBundleIdentifier:(id)a0;
- (void)setupGenericAction:(id)a0 iconsWithDefinition:(id)a1;

@end
