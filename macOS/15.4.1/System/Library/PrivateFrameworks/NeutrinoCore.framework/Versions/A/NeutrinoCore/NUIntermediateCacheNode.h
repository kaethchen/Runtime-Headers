@interface NUIntermediateCacheNode : NUCacheNode

- (id)_evaluateVideo:(out id *)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (BOOL)wantsDependentJob;

@end
