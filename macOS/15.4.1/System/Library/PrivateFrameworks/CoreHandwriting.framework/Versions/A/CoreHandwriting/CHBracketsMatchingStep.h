@class NSSet;

@interface CHBracketsMatchingStep : CHMathPostprocessingStep {
    struct unique_ptr<CoreHandwriting::LaTeXSyntaxHelper, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct __compressed_pair<CoreHandwriting::LaTeXSyntaxHelper *, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct LaTeXSyntaxHelper *__value_; } __ptr_; } latexHelper;
    NSSet *_bracketSymbols;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCodemap:(id)a0;
- (id)process:(id)a0 options:(id)a1;

@end
