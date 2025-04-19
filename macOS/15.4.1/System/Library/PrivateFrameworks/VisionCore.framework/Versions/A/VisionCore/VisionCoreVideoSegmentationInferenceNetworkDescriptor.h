@interface VisionCoreVideoSegmentationInferenceNetworkDescriptor : VisionCoreANSTInferenceNetworkDescriptor

+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;
+ (id)_configurationForIdentifer:(id)a0 version:(id)a1;
+ (id)supportedIdentifersForVersion:(id)a0;

- (BOOL)requiresPostProcessing;
- (BOOL)postProcessUpdateFrameForInferenceOutputKey:(id)a0 inferenceOutputValue:(id)a1 postProcessingOutputKey:(id)a2 postProcessingOutputValue:(id)a3 error:(id *)a4;
- (BOOL)postProcessRegularFrameForInferenceOutputMattingBuffer:(id)a0 postProcessingOutputMaskImageBuffer:(struct __CVBuffer { } *)a1 postProcessingOutputMaskImageOrientation:(unsigned int)a2 error:(id *)a3;
- (BOOL)postProcessUpdateFrameForInferenceOutputKey:(id)a0 inferenceOutputValue:(id)a1 inferenceOutputMatting:(id)a2 postProcessingOutputKey:(id)a3 postProcessingOutputValue:(id)a4 postProcessingOutputMaskImageBuffer:(struct __CVBuffer { } *)a5 postProcessingOutputMaskOrientation:(unsigned int)a6 error:(id *)a7;

@end
