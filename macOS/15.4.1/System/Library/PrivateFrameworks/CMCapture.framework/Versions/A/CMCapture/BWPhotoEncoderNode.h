@class BWPhotoEncoderControllerConfiguration, NSString, NSDictionary, BWPhotoEncoderController, BWStillImageNodeConfiguration;

@interface BWPhotoEncoderNode : BWNode <BWPhotoEncoderControllerDelegate> {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    NSDictionary *_sensorConfigurationsByPortType;
    NSDictionary *_attachedMediaConfigurationByAttachedMediaKey;
    BWPhotoEncoderControllerConfiguration *_photoEncoderControllerConfiguration;
    BWPhotoEncoderController *_photoEncoderController;
    NSString *_lastProcessedCaptureIdentifier;
    BOOL _preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)setZeroShutterLagEnabled:(BOOL)a0;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2;
- (id)attachedMediaConfigurationByAttachedMediaKey;
- (BOOL)cameraSupportsFlash;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)handleStillImagePrewarmWithSettings:(id)a0 forInput:(id)a1;
- (id)initWithNodeConfiguration:(id)a0 sensorConfigurationsByPortType:(id)a1 semanticDevelopmentVersion:(int)a2 inferenceScheduler:(id)a3 alwaysAwaitInference:(BOOL)a4 portraitRenderQuality:(int)a5 deferredPhotoProcessorEnabled:(BOOL)a6;
- (id)inputColorInfo;
- (id)nodeSubType;
- (id)photoEncoderController;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)processorController:(id)a0 didFinishProcessingInput:(id)a1 err:(int)a2;
- (void)processorController:(id)a0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 type:(unsigned long long)a2 processorInput:(id)a3 err:(int)a4;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2 dimensions:(struct { int x0; int x1; })a3;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAttachedMediaConfigurationByAttachedMediaKey:(id)a0;
- (void)setCameraSupportsFlash:(BOOL)a0;
- (void)setInputColorInfo:(id)a0;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (void)setSmartStyleRenderingVersion:(int)a0;
- (void)setSmartStyleReversibilityEnabled:(BOOL)a0;
- (void)setUsesHighEncodingPriority:(BOOL)a0;
- (int)smartStyleRenderingVersion;
- (BOOL)smartStyleReversibilityEnabled;
- (BOOL)usesHighEncodingPriority;
- (BOOL)zeroShutterLagEnabled;

@end
