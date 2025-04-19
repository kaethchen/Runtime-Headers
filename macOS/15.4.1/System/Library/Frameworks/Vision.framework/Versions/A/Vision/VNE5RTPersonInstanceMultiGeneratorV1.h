@interface VNE5RTPersonInstanceMultiGeneratorV1 : VNE5RTSegmentationMultiGenerator

+ (unsigned long long)modelVersion;
+ (id)createE5RTFunctionDescriptorForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)modelURLForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)outputMaskBlobNameToRequestKey;
+ (id)outputMaskBlobNames;

- (id)observationsFromE5RTExecutionOutputs:(id)a0 forFunctionDescriptor:(id)a1 originatingRequestSpecifier:(id)a2 options:(id)a3 error:(id *)a4;

@end
