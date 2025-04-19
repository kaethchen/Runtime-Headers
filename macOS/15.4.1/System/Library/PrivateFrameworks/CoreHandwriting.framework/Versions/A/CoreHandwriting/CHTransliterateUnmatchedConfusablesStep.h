@class NSDictionary;

@interface CHTransliterateUnmatchedConfusablesStep : CHMathPostprocessingStep {
    NSDictionary *_mathOpeningConfusableMappings;
    NSDictionary *_mathClosingConfusableMappings;
    struct unique_ptr<CoreHandwriting::LaTeXSyntaxHelper, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct __compressed_pair<CoreHandwriting::LaTeXSyntaxHelper *, std::default_delete<CoreHandwriting::LaTeXSyntaxHelper>> { struct LaTeXSyntaxHelper *__value_; } __ptr_; } latexHelper;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)doesTransliterateAtIndexResolveUnmatchingCase:(id)a0 atIndex:(long long)a1 withString:(id)a2 unmatchingCase:(int)a3 shouldForceLocaleFormatNumber:(BOOL)a4;
- (id)initWithCodemap:(id)a0;
- (id)process:(id)a0 options:(id)a1;
- (BOOL)updateUnmatchingSymbol:(id)a0 unmatchingType:(int)a1 mode:(id)a2 shouldForceLocaleFormatNumber:(BOOL)a3 outUpdatedPathTokens:(id)a4;

@end
