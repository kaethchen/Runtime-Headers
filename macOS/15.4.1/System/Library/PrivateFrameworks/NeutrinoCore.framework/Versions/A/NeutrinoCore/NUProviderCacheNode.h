@interface NUProviderCacheNode : NUIntermediateCacheNode

- (id)pixelFormat;
- (id)colorSpace;
- (id)_evaluateImage:(out id *)a0;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (BOOL)useTiledProviderCache;

@end
