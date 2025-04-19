@interface NUAuxiliaryImageCacheNode : NUCacheNode

- (long long)auxiliaryImageType;
- (id)evaluateSettings:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)initWithInput:(id)a0 auxiliaryImageType:(long long)a1;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)persistentURL;
- (void)resolveSourceWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)sourceSupportsAuxiliaryImage;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (BOOL)tryLoadPersistentURL:(id)a0 error:(out id *)a1;

@end
