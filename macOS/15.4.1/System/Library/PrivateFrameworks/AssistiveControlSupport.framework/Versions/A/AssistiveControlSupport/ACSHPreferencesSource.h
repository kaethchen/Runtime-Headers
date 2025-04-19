@class NSDictionary;

@interface ACSHPreferencesSource : NSObject

@property (copy, nonatomic) NSDictionary *_preferenceDefaults;

- (void).cxx_destruct;
- (void)setPreferenceValue:(id)a0 forKey:(id)a1;
- (id)copyPreferenceNumberForKey:(id)a0;
- (id)copyPreferenceStringForKey:(id)a0;
- (id)copyPreferenceValueForKey:(id)a0;
- (id)initWithPreferenceDefaults:(id)a0;

@end
