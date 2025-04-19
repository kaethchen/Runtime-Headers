@class VNFgBgE5MLInstanceSegmenter;

@interface VNImageSegmenter : VNE5RTBasedDetector {
    VNFgBgE5MLInstanceSegmenter *_fgbgInstanceSegmenter;
    unsigned long long _minimumMaskPixelCount;
}

@property (class, readonly, nonatomic) BOOL supportsExecution;

+ (id)E5RTProgramLibraryForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)_observationFeatureNameToSegmenterCategoryMappingsForOriginatingRequestSpecifier:(id)a0 error:(id *)a1;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)createE5RTFunctionDescriptorForConfigurationOptions:(id)a0 error:(id *)a1;
+ (long long)maximumTargetPoints;
+ (id)modelDropRevisionForConfigurationOptions:(id)a0 error:(id *)a1;
+ (BOOL)modelFullyANEResident;
+ (id)modelURLForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;
+ (id)supportedFeaturesForOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)_addInstanceMaskBuffersForCategory:(id)a0 instanceFeatures:(id)a1 toInstanceMaskArray:(id)a2 connectedComponentResult:(const void *)a3 featureInstanceMaskMap:(id)a4 categoryInstanceMaskMap:(id)a5 options:(id)a6 error:(id *)a7;
- (struct __CVBuffer { } *)_createPixelBufferOfFormat:(unsigned int)a0 fromImageBuffer:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a1 ofType:(int)a2 options:(id)a3 error:(id *)a4;
- (struct __CVBuffer { } *)_createPixelBufferOfFormat:(unsigned int)a0 fromSegmenter:(id)a1 instanceFeatures:(id)a2 category:(int)a3 options:(id)a4 error:(id *)a5;
- (struct __CVBuffer { } *)_createPixelBufferOfFormat:(unsigned int)a0 fromSegmenter:(id)a1 instanceFeatures:(id)a2 options:(id)a3 error:(id *)a4;
- (BOOL)_instanceMask:(struct __CVBuffer { } *)a0 containsTargetPoints:(id)a1;
- (id)_observationsFromSegmenter:(id)a0 instanceFeatures:(id)a1 originatingRequestSpecifier:(id)a2 options:(id)a3 maskPixelFormatType:(unsigned int)a4 error:(id *)a5;
- (struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })_oneDimensionalArrayFromInputVNPointArray:(id)a0;
- (BOOL)_validatePoints:(id)a0 error:(id *)a1;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)createAllInstancesMaskFromForegroundCC:(const void *)a0 backgroundCC:(const void *)a1 options:(id)a2 error:(id *)a3;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)newE5RTExecutionInputsForFunctionDescriptor:(id)a0 croppedPixelBuffer:(struct __CVBuffer { } *)a1 options:(id)a2 error:(id *)a3;
- (id)observationsFromE5RTExecutionOutputs:(id)a0 forFunctionDescriptor:(id)a1 originatingRequestSpecifier:(id)a2 options:(id)a3 error:(id *)a4;

@end
