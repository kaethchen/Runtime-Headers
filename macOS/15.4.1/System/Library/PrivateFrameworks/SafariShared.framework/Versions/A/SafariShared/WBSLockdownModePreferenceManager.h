@class WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;

@interface WBSLockdownModePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferenceStore;
}

@property (readonly, nonatomic) WBSPerSitePreference *lockdownPreference;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)preferences;
- (id)initWithPerSitePreferenceStore:(id)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (void)getLockdownModeEnabledForDomain:(id)a0 withTimeout:(double)a1 fallbackEnabledState:(BOOL)a2 usingBlock:(id /* block */)a3;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)offValueForPreference:(id)a0;
- (id)onValueForPreference:(id)a0;
- (BOOL)preferenceDoesNotHaveForOtherWebsitesDefault:(id)a0;
- (id)preferenceNameForPreference:(id)a0;
- (void)setLockdownModeEnabled:(BOOL)a0 forDomain:(id)a1;
- (id)valuesForPreference:(id)a0;

@end
