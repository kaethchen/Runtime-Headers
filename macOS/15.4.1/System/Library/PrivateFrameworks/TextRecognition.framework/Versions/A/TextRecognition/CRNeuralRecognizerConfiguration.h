@class NSArray, NSString, NSURL, CRTitleParameters, CRConfidenceThresholds;

@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration {
    float _mediumConfidenceThreshold;
    float _highConfidenceThreshold;
}

@property (readonly) NSURL *customModelURL;
@property (readonly) long long batchSize;
@property (readonly) long long maxConcurrentBatches;
@property (readonly) NSArray *inputWidths;
@property (readonly) double inputHeight;
@property (readonly) unsigned long long paddingMode;
@property (readonly) BOOL decodeWithLM;
@property (readonly) BOOL filterWithLM;
@property (readonly) NSArray *customWords;
@property (readonly) float precisionThreshold;
@property (readonly) NSString *locale;
@property (readonly) CRTitleParameters *titleParameters;
@property (readonly) CRConfidenceThresholds *confidenceThresholds;

+ (id)cachedConfigurationWithLocale:(id)a0 imageReaderOptions:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initV3DefaultConfigWithOptions:(id)a0;
- (long long)bestFitWidthIndexForAspectRatio:(double)a0;
- (id)createTextFeatureFilter;
- (id)initWithLocale:(id)a0 imageReaderOptions:(id)a1 error:(id *)a2;
- (BOOL)usesAppleNeuralEngine;

@end
