@interface PIRetouchSubsampleCacheNode : PIRetouchCacheNode

- (long long)padding;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (id)_modifyEvaluatedGeometry:(id)a0;
- (void)_updateInputRegion:(id)a0 outputRegion:(id)a1 forStroke:(id)a2 geometry:(id)a3;
- (void)resolveWithInputImage:(id)a0 retouchStrokes:(id)a1 cacheKey:(id)a2;
- (id)retouchInputNode;

@end
