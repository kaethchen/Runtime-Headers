@class NUCVPixelBuffer, CIRenderTask;
@protocol NUAuxiliaryImage, NUImageProperties;

@interface NUAuxiliaryImageRenderJob : NURenderJob {
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_pixelBuffer;
}

@property (retain) id<NUImageProperties> imageProperties;
@property (retain) id<NUAuxiliaryImage> auxiliaryImage;
@property long long auxiliaryImageType;

- (void).cxx_destruct;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (id)evaluateOutputGeometry:(out id *)a0;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (unsigned int)targetPixelFormat;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsRenderScaleClampedToNativeScale;

@end
