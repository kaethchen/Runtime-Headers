@protocol VNModelFile;

@interface VNFaceBBoxAligner : VNDetector {
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } mFaceBoxPoseAlignerImpl;
    BOOL _modelFilesWereMemmapped;
    id<VNModelFile> mFaceBoxAlignerModelFileHandle;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (id)supportedComputeStageDevicesForOptions:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)createRegionOfInterestCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(id)a1 qosClass:(unsigned int)a2 warningRecorder:(id)a3 pixelBuffer:(struct __CVBuffer **)a4 error:(id *)a5 progressHandler:(id /* block */)a6;
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4 progressHandler:(id /* block */)a5;
- (id)processRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 croppedPixelBuffer:(const struct __CVBuffer { } *)a1 options:(id)a2 qosClass:(unsigned int)a3 warningRecorder:(id)a4 error:(id *)a5 progressHandler:(id /* block */)a6;

@end
