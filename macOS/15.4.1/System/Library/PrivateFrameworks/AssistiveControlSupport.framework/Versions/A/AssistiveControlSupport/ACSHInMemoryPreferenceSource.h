@class NSString, NSMutableDictionary;

@interface ACSHInMemoryPreferenceSource : ACSHPreferencesSource

@property (retain, nonatomic) NSString *_domain;
@property (retain, nonatomic) NSMutableDictionary *_preferenceOverrides;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setPreferenceValue:(id)a0 forKey:(id)a1;
- (void)_updatePreferenceFromNotification:(id)a0 settingsChangedNotificationName:(id)a1;
- (id)copyPreferenceValueForKey:(id)a0;
- (id)initWithDomain:(id)a0 preferenceOverrides:(id)a1 preferenceDefaults:(id)a2;
- (void)updateVirtualKeyboardPreferenceFromNotification:(id)a0;

@end
