@class CIRenderTask;
@protocol NUPurgeableStorage;

@interface PISliderNetBaseJob : NURenderJob {
    CIRenderTask *_renderTask;
    id<NUPurgeableStorage> _storage;
}

- (void).cxx_destruct;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)networkProcessingWithResultingPixelBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;

@end
