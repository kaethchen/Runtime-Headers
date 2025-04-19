@class _LTInterruptionHandler, NSXPCConnection;

@interface _LTTranslator : NSObject {
    NSXPCConnection *_connection;
}

@property (class, copy, nonatomic) id /* block */ interruptionHandler;
@property (class, readonly, nonatomic) _LTInterruptionHandler *interruptionController;

+ (void)initialize;
+ (void)_clearCaches;
+ (void)availableLocalePairsForTask:(long long)a0 completion:(id /* block */)a1;
+ (void)languagesForText:(id)a0 completion:(id /* block */)a1;
+ (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 strategy:(unsigned long long)a2 useDedicatedTextMachPort:(BOOL)a3 completion:(id /* block */)a4;
+ (void)taskIsSupportedInCurrentRegion:(long long)a0 completion:(id /* block */)a1;
+ (void)installOfflineLocales:(id)a0 completion:(id /* block */)a1;
+ (void)installedLocales:(id /* block */)a0;
+ (void)_deleteHotfix:(id /* block */)a0;
+ (void)_downloadAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)_getAssetSize:(id /* block */)a0;
+ (void)_getServiceProxyWithDelegate:(id)a0 errorHandler:(id /* block */)a1 block:(id /* block */)a2;
+ (void)_getSyncServiceProxyWithDelegate:(id)a0 errorHandler:(id /* block */)a1 block:(id /* block */)a2;
+ (void)_getTextServiceProxyWithDelegate:(id)a0 useDedicatedTextMachPort:(BOOL)a1 errorHandler:(id /* block */)a2 block:(id /* block */)a3;
+ (void)_offlineLanguageStatus:(id /* block */)a0;
+ (void)_purgeAllAssets:(id /* block */)a0;
+ (void)_purgeAllAssetsExcludingConfig:(BOOL)a0 completion:(id /* block */)a1;
+ (void)_purgeAssetForLanguagePair:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)_updateAllAssets:(id /* block */)a0;
+ (void)_updateHotfix:(id /* block */)a0;
+ (void)addLanguages:(id)a0 useCellular:(BOOL)a1;
+ (void)additionalLikelyPreferredLocalesForLocale:(id)a0 completion:(id /* block */)a1;
+ (void)autoDetectSpeechUnsupportedPairsWithCompletion:(id /* block */)a0;
+ (void)availableLocalePairsForTask:(long long)a0 useDedicatedMachPort:(BOOL)a1 completion:(id /* block */)a2;
+ (void)configInfoForLocale:(id)a0 otherLocale:(id)a1 completion:(id /* block */)a2;
+ (void)installedLocalesForTask:(long long)a0 completion:(id /* block */)a1;
+ (void)languageAssetsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)languageForText:(id)a0 completion:(id /* block */)a1;
+ (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)languagesForText:(id)a0 usingModel:(unsigned long long)a1 useDedicatedTextMachPort:(BOOL)a2 completion:(id /* block */)a3;
+ (void)modalitiesPerLocaleWithCompletion:(id /* block */)a0;
+ (void)onDeviceModeEnabled:(id /* block */)a0;
+ (void)onDeviceModeEnabledWithDedicatedMachPort:(BOOL)a0 completion:(id /* block */)a1;
+ (void)onDeviceModeSupported:(id /* block */)a0;
+ (void)removeLanguages:(id)a0;
+ (void)selfLoggingEventWithData:(id)a0;
+ (void)selfLoggingInvocationCancelledForIDs:(id)a0;
+ (void)selfLoggingInvocationDidError:(id)a0 invocationId:(id)a1;
+ (void)selfLoggingInvocationStartedWithData:(id)a0 invocationStartedTier1Data:(id)a1;
+ (void)selfLoggingLanguageIdentificationCompletedWithLIDData:(id)a0;
+ (void)setLanguageAssets:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)shouldPresentSystemFirstUseConsentWithDedicatedMachPort:(BOOL)a0 completion:(id /* block */)a1;
+ (void)task:(long long)a0 isSupportedInCountry:(id)a1 completion:(id /* block */)a2;
+ (void)textStreamingConfigurationWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)cleanup;
- (void)log:(id)a0;
- (void)translate:(id)a0;
- (id)startTranslationSession;
- (void)preheatForRequest:(id)a0 completion:(id /* block */)a1;
- (void)preheatForRequestSync:(id)a0;
- (id)startTranslationSessionWithSELFLoggingInvocationId:(id)a0;
- (void)translate:(id)a0 useDedicatedTextMachPort:(BOOL)a1;

@end
