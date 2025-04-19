@interface NUMemoryProviderCacheNode : NUMemoryCacheNode

- (id)pixelFormat;
- (id)colorSpace;
- (id)_evaluateImage:(out id *)a0;
- (BOOL)wantsDependentJob;

@end
