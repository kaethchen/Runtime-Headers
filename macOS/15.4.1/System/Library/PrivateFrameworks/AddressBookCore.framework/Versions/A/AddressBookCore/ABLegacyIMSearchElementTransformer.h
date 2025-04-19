@interface ABLegacyIMSearchElementTransformer : ABSearchElementTransformer

+ (id)sharedLegacyIMTransformer;

- (id)convertToModernIMSearchElement:(id)a0;
- (BOOL)isLegacyIMSearchElement:(id)a0;
- (id)recursivelyTransformChildren:(id)a0;
- (id)transformConjunction:(id)a0;
- (id)transformSearchElement:(id)a0;

@end
