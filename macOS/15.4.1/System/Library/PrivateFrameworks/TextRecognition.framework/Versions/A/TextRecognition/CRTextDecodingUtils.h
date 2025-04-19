@interface CRTextDecodingUtils : NSObject

+ (id)adjustedBeamSearchDecodedString:(id)a0 greedyDecodedString:(id)a1 decodingLocale:(id)a2;
+ (id)characterRangesForTokens:(id)a0 fromActivation:(id)a1 usingCharacterTokens:(BOOL)a2;
+ (id)filteredTokensFromTokens:(id)a0 falsePositiveFiltering:(BOOL)a1 keepWhitespaceToken:(BOOL)a2;
+ (void)getCharacterBoundariesForActivationRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 featureImageSize:(struct CGSize { double x0; double x1; })a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 radians:(float)a8 model:(id)a9 configuration:(id)a10 paddingLeft:(double)a11 paddingRight:(double)a12 rangeOffset:(double)a13;
+ (id)getTokenPermutationByApplyingReorderingPermutation:(id)a0 toRanges:(id)a1;
+ (void)getWordBoundariesForWhiteSpaceRanges:(id)a0 topPoints:(id *)a1 bottomPoints:(id *)a2 imageSize:(struct CGSize { double x0; double x1; })a3 scale:(float)a4 featureImageSize:(struct CGSize { double x0; double x1; })a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 rotatedRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 radians:(float)a8 model:(id)a9 configuration:(id)a10 paddingLeft:(double)a11 paddingRight:(double)a12 rangeOffset:(double)a13;
+ (id)graphemeClusterTokensFromTokens:(id)a0;
+ (id)halfWidthToFullWidthNormalizationForTextString:(id)a0;
+ (id)invertedPermutation:(id)a0;
+ (id)reversedPermutation:(id)a0 numTimeSteps:(unsigned long long)a1;
+ (id)reversedTokens:(id)a0 numTimeSteps:(unsigned long long)a1;
+ (id)tokenDelimiterRangesForTokens:(id)a0 usingCharacterTokens:(BOOL)a1;
+ (id)tokenSequenceStringForTokens:(id)a0 usingCharacterTokens:(BOOL)a1;
+ (BOOL)validateProbability:(id)a0 precisionThreshold:(double)a1 withLM:(BOOL)a2;
+ (id)wordTokensFromCharacterTokens:(id)a0;

@end
