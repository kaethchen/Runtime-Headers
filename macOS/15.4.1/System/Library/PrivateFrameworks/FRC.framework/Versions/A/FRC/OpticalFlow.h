@class Backwarp, Correlation, FlowAdaptationFeatureExtractor, FeatureExtractor, NSObject, FlowEstimate;
@protocol OS_dispatch_group, MTLDevice, OS_dispatch_semaphore, MTLCommandQueue, OS_dispatch_queue;

@interface OpticalFlow : NSObject {
    Class _featureExtractorClass;
    Class _flowEstimatorClass;
    Class _adaptationFeatureExtractorClass;
    Class _adaptationDecoderClass;
    FeatureExtractor *_featureExtractor;
    FlowEstimate *_flowEstimator[6];
    FeatureExtractor *_baseFeatureExtractor;
    FlowEstimate *_baseFlowEstimator[6];
    FlowAdaptationFeatureExtractor *_adaptationFeatureExtractor;
    Correlation *_correlation;
    id<MTLCommandQueue> _commandQueue;
    NSObject<OS_dispatch_semaphore> *_flowEstimateSemaphore;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    long long _usage;
    long long _baseStageUsage;
    BOOL _baseStageCreated;
    struct { struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; struct __CVBuffer *adaptationLayerFeature; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } adaptationLayerTensorSize; } imageFeature; struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; struct __CVBuffer *adaptationLayerFeature; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } adaptationLayerTensorSize; } baseImageFeature; struct __CVBuffer *subsampledInput; struct __CVBuffer *baseStageInput; } _features[2];
    struct { struct { struct __CVBuffer *correlations[6]; struct __CVBuffer *flows[6]; struct __CVBuffer *upscaledFlows[6]; struct __CVBuffer *warpedImages[6]; struct __CVBuffer *shuffledFlow; unsigned int numLevels; } storage; struct { struct __CVBuffer *correlations[6]; struct __CVBuffer *flows[6]; struct __CVBuffer *upscaledFlows[6]; struct __CVBuffer *warpedImages[6]; struct __CVBuffer *shuffledFlow; unsigned int numLevels; } baseStorage; } _opticalFlowStroages[2];
    BOOL _resourcePreAllocated;
    BOOL _upscaleFinalFlow;
    BOOL _4xUpscale;
}

@property (readonly, nonatomic) unsigned long long flowWidth;
@property (readonly, nonatomic) unsigned long long flowHeight;
@property (readonly, nonatomic) int numLevels;
@property (nonatomic) unsigned long long downsampling;
@property (nonatomic) BOOL skipLastLevel;
@property (nonatomic) BOOL twoStageFlow;
@property (nonatomic) BOOL concurrentDualFlowProcessing;
@property (nonatomic) BOOL useAdaptationLayer;
@property (nonatomic) BOOL disableOutputFlowScaling;
@property (nonatomic) BOOL adaptationLayerOnly;
@property (nonatomic) long long revision;
@property (nonatomic) BOOL waitForCompletion;
@property (readonly, nonatomic) Backwarp *backwarp;
@property (readonly) id<MTLDevice> device;
@property (readonly) struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *imageFeatures;
@property (readonly) struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x1; } *storages;

+ (BOOL)use4xDownScale:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (void)allocateResources;
- (void)releaseResources;
- (void)estimateFlowFromFirstFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0 secondFeature:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a1 storage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x1; } *)a2 outputFlow:(struct __CVBuffer { } *)a3;
- (void)allocateImageFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a0 extractor:(id)a1;
- (BOOL)createBaseLayer;
- (void)adaptFlowFromFirstFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a0 secondFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a1 storage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } *)a2 inputFlow:(struct __CVBuffer { } *)a3 outputFlow:(struct __CVBuffer { } *)a4;
- (void)allocateCorreleationBuffer:(struct __CVBuffer **)a0 forLevel:(unsigned int)a1 extractor:(id)a2;
- (void)allocateFeatureBuffers:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0;
- (void)allocateIntermediateStageStorage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } *)a0 baseStage:(BOOL)a1;
- (void)allocateIntermediateStorage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x1; } *)a0;
- (BOOL)createModules;
- (void)estimateFlowLevel:(unsigned int)a0 withEstimator:(id *)a1 firstFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a2 secondFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a3 correlation:(struct __CVBuffer { } *)a4 upscaledFlow:(struct __CVBuffer { } *)a5 warpedImage:(struct __CVBuffer { } *)a6 prevFlow:(struct __CVBuffer { } *)a7 outputFlow:(struct __CVBuffer { } *)a8 waitForComplete:(BOOL)a9;
- (void)estimateStageFlowFromFirstFeatures:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a0 secondFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a1 storage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } *)a2 baseStage:(BOOL)a3 startLevel:(int)a4 lastLevel:(int)a5 startFlow:(struct __CVBuffer { } *)a6 outputFlow:(struct __CVBuffer { } *)a7;
- (void)estimateTwoWayFlowFromFirstFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0 secondFeature:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a1 storage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x1; } *)a2 outputForwardFlow:(struct __CVBuffer { } *)a3 outputBackwardFlow:(struct __CVBuffer { } *)a4;
- (void)extractFeaturesFromFirst:(struct __CVBuffer { } *)a0 second:(struct __CVBuffer { } *)a1;
- (void)extractFeaturesFromImage:(struct __CVBuffer { } *)a0 outputFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a1;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })featureSizeForLevel:(unsigned int)a0;
- (void)flowAdaptationFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 inputFlowForward:(struct __CVBuffer { } *)a2 inputFlowBackward:(struct __CVBuffer { } *)a3 outputFlowForward:(struct __CVBuffer { } *)a4 outputFlowBackward:(struct __CVBuffer { } *)a5;
- (struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })flowSizeForLevel:(unsigned int)a0;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3 reUseFlow:(BOOL)a4;
- (void)postProcessFlow:(struct __CVBuffer { } *)a0 outputFlow:(struct __CVBuffer { } *)a1;
- (void)predictFowardFlow:(struct __CVBuffer { } *)a0 fromBackwardFlow:(struct __CVBuffer { } *)a1;
- (void)releaseFeatureBuffers:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0;
- (void)releaseImageFeature:(struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } *)a0;
- (void)releaseIntermediateStageStorage:(struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } *)a0;
- (void)releaseIntermediateStorage:(struct { struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x0; struct { struct __CVBuffer *x0[6]; struct __CVBuffer *x1[6]; struct __CVBuffer *x2[6]; struct __CVBuffer *x3[6]; struct __CVBuffer *x4; unsigned int x5; } x1; } *)a0;
- (void)releaseUnusedFeatures:(struct { struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x0; struct { int x0; struct __CVBuffer *x1[6]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2[6]; struct __CVBuffer *x3; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x4; } x1; struct __CVBuffer *x2; struct __CVBuffer *x3; } *)a0;
- (void)reshuffleFlow:(struct __CVBuffer { } *)a0 previsouFlow:(struct __CVBuffer { } *)a1 destination:(struct __CVBuffer { } *)a2;
- (void)setNetworkClasses;
- (void)subsampleInput:(struct __CVBuffer { } *)a0 to:(struct __CVBuffer { } *)a1 forUsage:(long long)a2;
- (BOOL)switchUsageTo:(long long)a0;
- (void)updateFlowSize;
- (void)upscaleInputFlow:(struct __CVBuffer { } *)a0 outFlow:(struct __CVBuffer { } *)a1;

@end
