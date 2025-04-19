@class ANSTInferencePostprocessor;

@interface VisionCoreISPInferenceNetworkDescriptor : VisionCoreANSTInferenceNetworkDescriptor {
    ANSTInferencePostprocessor *_anstPostProcessor;
}

+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;
+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 objectTrackingEnabled:(BOOL)a2 segmentationEnabled:(BOOL)a3 lowFrameRate:(BOOL)a4 error:(id *)a5;
+ (id)_configurationForIdentifer:(id)a0;

- (void).cxx_destruct;
- (BOOL)requiresPostProcessing;
- (BOOL)performPostProcessingForInput:(id)a0 postProcessingOutput:(id)a1 error:(id *)a2;
- (struct __CVBuffer { } *)_bufferForDescriptorName:(id)a0 postProcessingOutput:(id)a1;
- (unsigned int)_orientationForDescriptorName:(id)a0 postProcessingOutput:(id)a1;
- (id)initWithDescriptor:(id)a0 identifer:(id)a1 error:(id *)a2;

@end
