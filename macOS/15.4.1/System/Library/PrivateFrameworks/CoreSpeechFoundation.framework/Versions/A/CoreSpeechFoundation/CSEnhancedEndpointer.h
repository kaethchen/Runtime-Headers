@class MLModel, NSDictionary, NSArray;
@protocol _TtP20CoreSpeechFoundation31CSEnhancedEndpointerInputVector_;

@interface CSEnhancedEndpointer : NSObject

@property (retain, nonatomic) MLModel *endpointerModel;
@property (retain, nonatomic) NSDictionary *inputSpecs;
@property (retain, nonatomic) NSArray *outputNodes;
@property (nonatomic) float defaultThresholdPartial;
@property (nonatomic) float defaultThresholdRC;
@property (nonatomic) float relaxedThresholdPartial;
@property (nonatomic) float relaxedThresholdRC;
@property (nonatomic) int extraDelayMs;
@property (nonatomic) int continuityWindowDuration;
@property (nonatomic) float speechDetectedThreshold;
@property (nonatomic) BOOL delayedTrigger;
@property (nonatomic) double delayedTargetTimeDefault;
@property (nonatomic) double delayedTargetTimeRelaxed;
@property (nonatomic) BOOL hasHadDelayedDefaultResult;
@property (retain, nonatomic) id<_TtP20CoreSpeechFoundation31CSEnhancedEndpointerInputVector_> inputVector;
@property (nonatomic) double continuityEndTargetTime;

- (void).cxx_destruct;
- (id)modelType;
- (void)didEndpointWithFeatures:(id)a0 audioTimestampMs:(double)a1 completion:(id /* block */)a2;
- (id)initWithModelFile:(id)a0 defaultThresholdPartial:(float)a1 defaultThresholdRC:(float)a2 relaxedThresholdPartial:(float)a3 relaxedThresholdRC:(float)a4 extraDelayMs:(int)a5 continuityWindowDuration:(int)a6 speechDetectedThreshold:(float)a7;
- (void)updateDefaultThresholdPartial:(float)a0 defaultThresholdRC:(float)a1 relaxedThresholdPartial:(float)a2 relaxedThresholdRC:(float)a3;
- (void)updateDelayedTriggerSwitch:(BOOL)a0;
- (id)_constructFeatureDictionary:(id)a0;
- (BOOL)_didDefaultEndpointerFireWithPartialScore:(float)a0 rcScore:(float)a1;
- (BOOL)_didDetectSpeechWithPartialScore:(float)a0;
- (BOOL)_didRelaxedEndpointerFireWithPartialScore:(float)a0 rcScore:(float)a1;
- (void)_extractModelSpecs;
- (BOOL)_shouldForceEndpoint:(id)a0;

@end
