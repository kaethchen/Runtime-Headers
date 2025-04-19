@class NSUserDefaults;

@interface HKUserDefaultsDataSource : HKObserverBridge

@property (readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)ageGatingDataSource;
+ (id)privacyPreferencesDataSource;
+ (id)respiratoryPreferencesDataSource;
+ (id)sharedHealthPreferencesDataSource;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;
- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;

@end
