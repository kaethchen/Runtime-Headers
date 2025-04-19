@interface CHRemoveInvalidExpressionCandidatesStep : CHMathPostprocessingStep {
    struct unique_ptr<CoreHandwriting::LaTeXSyntaxHelper, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct __compressed_pair<CoreHandwriting::LaTeXSyntaxHelper *, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct LaTeXSyntaxHelper *__value_; } __ptr_; } _latexSyntaxHelper;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCodemap:(id)a0;
- (BOOL)isTranscriptionValidExpression:(id)a0 transcriptionPath:(id)a1 limitToCurrentLocale:(BOOL)a2;
- (id)process:(id)a0 options:(id)a1;

@end
