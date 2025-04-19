@interface PIInpaintSubsampleCacheNode : PIInpaintCacheNode

- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0;
- (id)_modifyEvaluatedGeometry:(id)a0;
- (BOOL)_tryLoad:(out id *)a0;
- (id)compositeNode;
- (id)inpaintInputNode;
- (id)inpaintNode;
- (BOOL)shouldCacheIntermediates;

@end
