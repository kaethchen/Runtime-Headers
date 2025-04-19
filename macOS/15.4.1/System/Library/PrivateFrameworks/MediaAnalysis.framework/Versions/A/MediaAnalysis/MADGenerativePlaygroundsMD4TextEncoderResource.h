@interface MADGenerativePlaygroundsMD4TextEncoderResource : MADTextEncoderResource

- (unsigned long long)version;
- (long long)revision;
- (id)additionalLayerNames;
- (BOOL)supportsAgeTypePromptAdjustment;
- (long long)tokenEmbeddingType;
- (id)tokensForAgeType_:(unsigned short)a0;

@end
