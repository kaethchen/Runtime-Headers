@interface NUHDRGainMapMultiplyNode : NURenderNode

- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)inputNode;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
