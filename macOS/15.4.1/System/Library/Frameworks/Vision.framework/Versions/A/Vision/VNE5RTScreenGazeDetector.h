@class NSString;

@interface VNE5RTScreenGazeDetector : VNE5RTBasedDetector

@property (class, readonly) NSString *modelFileName;
@property (class, readonly) NSString *modelInputImageName;
@property (class, readonly) NSString *modelFunctionName;
@property (class, readonly) NSString *modelOutputXYName;
@property (class, readonly) NSString *modelOutputDeviceGazeProbabilitiesName;

+ (id)E5RTFunctionDescriptorForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)modelURLForConfigurationOptions:(id)a0 error:(id *)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedScaledFaceBoundingBox:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

- (BOOL)needsMetalContext;
- (id)observationsFromE5RTExecutionOutputs:(id)a0 forFunctionDescriptor:(id)a1 originatingRequestSpecifier:(id)a2 options:(id)a3 error:(id *)a4;

@end
