@class NSMutableArray, NSLocale;

@interface SCMLTextSanitizer : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } _mutex;
    unsigned int _mode;
    unsigned int _granularity;
    unsigned long long _backends;
    BOOL _throwInAdapterAsyncHandler;
    struct unique_ptr<scml::MultiwordGazetteer, std::default_delete<scml::MultiwordGazetteer>> { struct __compressed_pair<scml::MultiwordGazetteer *, std::default_delete<scml::MultiwordGazetteer>> { struct MultiwordGazetteer *__value_; } __ptr_; } _personsGazetteer;
    struct unique_ptr<scml::MultiwordGazetteer, std::default_delete<scml::MultiwordGazetteer>> { struct __compressed_pair<scml::MultiwordGazetteer *, std::default_delete<scml::MultiwordGazetteer>> { struct MultiwordGazetteer *__value_; } __ptr_; } _visualGenerationIgnoreGazetteer;
    struct unique_ptr<scml::(anonymous namespace)::RuleBasedTextSanitizer, std::default_delete<scml::(anonymous namespace)::RuleBasedTextSanitizer>> { struct __compressed_pair<scml::(anonymous namespace)::RuleBasedTextSanitizer *, std::default_delete<scml::(anonymous namespace)::RuleBasedTextSanitizer>> { struct RuleBasedTextSanitizer *__value_; } __ptr_; } _rulesBasedSanitizer;
    NSMutableArray *_llmBackends;
}

@property (readonly, nonatomic) NSLocale *locale;

+ (unsigned int)violationCategoryForAdapterLabel:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)sanitizeRequestAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (id)sanitizeText:(id)a0 error:(id *)a1;
- (id)_sanitizeRequest:(id)a0 error:(id *)a1;
- (void)_sanitizeRequestAsynchronously:(id)a0 completionHandler:(id /* block */)a1;
- (void)doLLMBackend:(id)a0 withText:(id)a1 isChildPresent:(BOOL)a2 withResponder:(void *)a3;
- (void)sanitizeTextAsynchronously:(id)a0 completionHandler:(id /* block */)a1;

@end
