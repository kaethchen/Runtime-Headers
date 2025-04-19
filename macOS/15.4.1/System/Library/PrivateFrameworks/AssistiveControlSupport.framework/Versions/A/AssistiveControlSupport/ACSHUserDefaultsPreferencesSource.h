@class NSString, NSUserDefaults;

@interface ACSHUserDefaultsPreferencesSource : ACSHPreferencesSource

@property (copy, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSUserDefaults *_userDefaults;
@property (retain, nonatomic) NSString *_migrationDomain;

- (void).cxx_destruct;
- (void)setPreferenceValue:(id)a0 forKey:(id)a1;
- (void)_migrateIfNeeded;
- (id)copyPreferenceValueForKey:(id)a0;
- (id)initWithDomain:(id)a0 preferenceDefaults:(id)a1 migrationDomain:(id)a2;

@end
