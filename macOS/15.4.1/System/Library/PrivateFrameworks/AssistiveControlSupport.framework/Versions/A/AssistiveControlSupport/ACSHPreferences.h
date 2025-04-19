@class NSDictionary, ACSHUserDefaultsPreferencesSource, ACSHPreferencesSource;

@interface ACSHPreferences : NSObject

@property (class, readonly, nonatomic) NSDictionary *preferenceDefaults;
@property (class, readonly, nonatomic) ACSHUserDefaultsPreferencesSource *userDefaultsPreferencesSource;

@property (retain, nonatomic) ACSHPreferencesSource *preferencesSource;

+ (id)inMemoryPeferenceSourceForDomain:(id)a0 withOverrides:(id)a1;

- (void).cxx_destruct;
- (id)initWithPreferencesSource:(id)a0;

@end
