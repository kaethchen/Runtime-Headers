@interface SLNotificationPrefs : NSObject

+ (id)sharedPreferences;

- (id)init;
- (void)addCheckBoxFromPreferences:(id)a0 toArray:(id)a1 forKey:(id)a2;
- (void)addRadioButtonsFromPreferences:(id)a0 toArray:(id)a1 forKey:(id)a2;
- (id)defaultPrefsForBundleID:(id)a0;
- (id)defaultSinaWeiboPrefs;
- (id)defaultTwitterPrefs;
- (id)localizedPrefsForType:(id)a0 withValue:(id)a1;
- (id)notificationPreferenceForClient:(id)a0 andKey:(id)a1;
- (id)notificationPreferencesForClient:(id)a0;
- (id)preferencesForClient:(id)a0;
- (void)setNotificationPreferenceForClient:(id)a0 withObject:(id)a1 forKey:(id)a2;

@end
