@interface VNPersonSegmentationGeneratorSemantics : VNSegmentationGenerator

+ (id)outputMaskBlobNameToFeatureName;
+ (id)_inferenceDescriptorForModelConfiguredWithOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelPathForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)inputImageBlobName;
+ (id)inputMaskBlobName;
+ (BOOL)inputMaskRequired;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;
+ (BOOL)rotateImageToMatchNetworkOrientation;

@end
