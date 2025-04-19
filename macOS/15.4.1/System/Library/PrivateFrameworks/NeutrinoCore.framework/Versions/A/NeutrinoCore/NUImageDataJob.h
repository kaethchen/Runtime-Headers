@class NSDictionary, NUStorageImageBuffer, CIRenderTask;

@interface NUImageDataJob : NURenderJob {
    NSDictionary *_data;
    NUStorageImageBuffer *_renderBuffer;
    CIRenderTask *_renderTask;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)complete:(out id *)a0;
- (BOOL)render:(out id *)a0;
- (id)cacheKey;
- (id)requestOptions;
- (void)cleanUp;
- (id)extractDataToDictionary:(id)a0 bounds:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 dataExtractor:(id)a2 options:(id)a3 colorSpace:(struct CGColorSpace { } *)a4 error:(id *)a5;
- (id)imageDataRequest;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
