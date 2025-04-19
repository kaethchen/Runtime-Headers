@class NURenderNode;

@interface PISemanticStyleRenderNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *input;

- (id)_evaluateVideo:(out id *)a0;
- (id)uniqueInputNode;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
