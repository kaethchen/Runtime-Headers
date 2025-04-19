@interface PIAutoLoopCacheNode : NUVideoCacheNode

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameDuration;

+ (id)nodeWithInput:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;

- (id)outputSettings:(out id *)a0;
- (id)descriptionSubClassHook;
- (id)newRenderRequestWithOriginalRequest:(id)a0 error:(out id *)a1;
- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (id)initWithInput:(id)a0 frameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)persistentLongExposureURL;
- (id)persistentMaskURL;

@end
