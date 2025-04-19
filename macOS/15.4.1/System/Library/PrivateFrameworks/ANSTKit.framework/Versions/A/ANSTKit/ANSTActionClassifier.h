@class NSArray, NSString, ANSTActionClassifierConfiguration, ANSTVideoFeatureExtractor, NSData, ANSTTensorData;
@protocol ANSTActionClassifierDelegate;

@interface ANSTActionClassifier : NSObject <ANSTVideoFeatureExtractorDelegate> {
    NSArray *_supportedActions;
    NSArray *_currentPredictions;
    ANSTVideoFeatureExtractor *_featureExtractor;
    NSData *_decodingMatrixData;
    ANSTTensorData *_decodingMatrix;
    float *_rawScores;
    float *_probabilities;
}

@property (readonly, nonatomic) ANSTActionClassifierConfiguration *configuration;
@property (readonly, nonatomic) long long windowSize;
@property (readonly, nonatomic) NSArray *listOfSupportedActions;
@property (weak, nonatomic) id<ANSTActionClassifierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)initWithConfig:(id)a0 error:(id *)a1;
- (id)_initWithConfig:(id)a0 error:(id *)a1;
- (BOOL)bindAudioInput:(id)a0 error:(id *)a1;
- (BOOL)bindVideoInput:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)commitInputBindingWithError:(id *)a0;
- (BOOL)digestFrame:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)executeInferenceWithError:(id *)a0;
- (id)getCurrentActionPredictions;
- (void)resetInferenceState;
- (void)resetInputBinding;
- (void)videoFeatureExtractor:(id)a0 didUpdateVideoFeature:(id)a1;

@end
