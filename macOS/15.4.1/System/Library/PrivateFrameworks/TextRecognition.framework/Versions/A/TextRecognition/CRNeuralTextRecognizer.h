@class NSString, CRNeuralRecognizerConfiguration, NSObject, CRPerformanceStatistics;
@protocol CRTextDecoding, CRRecognizerFeatureProviding, CRTextRecognizerModel;

@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding>

@property (retain, nonatomic) CRNeuralRecognizerConfiguration *configuration;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) unsigned int desiredQoS;
@property (retain) NSObject<CRRecognizerFeatureProviding> *featureProvider;
@property (retain) NSObject<CRTextRecognizerModel> *model;
@property (retain) NSObject<CRTextDecoding> *textDecoder;
@property (nonatomic) long long resourceUsers;
@property (readonly, nonatomic) CRPerformanceStatistics *inferenceStats;
@property (readonly, nonatomic) CRPerformanceStatistics *decodingStats;
@property BOOL unloadResourcesWhenNotInUse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_modelForRevision:(long long)a0 configuration:(id)a1 error:(id *)a2;
+ (id)_textDecoderForRevision:(long long)a0 configuration:(id)a1 model:(id)a2 error:(id *)a3;
+ (id)recognizerForLocale:(id)a0 imageReaderOptions:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)_isCancelled;
- (void)_unloadResources;
- (id)_featureProviderWithError:(id *)a0;
- (BOOL)_loadResourcesWithError:(id *)a0;
- (void)_releaseIntermediateResources;
- (BOOL)preheatWithError:(id *)a0;
- (BOOL)shouldModelSupportCharacterBoxes;
- (id)thresholdsForTextRegion:(id)a0 withLocale:(id)a1;

@end
