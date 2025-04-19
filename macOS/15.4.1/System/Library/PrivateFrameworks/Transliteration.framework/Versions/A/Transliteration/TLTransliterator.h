@interface TLTransliterator : NSObject {
    struct unique_ptr<TLCompositeTransliterator, std::default_delete<TLCompositeTransliterator>> { struct __compressed_pair<TLCompositeTransliterator *, std::default_delete<TLCompositeTransliterator>> { struct TLCompositeTransliterator *__value_; } __ptr_; } _compositeTransliterator;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithLocale:(id)a0;
- (id)initWithParameters:(id)a0;
- (id)generateCandidatesForInputWord:(id)a0 candidateContextStrings:(id)a1 maxCandidatesCount:(long long)a2;
- (void)flushDynamicLearningCache;
- (id)generateCandidatesForInputWord:(id)a0 candidateContext:(id)a1 maxCandidatesCount:(long long)a2;
- (void)learnCandidate:(id)a0 candidateContext:(id)a1;
- (void)resetDynamicLearningCache;
- (void)unlearnCandidate:(id)a0 candidateContext:(id)a1;

@end
