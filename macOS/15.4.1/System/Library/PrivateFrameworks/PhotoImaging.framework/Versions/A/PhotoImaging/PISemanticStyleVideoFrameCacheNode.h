@interface PISemanticStyleVideoFrameCacheNode : NUMemoryCacheNode

- (id)evaluateSettings:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (void)resolveSourceWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)resolveSourceWithVideo:(id)a0 videoComposition:(id)a1;

@end
