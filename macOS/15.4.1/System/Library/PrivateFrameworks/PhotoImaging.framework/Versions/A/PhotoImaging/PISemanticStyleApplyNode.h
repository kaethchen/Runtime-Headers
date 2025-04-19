@class NURenderNode, PISemanticStyleLearnNode;

@interface PISemanticStyleApplyNode : NURenderNode

@property (readonly, nonatomic) NURenderNode *inputNode;
@property (readonly, nonatomic) PISemanticStyleLearnNode *styleNode;
@property (readonly, nonatomic) NURenderNode *thumbnailNode;

- (id)uniqueInputNode;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithInput:(id)a0 style:(id)a1 thumbnail:(id)a2;

@end
