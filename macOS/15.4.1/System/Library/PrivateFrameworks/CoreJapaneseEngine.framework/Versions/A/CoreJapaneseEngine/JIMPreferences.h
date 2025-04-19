@class NSDictionary, NSBundle;

@interface JIMPreferences : NSObject {
    BOOL _inJIM;
    NSDictionary *_defaultValues;
    NSDictionary *_KotoeriPrefTranslators;
}

@property (class, readonly) NSBundle *inputMethodBundle;
@property (class, readonly) NSBundle *frameworkBundle;

@property (readonly) BOOL environmentBeforeLogin;
@property (nonatomic) unsigned long long clientTypingMethod;

+ (BOOL)isAppleInternal;
+ (id)sharedPreferences;
+ (id)defaultDictionaryPath;
+ (BOOL)isBaseSystem;
+ (id)preferenceKeysForSyncing;
+ (id)trainerDictionaryPath;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)synchronize;
- (id)stringForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (long long)integerForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setString:(id)a0 forKey:(id)a1;
- (id)_objectForKey:(id)a0;
- (void)_setObject:(id)a0 forKey:(id)a1;
- (BOOL)canInputModeChangeEnabledState:(id)a0;
- (struct __TISInputSource { } *)_inputSourceRefFromInputModeID:(id)a0;
- (BOOL)_isInputModeIdentifier:(id)a0;
- (BOOL)isInputModeAvailable:(id)a0;
- (BOOL)isSystemCapsLockSwitchEnabled;

@end
