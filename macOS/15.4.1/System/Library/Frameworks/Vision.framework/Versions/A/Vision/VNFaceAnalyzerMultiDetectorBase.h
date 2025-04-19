@interface VNFaceAnalyzerMultiDetectorBase : VNEspressoModelFileBasedDetector {
    struct shared_ptr<vision::mod::FaceprintAndAttributes> { struct FaceprintAndAttributes *__ptr_; struct __shared_weak_count *__cntrl_; } _mMultiHeadedFaceClassifier;
}

@property (class, readonly) unsigned long long numberOfImageChannels;

+ (id)configurationOptionKeysForDetectorKey;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (const void *)modelVersionForOptions:(id)a0;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (BOOL)producesObservationsForMultipleRequestClasses;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_addFaceAnalysisResultsFromMap:(void *)a0 toFaceAttributeObject:(id)a1 forOriginatingRequestSpecifier:(id)a2;
- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)_saveFaceAttributes:(void *)a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)_saveFaceprint:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0 toFaceObservation:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;

@end
