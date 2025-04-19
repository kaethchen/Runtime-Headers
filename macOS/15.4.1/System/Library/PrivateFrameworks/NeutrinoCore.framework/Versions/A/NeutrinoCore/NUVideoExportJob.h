@class NUDigest;
@protocol NUVideoProperties;

@interface NUVideoExportJob : NUExportJob

@property (retain, nonatomic) id<NUVideoProperties> videoProperties;
@property (retain, nonatomic) NUDigest *digest;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (id)generateVideoComposition:(out id *)a0;
- (id)initWithExportRequest:(id)a0;
- (id)initWithVideoExportRequest:(id)a0;
- (id)prepareNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (id)renderNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (BOOL)renderVideoFrames:(id)a0 videoMetadataSamples:(id)a1 videoSampleSlices:(id)a2 intoPixelBuffer:(struct __CVBuffer { } *)a3 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 colorSpace:(id)a5 playbackDirection:(long long)a6 error:(out id *)a7;
- (id)renderer:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (void)updateDigestWithRenderedFrame:(struct __CVBuffer { } *)a0;
- (id)videoExportRequest;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderNodeCached;
- (BOOL)writeVideoFrom:(id)a0 toWriter:(id)a1 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 createCustomMetadata:(BOOL)a3 geometryTransform:(id)a4 inputSize:(struct CGSize { double x0; double x1; })a5 outputSize:(struct CGSize { double x0; double x1; })a6 error:(out id *)a7;

@end
