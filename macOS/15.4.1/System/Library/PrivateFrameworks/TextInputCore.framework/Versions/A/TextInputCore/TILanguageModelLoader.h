@class NSString, NSArray, TILanguageModelAdaptationContext, NSDictionary;
@protocol _ICContactFetchingDelegate;

@interface TILanguageModelLoader : NSObject

@property (nonatomic) struct shared_ptr<KB::LanguageModel> { struct LanguageModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) NSString *modelLocaleIdentifier;
@property (readonly, nonatomic) BOOL isMultilingualModel;
@property (readonly, nonatomic) BOOL isSiriMode;
@property (readonly, nonatomic, getter=isMultiLingualModeEnabled) BOOL multiLingualModeEnabled;
@property (readonly, nonatomic) BOOL validEnglishTransformerMultilingualConfig;
@property (readonly, nonatomic) NSArray *staticResourcePaths;
@property (readonly, nonatomic) NSArray *customResourcePaths;
@property (readonly, nonatomic) NSString *dynamicResourcePath;
@property (readonly, nonatomic) NSArray *mobileAssets;
@property (readonly, nonatomic) BOOL usesLinguisticContext;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (retain, nonatomic) NSDictionary *trialParameters;
@property (nonatomic) int inlineCompletionPrecision;
@property (nonatomic) BOOL isInlineCompletionEnabled;
@property (nonatomic) id<_ICContactFetchingDelegate> contactFetchingDelegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)clearDynamicLearningCaches;
- (void)findRecordsMatchingRecipient:(id)a0 completionHandler:(id /* block */)a1;
- (void)flushDynamicLearningCaches;
- (id)initWithModelLocaleIdentifier:(id)a0 isMultilingualModel:(BOOL)a1 customResourcePaths:(id)a2 dynamicResourcePath:(id)a3 mobileAssets:(id)a4 usesLinguisticContext:(BOOL)a5 isMultiLingualModeEnabled:(BOOL)a6 isSiriMode:(BOOL)a7 validEnglishTransformerMultilingualConfig:(BOOL)a8 trialParameters:(id)a9 inlineCompletionPrecision:(int)a10 isInlineCompletionEnabled:(BOOL)a11;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })languageModelForAdaptationContext:(id)a0 languageLocales:(id)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })lightweightLanguageModelForLanguageLocales:(id)a0;
- (void)loadLanguageModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })loadStubLanguageModelForLanguageLocales:(id)a0 withModelLocale:(id)a1 withAdaptationContext:(id)a2;
- (void)lookupRecordForRecipientIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)monolingualLanguageModelBundleExists:(id)a0;
- (BOOL)multilingualLanguageModelBundleExists;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })newLanguageModelForLanguageLocales:(id)a0;
- (void)performLearningIfNecessaryForClient:(id)a0 withModel:(struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })a1;
- (void)reloadLanguageModelWithLanguageLocales:(id)a0;
- (void)setLanguageModelClientIdentifier:(id)a0;
- (void)setLanguageModelRecipientIdentifier:(id)a0 completion:(id /* block */)a1;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1 forLanguageLocales:(id)a2;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })sharedLanguageModelForClient:(id)a0 withRecipient:(id)a1 forLanguageLocales:(id)a2 completion:(id /* block */)a3;
- (struct shared_ptr<KB::LanguageModel> { struct LanguageModel *x0; struct __shared_weak_count *x1; })stubLanguageModelForLanguageLocales:(id)a0 withModelLocale:(id)a1 withAdaptationContext:(id)a2;
- (void)unwireLanguageModelMemory;
- (void)wireLanguageModelMemory;

@end
