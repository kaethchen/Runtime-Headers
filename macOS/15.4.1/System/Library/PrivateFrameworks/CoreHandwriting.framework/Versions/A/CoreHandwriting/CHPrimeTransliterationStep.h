@interface CHPrimeTransliterationStep : CHMathPostprocessingStep

- (id)process:(id)a0 options:(id)a1;
- (void)transliteratePrimeExponent:(id)a0 startIndex:(long long)a1 endIndex:(long long)a2 preservedPrimeIndexes:(void *)a3;

@end
