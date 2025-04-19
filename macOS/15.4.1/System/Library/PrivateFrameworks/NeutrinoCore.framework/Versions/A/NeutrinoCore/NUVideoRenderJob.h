@interface NUVideoRenderJob : NURenderJob

- (id)result;
- (id)generateVideoComposition:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (id)videoRenderRequest;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderStage;

@end
