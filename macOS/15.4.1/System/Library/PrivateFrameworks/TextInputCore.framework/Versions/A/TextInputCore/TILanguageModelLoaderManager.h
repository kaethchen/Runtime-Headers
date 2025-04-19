@interface TILanguageModelLoaderManager : NSObject

+ (void)contactStoreDidChange:(id)a0;
+ (void)performMaintenance;
+ (void)clearDynamicLearningCaches;
+ (void)clearDynamicResourcesAtPath:(id)a0;
+ (void)dropResourcesExcludingInputModes:(id)a0;
+ (void)flushDynamicLearningCaches;
+ (void)flushDynamicResourcesForInputModes:(id)a0;
+ (id)knownClients;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })modelForLocale:(id)a0 isMultilingualModel:(BOOL)a1 languageLocales:(id)a2 adaptationContext:(id)a3 staticResourcePaths:(id)a4 dynamicResourcePath:(id)a5 isMultiLingualModeEnabled:(BOOL)a6 isSiriMode:(BOOL)a7 validEnglishTransformerMultilingualConfig:(BOOL)a8 trialParameters:(id)a9 inlineCompletionPrecision:(int)a10 isInlineCompletionEnabled:(BOOL)a11;
+ (id)modelLocalesForInputModes:(id)a0;
+ (id)recipientRecords;
+ (void)resetClientAndRecipientCache;
+ (void)setAsynchronousLoad:(BOOL)a0;
+ (void)setOfflineTrainingEnabled:(BOOL)a0;
+ (id)sharedLanguageModelLoaderForModelLocaleIdentifier:(id)a0 isMultilingualModel:(BOOL)a1 customResourcePaths:(id)a2 dynamicResourcePath:(id)a3 mobileAssets:(id)a4 usesLinguisticContext:(BOOL)a5 isMultiLingualModeEnabled:(BOOL)a6 validEnglishTransformerMultilingualConfig:(BOOL)a7 isSiriMode:(BOOL)a8 trialParameters:(id)a9 isInlineCompletionEnabled:(BOOL)a10;
+ (void)startObservingContactStore;
+ (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })stubForModelLocale:(id)a0 isMultilingualModel:(BOOL)a1 languageLocales:(id)a2 adaptationContext:(id)a3 staticResourcePaths:(id)a4 dynamicResourcePath:(id)a5 isMultiLingualModeEnabled:(BOOL)a6 isSiriMode:(BOOL)a7 isInlineCompletionEnabled:(BOOL)a8;
+ (void)unwireAllLanguageModelMemory;
+ (void)wireAllLanguageModelMemory;

@end
