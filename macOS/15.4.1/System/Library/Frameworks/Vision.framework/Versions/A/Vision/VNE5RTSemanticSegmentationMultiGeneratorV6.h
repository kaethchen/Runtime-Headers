@interface VNE5RTSemanticSegmentationMultiGeneratorV6 : VNE5RTSemanticSegmentationMultiGenerator

+ (unsigned long long)modelVersion;
+ (id)outputMaskBlobNameToFeatureName;
+ (id)createE5RTFunctionDescriptorForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;

@end
