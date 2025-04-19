@interface SFAutoFillFeatureManager : NSObject {
    BOOL _shouldOverrideShouldAutoFillFromKeychain;
    BOOL _overrideShouldAutoFillFromKeychainValue;
}

@property (class, readonly) SFAutoFillFeatureManager *sharedFeatureManager;
@property (class, readonly) struct __CFString { } *autoFillPreferencesDomain;
@property (class, readonly) BOOL defaultValueForPasswordAndCreditCardAutoFill;

@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (nonatomic) BOOL shouldAutoFillPasswords;
@property (readonly, nonatomic) BOOL isUserAllowedToTogglePasswordAutoFillEnabledState;
@property (readonly, nonatomic) BOOL isAutoFillFromKeychainRestricted;

+ (void)autoFillPreferencesDidChange;

- (void)dealloc;
- (id)init;
- (void)_refreshCachedAutoFillRestrictionValues;
- (void)test_overrideShouldAutoFillFromKeychain:(BOOL)a0;

@end
