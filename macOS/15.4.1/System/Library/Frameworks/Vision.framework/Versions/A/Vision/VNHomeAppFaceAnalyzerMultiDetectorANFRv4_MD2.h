@interface VNHomeAppFaceAnalyzerMultiDetectorANFRv4_MD2 : VNHomeAppFaceAnalyzerMultiDetectorBase

+ (id)_inferenceDescriptorForModelConfiguredWithOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)espressoModelPathForConfigurationOptions:(id)a0 error:(id *)a1;
+ (const void *)modelVersionForOptions:(id)a0;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;

- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;

@end
