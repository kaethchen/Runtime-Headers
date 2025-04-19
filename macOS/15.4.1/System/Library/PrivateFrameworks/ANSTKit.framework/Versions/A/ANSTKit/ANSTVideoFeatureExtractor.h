@class ANSTVideoFoundationModel, ANSTVideoFeatureExtractorConfiguration, NSMutableSet, ANSTTensorData;
@protocol ANSTVideoFeatureExtractorDelegate;

@interface ANSTVideoFeatureExtractor : NSObject {
    ANSTVideoFoundationModel *_model;
    float **_windowBuffer;
    int _currentIndex;
    BOOL _windowFilled;
    float *_windowSum;
    float *_normalizedMeanFeature;
    ANSTTensorData *_currentVideoFeatureData;
    BOOL _inputBindingCommitted;
    NSMutableSet *_modalityStatus;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct __CVBuffer { } *_rawInputImage;
    struct __CVBuffer { } *_preprocessedInputImage;
    BOOL _needsPreprocessing;
    BOOL _initSucceeded;
}

@property (readonly, nonatomic) ANSTVideoFeatureExtractorConfiguration *configuration;
@property (readonly, nonatomic) long long windowSize;
@property (weak, nonatomic) id<ANSTVideoFeatureExtractorDelegate> delegate;

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
- (id)getCurrentVideoFeatureWithOutError:(id *)a0;
- (void)releaseResourceSafely;
- (void)resetInferenceState;
- (void)resetInputBinding;

@end
