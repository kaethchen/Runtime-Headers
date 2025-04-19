@interface VNE5RTSemanticSegmentationMultiGenerator : VNE5RTSegmentationMultiGenerator

+ (id)modelURLForConfigurationOptions:(id)a0 error:(id *)a1;

- (id)observationsFromE5RTExecutionOutputs:(id)a0 forFunctionDescriptor:(id)a1 originatingRequestSpecifier:(id)a2 options:(id)a3 error:(id *)a4;

@end
