@class NSString, TGIE5ANESessionObjC, NSObject;
@protocol OS_os_log;

@interface E5RunnerObjC : NSObject {
    struct unique_ptr<cgm::token_generation_inference::ajax::AJAXE5MLModel, std::default_delete<cgm::token_generation_inference::ajax::AJAXE5MLModel>> { struct __compressed_pair<cgm::token_generation_inference::ajax::AJAXE5MLModel *, std::default_delete<cgm::token_generation_inference::ajax::AJAXE5MLModel>> { struct AJAXE5MLModel *__value_; } __ptr_; } ajax_e5_model;
    NSObject<OS_os_log> *_log;
    NSString *_description;
    TGIE5ANESessionObjC *_aneSession;
}

@property (readonly, nonatomic) BOOL supportsNonLinearRunning;
@property (readonly, nonatomic) BOOL supportsModularAttention;
@property (readonly, nonatomic) unsigned long long maxContextLength;
@property (readonly, nonatomic) unsigned long long maxTokenTreeCount;
@property (readonly, nonatomic) unsigned long long vocabularyCount;

+ (id)log;
+ (BOOL)compileModelAtPath:(id)a0 modelType:(long long)a1 error:(id *)a2;
+ (BOOL)compileModelWithConfiguration:(id)a0 error:(id *)a1;
+ (id)compiledModelAtPath:(id)a0 modelType:(long long)a1 bundleCachePath:(id)a2 error:(id *)a3;
+ (id)compiledModelWithConfiguration:(id)a0 bundleCachePath:(id)a1 error:(id *)a2;
+ (BOOL)doesModelRequireCompilationAtPath:(id)a0 modelType:(long long)a1;
+ (BOOL)doesModelRequireCompilationWithConfiguration:(id)a0;
+ (BOOL)doesModelRequireCompilationWithConfiguration:(id)a0 bundleCachePath:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)reset;
- (void)clearAllState;
- (id)createKVCacheEntry:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (void)enableTelemetryWithIdentifier:(id)a0;
- (unsigned long long)getNumTokensProcessed;
- (id)initWithModelConfiguration:(id)a0 error:(id *)a1;
- (void)moveToDynamicState;
- (void)moveToFullyLoadedState;
- (void)purgeSteps:(id)a0;
- (void)purgeUnusedKeyValueCache:(id)a0 trgIdxs:(id)a1;
- (void)resetToStep:(long long)a0;
- (void)runTokens:(id)a0 outputBlock:(id /* block */)a1;
- (void)runTokens:(id)a0 tokenTreeIndexes:(id)a1 tokenMask:(id)a2 outputBlock:(id /* block */)a3;
- (BOOL)setKVCacheEntry:(id)a0 startIndex:(long long)a1 error:(id *)a2;

@end
