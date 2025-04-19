@class NSString, NSArray;
@protocol WBSPerSitePreferenceManagerDelegate;

@interface SafariWebExtensionPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManager> {
    NSArray *_preferences;
}

@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL shouldDeleteUnrecognizedPreference;
@property (readonly, nonatomic) BOOL hasDynamicPreferenceValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (void)getDefaultPreferenceValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)getDomainsAllowedToRemoveForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)localizedWarningTextForPreference:(id)a0;
- (BOOL)preferenceOnlyShowsConfiguredSites:(id)a0;
- (BOOL)preferenceShouldBeEnabled:(id)a0 forDomain:(id)a1;
- (BOOL)preferenceShouldBeEnabledForDefaultValue:(id)a0;
- (BOOL)preferenceShowsTabsInPrivateBrowsing:(id)a0;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDefaultValue:(id)a0 ofPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)shouldUseSmallWarningIconForPreference:(id)a0;
- (id)valuesForPreference:(id)a0;
- (id)warningImageForPreference:(id)a0;
- (void)_extensionStateDidChange:(id)a0;
- (void)_setValue:(id)a0 ofMatchPattern:(id)a1 forPreference:(id)a2 completionHandler:(id /* block */)a3;

@end
