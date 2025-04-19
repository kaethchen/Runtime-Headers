@interface VNFaceAnalyzerMultiDetector : VNFaceAnalyzerMultiDetectorBase {
    struct shared_ptr<vision::mod::FaceFrontalizer> { struct FaceFrontalizer *__ptr_; struct __shared_weak_count *__cntrl_; } _mFaceFrontalizerImpl;
}

+ (float)faceBoundingBoxScalingFactorForFaceObservation:(unsigned long long)a0;
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)a0;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)_isFaceprintJunk:(struct shared_ptr<vision::mod::ImageDescriptorBufferAbstract> { struct ImageDescriptorBufferAbstract *x0; struct __shared_weak_count *x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateCropRectForInputFace:(id)a0 imageBuffer:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)prepare_vImageBufferForCVPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
