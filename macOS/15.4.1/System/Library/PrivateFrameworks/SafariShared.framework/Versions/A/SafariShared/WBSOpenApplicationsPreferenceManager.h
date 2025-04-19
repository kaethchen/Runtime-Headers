@class WBSPerSitePreference, NSString, NSMutableDictionary, WBSPerSitePreferencesSQLiteStore;

@interface WBSOpenApplicationsPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate> {
    NSMutableDictionary *_cachedListValuesByDomain;
}

@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly, nonatomic) WBSPerSitePreference *openApplicationsPreference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (void)clearCache;
- (id)_listForDomainCachingIfNeeded:(id)a0;
- (void)alwaysAllowScheme:(id)a0 fromDomain:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canAlwaysAllowScheme:(id)a0;
- (void)clearAllValuesForDomain:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAllValuesWithCompletionHandler:(id /* block */)a0;
- (id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)a0;
- (id)initWithPerSitePreferencesStore:(id)a0;
- (BOOL)isSchemeAlwaysAllowedToOpen:(id)a0 fromDomain:(id)a1;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (id)preferenceNameForPreference:(id)a0;
- (id)validateValue:(id)a0 forPreference:(id)a1;
- (id)valuesForPreference:(id)a0;

@end
