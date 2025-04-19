@class NSArray, NSMutableDictionary;

@interface SCRFKNPreferencesManager : NSObject {
    NSMutableDictionary *_hotKeyInitialSettings;
    NSArray *_hotKeys;
    long long _initialKeyboardMode;
    BOOL _isOptimizationEnabled;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)_enableFullKeyboardAccess;
- (BOOL)_isSymbolicHotKeyEnabled:(unsigned int)a0;
- (void)_removeKeysFromPreferences;
- (void)_restoreKeyboardMode;
- (BOOL)isOptimizedKeyboardNavigationEnabled;
- (void)setIsOptimizedKeyboardNavigationEnabled:(BOOL)a0;

@end
