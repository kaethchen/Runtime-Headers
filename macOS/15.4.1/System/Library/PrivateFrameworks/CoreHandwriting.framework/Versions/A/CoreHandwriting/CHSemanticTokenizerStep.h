@class CHStringOVSChecker;

@interface CHSemanticTokenizerStep : CHPostprocessingStep {
    struct ObjectRef<void *> { void *mCFObject; } _wordLanguageModel;
    CHStringOVSChecker *_ovsStringChecker;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWordLanguageModel:(void *)a0 ovsStringChecker:(id)a1;
- (id)process:(id)a0 options:(id)a1;

@end
