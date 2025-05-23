@class NSString, MLModel, NSDictionary, NSMutableArray, NSNumber;

@interface _LTLanguageDetectorFeatureCombinationModel : NSObject {
    MLModel *_mlModel;
    NSString *_modelInput;
    BOOL _modelInputIsMatrix;
    NSString *_modelOutput;
    NSMutableArray *_features;
    NSNumber *_missingFeatureValueDefault;
    NSNumber *_missingLanguageDetectorDefault;
    NSDictionary *_languageLocaleToIdentifier;
}

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)estimateLanguage:(id)a0 languageDetectionResults:(id)a1 partialSpeechResultConfidences:(id)a2 finalSpeechResults:(id)a3 modelVersions:(id)a4 isLowConfidencePair:(BOOL)a5;
- (id)estimateLanguage:(id)a0 languageDetectionResults:(id)a1 partialSpeechResultConfidences:(id)a2 finalSpeechResults:(id)a3 modelVersions:(id)a4 useFinalThresholds:(BOOL)a5 isLowConfidencePair:(BOOL)a6;
- (id)getAcousticLidConfidenceFromResult:(id)a0 locale:(id)a1;
- (id)getModelFeatures:(id)a0 canonicalPair:(id)a1 partialSpeechResultConfidences:(id)a2 finalSpeechResults:(id)a3 modelVersion:(id)a4;

@end
