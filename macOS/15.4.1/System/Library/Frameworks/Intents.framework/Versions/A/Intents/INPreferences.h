@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)sharedPreferences;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (long long)siriAuthorizationStatus;
+ (id)siriLanguageCode;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (id)_siriLanguageCode;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (long long)_siriAuthorizationStatus;
- (void)_updateWithExtensionContext:(id)a0;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (BOOL)_weAreRunningAsAnExtension;
- (void)requestSiriAuthorization:(id /* block */)a0;

@end
