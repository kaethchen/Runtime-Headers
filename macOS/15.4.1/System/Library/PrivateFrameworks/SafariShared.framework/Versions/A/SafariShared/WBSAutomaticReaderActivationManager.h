@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}

@property (readonly, nonatomic) WBSPerSitePreference *readerPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (void)didUpdatePreference:(id)a0 toValue:(id)a1 forDomain:(id)a2;
- (void)getAutomaticReaderEnabledByDefaultUsingBlock:(id /* block */)a0;
- (void)getAutomaticReaderEnabledForDomain:(id)a0 usingBlock:(id /* block */)a1;
- (void)getAutomaticReaderStateForDomain:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)offValueForPreference:(id)a0;
- (id)onValueForPreference:(id)a0;
- (id)preferenceNameForPreference:(id)a0;
- (void)setAutomaticReaderEnabled:(BOOL)a0 forDomain:(id)a1;
- (void)setAutomaticReaderEnabledByDefault:(BOOL)a0 removingExistingPreferencesForSites:(BOOL)a1;
- (id)valuesForPreference:(id)a0;

@end
