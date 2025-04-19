@class WBSWebExtensionsController;

@interface WBSWebExtensionNewTabOverridePreferencesManager : NSObject {
    WBSWebExtensionsController *_webExtensionsController;
}

+ (void)migrateStorageToPerProfileFormatIfNecessaryWithDefaults:(id)a0;

- (void).cxx_destruct;
- (void)setNewWindowBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
- (void)clearNewTabBehaviorInDefaults:(id)a0;
- (void)clearNewTabBehaviorInDefaults:(id)a0 fromUserGesture:(BOOL)a1;
- (void)clearNewWindowBehaviorInDefaults:(id)a0;
- (id)extensionComposedIdentifierForNewTabPreferenceInDefaults:(id)a0;
- (id)extensionComposedIdentifierForNewWindowPreferenceInDefaults:(id)a0;
- (BOOL)isNewTabPageOverriddenByAnEnabledExtensionInUserDefaults:(id)a0;
- (BOOL)isNewWindowPageOverriddenByAnEnabledExtension;
- (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1;
- (BOOL)shouldNewTabPageOverriddenByAnEnabledExtensionApplyInPrivateBrowsingWithUserDefaults:(id)a0;
- (BOOL)shouldNewWindowPageOverriddenByAnEnabledExtensionApplyInPrivateBrowsing;
- (id)sortedComposedIdentifiersForExtensionsWithOverridePages;
- (id)initWithExtensionsController:(id)a0;
- (id)cloudExtensionStateForDefaults:(id)a0;
- (id)_webExtensionOverridingNewTabPageWithDefaults:(id)a0;
- (id)_webExtensionOverridingNewWindowPage;
- (void)setNewTabBehaviorWithExtensionComposedIdentifier:(id)a0 inDefaults:(id)a1 fromUserGesture:(BOOL)a2;

@end
