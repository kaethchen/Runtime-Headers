@class VNObservation, NUClassifyPipelineImageCorrectionRequest;

@interface NUClassifyPipelineImageCorrectionJob : NURenderJob {
    VNObservation *_observation;
    struct { long long width; long long height; } _imageSize;
}

@property (readonly) NUClassifyPipelineImageCorrectionRequest *classifyPipelineImageCorrectionRequest;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)cacheKey;
- (id)initWithRequest:(id)a0;
- (void)cleanUp;
- (id)detectClassifyPipelineImageCorrectionInBuffer:(struct __CVBuffer { } *)a0 error:(out id *)a1;
- (id)initWithClassifyPipelineImageCorrectionRequest:(id)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
