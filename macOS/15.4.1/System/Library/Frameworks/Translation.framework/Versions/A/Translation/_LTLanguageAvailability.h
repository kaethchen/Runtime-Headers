@class NSString, NSArray, _LTLanguageStatus, _LTPreflightChecker;
@protocol _LTTextSessionLocaleProviding, _LTLanguageAvailabilityDelegate, _LTPreflightLocaleResolving;

@interface _LTLanguageAvailability : NSObject <_LTPreflightCheckerDelegate, _LTTextSessionLocaleProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_cachedSupportedLocalePairs;
    id /* block */ _supportedLocalePairsCompletionHandler;
    id /* block */ _languageStatusCompletionHandler;
    _LTLanguageStatus *_languageStatusListener;
    _LTPreflightChecker *_preflightChecker;
}

@property (weak, nonatomic) id<_LTTextSessionLocaleProviding> localeProvider;
@property (weak, nonatomic) id<_LTPreflightLocaleResolving> localeResolver;
@property (weak, nonatomic) id<_LTLanguageAvailabilityDelegate> delegate;
@property (nonatomic) BOOL allowOnlineTranslation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateCachedValues;
- (void)_cachedLocaleStatusWithCompletion:(id /* block */)a0;
- (void)_checkStatusWithSourceLanguage:(id)a0 targetLanguage:(id)a1 sourceSample:(id)a2 completion:(id /* block */)a3;
- (void)_didUpdateCachedValues;
- (void)_installedLocalesWithCompletion:(id /* block */)a0;
- (void)_supportedLocalePairsWithCompletion:(id /* block */)a0;
- (id)_uniqueLocalesFromSupportedPairs:(id)a0;
- (void)currentlyInstalledLocalesWithCompletion:(id /* block */)a0;
- (BOOL)isTranslationSupportedOnCurrentDeviceForPreflightChecker:(id)a0;
- (void)localeProviderSupportedLocalePairsWithCompletion:(id /* block */)a0;
- (void)preflightChecker:(id)a0 continueCheckingFromStep:(long long)a1 forConfiguration:(id)a2 completion:(id /* block */)a3;
- (void)statusForSourceSample:(id)a0 toLanguage:(id)a1 completion:(id /* block */)a2;
- (void)statusFromLanguage:(id)a0 toLanguage:(id)a1 completion:(id /* block */)a2;
- (void)supportedLanguagesWithCompletion:(id /* block */)a0;
- (void)supportedLocalePairsWithCompletion:(id /* block */)a0;

@end
