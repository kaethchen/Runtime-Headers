@interface VNOpticalFlowGenerator : VNDetector

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)supportedOutputPixelFormatsForOptions:(id)a0 error:(id *)a1;

- (id)validatedImageBuffersFromOptions:(id)a0 error:(id *)a1;

@end
