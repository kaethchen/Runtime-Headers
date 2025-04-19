@class NSString, WBSPerSitePreference, WBSPerSitePreferencesSQLiteStore;

@interface DownloadsPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}

@property (readonly, nonatomic) WBSPerSitePreference *downloadsPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;

- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)preferenceNameForPreference:(id)a0;
- (id)valuesForPreference:(id)a0;
- (void)getDownloadsPreferenceValueForDomain:(id)a0 withParentDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)setDownloadsPreferenceValue:(long long)a0 forDomain:(id)a1;

@end
