@protocol NUImageBuffer;

@interface NUVisionForegroundIsolationSegmentationJob : NUVisionBasedRenderJob

@property (readonly, nonatomic) id<NUImageBuffer> maskBuffer;

- (void).cxx_destruct;
- (id)result;
- (BOOL)render:(out id *)a0;
- (struct { long long x0; long long x1; })idealModelSize;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;

@end
