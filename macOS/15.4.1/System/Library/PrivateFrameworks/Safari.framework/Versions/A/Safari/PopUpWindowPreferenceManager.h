@class WBSPerSitePreference, NSString, WBSMutableOrderedDictionary, WBSPerSitePreferencesSQLiteStore;

@interface PopUpWindowPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate> {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSMutableOrderedDictionary *_domainToPopUpWindowPreferenceValueMap;
}

@property (readonly, nonatomic) WBSPerSitePreference *popUpWindowPreference;
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
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (id)valuesForPreference:(id)a0;
- (void)addPopUpWindowPreferenceValue:(long long)a0 forDomain:(id)a1;
- (void)getPopUpWindowPreferenceValueForDomain:(id)a0 withTimeout:(double)a1 fallbackValue:(long long)a2 completionHandler:(id /* block */)a3;
- (BOOL)popUpWindowPreferenceValueExistsForDomain:(id)a0;
- (long long)popUpWindowPreferenceValueForDomain:(id)a0;

@end
