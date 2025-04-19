@interface TUIMathCompletionGenerator : NSObject <TUIPredictionGenerator>

@property (nonatomic) BOOL enabled;

- (id)init;
- (void)syncToKeyboardState:(id)a0;
- (long long)candidateSourceType;
- (BOOL)endsWithExpressionTriggerCharacter:(id)a0;
- (id)expressionMatchForLocation:(long long)a0 inTextStorage:(id)a1;
- (id)expressionMatches:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)generateCandidatesWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)generatedCandidateType;
- (id)normalizeExpressionString:(id)a0;
- (BOOL)shouldGenerateCandidateForContext:(id)a0;
- (BOOL)textBeginsWithPrediction:(id)a0 prediction:(id)a1;

@end
